// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/PC_SignupWidget_POC.h"
#include "UI/Login/Popcorn_GenericInputField.h"
#include "Components/EditableTextBox.h"
#include "GameInstance_Popcorn.h"


void UPC_SignupWidget_POC::OnSignUpButtonClicked()
{
	if (EmailField && UsernameField && PasswordField)
	{
		FText Email = EmailField->InputField->GetText();
		FText Password = PasswordField->InputField->GetText();
		FText Username = UsernameField->InputField->GetText();
		OnSignUpRequested.Broadcast(Email, Password, Username);
		PCGameInstance->SignupUserHandler(Email, Password, Username);
	}
}

void UPC_SignupWidget_POC::OnLoginButtonClicked()
{
	if (ParentLoginScreen)
	{
		ParentLoginScreen->ShowLoginPanel();
	}
}
