// Fill out your copyright notice in the Description page of Project Settings.


#include "Minigames/PC_MG_TouchRush.h"
#include "Player/PC_PlayerController.h"

void APC_MG_TouchRush::BeginPlay()
{
	Super::BeginPlay();

	SetupPlayerInput();
}

void APC_MG_TouchRush::SetupPlayerInput()
{
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APC_PlayerController* PC = Cast<APC_PlayerController>(Iterator->GetEvenIfUnreachable());
		if (PC && TouchRushMappingContext)
		{
			PC->AddInputMappingContext(TouchRushMappingContext, 1);
		}

	}
}
