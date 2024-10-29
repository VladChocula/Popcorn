// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popcorn_LoginScreen_POC.generated.h"

class UWidgetSwitcher;
class UPopcorn_LoginScreen_SubWidget;
/**
 * 
 */
UCLASS()
class POPCORN_API UPopcorn_LoginScreen_POC : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Screen")
	UWidgetSwitcher* LoginWidgetSwitcher;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Screen")
	UPopcorn_LoginScreen_SubWidget* SignupWidget;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Screen")
	UPopcorn_LoginScreen_SubWidget* LoginWidget;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Screen")
	UPopcorn_LoginScreen_SubWidget* ForgotPasswordWidget;

	UFUNCTION(BlueprintCallable, Category = "Login Screen")
	void ShowLoginPanel();

	UFUNCTION(BlueprintCallable, Category = "Login Screen")
	void ShowForgotPasswordPanel();

	UFUNCTION(BlueprintCallable, Category = "Login Screen")
	void ShowSignUpPanel();

	virtual void NativePreConstruct() override;

private:
	UFUNCTION()
	void ForgotPasswordHandler(const FText& Email);

	UFUNCTION()
	void LoginUserHandler(const FText& Email, const FText& Password);

	UFUNCTION()
	void SignupUserHandler(const FText& Email, const FText& Password, const FText& Username);
	
};
