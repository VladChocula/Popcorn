// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Utils/PC_PlayerData.h"
#include "GameInstance_Popcorn.generated.h"

namespace PlayFab
{
	namespace ClientModels
	{
		struct FLoginResult;
		struct FRegisterPlayFabUserResult;
		struct FSendAccountRecoveryEmailResult;
		struct FGetAccountInfoResult;
		struct FGetUserDataResult;
		struct FUpdateUserDataResult;
	}

	struct FPlayFabCppError;

	class UPlayFabClientAPI;

	struct FLoginResult;
}

typedef TSharedPtr<class PlayFab::UPlayFabClientAPI> PlayFabClientPtr;
struct FPC_PlayerData;
class UPC_AudioManager;
class UPC_LevelManagerSubsystem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLevelTransition, const FName&, NewLevel, const FName&, CurrentLevel);

UCLASS()
class POPCORN_API UGameInstance_Popcorn : public UGameInstance
{
	GENERATED_BODY()

public:

	//Delegates
	FOnLevelTransition OnLevelTransition;
	
	virtual void Init() override;
	virtual void Shutdown() override;
	virtual void StartGameInstance() override;
	FString GetTitleId() const { return titleId_; }

	//PlayFab
	void InitializePlayFab();
	void StorePlayerDataInPlayFab(const FPC_PlayerData& PlayerData);
	void StorePlayerDataInPlayFab();
	void RetrievePlayerDataInPlayFab(const FPC_PlayerData& PlayerData);
	void RetrievePlayerDataInPlayFab();

	// Login Success/Failure Callbacks
	void OnLoginSuccess(const PlayFab::ClientModels::FLoginResult& Result);
	void OnLoginFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Login Methods
	void LoginWithEmail(const FString& Email, const FString& Password);

	//Registration Methods
	void RegisterUserWithEmail(const FString& Email, const FString& Password);

	//Registration Callbacks
	void OnRegistrationSuccess(const PlayFab::ClientModels::FRegisterPlayFabUserResult& Result);
	void OnRegistrationFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Get Account Info Callbacks
	void OnGetAccountInfoSuccess(const PlayFab::ClientModels::FGetAccountInfoResult& Result);
	void OnGetAccountInfoFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Account Recovery Callbacks
	void OnAccountRecoveryRequestSuccess(const PlayFab::ClientModels::FSendAccountRecoveryEmailResult& Result);
	void OnAccountRecoveryRequestFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Playfab UserData Callbacks
	void OnUpdatePlayFabUserDataSuccess(const PlayFab::ClientModels::FUpdateUserDataResult& Result);
	void OnUpdatePlayFabUserDataError(const PlayFab::FPlayFabCppError& ErrorResult);
	void OnRetrievePlayFabUserDataSuccess(const PlayFab::ClientModels::FGetUserDataResult& Result);
	void OnRetrievePlayFabUserDataError(const PlayFab::FPlayFabCppError& ErrorResult);

	//Handlers for Playfab Login Screen
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void ForgotPasswordHandler(const FText& Email);
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void LoginUserHandler(const FText& Email, const FText& Password);
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void SignupUserHandler(const FText& Email, const FText& Password, const FText& Username);

	//Custom UserData to be held in PlayFab
	FString SerializePlayerData(const FPC_PlayerData& PlayerData);
	FString SerializePlayerData();

	//Game Session Utility Functions
	UFUNCTION(BlueprintCallable, Category = "Game Session")
	FString GenerateGameSessionId();
	
	//Setters
	void SetCurrentLevel(const FName NewCurrentLevel) { currentLevel_ = NewCurrentLevel; }


	//Getters
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	FPC_PlayerData GetPlayerData() const { return playerData_; }

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	UPC_AudioManager* GetAudioManager() const { return GetSubsystem<UPC_AudioManager>(); }

	FName GetCurrentLevel() const { return currentLevel_; }

private:
	
	PlayFabClientPtr clientAPI_ = nullptr;
	FString sessionTicket_;
	FString titleId_ = TEXT("FB15D");
	FPC_PlayerData playerData_;
	FName currentLevel_;


	UPROPERTY()
	UPC_AudioManager* audioManager_;

	UPROPERTY()
	UPC_LevelManagerSubsystem* levelManager_;

};
