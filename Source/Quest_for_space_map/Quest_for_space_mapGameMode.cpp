// Copyright Epic Games, Inc. All Rights Reserved.

#include "Quest_for_space_mapGameMode.h"
#include "Quest_for_space_mapPlayerController.h"
#include "Quest_for_space_mapCharacter.h"
#include "UObject/ConstructorHelpers.h"

AQuest_for_space_mapGameMode::AQuest_for_space_mapGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AQuest_for_space_mapPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}