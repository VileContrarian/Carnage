// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_Behaviours/SteeringBehaviour.h"
#include "Kismet/KismetMathLibrary.h"

SteeringBehaviour::SteeringBehaviour()
{
}

SteeringBehaviour::~SteeringBehaviour()
{
}

bool SteeringBehaviour::Arrive(AActor* arriver, FVector* target, float steerRatio, float slowDownDistance, float stopDistance)
{
	if(!arriver || !target) return false;

	float angle = acosf(FVector::DotProduct(arriver->GetActorForwardVector().GetSafeNormal(), target->GetSafeNormal()));
	if (angle >= 90)
	{

	}
	else
	{

	}

	return true;
}
