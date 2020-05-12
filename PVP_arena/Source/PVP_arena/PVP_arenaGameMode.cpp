// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PVP_arenaGameMode.h"
#include "PVP_arenaHUD.h"
#include "PVP_arenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

APVP_arenaGameMode::APVP_arenaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APVP_arenaHUD::StaticClass();
}
