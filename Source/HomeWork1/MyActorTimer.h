// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorTimer.generated.h"

UCLASS()
class HOMEWORK1_API AMyActorTimer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorTimer();

	UPROPERTY(EditAnywhere, Category = "MyVariables")
	float lifeTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "MyComponents")
		UStaticMeshComponent* MyMeshComponent;

	FTimerHandle lifeTimerHandle;

	void timerFunction();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
