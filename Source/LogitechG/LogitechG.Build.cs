// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
    using System.IO;

    public class LogitechG : ModuleRules
    {
        public LogitechG(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            bEnableUndefinedIdentifierWarnings = false;

            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
            PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));

            string BaseDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
            string LogitechDirectory = Path.Combine(BaseDirectory, "Logitech", "lib", Target.Platform.ToString());
            string[] LibraryNames = { "LogitechGArxControlLib", "LogitechGkeyLib", "LogitechLCDLib", "LogitechLEDLib", "LogitechSteeringWheelLib" };

            PublicLibraryPaths.Add(LogitechDirectory);
            foreach (string LibraryName in LibraryNames)
            {
                PublicAdditionalLibraries.Add(LibraryName + ".lib");
            }
            PublicDependencyModuleNames.AddRange(new string[] { "Engine", "Core", "InputCore", "CoreUObject" });
        }
    }
}