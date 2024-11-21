// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_PlayerController.generated.h"

class UInputMappingContext;
/**
 * 
 */
UCLASS()
class POPCORN_API APC_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "Input")
	void AddInputMappingContext(UInputMappingContext* MappingContext, int32 Priority = 0);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void RemoveInputMappingContext(UInputMappingContext* MappingContext);

protected:
	virtual void BeginPlay() override;
};
