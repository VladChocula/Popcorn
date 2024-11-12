#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Utils/PC_GameConstants.h"
#include "PC_MainMenuScreen_POC.generated.h"

class UPC_MainMenuSubWidget_POC;
class UPC_MainMenu_GameSessionSlot_POC;
class UPC_MainMenu_JoinSession_POC;

/**
 * 
 */
UCLASS()
class POPCORN_API UPC_MainMenuScreen_POC : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget), Category = "Game Session Slot")
	UPC_MainMenu_GameSessionSlot_POC* GameSlot0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget), Category = "Game Session Slot")
	UPC_MainMenu_GameSessionSlot_POC* GameSlot1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget), Category = "Game Session Slot")
	UPC_MainMenu_GameSessionSlot_POC* GameSlot2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget), Category = "Game Session Slot")
	UPC_MainMenu_GameSessionSlot_POC* GameSlot3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget), Category = "Game Session Slot")
	UPC_MainMenu_GameSessionSlot_POC* GameSlot4;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget), Category = "Game Session Slot")
	UPC_MainMenu_GameSessionSlot_POC* GameSlot5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget), Category = "Game Session Slot")
	TArray<UPC_MainMenu_GameSessionSlot_POC*> GameSlotSwitchers;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget), Category = "Join Session Widget")
	UPC_MainMenu_JoinSession_POC* JoinSessionWidget;

	UFUNCTION(BlueprintCallable, Category = "Main Menu Screen")
	void ShowCreateSessionWidget(UWidgetSwitcher* GameSessionSlot);

	UFUNCTION(BlueprintCallable, Category = "Main Menu Screen")
	void ShowGameSessionWidget(UWidgetSwitcher* GameSessionSlot);

	UFUNCTION(BlueprintCallable, Category = "Main Menu Screen")
	void InitializeSessionSlots();

	virtual void NativePreConstruct() override;

private:

	void CreateGameSessionHandler();

};
