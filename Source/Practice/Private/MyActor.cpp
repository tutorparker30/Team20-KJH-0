#include "MyActor.h"


AMyActor::AMyActor()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

