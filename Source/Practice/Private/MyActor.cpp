#include "MyActor.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("The source code that I wrote.")));
}
// aaaaaaaa
// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

