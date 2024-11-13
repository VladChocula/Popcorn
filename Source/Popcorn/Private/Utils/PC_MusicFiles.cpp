// Fill out your copyright notice in the Description page of Project Settings.


#include "Utils/PC_MusicFiles.h"
#include "Sound/SoundBase.h"

USoundBase* FMusicFileNames::MainMenu = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), nullptr, TEXT("/Game/Audio/Music/POPCORN")));
