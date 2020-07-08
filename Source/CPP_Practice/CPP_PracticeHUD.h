// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CPP_PracticeHUD.generated.h"

UCLASS()
class ACPP_PracticeHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACPP_PracticeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

