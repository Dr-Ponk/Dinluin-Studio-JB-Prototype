// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NinjaCharacter.h"
#include "GlobalVariablePile.h"
#include "GravityFunctionLibrary.h"
#include "AllEntityHealthComp.h"
#include "AbilityEffectsComp.h"
#include "AttacksComp.h"
#include "MainCharacterBase.generated.h"


/**
 * 
 */


UCLASS()
class THIRDPERSONPROTOTYPE_API AMainCharacterBase : public ANinjaCharacter
{
	GENERATED_BODY()
		
public:

	~AMainCharacterBase();

	virtual void BeginPlay() override;

	
private:

public:
	
	

};
