// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/Popcorn_SignUpWidget_POC.h"
#include "UI/Login/Popcorn_GenericInputField.h"
#include "UI/Login/Popcorn_LoginScreen_POC.h"
#include "Components/WidgetSwitcher.h"

void UPopcorn_SignUpWidget_POC::OnSignUpButtonClicked()
{
	if (EmailField && UsernameField && PasswordField)
	{
		OnSignUpRequested.Broadcast(EmailField->InputField, PasswordField->InputField, UsernameField->InputField);
	}
}

void UPopcorn_SignUpWidget_POC::OnLoginButtonClicked()
{
	if (ParentLoginScreen)
	{
		ParentLoginScreen->LoginWidgetSwitcher->SetActiveWidget(ParentLoginScreen->LoginWidget);
	}
}
