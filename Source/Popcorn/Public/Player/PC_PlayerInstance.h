// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PC_PlayerInstance.generated.h"

class APC_PlayerAvatar;
class UCameraComponent;
class USpringArmComponent;
class APC_SpaceNode;

UCLASS()
class POPCORN_API APC_PlayerInstance : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APC_PlayerInstance();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SpawnAndAttachPlayerAvatar();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Instance")
	USceneComponent* RootComp;

	UPROPERTY(BlueprintReadOnly, Category = "PlayerStats")
	uint8 PlayerCoinsCount;

	UPROPERTY(BlueprintReadOnly, Category = "PlayerStats")
	uint8 PlayerStarsCount;

	UPROPERTY(BlueprintReadOnly, Category = "PlayerStats")
	uint8 MovesRemaining;

	UFUNCTION(BlueprintCallable, Category = "PlayerStats")
	void SetCurrentSpaceNode(APC_SpaceNode* SpaceNode) { CurrentSpaceNode = SpaceNode; }

	UFUNCTION(BlueprintCallable, Category = "PlayerStats")
	APC_SpaceNode* GetCurrentSpaceNode() { return CurrentSpaceNode; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Player Instance")
	APC_PlayerAvatar* PlayerAvatarInst;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Player Camera")
	UCameraComponent* PlayerCameraComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Player Camera")
	USpringArmComponent* SpringArmComp;

	APC_SpaceNode* CurrentSpaceNode;

};
