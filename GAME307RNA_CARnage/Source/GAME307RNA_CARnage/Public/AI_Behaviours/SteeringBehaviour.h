// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class GAME307RNA_CARNAGE_API SteeringBehaviour
{
public:
	SteeringBehaviour();
	~SteeringBehaviour();

	static bool Arrive(AActor* arriver, FVector* target, float steerRatio, float slowDownDistance, float stopDistance);
};
