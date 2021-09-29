// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAME307RNA_CARnage : ModuleRules
{
	public GAME307RNA_CARnage(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "PhysXVehicles", "HeadMountedDisplay" });

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");
	}
}
