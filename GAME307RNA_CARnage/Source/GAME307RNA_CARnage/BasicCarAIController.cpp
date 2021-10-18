// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicCarAIController.h"
#include "Kismet/KismetMathLibrary.h"

void ABasicCarAIController::Arrive()
{
	//TODO figure out when to stop and reverse instead of doing a round-about

	FVector2D currentDirection(GetPawn()->GetActorForwardVector().GetSafeNormal());
	FVector2D targetDirection((TargetLocation - GetPawn()->GetActorLocation()).GetSafeNormal());
	float angle = UKismetMathLibrary::Acos(FVector2D::DotProduct(currentDirection, targetDirection));
	if (FVector2D::CrossProduct(currentDirection, targetDirection) < 0) angle = -angle;

	if (abs(angle) > TargetAngleRange)
	{
		Car->MoveRight(angle / 3.14f);
	}
	float distance = FVector::Distance(Car->GetActorLocation(), TargetLocation);
	if (distance > StopDistance)
	{
		if (distance < SlowDownDistance)
		{
			Car->MoveForward(0.6f);
		}
		else Car->MoveForward(1.0f);
	}
	else
	{
		Car->MoveForward(0.0f);
	}
}

void ABasicCarAIController::Brake()
{
	if (Car->GetVelocity().Size() > 0) Car->OnHandbrakePressed();
	else Car->OnHandbrakeReleased();
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
	if(ShouldMove) Arrive();
}
