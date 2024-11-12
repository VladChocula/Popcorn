// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Main Menu/PC_MainMenuSubWidget_POC.h"
#include "PC_MainMenu_JoinSession_POC.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class POPCORN_API UPC_MainMenu_JoinSession_POC : public UPC_MainMenuSubWidget_POC
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Join Session Widget")
	UButton* JoinSessionButton;


private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"), Category = "Join Session Widget")
	void OnJoinSessionButtonPressed();
	
};
