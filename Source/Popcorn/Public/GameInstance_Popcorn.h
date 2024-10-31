// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstance_Popcorn.generated.h"

namespace PlayFab
{
	namespace ClientModels
	{
		struct FLoginResult;
		struct FRegisterPlayFabUserResult;
		struct FSendAccountRecoveryEmailResult;
	}

	struct FPlayFabCppError;

	class UPlayFabClientAPI;

	struct FLoginResult;
}

typedef TSharedPtr<class PlayFab::UPlayFabClientAPI> PlayFabClientPtr;

UCLASS()
class POPCORN_API UGameInstance_Popcorn : public UGameInstance
{
	GENERATED_BODY()

public:
	
	virtual void Init() override;
	virtual void Shutdown() override;
	virtual void StartGameInstance() override;
	FString GetTitleId() const { return _titleId; }

	//PlayFab Initialization
	void InitializePlayFab();

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

	//Account Recovery Callbacks
	void OnAccountRecoveryRequestSuccess(const PlayFab::ClientModels::FSendAccountRecoveryEmailResult& Result);
	void OnAccountRecoveryRequestFailure(const PlayFab::FPlayFabCppError& ErrorResult);

	//Handlers for Playfab Login Screen
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void ForgotPasswordHandler(const FText& Email);
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void LoginUserHandler(const FText& Email, const FText& Password);
	UFUNCTION(BlueprintCallable, Category = "Playfab Login")
	void SignupUserHandler(const FText& Email, const FText& Password, const FText& Username);

private:
	
	PlayFabClientPtr _clientAPI = nullptr;
	FString _sessionTicket;
	FString _titleId = TEXT("FB15D");
};
