#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Utils/PC_GameConstants.h"
#include "PC_MainMenuScreen_POC.generated.h"

class UWidgetSwitcher;
class UPC_MainMenuSubWidget_POC;

/**
 * 
 */
UCLASS()
class POPCORN_API UPC_MainMenuScreen_POC : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UWidgetSwitcher* SessionSlotWidgetSwitchers[GAME_SESSIONS_MAX];
	
	UFUNCTION(BlueprintCallable, Category = "Main Menu Screen")
	void ShowCreateSessionWidget(UWidgetSwitcher* GameSessionSlot);

	UFUNCTION(BlueprintCallable, Category = "Main Menu Screen")
	void ShowGameSessionWidget(UWidgetSwitcher* GameSessionSlot);


private:
	
	UFUNCTION()
	void CreateGameSessionHandler();
};
