// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/Popcorn_LoginScreen_POC.h"
#include "Components/WidgetSwitcher.h"

void UPopcorn_LoginScreen_POC::ShowLoginPanel()
{
	if (LoginWidgetSwitcher)
	{
		LoginWidgetSwitcher->SetActiveWidget(LoginWidget);
	}
}

void UPopcorn_LoginScreen_POC::ShowForgotPasswordPanel()
{
	if (LoginWidgetSwitcher)
	{
		LoginWidgetSwitcher->SetActiveWidget(ForgotPasswordWidget);
	}
}

void UPopcorn_LoginScreen_POC::ShowSignUpPanel()
{
	if (LoginWidgetSwitcher)
	{
		LoginWidgetSwitcher->SetActiveWidget(SignupWidget);
	}
}

void UPopcorn_LoginScreen_POC::NativeConstruct()
{
	if (LoginWidgetSwitcher && SignupWidget)
	{
		LoginWidgetSwitcher->SetActiveWidget(SignupWidget);
	}
}
