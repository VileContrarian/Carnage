// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAME307RNA_CARnageGameMode.h"
#include "GAME307RNA_CARnagePawn.h"
#include "GAME307RNA_CARnageHud.h"

AGAME307RNA_CARnageGameMode::AGAME307RNA_CARnageGameMode()
{
	DefaultPawnClass = AGAME307RNA_CARnagePawn::StaticClass();
	HUDClass = AGAME307RNA_CARnageHud::StaticClass();
}
