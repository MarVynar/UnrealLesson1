// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorCurrentTime.generated.h"

UCLASS()
class HOMEWORK1_API AMyActorCurrentTime : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorCurrentTime();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "MyComponents")
		UStaticMeshComponent* MyMeshComponent;

	float startTime;
	float currentTime;
	float timeDifference;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
