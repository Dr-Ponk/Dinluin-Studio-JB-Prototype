// Fill out your copyright notice in the Description page of Project Settings.


#include "GetRidOfThis.h"

// Sets default values for this component's properties
UGetRidOfThis::UGetRidOfThis()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGetRidOfThis::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGetRidOfThis::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

