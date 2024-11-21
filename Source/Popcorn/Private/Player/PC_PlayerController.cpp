// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PC_PlayerController.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

void APC_PlayerController::AddInputMappingContext(UInputMappingContext* MappingContext, int32 Priority)
{
	if (MappingContext)
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			Subsystem->AddMappingContext(MappingContext, Priority);
		}
	}
}

void APC_PlayerController::RemoveInputMappingContext(UInputMappingContext* MappingContext)
{
	if (MappingContext)
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			Subsystem->RemoveMappingContext(MappingContext);
		}
	}
}

void APC_PlayerController::BeginPlay()
{
	Super::BeginPlay();
}
