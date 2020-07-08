// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_PracticeGameMode.h"
#include "CPP_PracticeHUD.h"
#include "CPP_PracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_PracticeGameMode::ACPP_PracticeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPP_PracticeHUD::StaticClass();
}
