#pragma once

#include "CoreMinimal.h"
#include "UI/Main Menu/PC_MainMenuSubWidget_POC.h"
#include "PC_MainMenu_CreateSessionSlotWidget.generated.h"

class UButton;
class UTextBlock;
/**
 * 
 */
UCLASS()
class POPCORN_API UPC_MainMenu_CreateSessionSlotWidget : public UPC_MainMenuSubWidget_POC
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Create Session Widget")
	UButton* CreateSessionButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Create Session Widget")
	UTextBlock* CreateSessionText;
	
};
