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
	
	UPROPERTY(BlueprintReadWRite, EditInstanceOnly, meta = (BindWidget), Category = "Input Field")
	UTextBlock* TextLabel;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta = (BindWidget), Category = "Input Field")
	UEditableTextBox* InputField; 

	UPROPERTY(BlueprintReadWRite, EditInstanceOnly, Category = "Input Field")
	bool ShouldObfuscate = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Input Field")
	FText DefaultLabelText;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Input Field")
	FText DefaultHintText;

	UFUNCTION(BlueprintCallable, Category = "Input Field")
	void InitializeInputField(const FText& InLabelText, const FText& InDefaultInputText);

	UFUNCTION(BlueprintCallable, Category = "Input Field")
	void SetLabelText(const FText& InLabelText);

	UFUNCTION(BlueprintCallable, Category = "Input Field")
	void SetDefaultHintText(const FText& InDefaultHintText);

	virtual void NativePreConstruct() override;
};
