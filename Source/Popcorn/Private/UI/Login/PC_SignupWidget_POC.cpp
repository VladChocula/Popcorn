// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/PC_SignupWidget_POC.h"
#include "UI/Login/Popcorn_GenericInputField.h"
#include "Components/EditableTextBox.h"


void UPC_SignupWidget_POC::OnSignUpButtonClicked()
{
	if (EmailField && UsernameField && PasswordField)
	{
		OnSignUpRequested.Broadcast(EmailField->InputField->GetText(), PasswordField->InputField->GetText(), UsernameField->InputField->GetText());
	}
}

void UPC_SignupWidget_POC::OnLoginButtonClicked()
{
	if (ParentLoginScreen)
	{
		ParentLoginScreen->ShowLoginPanel();
	}
}
