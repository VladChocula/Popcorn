// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PC_LevelManagerSubsystem.generated.h"

/**
 * 
 */

class UGameInstance_Popcorn;
UCLASS()
class POPCORN_API UPC_LevelManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION()
	void OnLevelChanged(const FName& NewLevel, const FName& CurrentLevel);
	
private:
	UGameInstance_Popcorn* pcGameInstance_;
};
