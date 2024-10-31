// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/Popcorn_LoginScreen_POC.h"
#include "Components/WidgetSwitcher.h"
#include "UI/Login/Popcorn_LoginScreen_SubWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameInstance_Popcorn.h"

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

void UPopcorn_LoginScreen_POC::NativePreConstruct()
{
	if (SignupWidget)
	{
		SignupWidget->ParentLoginScreen = this;
		SignupWidget->OnSignUpRequested.AddDynamic(this, &UPopcorn_LoginScreen_POC::SignupUserHandler);

		if (UGameInstance_Popcorn* GI = Cast<UGameInstance_Popcorn>(UGameplayStatics::GetGameInstance(this)))
		{
			SignupWidget->PCGameInstance = GI;
		}
	}

	if (LoginWidget)
	{
		LoginWidget->ParentLoginScreen = this;
		LoginWidget->OnLoginRequested.AddDynamic(this, &UPopcorn_LoginScreen_POC::LoginUserHandler);

		if (UGameInstance_Popcorn* GI = Cast<UGameInstance_Popcorn>(UGameplayStatics::GetGameInstance(this)))
		{
			LoginWidget->PCGameInstance = GI;
		}
	}

	if (ForgotPasswordWidget)
	{
		ForgotPasswordWidget->ParentLoginScreen = this;
		ForgotPasswordWidget->OnForgotPasswordRequested.AddDynamic(this, &UPopcorn_LoginScreen_POC::ForgotPasswordHandler);

		if (UGameInstance_Popcorn* GI = Cast<UGameInstance_Popcorn>(UGameplayStatics::GetGameInstance(this)))
		{
			ForgotPasswordWidget->PCGameInstance = GI;
		}
	}

	if (LoginWidgetSwitcher && SignupWidget)
	{
		LoginWidgetSwitcher->SetActiveWidget(LoginWidget);
	}


}

void UPopcorn_LoginScreen_POC::ForgotPasswordHandler(const FText& Email)
{
	UE_LOG(LogTemp, Log, TEXT("Forgot Password - Email: %s"), *Email.ToString());
}

void UPopcorn_LoginScreen_POC::LoginUserHandler(const FText& Email, const FText& Password)
{
	UE_LOG(LogTemp, Log, TEXT("Login - Email: %s \t Password: %s"), *Email.ToString(), *Password.ToString());
}

void UPopcorn_LoginScreen_POC::SignupUserHandler(const FText& Email, const FText& Password, const FText& Username)
{
	UE_LOG(LogTemp, Log, TEXT("Signup User - Username: %s \t Email: %s \t Password: %s"), *Username.ToString(), *Email.ToString(), *Password.ToString());
}
