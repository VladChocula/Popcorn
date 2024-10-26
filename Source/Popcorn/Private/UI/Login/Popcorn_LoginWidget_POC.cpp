// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/Popcorn_LoginWidget_POC.h"
#include "UI/Login/Popcorn_GenericInputField.h"

void UPopcorn_LoginWidget_POC::NativeConstruct()
{
	
}

void UPopcorn_LoginWidget_POC::OnLoginButtonClicked()
{
	if (EmailField && PasswordField)
	{
		OnLoginRequested.Broadcast(EmailField->InputField, PasswordField->InputField);
	}
}

void UPopcorn_LoginWidget_POC::OnSignUpButtonClicked()
{
	
}

void UPopcorn_LoginWidget_POC::OnForgotPasswordButtonClicked()
{

}
