// MyActor.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class PRACTICE_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	AMyActor();

	virtual void BeginPlay() override;

};

