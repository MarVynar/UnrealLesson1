// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorChanginOneMat.h"

// Sets default values
AMyActorChanginOneMat::AMyActorChanginOneMat()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	RootComponent = MyMeshComponent;

	MyTextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MyText"));
	MyTextComponent->SetupAttachment(RootComponent);
	MyTextComponent->SetRelativeLocation(FVector(0, 0, 70));

	
	lifeTime = 5.0f;
	
	currentColor = EColor::Red;

}

// Called when the game starts or when spawned
void AMyActorChanginOneMat::BeginPlay()
{
	Super::BeginPlay();

	Material = MyMeshComponent->GetMaterial(0);
	Dynamic = UMaterialInstanceDynamic::Create(Material, this);
	MyMeshComponent->SetMaterial(0, Dynamic);
	GetWorld()->GetTimerManager().SetTimer(lifeTimerHandle, this, &AMyActorChanginOneMat::timerFunction, lifeTime, true, 0);
	Dynamic->SetVectorParameterValue(TEXT("Color"), FLinearColor::Red);
	
}

void  AMyActorChanginOneMat::timerFunction()
{
	
	if (currentColor == EColor::Red) {

		Dynamic->SetVectorParameterValue(TEXT("Color"), FLinearColor::Green);
		currentColor = EColor::Green;
		MyTextComponent->SetText(FText::FromString(TEXT("Green")));
		MyTextComponent->SetTextRenderColor(FColor::Green);
	}

	else if (currentColor == EColor::Green) {

		Dynamic->SetVectorParameterValue(TEXT("Color"), FLinearColor::Blue);
		currentColor = EColor::Blue;
		MyTextComponent->SetText(FText::FromString(TEXT("Blue")));
		MyTextComponent->SetTextRenderColor(FColor::Blue);
	}

	else if (currentColor == EColor::Blue) {

		Dynamic->SetVectorParameterValue(TEXT("Color"), FLinearColor::Red);
		currentColor = EColor::Red;
		MyTextComponent->SetText(FText::FromString(TEXT("Red")));
		MyTextComponent->SetTextRenderColor(FColor::Red);
	}
}

// Called every frame
void AMyActorChanginOneMat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

