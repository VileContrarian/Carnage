// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "GAME307RNA_CARnageHud.generated.h"


UCLASS(config = Game)
class AGAME307RNA_CARnageHud : public AHUD
{
	GENERATED_BODY()

public:
	AGAME307RNA_CARnageHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
