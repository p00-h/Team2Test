// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team02GameMode.h"
#include "Team02Character.h"
#include "UObject/ConstructorHelpers.h"

ATeam02GameMode::ATeam02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
