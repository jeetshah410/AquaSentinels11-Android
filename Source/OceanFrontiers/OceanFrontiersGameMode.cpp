// Copyright Epic Games, Inc. All Rights Reserved.

#include "OceanFrontiersGameMode.h"
#include "OceanFrontiersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOceanFrontiersGameMode::AOceanFrontiersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}//new
