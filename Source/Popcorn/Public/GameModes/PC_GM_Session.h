// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Containers/StaticArray.h"
#include "PC_GM_Session.generated.h"

class APC_PlayerInstance;

const uint8 MAXPLAYERCOUNT = 10;

UENUM(BlueprintType)
enum class EGameSessionState : uint8
{
	PreInitializeSession		       UMETA(DisplayName = "Pre-Initialize Game Session"),
	SessionInitialized		           UMETA(DisplayName = "Session Initialized"),
	PreGameStart		               UMETA(DisplayName = "Pre-Game Start"),
	GameStart		                   UMETA(DisplayName = "Game Start"),
	AdvanceRound                       UMETA(DisplayName = "Advance Round"),
	WaitingForPlayerTurnSubmissions    UMETA(DisplayName = "Waiting For Player Turn Submissions"),
	ProcessSubmittedPlayerTurns        UMETA(DisplayName = "Processing Submitted Player Turns"),
	AssignMiniGameToAllPlayers         UMETA(DisplayName = "Assigning Mini-Game to All Players"),
	WaitingForMiniGamePlayerResults    UMETA(DisplayName = "Waiting for Mini-Game Player Results"),
	ProcessMiniGamePlayerResults       UMETA(DisplayName = "Processing Mini-Game Player Results"),
	EndGameForPlayers				   UMETA(DisplayName = "Ending Game"),
	EndGameSession                     UMETA(DisplayName = "Ending Game Session")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameSessionStateChanged, EGameSessionState, NewState);

/**
 * 
 */

USTRUCT(BlueprintType)
struct FPlayerRanking
{
	GENERATED_BODY()

public:
	APC_PlayerInstance* Player;
	uint8 PreviousRank;
	uint8 CurrentRank;
};

UCLASS()
class POPCORN_API APC_GM_Session : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	APC_GM_Session();

	TStaticArray<APC_PlayerInstance*, MAXPLAYERCOUNT> SessionPlayers;
	
	UFUNCTION(BlueprintCallable, Category = "GameSessionRanking")
	TArray<FPlayerRanking> GetPlayerRankings() { return PlayerRankings; }

	UFUNCTION(BlueprintCallable, Category = "GameSessionRanking")
	void InitializePlayerRankings();

	UFUNCTION(BlueprintCallable, Category = "GameSessionRanking")
	void ProcessRankings();

	UFUNCTION(BlueprintCallable, Category = "GameSessionRanking")
	void UpdatePlayerRankings();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	EGameSessionState GetGameSessionState() const { return this->GameSessionState; }

	void SetGameSessionState(EGameSessionState& NewGameSessionState);

	UPROPERTY(BlueprintAssignable, Category = "GameSessionState")
	FOnGameSessionStateChanged OnGameSessionStateChanged;

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToSessionInitialized();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToPreGameStart();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToGameStart();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToAdvanceRound();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToWaitingForPlayerTurnSubmissions();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToProcessSubmittedPlayerTurns();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToAssignMiniGameToAllPlayers();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToWaitingForMiniGamePlayerResults();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToProcessMiniGamePlayerResults();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToEndGameForPlayers();

	UFUNCTION(BlueprintCallable, Category = "GameSessionState")
	void HandleStateChangeToEndGameSession();

private:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category = "GameSessionConfig")
	uint8 CurrentPlayerCount = 0;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category = "GameSessionRanking")
	TArray<FPlayerRanking> PlayerRankings;

	EGameSessionState GameSessionState = EGameSessionState::PreInitializeSession;
	
};

bool CompareCoinsAndStarsCallback(APC_PlayerInstance* a, APC_PlayerInstance* b);
