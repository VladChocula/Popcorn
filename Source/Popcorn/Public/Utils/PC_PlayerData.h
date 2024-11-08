#pragma once

#include "CoreMinimal.h"
#include "GameModes/PC_GM_Session.h"
#include "PC_PlayerData.generated.h"


USTRUCT(BlueprintType)
struct FPC_PlayerData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player Data")
	FString SessionTicket;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player Data")
	FString Username;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player Data")
	FString PlayerId;

	//Will be stored in PlayFab UserData
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player Data")
	TArray<FString> ActiveGameSessions;

	FPC_PlayerData()
		: SessionTicket(TEXT(""))
		, Username(TEXT(""))
		, PlayerId(TEXT(""))
		{}
};