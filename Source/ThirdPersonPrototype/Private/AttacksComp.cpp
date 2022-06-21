// Fill out your copyright notice in the Description page of Project Settings.


#include "AttacksComp.h"

// Sets default values for this component's properties
UAttacksComp::UAttacksComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAttacksComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAttacksComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAttacksComp::ForwardGravityShift()
{

}

void UAttacksComp::ReverseGravityShift()
{

}

