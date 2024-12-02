// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_PlayerController.generated.h"


class APC_MinigameBase;
class UInputAction;
class UEnhancedInputComponent;
class UEnhancedInputLocalPlayerSubsystem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputReceived, APC_PlayerController*, PlayerController, const FString&, InputAction);
/**
 * 
 */
UCLASS()
class POPCORN_API APC_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	FOnInputReceived OnInputReceived;

	UFUNCTION(BlueprintCallable, Category = "Input")
	void AddInputMappingContext(UInputMappingContext* MappingContext, int32 Priority = 0);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void RemoveInputMappingContext(UInputMappingContext* MappingContext);

	UFUNCTION(BlueprintCallable, Category = "Minigame")
	void SetActiveMiniGame(APC_MinigameBase* InMinigame) { ActiveMiniGame = InMinigame; }

	UFUNCTION(BlueprintCallable, Category = "Input")
	void BindTapAction(UInputAction* Action, UInputMappingContext* MiniGameIMC);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> TapAction;

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Input")
	void OnTap();

	UPROPERTY()
	APC_MinigameBase* ActiveMiniGame;

	UPROPERTY()
	UInputMappingContext* CurrentMappingContext;

	UEnhancedInputLocalPlayerSubsystem* InputSubsystem;
};
