// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BattleMazeHUD.generated.h"

UCLASS()
class ABattleMazeHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABattleMazeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

