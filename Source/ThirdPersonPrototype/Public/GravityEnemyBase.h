// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NinjaCharacter.h"
#include "GlobalVariablePile.h"
#include "GravityFunctionLibrary.h"
#include "GravityEnemyBase.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONPROTOTYPE_API AGravityEnemyBase : public ANinjaCharacter
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gravity Variables")
	EGravityDirection ActorGravityDirection = EGravityDirection::GDE_Floor;
};
