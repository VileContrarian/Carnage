// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicCarAIController.h"
#include "Kismet/KismetMathLibrary.h"

void ABasicCarAIController::Arrive()
{
	//TODO figure out when to stop and reverse instead of doing a round-about

	FVector2D CurrentDirection(GetPawn()->GetActorForwardVector().GetSafeNormal());
	FVector2D TargetDirection((TargetLocation - GetPawn()->GetActorLocation()).GetSafeNormal());
	float angle = UKismetMathLibrary::Acos(FVector2D::DotProduct(CurrentDirection, TargetDirection));
	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, FString::Printf(TEXT("%f"), angle));
	//if (angle > 3.14f) angle = 3.14f - angle;
	if (FVector2D::CrossProduct(CurrentDirection, TargetDirection) < 0) angle = -angle;
	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, FString::Printf(TEXT("%f"), angle));

	if (abs(angle) > TargetAngleRange)
	{
		if (angle > 0)
		{
			Car->MoveRight(0.5f);
		}
		else
		{
			Car->MoveRight(-0.5f);
		}
	}

	if (FVector::Distance(Car->GetActorLocation(), TargetLocation) > StopDistance)
	{
		Car->MoveForward(0.5f);
	}
	else
	{
		Car->MoveForward(0.0f);
	}
}

void ABasicCarAIController::SetTargetLocation()
{
	if (TargetActor) TargetLocation = TargetActor->GetActorLocation();
}

void ABasicCarAIController::BeginPlay()
{
	Super::BeginPlay();
	Car = Cast<AGAME307RNA_CARnagePawn>(GetPawn());
	if(!Car) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Failed to find suitable pawn!"));
}

void ABasicCarAIController::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
	SetTargetLocation();
	Arrive();
}
