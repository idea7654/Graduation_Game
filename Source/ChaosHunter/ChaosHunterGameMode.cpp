// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChaosHunterGameMode.h"
#include "ChaosHunterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChaosHunterGameMode::AChaosHunterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
