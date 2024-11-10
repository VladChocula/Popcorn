// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Main Menu/PC_MainMenuSubWidget_POC.h"
#include "PC_MainMenu_GameSessionWidget.generated.h"

class UButton;
class UTextBlock;
/**
 * 
 */
UCLASS()
class POPCORN_API UPC_MainMenu_GameSessionWidget : public UPC_MainMenuSubWidget_POC
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Game Session Widget")
	void InitSessionWidget(const FString& InSessionID, const FString& InGameState, int32 InCurrentPlayers);

	
protected:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Game Session Widget")
	UButton* JoinInProgressSessionButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Game Session Widget")
	UTextBlock* SessionIdText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Game Session Widget")
	UTextBlock* PlayerCountText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Game Session Widget")
	UTextBlock* GameSessionStateText;

private:

	FString SessionID, GameSessionState;
	int32 CurrentPlayers;
};
