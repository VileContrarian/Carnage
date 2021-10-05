// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GAME307RNA_CARnagePawn.h"
#include "BasicCarAIController.generated.h"

/**
 * 
 */
UCLASS()
class GAME307RNA_CARNAGE_API ABasicCarAIController : public AAIController
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	AGAME307RNA_CARnagePawn* Car;

	UPROPERTY(BlueprintReadWrite)
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* TargetActor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float SlowDownDistance = 1000.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float StopDistance = 100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float TargetAngleRange = 1.0f;

	UFUNCTION(BlueprintCallable)
	void Arrive();

	UFUNCTION(BlueprintCallable)
	void SetTargetLocation();

	virtual void BeginPlay() override;
	virtual void Tick(float deltaSeconds) override;
};