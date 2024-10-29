// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Login/Popcorn_LoginScreen_SubWidget.h"
#include "PC_LoginWidget_POC.generated.h"

class UPopcorn_GenericInputField;
class UButton;

/**
 * 
 */
UCLASS()
class POPCORN_API UPC_LoginWidget_POC : public UPopcorn_LoginScreen_SubWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Widget")
	UPopcorn_GenericInputField* EmailField;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Widget")
	UPopcorn_GenericInputField* PasswordField;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Widget")
	UButton* LoginButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Widget")
	UButton* SignUpButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Widget")
	UButton* ForgotPasswordButton;

private:
	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Login Widget")
	void OnLoginButtonClicked();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Login Widget")
	void OnSwitchToSignupButtonClicked();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Login Widget")
	void OnSwitchToForgotPasswordButtonClicked();
};
