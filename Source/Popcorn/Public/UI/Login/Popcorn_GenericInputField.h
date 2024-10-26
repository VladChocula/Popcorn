// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popcorn_GenericInputField.generated.h"

class UTextBlock;
class UEditableTextBox;

/**
 * 
 */
UCLASS()
class POPCORN_API UPopcorn_GenericInputField : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWRite, meta = (BindWidget), Category = "Input Field")
	UTextBlock* TextLabel;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Input Field")
	UEditableTextBox* InputField;

	UFUNCTION(BlueprintCallable, Category = "Input Field")
	void InitializeInputField(const FText& InLabelText, const FText& InDefaultInputText);

	UPROPERTY(BlueprintReadWRite, EditInstanceOnly, Category = "Input Field")
	bool ShouldObfuscate = false;
	
};
