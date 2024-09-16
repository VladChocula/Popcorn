// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PC_SpaceNode.generated.h"

class APC_SpaceNode;

UENUM(BlueprintType)
enum class ESpaceNodeType : uint8
{
	EmptyNode		UMETA(DisplayName = "EmptyNode"),
	StartNode		UMETA(DisplayName = "SessionStartNode"),
	StoreNode		UMETA(DisplayName = "StoreNode"),
	ChestNode		UMETA(DisplayName = "ChestNode")
};

UCLASS()
class POPCORN_API APC_SpaceNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APC_SpaceNode();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "GameBoard")
	ESpaceNodeType NodeState;

	UPROPERTY(BlueprintReadOnly, meta = (ALlowPrivateAccess = "true"), Category = "GameBoard")
	bool bIsOccupiedByMultiplePlayers = false;

	uint8 numOfPlayersOnNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "GameBoard")
	UStaticMeshComponent* NodeMesh;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "GameBoard")
	TArray<APC_SpaceNode*> NextSpaceNode;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "GameBoard")
	APC_SpaceNode* PreviousSpaceNode;
};
