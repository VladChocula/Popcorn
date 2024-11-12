// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Main Menu/PC_MainMenu_GameSessionWidget.h"
#include "Utils/PC_GameConstants.h"
#include "Components/TextBlock.h"


void UPC_MainMenu_GameSessionWidget::InitSessionWidget(const FString& InSessionID, const FString& InGameState, int32 InCurrentPlayers)
{
	if (SessionIdText)
	{
		SessionID = InSessionID;
		SessionIdText->SetText(FText::FromString(SessionID));
	}

	if (PlayerCountText)
	{
		CurrentPlayers = InCurrentPlayers;
		PlayerCountText->SetText(FText::FromString(FString::Printf(TEXT("%d / %d"), CurrentPlayers, GAME_SESSION_MAX_PLAYER_COUNT)));
	}

	if (GameSessionStateText)
	{
		GameSessionState = InGameState;
		GameSessionStateText->SetText(FText::FromString(GameSessionState));
	}
}

void UPC_MainMenu_GameSessionWidget::OnJoinInProgressSessionButtonPressed()
{
	UE_LOG(LogTemp, Log, TEXT("On Join In-Progress Session Button has been pressed!"));
}
