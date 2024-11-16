// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OceanFrontiers : ModuleRules
{
	public OceanFrontiers(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
