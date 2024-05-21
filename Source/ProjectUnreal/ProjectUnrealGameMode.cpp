// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectUnrealGameMode.h"
#include "ProjectUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectUnrealGameMode::AProjectUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
