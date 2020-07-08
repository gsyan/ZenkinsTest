// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_Practice : ModuleRules
{
	public CPP_Practice(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
