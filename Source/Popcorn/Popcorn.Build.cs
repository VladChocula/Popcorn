// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class Popcorn : ModuleRules
{
	public Popcorn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "PlayFab", "PlayFabCommon", "PlayFabCpp" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../../Plugins/PlayFabPlugin/PlayFab/Source/PlayFab/Public"));

        if (Target.Configuration == UnrealTargetConfiguration.Development)
        {
            PublicDefinitions.Add("DEV_BUILD=1");
        }

        else if (Target.Configuration == UnrealTargetConfiguration.Test)
        {
            PublicDefinitions.Add("TEST_BUILD=1");
        }

        else if (Target.Configuration == UnrealTargetConfiguration.Shipping)
        {
            PublicDefinitions.Add("SHIPPING_BUILD=1");
        }

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
