// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/PC_ForgotPasswordWidget_POC.h"
#include "UI/Login/Popcorn_GenericInputField.h"
#include "Components/EditableTextBox.h"
#include "GameInstance_Popcorn.h"

void UPC_ForgotPasswordWidget_POC::OnForgotPasswordClicked()
{
	if (EmailField)
	{
		FText Email = EmailField->InputField->GetText();
		OnForgotPasswordRequested.Broadcast(Email);
		PCGameInstance->ForgotPasswordHandler(Email);
	}
}

void UPC_ForgotPasswordWidget_POC::OnSwitchToLoginButtonClicked()
{
	if (ParentLoginScreen)
	{
		ParentLoginScreen->ShowLoginPanel();
	}
}
