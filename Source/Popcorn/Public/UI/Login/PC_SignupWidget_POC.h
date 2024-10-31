// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Login/Popcorn_LoginScreen_SubWidget.h"
#include "PC_SignupWidget_POC.generated.h"

class UPopcorn_GenericInputField;
class UButton;

/**
 * 
 */
UCLASS()
class POPCORN_API UPC_SignupWidget_POC : public UPopcorn_LoginScreen_SubWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta = (BindWidget), Category = "Signup Widget")
	UPopcorn_GenericInputField* EmailField;

	UPROPERTY(BlueprintReadWrite,EditInstanceOnly, meta = (BindWidget), Category = "Signup Widget")
	UPopcorn_GenericInputField* UsernameField;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta = (BindWidget), Category = "Signup Widget")
	UPopcorn_GenericInputField* PasswordField;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Signup Widget")
	UButton* SignupButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Signup Widget")
	UButton* LoginButton;

private:
	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Signup Widget")
	void OnSignUpButtonClicked();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Signup Widget")
	void OnLoginButtonClicked();
};
