// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/PC_GM_Session.h"
#include "Player/PC_PlayerInstance.h"
#include "Algo/Sort.h"


APC_GM_Session::APC_GM_Session()
{
	
}

void APC_GM_Session::InitializePlayerRankings()
{
	if (SessionPlayers.Num() > 1)
	{
		_playerRankings.SetNum(SessionPlayers.Num());

		for (int i = 0; i < SessionPlayers.Num(); ++i)
		{
			_playerRankings[i].Player = SessionPlayers[i];
			_playerRankings[i].CurrentRank = i;
		}
	}
}

void APC_GM_Session::ProcessRankings()
{
	Algo::Sort(SessionPlayers, CompareCoinsAndStarsCallback);

	UpdatePlayerRankings();
}

void APC_GM_Session::UpdatePlayerRankings()
{
	TMap<APC_PlayerInstance*, int32> PlayerToNewRankMap;
	for (int32 i = 0; i < SessionPlayers.Num(); ++i)
	{
		PlayerToNewRankMap.Add(SessionPlayers[i], i);
	}

	for (FPlayerRanking& Ranking : _playerRankings)
	{
		int32* NewRankPtr = PlayerToNewRankMap.Find(Ranking.Player);
		if (NewRankPtr)
		{
			Ranking.PreviousRank = Ranking.CurrentRank;
			Ranking.CurrentRank = *NewRankPtr;
		}
	}
}

void APC_GM_Session::SetGameSessionState(EGameSessionState& NewGameSessionState)
{
	if (_gameSessionState != NewGameSessionState)
	{
		_gameSessionState = NewGameSessionState;

		switch (_gameSessionState)
		{
			case EGameSessionState::SessionInitialized:
				HandleStateChangeToSessionInitialized();
				break;

			case EGameSessionState::PreGameStart:
				HandleStateChangeToPreGameStart();
				break;

			case EGameSessionState::GameStart:
				HandleStateChangeToGameStart();
				break;

			case EGameSessionState::AdvanceRound:
				HandleStateChangeToAdvanceRound();
				break;

			case EGameSessionState::WaitingForPlayerTurnSubmissions:
				HandleStateChangeToWaitingForPlayerTurnSubmissions();
				break;

			case EGameSessionState::ProcessSubmittedPlayerTurns:
				HandleStateChangeToProcessSubmittedPlayerTurns();
				break;

			case EGameSessionState::AssignMiniGameToAllPlayers:
				HandleStateChangeToAssignMiniGameToAllPlayers();
				break;

			case EGameSessionState::WaitingForMiniGamePlayerResults:
				HandleStateChangeToWaitingForMiniGamePlayerResults();
				break;

			case EGameSessionState::ProcessMiniGamePlayerResults:
				HandleStateChangeToProcessMiniGamePlayerResults();
				break;

			case EGameSessionState::EndGameForPlayers:
				HandleStateChangeToEndGameForPlayers();
				break;

			case EGameSessionState::EndGameSession:
				HandleStateChangeToEndGameSession();
				break;
		}

		OnGameSessionStateChanged.Broadcast(NewGameSessionState);

		UE_LOG(LogTemp, Log, TEXT("Game Session State changed to: %d"), static_cast<int32>(NewGameSessionState));
	}
}

void APC_GM_Session::HandleStateChangeToSessionInitialized()
{

}

void APC_GM_Session::HandleStateChangeToPreGameStart()
{

}

void APC_GM_Session::HandleStateChangeToGameStart()
{

}

void APC_GM_Session::HandleStateChangeToAdvanceRound()
{

}

void APC_GM_Session::HandleStateChangeToWaitingForPlayerTurnSubmissions()
{

}

void APC_GM_Session::HandleStateChangeToProcessSubmittedPlayerTurns()
{

}

void APC_GM_Session::HandleStateChangeToAssignMiniGameToAllPlayers()
{

}

void APC_GM_Session::HandleStateChangeToWaitingForMiniGamePlayerResults()
{

}

void APC_GM_Session::HandleStateChangeToProcessMiniGamePlayerResults()
{

}

void APC_GM_Session::HandleStateChangeToEndGameForPlayers()
{

}

void APC_GM_Session::HandleStateChangeToEndGameSession()
{

}

bool CompareCoinsAndStarsCallback(APC_PlayerInstance* a, APC_PlayerInstance* b)
{	
	return a->PlayerStarsCount != a->PlayerStarsCount ? 
	        a->PlayerStarsCount > b->PlayerStarsCount : 
			a->PlayerCoinsCount > b->PlayerCoinsCount;
}
