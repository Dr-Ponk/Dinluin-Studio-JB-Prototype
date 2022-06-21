// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityFunctionLibrary.h"

FVector UGravityFunctionLibrary::GravityVectorCalc(FVector VectorToAdjust, EGravityDirection GravitySetting)
{
	FVector Buff{ 0.0f, 0.0f, 0.0f };
	switch (GravitySetting) {
		case EGravityDirection::GDE_Floor: {
			return VectorToAdjust;
			break;
		}
		case EGravityDirection::GDE_ForwardWall: {
			Buff.X = VectorToAdjust.Z * -1;
			Buff.Y = VectorToAdjust.X * -1;
			Buff.Z = VectorToAdjust.Y * -1;
			return Buff;
			break;
		}
		case EGravityDirection::GDE_BackWall: {
			Buff.X = VectorToAdjust.Z;
			Buff.Y = VectorToAdjust.X;
			Buff.Z = VectorToAdjust.Y;
			return Buff;
			break;
		}
		case EGravityDirection::GDE_RightWall: {
			Buff.X = VectorToAdjust.Y * -1;
			Buff.Y = VectorToAdjust.Z * -1;
			Buff.Z = VectorToAdjust.X * -1;
			return Buff;
			break;
		}
		case EGravityDirection::GDE_LeftWall: {
			Buff.X = VectorToAdjust.Y;
			Buff.Y = VectorToAdjust.Z;
			Buff.Z = VectorToAdjust.X;
			return Buff;
			break;
		}
		case EGravityDirection::GDE_Ceiling: {
			Buff.X = VectorToAdjust.X * -1;
			Buff.Y = VectorToAdjust.Y * -1;
			Buff.Z = VectorToAdjust.Z * -1;
			return Buff;
			break;
		}
		default: {
			UE_LOG(LogTemp, Warning, TEXT("Gravity Vector Calcs Did Not Function Properly"));
			return VectorToAdjust;
			break;
		}
	}

}

FRotator UGravityFunctionLibrary::GravityRotatorCalc(FRotator RotationToAdjust, EGravityDirection GravitySetting)
{
	FRotator Buff{ 0.0f, 0.0f, 0.0f };
	switch (GravitySetting) {
		case EGravityDirection::GDE_Floor: {
			return RotationToAdjust;
			break;
		}
		case EGravityDirection::GDE_ForwardWall: {
			Buff.Roll = RotationToAdjust.Yaw * -1;
			Buff.Pitch = RotationToAdjust.Roll * -1;
			Buff.Yaw = RotationToAdjust.Pitch * -1;
			return Buff;
			break;
		}
		case EGravityDirection::GDE_BackWall: {
			Buff.Roll = RotationToAdjust.Yaw;
			Buff.Pitch = RotationToAdjust.Roll;
			Buff.Yaw = RotationToAdjust.Pitch;
			return Buff;
			break;
		}
		case EGravityDirection::GDE_RightWall: {
			Buff.Roll = RotationToAdjust.Pitch * -1;
			Buff.Pitch = RotationToAdjust.Yaw * -1;
			Buff.Yaw = RotationToAdjust.Roll * -1;
			return Buff;
			break;
		}
		case EGravityDirection::GDE_LeftWall: {
			Buff.Roll = RotationToAdjust.Pitch;
			Buff.Pitch = RotationToAdjust.Yaw;
			Buff.Yaw = RotationToAdjust.Roll;
			return Buff;
			break;
		}
		case EGravityDirection::GDE_Ceiling: {
			Buff.Roll = RotationToAdjust.Roll * -1;
			Buff.Pitch = RotationToAdjust.Pitch * -1;
			Buff.Yaw = RotationToAdjust.Yaw * -1;
			return Buff;
			break;
		}
		default: {
			UE_LOG(LogTemp, Warning, TEXT("Gravity Rotator Calcs Did Not Function Properly"));
			return RotationToAdjust;
			break;
		}
	}
}

void UGravityFunctionLibrary::SetFixedActorGravityDirection(UNinjaCharacterMovementComponent* MovementComp, EGravityDirection GravitySetting)
{
	
	FVector NormalBuff{ 0.0f, 0.0f, 0.0f };
	switch (GravitySetting) {
		case EGravityDirection::GDE_Floor: {
			MovementComp->SetFixedGravityDirection(NormalBuff);
			break;
		}
		case EGravityDirection::GDE_ForwardWall: {
			MovementComp->SetFixedGravityDirection(NormalBuff);
			break;
		}
		case EGravityDirection::GDE_BackWall: {
			MovementComp->SetFixedGravityDirection(NormalBuff);
			break;
		}
		case EGravityDirection::GDE_RightWall: {
			MovementComp->SetFixedGravityDirection(NormalBuff);
			break;
		}
		case EGravityDirection::GDE_LeftWall: {
			MovementComp->SetFixedGravityDirection(NormalBuff);
			break;
		}
		case EGravityDirection::GDE_Ceiling: {
			MovementComp->SetFixedGravityDirection(NormalBuff);
			break;
		}
		default: {
			UE_LOG(LogTemp, Warning, TEXT("Setting The Gravity Direction of Specified Actor Could not be done"));
			break;
		}
	}
	return;
}
