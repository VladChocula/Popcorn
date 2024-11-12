// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance_Popcorn.h"
#include "Core/PlayFabSettings.h"
#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Core/PlayFabResultHandler.h"
#include "PlayFabRuntimeSettings.h"
#include "PlayFab.h"
#include "PlayFabUtilities.h"
#include "Utils/LevelNames.h"
#include "Utils/PC_PlayerData.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/Guid.h"

using namespace PlayFab;
using namespace PlayFab::ClientModels;

void UGameInstance_Popcorn::Init()
{
	Super::Init();

	#if defined(TEST_BUILD)
		_titleId = TEXT("4CD53");
	#elif defined(SHIPPING_BUILD)
		_titleId = TEXT("E1939");
	#endif
	
	//Rabbit hole of getting the RunTimeSettings and editing them in the Init() call
	//GetMutableDefault<UPlayFabRuntimeSettings>()->TitleId = titleId;

	UE_LOG(LogTemp, Log, TEXT("Initializing PlayFab with TitleId: %s"), *_titleId);
	InitializePlayFab();
	
	UE_LOG(LogTemp, Log, TEXT("Loading Player Settings"));
}

void UGameInstance_Popcorn::Shutdown()
{
	Super::Shutdown();

	UE_LOG(LogTemp, Log, TEXT("Popcorn Game Instance Shutdown"));
}

void UGameInstance_Popcorn::StartGameInstance()
{
	Super::StartGameInstance();

	UE_LOG(LogTemp, Log, TEXT("Game Instance Started"));

	UE_LOG(LogTemp, Log, TEXT("Load into PlayerLogin"));
	UGameplayStatics::OpenLevel(this, FLevelNames::PlayerLogin);
}

void UGameInstance_Popcorn::InitializePlayFab()
{

	_clientAPI = IPlayFabModuleInterface::Get().GetClientAPI();

	UPlayFabUtilities::setPlayFabSettings(_titleId);
}

void UGameInstance_Popcorn::StorePlayerDataInPlayFab(const FPC_PlayerData& PlayerData)
{
	FString SerializedData = SerializePlayerData(PlayerData);

	FUpdateUserDataRequest Request;
	Request.Data.Add(TEXT("ActiveGameSessions"), SerializedData);
	
	
	_clientAPI->UpdateUserData(Request,
		UPlayFabClientAPI::FUpdateUserDataDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnUpdatePlayFabUserDataSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnUpdatePlayFabUserDataError)
	);
}

void UGameInstance_Popcorn::StorePlayerDataInPlayFab()
{
	FString SerializedData = SerializePlayerData();

	FUpdateUserDataRequest Request;
	Request.Data.Add(TEXT("ActiveGameSessions"), SerializedData);

	_clientAPI->UpdateUserData(Request,
		UPlayFabClientAPI::FUpdateUserDataDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnUpdatePlayFabUserDataSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnUpdatePlayFabUserDataError)
	);
}

void UGameInstance_Popcorn::RetrievePlayerDataInPlayFab(const FPC_PlayerData& PlayerData)
{
	FGetUserDataRequest Request;
	Request.PlayFabId = PlayerData.PlayerId;
	_clientAPI->GetUserData(Request,
	UPlayFabClientAPI::FGetUserDataDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRetrievePlayFabUserDataSuccess),
	FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRetrievePlayFabUserDataError));

}

void UGameInstance_Popcorn::RetrievePlayerDataInPlayFab()
{
	FGetUserDataRequest Request;
	Request.PlayFabId = _playerData.PlayerId;
	_clientAPI->GetUserData(Request,
		UPlayFabClientAPI::FGetUserDataDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRetrievePlayFabUserDataSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRetrievePlayFabUserDataError));

}

void UGameInstance_Popcorn::OnLoginSuccess(const PlayFab::ClientModels::FLoginResult& Result)
{
	UE_LOG(LogTemp, Log, TEXT("PlayFab Login Successful. Session Ticket: %s"), *Result.SessionTicket);
	_sessionTicket = *Result.SessionTicket;
	
	FGetAccountInfoRequest Request;
	_clientAPI->GetAccountInfo(Request, 
		UPlayFabClientAPI::FGetAccountInfoDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnGetAccountInfoSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnGetAccountInfoFailure));
	UGameplayStatics::OpenLevel(this, FLevelNames::MainMenu);

	RetrievePlayerDataInPlayFab();
}

void UGameInstance_Popcorn::OnLoginFailure(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("PlayFab Login Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::LoginWithEmail(const FString& Email, const FString& Password)
{
	PlayFab::ClientModels::FLoginWithEmailAddressRequest  Request;
	Request.Email = Email;
	Request.Password = Password;

	_clientAPI->LoginWithEmailAddress(Request,
		PlayFab::UPlayFabClientAPI::FLoginWithEmailAddressDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnLoginSuccess),
		PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnLoginFailure));
}

void UGameInstance_Popcorn::RegisterUserWithEmail(const FString& Email, const FString& Password)
{
	PlayFab::ClientModels::FRegisterPlayFabUserRequest Request;
	Request.Email = Email;
	Request.Password = Password;
	Request.Username = "NewUser"; //TODO: Add a randomized value for PlayerID or some such that is tied to the email.
}

void UGameInstance_Popcorn::OnRegistrationSuccess(const PlayFab::ClientModels::FRegisterPlayFabUserResult& Result)
{
	UE_LOG(LogTemp, Log, TEXT("Registration Success. Player ID: %s"), *Result.PlayFabId);
	_sessionTicket = Result.SessionTicket;

	FGetAccountInfoRequest Request;
	_clientAPI->GetAccountInfo(Request,
		UPlayFabClientAPI::FGetAccountInfoDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnGetAccountInfoSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnGetAccountInfoFailure));
	UGameplayStatics::OpenLevel(this, FLevelNames::MainMenu);
}

void UGameInstance_Popcorn::OnRegistrationFailure(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("Registration Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::OnGetAccountInfoSuccess(const PlayFab::ClientModels::FGetAccountInfoResult& Result)
{
	_playerData.Username = Result.AccountInfo->Username;
	_playerData.PlayerId = Result.AccountInfo->PlayFabId;
	_playerData.SessionTicket = _sessionTicket;
}

void UGameInstance_Popcorn::OnGetAccountInfoFailure(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("Get Account Info Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::OnAccountRecoveryRequestSuccess(const ClientModels::FSendAccountRecoveryEmailResult& Result)
{
	UE_LOG(LogTemp, Log, TEXT("Account Recovery Request Email Sent: %s"), *Result.toJSONString());
}

void UGameInstance_Popcorn::OnAccountRecoveryRequestFailure(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("Account Recovery Request Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::OnUpdatePlayFabUserDataSuccess(const FUpdateUserDataResult& Result)
{
	//UE_LOG(LogTemp, Log, TEXT("%s - User Data in PlayFab updated successfully."), *_playerData.PlayerId);
}

void UGameInstance_Popcorn::OnUpdatePlayFabUserDataError(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("Updating User Data in PlayFab Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::OnRetrievePlayFabUserDataSuccess(const FGetUserDataResult& Result)
{
	UE_LOG(LogTemp, Log, TEXT("User Data Successfully retrieved from PlayFab: %s"), *Result.toJSONString());

	if (Result.Data.Contains(TEXT("ActiveGameSessions")))
	{
		FString SerializedData = Result.Data[TEXT("ActiveGameSessions")].Value;

		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(SerializedData);

		if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject)
		{
			_playerData.ActiveGameSessions.Empty();

			TArray<TSharedPtr<FJsonValue>> SessionArray = JsonObject->GetArrayField(TEXT("ActiveGameSessions"));

			for (TSharedPtr<FJsonValue> SessionValue : SessionArray)
			{
				TSharedPtr<FJsonObject> SessionObject = SessionValue->AsObject();
				if (SessionObject)
				{
					FString SessionId = SessionObject->GetStringField((TEXT("SessionId")));
					_playerData.ActiveGameSessions.Add(SessionId);
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to deserialize ActiveGameSessions JSON."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No ActiveGameSessions found for this player in PlayFab."));
	}
}

void UGameInstance_Popcorn::OnRetrievePlayFabUserDataError(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("Retrieving User Data from PlayFab Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::ForgotPasswordHandler(const FText& Email)
{
	UE_LOG(LogTemp, Log, TEXT("Game Instance - Forgot Password - Email: %s"), *Email.ToString());

	FSendAccountRecoveryEmailRequest Request;
	Request.Email = Email.ToString();

	UPlayFabRuntimeSettings* pfRuntimeSettings = GetMutableDefault<UPlayFabRuntimeSettings>();
	Request.TitleId = pfRuntimeSettings->TitleId;

	_clientAPI->SendAccountRecoveryEmail(Request, 
	UPlayFabClientAPI::FSendAccountRecoveryEmailDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnAccountRecoveryRequestSuccess),
	FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnAccountRecoveryRequestFailure));
	
}

void UGameInstance_Popcorn::LoginUserHandler(const FText& Email, const FText& Password)
{
	UE_LOG(LogTemp, Log, TEXT("Game Instance - Login - Email: %s \t Password: %s"), *Email.ToString(), *Password.ToString());

	FLoginWithEmailAddressRequest Request;
	Request.Email = Email.ToString();
	Request.Password = Password.ToString();

	_clientAPI->LoginWithEmailAddress(Request, 
	UPlayFabClientAPI::FLoginWithEmailAddressDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnLoginSuccess),
	FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnLoginFailure));
}

void UGameInstance_Popcorn::SignupUserHandler(const FText& Email, const FText& Password, const FText& Username)
{
	UE_LOG(LogTemp, Log, TEXT("Game Instance - Signup User - Username: %s \t Email: %s \t Password: %s"), *Username.ToString(), *Email.ToString(), *Password.ToString());
	FRegisterPlayFabUserRequest Request;
	Request.DisplayName = Username.ToString();
	Request.Username = Username.ToString();
	Request.Password = Password.ToString();
	Request.Email = Email.ToString();

	_clientAPI->RegisterPlayFabUser(Request, 
	UPlayFabClientAPI::FRegisterPlayFabUserDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRegistrationSuccess),
	FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRegistrationFailure));

	//Some sample code on saving the Delegates as their own objects before passing them into the Registration call
   /*UPlayFabClientAPI::FRegisterPlayFabUserDelegate SuccessDelegate = UPlayFabClientAPI::FRegisterPlayFabUserDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRegistrationSuccess);
	FPlayFabErrorDelegate ErrorDelegate = FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRegistrationFailure);

	clientAPI->RegisterPlayFabUser(Request, SuccessDelegate, ErrorDelegate);*/
}

FString UGameInstance_Popcorn::SerializePlayerData(const FPC_PlayerData& PlayerData)
{
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);

	Writer->WriteObjectStart();
	Writer->WriteArrayStart(TEXT("ActiveGameSessions"));

	for (const FString& SessionId : PlayerData.ActiveGameSessions)
	{
		Writer->WriteObjectStart();
		Writer->WriteValue(TEXT("SessionId"), SessionId);
		Writer->WriteObjectEnd();
	}

	Writer->WriteArrayEnd();
	Writer->WriteObjectEnd();

	Writer->Close();

	return OutputString;
}

FString UGameInstance_Popcorn::SerializePlayerData()
{
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);

	Writer->WriteObjectStart();
	Writer->WriteArrayStart(TEXT("ActiveGameSessions"));

	for (const FString& SessionId : _playerData.ActiveGameSessions)
	{
		Writer->WriteObjectStart();
		Writer->WriteValue(TEXT("SessionId"), SessionId);
		Writer->WriteObjectEnd();
	}

	Writer->WriteArrayEnd();
	Writer->WriteObjectEnd();

	Writer->Close();

	return OutputString;
}

FString UGameInstance_Popcorn::GenerateGameSessionId()
{
	const int32 IdLength = 7;
	FString GameSessionId = TEXT("");
	FString AllowedChars = TEXT("ABCEFGHIJKLMNOPQRSTUVWXYZ0123456789");

	for (int32 i = 0; i < IdLength; i++)
	{
		int32 RandomIndex = FMath::RandRange(0, AllowedChars.Len() - 1);
		GameSessionId += AllowedChars[RandomIndex];
	}

	return GameSessionId;
}
