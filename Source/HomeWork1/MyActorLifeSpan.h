// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorLifeSpan.generated.h"

UCLASS()
class HOMEWORK1_API AMyActorLifeSpan : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorLifeSpan();

	UPROPERTY(EditAnywhere, Category = "MyVariables")
	float lifeTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "MyComponents")
		UStaticMeshComponent* MyMeshComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
