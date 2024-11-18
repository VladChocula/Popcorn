// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PC_AudioManager.generated.h"


class UAudioComponent;
class UGameInstance_Popcorn;
/**
 * 
 */
UCLASS()
class POPCORN_API UPC_AudioManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	void SetMusicVolume(float NewVolume);

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	void SetSFXVolume(float NewVolume);

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	float GetMusicVolume() const { return musicVolume_; }
	
	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	float GetSFXVolume() const { return sfxVolume_; }

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	void PlayBackgroundMusic(USoundBase* BackgroundMusicTrack);

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	UAudioComponent* CreateMusicComponent();

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	void SetMusicAudioComponent(UAudioComponent* audioComp) { musicAudioComponent_ = audioComp; }

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	void SaveAudioSettings();

	UFUNCTION(BlueprintCallable, Category = "Audio Manager")
	void LoadAudioSettings();

	void SetGameInstanceRef(UGameInstance_Popcorn* GI) { pcGameInstance_ = GI;}

private:

	UPROPERTY()
	float musicVolume_ = 1.0f;

	UPROPERTY()
	float sfxVolume_ = 1.0f;

	UPROPERTY()
	UAudioComponent* musicAudioComponent_;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Audio Manager")
	UGameInstance_Popcorn* pcGameInstance_;
	
};
