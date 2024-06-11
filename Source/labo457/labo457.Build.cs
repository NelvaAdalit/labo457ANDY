// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class labo457 : ModuleRules
{
	public labo457(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
