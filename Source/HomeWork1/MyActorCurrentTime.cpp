// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorCurrentTime.h"
#include "RenderCore.h"

// Sets default values
AMyActorCurrentTime::AMyActorCurrentTime()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));

	RootComponent = MyMeshComponent;

	timeDifference = 5.0f;

}

// Called when the game starts or when spawned
void AMyActorCurrentTime::BeginPlay()
{
	Super::BeginPlay();
	//startTime = GetCurrentTime();
	
}

// Called every frame
void AMyActorCurrentTime::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//currentTime = GetCurrentTime();

}

