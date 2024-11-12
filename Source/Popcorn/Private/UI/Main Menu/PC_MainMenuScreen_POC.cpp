// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Main Menu/PC_MainMenuScreen_POC.h"
#include "UI/Main Menu/PC_MainMenuSubWidget_POC.h"
#include "UI/Main Menu/PC_MainMenu_GameSessionSlot_POC.h"
#include "Components/ScaleBox.h"
#include "Components/WidgetSwitcher.h"


void UPC_MainMenuScreen_POC::ShowCreateSessionWidget(UWidgetSwitcher* GameSessionSlot)
{

}

void UPC_MainMenuScreen_POC::ShowGameSessionWidget(UWidgetSwitcher* GameSessionSlot)
{
	
}

void UPC_MainMenuScreen_POC::CreateGameSessionHandler()
{

}

void UPC_MainMenuScreen_POC::InitializeSessionSlots()
{
	GameSlotSwitchers.Empty();

	GameSlotSwitchers.Add(GameSlot0);
	GameSlotSwitchers.Add(GameSlot1);
	GameSlotSwitchers.Add(GameSlot2);
	GameSlotSwitchers.Add(GameSlot3);
	GameSlotSwitchers.Add(GameSlot4);
	GameSlotSwitchers.Add(GameSlot5);

	for (UPC_MainMenu_GameSessionSlot_POC* GameSlot : GameSlotSwitchers)
	{
		if (GameSlot)
		{
			GameSlot->GameSessionSlotWidgetSwitcher->SetActiveWidget(GameSlot->CreateGameSessionSlotWidget);
		}
	}

	/*for (int32 i = 0; i < GAME_SESSIONS_MAX; ++i)
	{
		UPC_MainMenu_GameSessionSlot_POC* NewSlot = CreateWidget<UPC_MainMenu_GameSessionSlot_POC>(this, GameSessionSlotWidgetClass);

		if (NewSlot)
		{
			GameSessionSlotWidgetSwitchers.Add(NewSlot);

			NewSlot->SetVisibility(ESlateVisibility::Visible);

			if (NewSlot->GameSessionSlotWidgetSwitcher && NewSlot->CreateGameSessionSlotWidget)
			{
				NewSlot->GameSessionSlotWidgetSwitcher->SetActiveWidget(NewSlot->CreateGameSessionSlotWidget);
			}

			FString ScaleBoxName = FString::Printf(TEXT("SlotContainer_%d"), i);
			if (UScaleBox* SlotScaleBox = Cast<UScaleBox>(GetWidgetFromName(*ScaleBoxName)))
			{
				SlotScaleBox->SetContent(NewSlot);
			}

			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Could not find ScaleBox: %s"), *ScaleBoxName);
			}
		}
	}*/
}

void UPC_MainMenuScreen_POC::NativePreConstruct()
{
	Super::NativePreConstruct();

	InitializeSessionSlots();
}
