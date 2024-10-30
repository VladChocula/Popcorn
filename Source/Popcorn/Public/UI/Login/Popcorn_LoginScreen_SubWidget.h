// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI/Login/Popcorn_LoginScreen_POC.h"
#include "Popcorn_LoginScreen_SubWidget.generated.h"

class UGameInstance_Popcorn;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForgotPasswordRequested, const FText&, Email);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoginRequested, const FText&, Email, const FText&, Password);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSignupRequested, const FText&, Email, const FText&, Password, const FText&, Username);

/**
 * 
 */
UCLASS()
class POPCORN_API UPopcorn_LoginScreen_SubWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, Category = "Login Screen")
	UPopcorn_LoginScreen_POC* ParentLoginScreen;

	UPROPERTY(BlueprintReadWrite, Category = "Login Screen")
	UGameInstance_Popcorn* PCGameInstance;
	
	UPROPERTY(BlueprintAssignable, Category = "Login Screen")
	FOnLoginRequested OnLoginRequested;

	UPROPERTY(BlueprintAssignable, Category = "Login Screen")
	FOnSignupRequested OnSignUpRequested;

	UPROPERTY(BlueprintAssignable, Category = "Login Screen")
	FOnForgotPasswordRequested OnForgotPasswordRequested;
	
};
