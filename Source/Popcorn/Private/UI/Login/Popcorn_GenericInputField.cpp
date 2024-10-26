// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Login/Popcorn_GenericInputField.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"

void UPopcorn_GenericInputField::InitializeInputField(const FText& InLabelText, const FText& InDefaultInputText)
{
	if (TextLabel)
	{
		TextLabel->SetText(InLabelText);
	}

	if (InputField)
	{
		InputField->SetText(InDefaultInputText);
	}
}
