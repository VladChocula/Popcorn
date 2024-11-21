// Fill out your copyright notice in the Description page of Project Settings.


#include "Minigames/PC_MinigameBase.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "ENgine/Engine.h"

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

}
