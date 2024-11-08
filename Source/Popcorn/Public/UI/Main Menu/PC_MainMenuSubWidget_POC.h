// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PC_MainMenuSubWidget_POC.generated.h"

class UGameInstance_Popcorn;
struct FPC_PlayerData;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJoinActiveGameSessionRequested);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateGameSessionRequested, const FPC_PlayerData&, HostPlayerData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinGameSessionRequested, const FPC_PlayerData&, JoiningPlayer, const FText&, JoiningSessionID);

/**
 * 
 */
UCLASS()
class POPCORN_API UPC_MainMenuSubWidget_POC : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "Main Menu")
	UGameInstance_Popcorn* PC_GameInstance;

	UPROPERTY(BlueprintAssignable, Category = "Main Menu")
	FOnCreateGameSessionRequested OnCreateGameSessionRequested;

	UPROPERTY(BlueprintAssignable, Category = "Main Menu")
	FOnJoinActiveGameSessionRequested OnJoinActiveGameSessionRequested;

	UPROPERTY(BlueprintAssignable, Category = "Main Menu")
	FOnJoinGameSessionRequested OnJoinGameSessionRequested;
	
};
