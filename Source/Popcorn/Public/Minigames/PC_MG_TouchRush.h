// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Minigames/PC_MinigameBase.h"
#include "PC_MG_TouchRush.generated.h"

class UInputMappingContext;
/**
 * 
 */
UCLASS()
class POPCORN_API APC_MG_TouchRush : public APC_MinigameBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* TouchRushMappingContext;
	
	virtual void BeginPlay() override;

private:
	void SetupPlayerInput();
};
