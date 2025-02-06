// MyActor.cpp

#include "MyActor.h"

#include "Kismet/KismetSystemLibrary.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Source code written by a team member.")));
}

