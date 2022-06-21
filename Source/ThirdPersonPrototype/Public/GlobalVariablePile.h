// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EGravityDirection : uint8 {
	GDE_Floor		UMETA(DisplayName = "Floor"),
	GDE_ForwardWall	UMETA(DisplayName = "Forward Wall"),
	GDE_BackWall	UMETA(DisplayName = "Back Wall"),
	GDE_RightWall	UMETA(DisplayName = "Right Wall"),
	GDE_LeftWall	UMETA(DisplayName = "Left Wall"),
	GDE_Ceiling		UMETA(DisplayName = "Ceiling"),

};

class THIRDPERSONPROTOTYPE_API GlobalVariablePile
{
	GlobalVariablePile();

	~GlobalVariablePile();

};

