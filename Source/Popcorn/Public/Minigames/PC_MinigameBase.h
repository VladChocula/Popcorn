// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PC_MinigameBase.generated.h"

class APC_GM_Session;
class APC_PlayerController;
class UInputMappingContext;
/**
 * 
 */
UCLASS()
class POPCORN_API APC_MinigameBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	APC_MinigameBase();

	UPROPERTY(ReplicatedUsing = OnRep_PlayerCount)
	int32 PlayerCount;

	// Replication setup
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void OnRep_PlayerCount();

	virtual void BeginPlay() override;

	virtual void HandleInput(APC_PlayerController* PlayerController, const FString& InputAction);

	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	virtual void OnMiniGameStart();

	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	virtual void OnMiniGameEnd();

	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	virtual void TickMiniGame(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	virtual void AdjustForPlayerCount(int32 InPlayerCount);

	UFUNCTION(BlueprintCallable, Category = "Debug")
	bool IsSinglePlayerMode() const;

	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	APC_GM_Session* GetOwningGameSession() const { return OwnerGameSession; }

	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	void SetOwningGameSession(APC_GM_Session* NewOwningGameSession) { OwnerGameSession = NewOwningGameSession; }

	UFUNCTION(BlueprintCallable, Category = "Input")
	APC_PlayerController* GetOwningPlayerController() const { return OwningPlayerController; }

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetOwningPlayerController(APC_PlayerController* NewOwningPlayerController) { OwningPlayerController = NewOwningPlayerController; }


protected:

	UPROPERTY()
	TArray<APC_PlayerController*> ActivePlayerControllers;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> MiniGameInputMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	int32 IMC_InputPriority = 1;

private:
	APC_GM_Session* OwnerGameSession;
	APC_PlayerController* OwningPlayerController;

};
