// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ChaosHunter : ModuleRules
{
	public ChaosHunter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
