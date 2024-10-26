// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popcorn_LoginWidget_POC.generated.h"

class UPopcorn_GenericInputField;
class UButton;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoginRequested, const FText&, Email, const FText&, Password);
/**
 * 
 */
UCLASS()
class POPCORN_API UPopcorn_LoginWidget_POC : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Login Widget")
	UUserWidget* ParentLoginScreen;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), "Login Widget")
	UPopcorn_GenericInputField* EmailField;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), "Login Widget")
	UPopcorn_GenericInputField* PasswordField;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), "Login Widget")
	UButton* LoginButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), "Login Widget")
	UButton* SignUpButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), "Login Widget")
	UButton* ForgotPasswordButton;

	UPROPERTY(BlueprintAssignable, Category = "Login Widget")
	FOnLoginRequested OnLoginRequested;

protected:
	virtual void NativeContstruct() override;

private:

	UFUNCTION()
	void OnLoginButtonClicked();

	UFUNCTION()
	void OnSignUpButtonClicked();

	UFUNCTION()
	void OnForgotPasswordButtonClicked();
};
