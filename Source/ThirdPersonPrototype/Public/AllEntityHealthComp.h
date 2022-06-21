// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GlobalVariablePile.h"
#include "GravityFunctionLibrary.h"
#include "AllEntityHealthComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UAllEntityHealthComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAllEntityHealthComp();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
	EGravityDirection GravityDirection = EGravityDirection::GDE_Floor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		int64 DefaultHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		int64 CurrentHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		float HealthRegenRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		int64 DefaultArmor = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		int64 CurrentArmor = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		int64 BaseDamage = 15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		int64 TotalDamage = 15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		int64 CurrentExperience = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		int64 ExperienceBarAmount = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		float BaseWalkSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats")
		float BaseSprintSpeedMod = 1.75f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float AbilityRegenSpeed = 1.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float DefaultMaxAbilityPercent = 100.0f;						// Dont Need To Ever Define since 100% is full

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float M1CurrentPercent = 100.0f;									// When constructed will be set to MaxAbilityPercent

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bM1IsFull = true;									// When Constructed Will be always be set to True

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 M1AbilityStackCountCurrent = 1;								// When Constructed Will always be Set to MaxAbilityStackCount of specified Ability

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 M1AbilityMaxStackCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float M2CurrentPercent = 100.0f;									// When constructed will be set to MaxAbilityPercent

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bM2IsFull = true;												// When Constructed Will be always be set to True

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 M2AbilityStackCountCurrent = 1;								// When Constructed Will always be Set to MaxAbilityStackCount of specified Ability

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 M2AbilityMaxStackCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float ShiftAbilityCurrentPercent = 100.0f;									// When constructed will be set to MaxAbilityPercent

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bShiftAbilityIsFull = true;												// When Constructed Will be always be set to True

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 ShiftAbilityStackCountCurrent = 1;								// When Constructed Will always be Set to MaxAbilityStackCount of specified Ability

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 ShiftAbilityMaxStackCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float RAbilityCurrentPercent = 100.0f;									// When constructed will be set to MaxAbilityPercent

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bRAbilityIsFull = true;												// When Constructed Will be always be set to True

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 RAbilityStackCountCurrent = 1;								// When Constructed Will always be Set to MaxAbilityStackCount of specified Ability

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 RAbilityMaxStackCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float QCurrentPercent = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bQIsFull = true;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
