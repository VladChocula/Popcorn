// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PC_PlayerController.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Minigames/PC_MinigameBase.h"
#include "Engine/World.h"
#include "InputMappingContext.h"

void APC_PlayerController::AddInputMappingContext(UInputMappingContext* MappingContext, int32 Priority)
{
	if (InputSubsystem && MappingContext)
	{
		InputSubsystem->AddMappingContext(MappingContext, Priority);
		UE_LOG(LogTemp, Log, TEXT("Added Input Mapping Context: %s"), *MappingContext->GetName());
	}
}

void APC_PlayerController::RemoveInputMappingContext(UInputMappingContext* MappingContext)
{
	if (InputSubsystem && MappingContext)
	{
		InputSubsystem->RemoveMappingContext(MappingContext);
		UE_LOG(LogTemp, Log, TEXT("Removed Input Mapping Context: %s"), *MappingContext->GetName());
	}
}

void APC_PlayerController::BindTapAction(UInputAction* Action, UInputMappingContext* MiniGameIMC)
{
	if (!Action)
	{
		UE_LOG(LogTemp, Warning, TEXT("TapAction is null. Cannot bind action!"));
		return;
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(Action, ETriggerEvent::Triggered, this, &APC_PlayerController::OnTap);
	}
}

void APC_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PC = Cast<APlayerController>(this))
	{
		InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
	}

	if (!InputSubsystem)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to retrieve ENhancedInputSubsystem!"));
	}

}

void APC_PlayerController::OnTap()
{
	OnInputReceived.Broadcast(this, TEXT("Tap"));
}
