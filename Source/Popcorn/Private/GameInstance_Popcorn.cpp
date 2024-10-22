// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance_Popcorn.h"
#include "PlayFabSettings.h"

void UGameInstance_Popcorn::Init()
{
	Super::Init();

	#if defined(TEST_BUILD)
		PlayFabSettings::titleId = TEXT("FB15D");
	#elseif defined(DEV_BUILD)
		PlayFabSettings::titleId = TEXT("4CD53");
	#elseif defined(SHIPPING_BUILD)
		PlayFabSettings::titldID = TEXT("E1939");
	#endif
}
