// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/PC_LoginWidget_POC.h"
#include "UI/Login/Popcorn_GenericInputField.h"
#include "COmponents/EditableTextBox.h"


void UPC_LoginWidget_POC::OnLoginButtonClicked()
{
	if (EmailField && PasswordField)
	{
		OnLoginRequested.Broadcast(EmailField->InputField->GetText(), PasswordField->InputField->GetText());
	}
}

void UPC_LoginWidget_POC::OnSwitchToSignupButtonClicked()
{
	if (ParentLoginScreen)
	{
		ParentLoginScreen->ShowSignUpPanel();
	}
}

void UPC_LoginWidget_POC::OnSwitchToForgotPasswordButtonClicked()
{
	if (ParentLoginScreen)
	{
		ParentLoginScreen->ShowForgotPasswordPanel();
	}
}