// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popcorn_LoginScreen_POC.generated.h"

class UWidgetSwitcher;
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
	UUserWidget* SignupWidget;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Screen")
	UUserWidget* LoginWidget;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Login Screen")
	UUserWidget* ForgotPasswordWidget;

	UFUNCTION(BlueprintCallable, Category = "Login Screen")
	void ShowLoginPanel();

	UFUNCTION(BlueprintCallable, Category = "Login Screen")
	void ShowForgotPasswordPanel();

	UFUNCTION(BlueprintCallable, Category = "Login Screen")
	void ShowSignUpPanel();

protected:
	virtual void NativeConstruct() override;
	
};
