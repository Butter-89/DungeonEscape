// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DungeonEscapeGameMode.h"
#include "DungeonEscapeHUD.h"
#include "DungeonEscapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonEscapeGameMode::ADungeonEscapeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADungeonEscapeHUD::StaticClass();
}
