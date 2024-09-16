// Fill out your copyright notice in the Description page of Project Settings.


#include "Board/PC_SpaceNode.h"

// Sets default values
APC_SpaceNode::APC_SpaceNode() :
	NodeState(ESpaceNodeType::EmptyNode),
	bIsOccupiedByMultiplePlayers(false),
	numOfPlayersOnNode(0)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NodeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StatiMeshCompnent"));
	RootComponent = NodeMesh;

}

// Called when the game starts or when spawned
void APC_SpaceNode::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APC_SpaceNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

