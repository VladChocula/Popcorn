// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Minigames/PC_MinigameBase.h"
#include "PC_MG_TouchRush.generated.h"

class UInputAction;
/**
 * 
 */
UCLASS()
class POPCORN_API APC_MG_TouchRush : public APC_MinigameBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void HandleInput(APC_PlayerController* PlayerController, const FString& InputAction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* TapAction;

	virtual void OnMiniGameStart() override;
	virtual void OnMiniGameEnd() override;

protected:

	TMap<APC_PlayerController*, int32> TapCounts;

	FTimerHandle TimerHandle;

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

};
