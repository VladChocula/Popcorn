// Fill out your copyright notice in the Description page of Project Settings.


#include "Audio/PC_AudioManager.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

void UPC_AudioManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	LoadAudioSettings();
}

void UPC_AudioManager::SetMusicVolume(float NewVolume)
{
	musicVolume_ = NewVolume;
	if (musicAudioComponent_)
	{
		musicAudioComponent_->SetVolumeMultiplier(musicVolume_);
	}

	SaveAudioSettings();
}

void UPC_AudioManager::SetSFXVolume(float NewVolume)
{
	sfxVolume_ = NewVolume;
	SaveAudioSettings();
}

void UPC_AudioManager::PlayBackgroundMusic(USoundBase* BackgroundMusicTrack)
{
	if (!musicAudioComponent_)
	{
		musicAudioComponent_ = CreateMusicComponent();
	}

	if (BackgroundMusicTrack)
	{
		UE_LOG(LogTemp, Log, TEXT("Playing Background Music track..."));
		
		musicAudioComponent_->SetSound(BackgroundMusicTrack);
		musicAudioComponent_->Play();
		UE_LOG(LogTemp, Log, TEXT("PlayBackgroundMusic(): Volume Multpliers - %f"), musicAudioComponent_->VolumeMultiplier);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid Music Track!"));
	}
}

UAudioComponent* UPC_AudioManager::CreateMusicComponent()
{

	UAudioComponent* NewMusicComponent = NewObject<UAudioComponent>(this->GetWorld());
	NewMusicComponent->bAutoActivate = true;
	NewMusicComponent->VolumeMultiplier = musicVolume_;
	

	return NewMusicComponent;
}

void UPC_AudioManager::SaveAudioSettings()
{
	GConfig->SetFloat(TEXT("/Script/Popcorn.AudioSettings"), TEXT("MusicVolume"), musicVolume_, GGameUserSettingsIni);
	GConfig->SetFloat(TEXT("/Script/Popcorn.AudioSettings"), TEXT("SFXVolume"), sfxVolume_, GGameUserSettingsIni);
}

void UPC_AudioManager::LoadAudioSettings()
{
	bool bMusicSettingsFound = false;
	bool bSFXSettingsFound = false;
	if (GConfig->GetFloat(TEXT("/Script/Popcorn.AudioSettings"), TEXT("MusicVolume"), musicVolume_, GGameUserSettingsIni))
	{
		bMusicSettingsFound = true;

		if (musicAudioComponent_)
		{
			musicAudioComponent_->SetVolumeMultiplier(musicVolume_);
		}
	}
	else
	{
		musicVolume_ = 1.0f;

		if (musicAudioComponent_)
		{
			musicAudioComponent_->SetVolumeMultiplier(musicVolume_);
		}
	}


	if (GConfig->GetFloat(TEXT("./Script/Popcorn.AudioSettings"), TEXT("SFXVolume"), sfxVolume_, GGameUserSettingsIni))
	{
		bSFXSettingsFound = true;	
	}

	else
	{
		sfxVolume_ = 1.f;
	}

	if (musicAudioComponent_)
	{
		musicAudioComponent_->SetVolumeMultiplier(musicVolume_);
	}
}
