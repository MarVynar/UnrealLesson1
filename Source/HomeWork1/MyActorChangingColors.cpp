// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorChangingColors.h"

// Sets default values
AMyActorChangingColors::AMyActorChangingColors()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	RootComponent = MyMeshComponent;

	MyTextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MyText"));
	MyTextComponent->SetupAttachment(RootComponent);
	MyTextComponent->SetRelativeLocation(FVector(0, 0, 70));

	MaterialRed = CreateDefaultSubobject<UMaterial>(TEXT("Red"));
	MaterialGreen = CreateDefaultSubobject<UMaterial>(TEXT("Green"));
	MaterialBlue = CreateDefaultSubobject<UMaterial>(TEXT("Blue"));

	lifeTime = 5.0f;
	//isRed = true;
	currentColor = EColor::Red;

}

// Called when the game starts or when spawned
void AMyActorChangingColors::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(lifeTimerHandle, this, &AMyActorChangingColors::timerFunction, lifeTime, true, 0);

}

void AMyActorChangingColors::timerFunction()
{
	//if (isRed) {
	if (currentColor == EColor::Red){

		MyMeshComponent->SetMaterial(0, MaterialGreen);
		currentColor = EColor::Green;
		MyTextComponent->SetText(FText::FromString(TEXT("Green")));
		MyTextComponent->SetTextRenderColor(FColor::Green);
	}

	else if (currentColor == EColor::Green) {

		MyMeshComponent->SetMaterial(0, MaterialBlue);
		currentColor = EColor::Blue;
		MyTextComponent->SetText(FText::FromString(TEXT("Blue")));
		MyTextComponent->SetTextRenderColor(FColor::Blue);
	}

	else if (currentColor == EColor::Blue) {

		MyMeshComponent->SetMaterial(0, MaterialRed);
		currentColor = EColor::Red;
		MyTextComponent->SetText(FText::FromString(TEXT("Red")));
		MyTextComponent->SetTextRenderColor(FColor::Red);
	}
}

// Called every frame
void AMyActorChangingColors::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

