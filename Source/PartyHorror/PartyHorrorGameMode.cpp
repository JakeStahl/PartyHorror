// Copyright Epic Games, Inc. All Rights Reserved.

#include "PartyHorrorGameMode.h"
#include "PartyHorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

APartyHorrorGameMode::APartyHorrorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
