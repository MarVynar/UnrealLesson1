// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "MyActorChangingColors.generated.h"

UENUM(BlueprintType)
enum EColor {

	Red UMETA(DisplayName = "Red"),
	Green UMETA(DisplayName = "Green"),
	Blue UMETA(DisplayName = "Blue")
};

UCLASS()
class HOMEWORK1_API AMyActorChangingColors : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorChangingColors();

	//UPROPERTY(EditAnywhere, Category = "MyVariables")
		float lifeTime;
		



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "MyComponents")
		UStaticMeshComponent* MyMeshComponent;
		UTextRenderComponent* MyTextComponent;

		UPROPERTY(EditAnywhere, Category = "MyComponents")
			UMaterial* MaterialRed;
		UPROPERTY(EditAnywhere, Category = "MyComponents")
			UMaterial* MaterialGreen;
		UPROPERTY(EditAnywhere, Category = "MyComponents")
			UMaterial* MaterialBlue;

	FTimerHandle lifeTimerHandle;
	//bool isRed;
	EColor currentColor;

	void timerFunction();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
