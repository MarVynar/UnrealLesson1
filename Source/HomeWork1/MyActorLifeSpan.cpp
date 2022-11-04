// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorLifeSpan.h"

// Sets default values
AMyActorLifeSpan::AMyActorLifeSpan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));

	RootComponent = MyMeshComponent;
	lifeTime = 5.0f;

}

// Called when the game starts or when spawned
void AMyActorLifeSpan::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(lifeTime);
	
}

// Called every frame
void AMyActorLifeSpan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

