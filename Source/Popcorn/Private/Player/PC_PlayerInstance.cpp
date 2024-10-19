// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PC_PlayerInstance.h"
#include "Player/PC_PlayerAvatar.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
APC_PlayerInstance::APC_PlayerInstance() :
	PlayerCoinsCount(0),
	PlayerStarsCount(0)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = RootComp;

	PlayerCameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	PlayerCameraComp->SetupAttachment(RootComp);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(PlayerCameraComp);

}

// Called when the game starts or when spawned
void APC_PlayerInstance::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnAndAttachPlayerAvatar();
}

// Called every frame
void APC_PlayerInstance::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APC_PlayerInstance::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APC_PlayerInstance::SpawnAndAttachPlayerAvatar()
{
	if (GetWorld())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		//PlayerAvatarInst = GetWorld()->SpawnActor<APC_PlayerAvatar>(APC_PlayerAvatar::StaticClass(), GetTransform(), SpawnParams)

		if (PlayerAvatarInst)
		{
			PlayerAvatarInst->AttachToComponent(RootComp, FAttachmentTransformRules::KeepWorldTransform);
		}
	}
}

