// Fill out your copyright notice in the Description page of Project Settings.


#include "Minigames/PC_MinigameBase.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Player/PC_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

APC_MinigameBase::APC_MinigameBase()
{
	PlayerCount = 1;
}

void APC_MinigameBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Add properties for replication
	DOREPLIFETIME(APC_MinigameBase, PlayerCount);
}

void APC_MinigameBase::HandleInput(APC_PlayerController* PlayerController, const FString& InputAction)
{
	UE_LOG(LogTemp, Log, TEXT("Base MiniGame handling input: %s from Player %s"), *InputAction, *PlayerController->GetName());
}

void APC_MinigameBase::OnMiniGameStart()
{
	UE_LOG(LogTemp, Log, TEXT("MiniGame started: %s"), *GetName());
}

void APC_MinigameBase::OnMiniGameEnd()
{
	UE_LOG(LogTemp, Log, TEXT("MiniGame ended: %s"), *GetName());

	for (APC_PlayerController* PlayerController : ActivePlayerControllers)
	{
		if (PlayerController && PlayerController->PlayerInput)
		{
			UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
			if (InputSubsystem && MiniGameInputMappingContext)
			{
				InputSubsystem->RemoveMappingContext(MiniGameInputMappingContext);
			}
		}
	}
}

void APC_MinigameBase::TickMiniGame(float DeltaTime)
{
	
}

void APC_MinigameBase::AdjustForPlayerCount(int32 InPlayerCount)
{

}

void APC_MinigameBase::OnRep_PlayerCount()
{

}

bool APC_MinigameBase::IsSinglePlayerMode() const
{
	return GIsEditor || GetWorld()->IsPlayInEditor() || GetWorld()->WorldType == EWorldType::Game;
}

void APC_MinigameBase::BeginPlay()
{
	Super::BeginPlay();

	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APC_PlayerController* PlayerController = Cast<APC_PlayerController>(Iterator->Get());
		
		if (PlayerController)
		{
			ActivePlayerControllers.Add(PlayerController);

			PlayerController->SetActiveMiniGame(this);

			PlayerController->OnInputReceived.AddDynamic(this, &APC_MinigameBase::HandleInput);
		}

		if (PlayerController && PlayerController->PlayerInput)
		{
			UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

			if (InputSubsystem && MiniGameInputMappingContext)
			{
				InputSubsystem->AddMappingContext(MiniGameInputMappingContext, IMC_InputPriority);
			}
		}
	}
}
