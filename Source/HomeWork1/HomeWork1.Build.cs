// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HomeWork1 : ModuleRules
{
	public HomeWork1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
