// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AllEntityHealthComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UAllEntityHealthComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAllEntityHealthComp();

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
		float BaseSprintSpeed = 900.0f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float AbilityRegenSpeed = 1.0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float DefaultMaxAbilityPercent = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 MaxAbilityStackCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		int64 CurrentAbilityStackCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float M1CurrentPercent = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bM1IsFull = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float M2CurrentPercent = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bM2IsFull = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float ShiftAbilityCurrentPercent = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bShiftAbilityIsFull = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		float RAbilityCurrentPercent = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Stats")
		bool bRAbilityIsFull = true;

	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
