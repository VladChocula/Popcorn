// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popcorn_SignUpWidget_POC.generated.h"

class UPopcorn_GenericInputField;
class UButton;
class UPopcorn_LoginScreen_POC;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSignupRequested, const FText&, Email, const FText&, Password, const FText&, Username);
/**
 * 
 */
UCLASS()
class POPCORN_API UPopcorn_SignUpWidget_POC : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, Category = "Signup Widget")
	UPopcorn_LoginScreen_POC* ParentLoginScreen;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Signup Widget")
	UPopcorn_GenericInputField* EmailField;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Signup Widget")
	UPopcorn_GenericInputField* UsernameField;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Signup Widget")
	UPopcorn_GenericInputField* PasswordField;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Signup Widget")
	UButton* SignupButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Signup Widget")
	UButton* LoginButton;

	UPROPERTY(BlueprintAssignable, Category = "Forgot Password Widget")
	FOnSignupRequested OnSignUpRequested;

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Signup Widget")
	void OnSignUpButtonClicked();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Signup Widget")
	void OnLoginButtonClicked();
};
