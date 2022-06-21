// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityShifterBase.h"

// Sets default values
AGravityShifterBase::AGravityShifterBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGravityShifterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGravityShifterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

