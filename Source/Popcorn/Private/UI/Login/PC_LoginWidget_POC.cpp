// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/PC_LoginWidget_POC.h"
#include "UI/Login/Popcorn_GenericInputField.h"
#include "COmponents/EditableTextBox.h"
#include "GameInstance_Popcorn.h"


void UPC_LoginWidget_POC::OnLoginButtonClicked()
{
	if (EmailField && PasswordField)
	{
		FText Email = EmailField->InputField->GetText();
		FText Password = PasswordField->InputField->GetText();
		OnLoginRequested.Broadcast(Email, Password);
		PCGameInstance->LoginUserHandler(Email, Password);
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