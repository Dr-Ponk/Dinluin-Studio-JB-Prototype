// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GlobalVariablePile.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NinjaCharacterMovementComponent.h"
#include "GravityFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONPROTOTYPE_API UGravityFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public: 
	UFUNCTION(BlueprintCallable)
	static FVector GravityVectorCalc(FVector VectorToAdjust, EGravityDirection GravitySetting);

	UFUNCTION(BlueprintCallable)
	static FRotator GravityRotatorCalc(FRotator RotationToAdjust, EGravityDirection GravitySetting);

	UFUNCTION(BlueprintCallable)
	static void SetFixedActorGravityDirection(UNinjaCharacterMovementComponent* MovementComp, EGravityDirection GravitySetting);
private:

};
