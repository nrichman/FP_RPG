// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FPRPGGameMode.h"
#include "FPRPGHUD.h"
#include "FPRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPRPGGameMode::AFPRPGGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPRPGHUD::StaticClass();
}
