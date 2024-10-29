// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Login/Popcorn_LoginScreen_SubWidget.h"
#include "PC_ForgotPasswordWidget_POC.generated.h"

class UButton;
class UPopcorn_GenericInputField;
/**
 * 
 */
UCLASS()
class POPCORN_API UPC_ForgotPasswordWidget_POC : public UPopcorn_LoginScreen_SubWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Forgot Password Widget")
	UPopcorn_GenericInputField* EmailField;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Forgot Password Widget")
	UButton* SwitchToLoginButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Forgot Password Widget")
	UButton* ForgotPasswordButton;

private:
	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Forgot Password Widget")
	void OnForgotPasswordClicked();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Forgot Password Widget")
	void OnSwitchToLoginButtonClicked();
};
