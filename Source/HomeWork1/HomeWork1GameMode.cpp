// Copyright Epic Games, Inc. All Rights Reserved.

#include "HomeWork1GameMode.h"
#include "HomeWork1HUD.h"
#include "HomeWork1Character.h"
#include "UObject/ConstructorHelpers.h"

AHomeWork1GameMode::AHomeWork1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHomeWork1HUD::StaticClass();
}
