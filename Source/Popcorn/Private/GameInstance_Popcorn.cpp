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
#include "Audio/PC_AudioManager.h"
#include "Levels/PC_LevelManagerSubsystem.h"

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

	UE_LOG(LogTemp, Log, TEXT("Initializing PlayFab with TitleId: %s"), *titleId_);
	InitializePlayFab();

	UE_LOG(LogTemp, Log, TEXT("Setting audioManager_ reference...."));
	audioManager_ = GetSubsystem<UPC_AudioManager>();

	if (audioManager_)
	{
		UE_LOG(LogTemp, Log, TEXT("AudioManager has been set properly"));
		audioManager_->SetGameInstanceRef(this);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AUDIOMANAGER PTR IS REFERENCING NULL"));
	}

	UE_LOG(LogTemp, Log, TEXT("Setting levelManager_ reference...."));
	levelManager_ = GetSubsystem<UPC_LevelManagerSubsystem>();

	if (levelManager_)
	{
		UE_LOG(LogTemp, Log, TEXT("levelManager_ reference has been set properly"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("LEVELMANAGER PTR IS REFERENCING NULL"));
	}


}

void UGameInstance_Popcorn::Shutdown()
{
	Super::Shutdown();

	UE_LOG(LogTemp, Log, TEXT("Popcorn Game Instance Shutdown"));
}

void UGameInstance_Popcorn::StartGameInstance()
{
	Super::StartGameInstance();

	OnLevelTransition.Broadcast(FLevelNames::PlayerLogin, FLevelNames::PlayerLogin);
}

void UGameInstance_Popcorn::InitializePlayFab()
{

	clientAPI_ = IPlayFabModuleInterface::Get().GetClientAPI();

	UPlayFabUtilities::setPlayFabSettings(titleId_);
}

void UGameInstance_Popcorn::StorePlayerDataInPlayFab(const FPC_PlayerData& PlayerData)
{
	FString SerializedData = SerializePlayerData(PlayerData);

	FUpdateUserDataRequest Request;
	Request.Data.Add(TEXT("ActiveGameSessions"), SerializedData);
	
	
	clientAPI_->UpdateUserData(Request,
		UPlayFabClientAPI::FUpdateUserDataDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnUpdatePlayFabUserDataSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnUpdatePlayFabUserDataError)
	);
}

void UGameInstance_Popcorn::StorePlayerDataInPlayFab()
{
	FString SerializedData = SerializePlayerData();

	FUpdateUserDataRequest Request;
	Request.Data.Add(TEXT("ActiveGameSessions"), SerializedData);

	clientAPI_->UpdateUserData(Request,
		UPlayFabClientAPI::FUpdateUserDataDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnUpdatePlayFabUserDataSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnUpdatePlayFabUserDataError)
	);
}

void UGameInstance_Popcorn::RetrievePlayerDataInPlayFab(const FPC_PlayerData& PlayerData)
{
	FGetUserDataRequest Request;
	Request.PlayFabId = PlayerData.PlayerId;
	clientAPI_->GetUserData(Request,
	UPlayFabClientAPI::FGetUserDataDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRetrievePlayFabUserDataSuccess),
	FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRetrievePlayFabUserDataError));

}

void UGameInstance_Popcorn::RetrievePlayerDataInPlayFab()
{
	FGetUserDataRequest Request;
	Request.PlayFabId = playerData_.PlayerId;
	clientAPI_->GetUserData(Request,
		UPlayFabClientAPI::FGetUserDataDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRetrievePlayFabUserDataSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnRetrievePlayFabUserDataError));

}

void UGameInstance_Popcorn::OnLoginSuccess(const PlayFab::ClientModels::FLoginResult& Result)
{
	UE_LOG(LogTemp, Log, TEXT("PlayFab Login Successful. Session Ticket: %s"), *Result.SessionTicket);
	sessionTicket_ = *Result.SessionTicket;
	
	FGetAccountInfoRequest Request;
	clientAPI_->GetAccountInfo(Request, 
		UPlayFabClientAPI::FGetAccountInfoDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnGetAccountInfoSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnGetAccountInfoFailure));

	UE_LOG(LogTemp, Warning, TEXT("OnLoginSuccess, Post-GetAccountInfoSuccess PlayerData\nUsername: %s"), *playerData_.Username);
	RetrievePlayerDataInPlayFab();
	UE_LOG(LogTemp, Warning, TEXT("Post-Login Success PlayerData\nUsername: %s"), *playerData_.Username);
	OnLevelTransition.Broadcast(FLevelNames::MainMenu, currentLevel_);
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

	clientAPI_->LoginWithEmailAddress(Request,
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
	sessionTicket_ = Result.SessionTicket;

	FGetAccountInfoRequest Request;
	clientAPI_->GetAccountInfo(Request,
		UPlayFabClientAPI::FGetAccountInfoDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnGetAccountInfoSuccess),
		FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnGetAccountInfoFailure));
	RetrievePlayerDataInPlayFab();
	OnLevelTransition.Broadcast(FLevelNames::MainMenu, currentLevel_);
}

void UGameInstance_Popcorn::OnRegistrationFailure(const PlayFab::FPlayFabCppError& ErrorResult)
{
	UE_LOG(LogTemp, Error, TEXT("Registration Failed: %s"), *ErrorResult.ErrorMessage);
}

void UGameInstance_Popcorn::OnGetAccountInfoSuccess(const PlayFab::ClientModels::FGetAccountInfoResult& Result)
{
	playerData_.Username = Result.AccountInfo->Username;
	playerData_.PlayerId = Result.AccountInfo->PlayFabId;
	playerData_.SessionTicket = sessionTicket_;
	UE_LOG(LogTemp, Warning, TEXT("OnGetAccountInfoSuccess - PlayerData\nUsername: %s"), *playerData_.Username);
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
			playerData_.ActiveGameSessions.Empty();

			TArray<TSharedPtr<FJsonValue>> SessionArray = JsonObject->GetArrayField(TEXT("ActiveGameSessions"));

			for (TSharedPtr<FJsonValue> SessionValue : SessionArray)
			{
				TSharedPtr<FJsonObject> SessionObject = SessionValue->AsObject();
				if (SessionObject)
				{
					FString SessionId = SessionObject->GetStringField((TEXT("SessionId")));
					playerData_.ActiveGameSessions.Add(SessionId);
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

	clientAPI_->SendAccountRecoveryEmail(Request, 
	UPlayFabClientAPI::FSendAccountRecoveryEmailDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnAccountRecoveryRequestSuccess),
	FPlayFabErrorDelegate::CreateUObject(this, &UGameInstance_Popcorn::OnAccountRecoveryRequestFailure));
	
}

void UGameInstance_Popcorn::LoginUserHandler(const FText& Email, const FText& Password)
{
	UE_LOG(LogTemp, Log, TEXT("Game Instance - Login - Email: %s \t Password: %s"), *Email.ToString(), *Password.ToString());

	FLoginWithEmailAddressRequest Request;
	Request.Email = Email.ToString();
	Request.Password = Password.ToString();

	clientAPI_->LoginWithEmailAddress(Request, 
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

	clientAPI_->RegisterPlayFabUser(Request, 
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

	for (const FString& SessionId : playerData_.ActiveGameSessions)
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
