// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HomeWork1HUD.generated.h"

UCLASS()
class AHomeWork1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AHomeWork1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

