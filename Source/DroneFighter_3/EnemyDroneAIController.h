// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Drone.h"
#include "EnemyDrone.h"
#include "EnemyDroneAIController.generated.h"

/**
 * 
 */
UCLASS()
class DRONEFIGHTER_3_API AEnemyDroneAIController : public AAIController
{
	GENERATED_BODY()

public:
	void BeginPlay() override;

	class UNavigationSystemV1* navigationMash;

	FVector randomLocation;

	UFUNCTION()
	void RandomPatrol();

	AActor* Enemy = UGameplayStatics::GetActorOfClass(this, AEnemyDrone::StaticClass());
	AActor* Player = UGameplayStatics::GetActorOfClass(this, ADrone::StaticClass());

};
