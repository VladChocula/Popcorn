// Fill out your copyright notice in the Description page of Project Settings.


#include "Levels/PC_LevelManagerSubsystem.h"
#include "Audio/PC_AudioManager.h"
#include "Kismet/GameplayStatics.h"
#include "Utils/LevelNames.h"
#include "GameInstance_Popcorn.h"

void UPC_LevelManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	pcGameInstance_ = Cast<UGameInstance_Popcorn>(GetGameInstance());

	pcGameInstance_->OnLevelTransition.AddDynamic(this, &UPC_LevelManagerSubsystem::OnLevelChanged);

	UE_LOG(LogTemp, Log, TEXT("LevelManager Subsystem Initialized"));
}

void UPC_LevelManagerSubsystem::OnLevelChanged(const FName& NewLevel, const FName& CurrentLevel)
{
	UE_LOG(LogTemp, Warning, TEXT("Pre-Level Load PlayerData\n Username: %s"), *pcGameInstance_->GetPlayerData().Username);
	UGameplayStatics::OpenLevel(pcGameInstance_, NewLevel);
	UE_LOG(LogTemp, Warning, TEXT("Post-Level Load PlayerData\n Username: %s"), *pcGameInstance_->GetPlayerData().Username);
	pcGameInstance_->SetCurrentLevel(NewLevel);
	UE_LOG(LogTemp, Warning, TEXT("Post-Level Load PlayerData\n Username: %s"), *pcGameInstance_->GetPlayerData().Username);
}
