// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popcorn_ForgotPasswordWidget_POC.generated.h"

class UButton;
class UPopcorn_GenericInputField;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForgotPasswordRequested, const FText&, Email);
/**
 * 
 */
UCLASS()
class UPopcorn_ForgotPasswordWidget_POC : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "Forgot Password Widget")
	UUserWidget* ParentLoginScreen;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Forgot Password Widget")
	UPopcorn_GenericInputField* EmailField;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Forgot Password Widget")
	UButton* SwitchToLoginButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Forgot Password Widget")
	UButton* ForgotPasswordButton;

	UPROPERTY(BlueprintAssignable, Category = "Forgot Password Widget")
	FOnForgotPasswordRequested OnForgotPasswordRequested;


private:
	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Forgot Password Widget")
	void OnForgotPasswordClicked();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Forgot Password Widget")
	void OnSwitchToLoginButtonClicked();
};
