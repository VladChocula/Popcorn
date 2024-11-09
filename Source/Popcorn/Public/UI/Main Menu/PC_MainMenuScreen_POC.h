#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Utils/PC_GameConstants.h"
#include "PC_MainMenuScreen_POC.generated.h"

class UPC_MainMenuSubWidget_POC;
class UPC_MainMenu_GameSessionSlot_POC;

/**
 * 
 */
UCLASS()
class POPCORN_API UPC_MainMenuScreen_POC : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Main Menu Screen")
	TSubclassOf<UPC_MainMenu_GameSessionSlot_POC> GameSessionSlotWidgetClass;
	
	UFUNCTION(BlueprintCallable, Category = "Main Menu Screen")
	void ShowCreateSessionWidget(UWidgetSwitcher* GameSessionSlot);

	UFUNCTION(BlueprintCallable, Category = "Main Menu Screen")
	void ShowGameSessionWidget(UWidgetSwitcher* GameSessionSlot);

	UFUNCTION(BlueprintCallable, Category = "Main Menu Screen")
	void InitializeSessionSlots();

private:

	UPROPERTY()
	TArray<UPC_MainMenuSubWidget_POC*> GameSessionSlotWidgetSwitchers;
	
	void CreateGameSessionHandler();

};
