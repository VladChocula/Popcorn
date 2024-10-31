// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/Popcorn_GenericInputField.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"

void UPopcorn_GenericInputField::InitializeInputField(const FText& InLabelText, const FText& InDefaultInputText)
{
	SetLabelText(InLabelText);
	SetDefaultHintText(InDefaultInputText);
}

void UPopcorn_GenericInputField::SetLabelText(const FText& InLabelText)
{
	if (TextLabel)
	{
		TextLabel->SetText(InLabelText);
	}
}

void UPopcorn_GenericInputField::SetDefaultHintText(const FText& InDefaultHintText)
{
	if (InputField)
	{
		InputField->SetHintText(InDefaultHintText);
	}
}



void UPopcorn_GenericInputField::OnInputFieldFocused(const FText& Text)
{
	if (InputField)
	{
		InputField->SetUserFocus(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		InputField->SetKeyboardFocus();
	}
}

void UPopcorn_GenericInputField::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (TextLabel && !DefaultLabelText.IsEmpty())
	{
		TextLabel->SetText(DefaultLabelText);
	}

	if (InputField)
	{
		InputField->OnTextChanged.AddDynamic(this, &UPopcorn_GenericInputField::OnInputFieldFocused);

		if (!DefaultHintText.IsEmpty())
		{
			InputField->SetHintText(DefaultHintText);
		}
	}

	if (ShouldObfuscate && InputField)
	{
		InputField->SetIsPassword(true);
	}
}
