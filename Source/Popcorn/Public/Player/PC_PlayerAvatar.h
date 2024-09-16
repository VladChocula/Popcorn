// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PC_PlayerAvatar.generated.h"

class APC_SpaceNode;

UCLASS()
class POPCORN_API APC_PlayerAvatar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APC_PlayerAvatar();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveAvatarToNextSpaceNode(APC_SpaceNode* NextSpaceNode);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	
};
