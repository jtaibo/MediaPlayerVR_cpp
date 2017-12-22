// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MediaPlayerVR_cppTarget : TargetRules
{
	public MediaPlayerVR_cppTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "MediaPlayerVR_cpp" } );
	}
}
