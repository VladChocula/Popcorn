// Fill out your copyright notice in the Description page of Project Settings.


#include "Levels/PC_LevelManagerSubsystem.h"
#include "Audio/PC_AudioManager.h"
#include "Kismet/GameplayStatics.h"
#include "Utils/MusicFileNames.h"

void UPC_LevelManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	//FWorldDelegates::OnPostLoadMapWithWorld.AddUObject(this, &UPC_LevelManagerSubsystem::OnLevelTransition);
}

void UPC_LevelManagerSubsystem::OnLevelTransition(const FName& NewLevel)
{
	SetBackgroundMusicForLevel(NewLevel);
}

void UPC_LevelManagerSubsystem::SetBackgroundMusicForLevel(const FName& NewLevel)
{
	UPC_AudioManager* AudioManager = GetSubsystem<UPC_AudioManager>();

	if (AudioManager)
	{
		USoundBase* BackgroundMusic = nullptr;
		
		if (NewLevel == "MainMenu")
		{
			BackgroundMusic = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), nullptr, FMusicFileNames::MainMenu));
		}
	}
}
