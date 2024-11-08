#pragma once

#include "CoreMinimal.h"
#include "UI/Main Menu/PC_MainMenuSubWidget_POC.h"
#include "PC_MainMenu_GameSessionSlot_POC.generated.h"

class UWidgetSwitcher;
class UPC_MainMenu_GameSessionWidget;
class UPC_MainMenu_CreateSessionSlotWidget;
/**
 * 
 */
UCLASS()
class POPCORN_API UPC_MainMenu_GameSessionSlot_POC : public UPC_MainMenuSubWidget_POC
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Game Session Slot")
	UWidgetSwitcher* GameSessionSlotWidgetSwitcher;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Game Session Slot")
	UPC_MainMenu_GameSessionWidget* GameSessionWidget;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Game Session Slot")
	UPC_MainMenu_CreateSessionSlotWidget* CreateGameSessionSlotWidget;

	UFUNCTION(BlueprintCallable, Category = "Game Session Slot")
	void ShowGameSessionWidget();

	UFUNCTION(BlueprintCallable, Category = "Game Session Slot")
	void ShowCreateGameSessionSlotWidget();
	
};
