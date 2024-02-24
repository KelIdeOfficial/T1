// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "TestCharacter.h"
#include "UObject/ConstructorHelpers.h"


AMyGameMode::AMyGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Script/CoreUObject.Class'/Script/T1.TestCharacter'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
