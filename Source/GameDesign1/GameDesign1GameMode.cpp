// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "GameDesign1GameMode.h"
#include "GameDesign1HUD.h"
#include "GameDesign1Character.h"
#include "UObject/ConstructorHelpers.h"

AGameDesign1GameMode::AGameDesign1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameDesign1HUD::StaticClass();
}
