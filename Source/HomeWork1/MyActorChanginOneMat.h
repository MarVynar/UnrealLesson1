// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "MyActorChangingColors.h"
#include "MyActorChanginOneMat.generated.h"



UCLASS()
class HOMEWORK1_API AMyActorChanginOneMat : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorChanginOneMat();

	float lifeTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "MyComponents")
		UStaticMeshComponent* MyMeshComponent;
	UTextRenderComponent* MyTextComponent;

	UPROPERTY(EditAnywhere, Category = "MyComponents")
		UMaterialInterface* Material;

	UMaterialInstanceDynamic* Dynamic;

	FTimerHandle lifeTimerHandle;
	
	EColor currentColor;

	void timerFunction();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
