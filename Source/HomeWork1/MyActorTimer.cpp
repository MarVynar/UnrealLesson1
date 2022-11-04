// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTimer.h"

// Sets default values
AMyActorTimer::AMyActorTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));

	RootComponent = MyMeshComponent;
	lifeTime = 5.0f;

}

// Called when the game starts or when spawned
void AMyActorTimer::BeginPlay()
{
	Super::BeginPlay();

	//GetWorld()->GetTimerManager().SetTimer(lifeTimerHandle, this, &AActor::Destroy, lifeTime, false);
	GetWorld()->GetTimerManager().SetTimer(lifeTimerHandle, this, &AMyActorTimer::timerFunction, lifeTime, false);
	//GetWorld()->GetTimerManager().SetTimer(lifeTimerHandle, this, Destroy(), lifeTime, false);
	//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange, "Timer");
	
}

void AMyActorTimer::timerFunction()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange, "Timer");
	Destroy();
}

// Called every frame
void AMyActorTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

