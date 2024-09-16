// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PC_PlayerAvatar.h"

// Sets default values
APC_PlayerAvatar::APC_PlayerAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APC_PlayerAvatar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APC_PlayerAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APC_PlayerAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APC_PlayerAvatar::MoveAvatarToNextSpaceNode(APC_SpaceNode* NextSpaceNode)
{
	//MovePlayerAvatarToNextSpaceNode
}

