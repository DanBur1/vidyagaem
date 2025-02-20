// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Quest_for_space_map : ModuleRules
{
	public Quest_for_space_map(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
