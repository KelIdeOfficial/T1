// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "TestCharacter.h"
#include "UObject/ConstructorHelpers.h"


AMyGameMode::AMyGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("'/Game/Mine/Character/BP_TestCharacter.BP_TestCharacter'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
///Script/Engine.Blueprint'/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter'