// Fill out your copyright notice in the Description page of Project Settings.


#include "Minigames/PC_MG_TouchRush.h"
#include "Player/PC_PlayerController.h"
#include "TimerManager.h"

void APC_MG_TouchRush::BeginPlay()
{
	Super::BeginPlay();

	if (APC_PlayerController* PC = Cast<APC_PlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		if (MiniGameInputMappingContext)
		{
			PC->AddInputMappingContext(MiniGameInputMappingContext, 1);
			PC->BindTapAction(TapAction, MiniGameInputMappingContext);
		}

		PC->OnInputReceived.AddDynamic(this, &APC_MG_TouchRush::HandleInput);
	}
}

void APC_MG_TouchRush::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (APC_PlayerController* PC = Cast<APC_PlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		if (MiniGameInputMappingContext)
		{
			PC->RemoveInputMappingContext(MiniGameInputMappingContext);
		}

		PC->OnInputReceived.RemoveDynamic(this, &APC_MG_TouchRush::HandleInput);
	}

	Super::EndPlay(EndPlayReason);
}

void APC_MG_TouchRush::HandleInput(APC_PlayerController* PlayerController, const FString& InputAction)
{
	if (InputAction == TEXT("Tap") && TapCounts.Contains(PlayerController))
	{
		TapCounts[PlayerController]++;
		UE_LOG(LogTemp, Log, TEXT("Player &s tapped. Total taps: %d"), *PlayerController->GetName(), TapCounts[PlayerController]);
	}
}

void APC_MG_TouchRush::OnMiniGameStart()
{
	Super::OnMiniGameStart();

	TapCounts.Empty();

	for (APC_PlayerController* PlayerController : ActivePlayerControllers)
	{
		TapCounts.Add(PlayerController, 0);
	}

	GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			GetWorld()->GetTimerManager().SetTimer(
				TimerHandle,
				this,
				&APC_MG_TouchRush::OnMiniGameEnd,
				10.0f,
				false
			);
		});
}

void APC_MG_TouchRush::OnMiniGameEnd()
{
	Super::OnMiniGameEnd();

	APC_PlayerController* Winner = nullptr;
	int32 MaxTaps = 0;

	for (const auto& Pair : TapCounts)
	{
		if (Pair.Value > MaxTaps)
		{
			MaxTaps = Pair.Value;
			Winner = Pair.Key;
		}
	}

	if (Winner)
	{
		UE_LOG(LogTemp, Log, TEXT("Player &s wins with &d taps!"), *Winner->GetName(), MaxTaps);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No winner determined."));
	}
}