// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyDroneAIController.h"
#include "NavigationSystem.h"

void AEnemyDroneAIController::BeginPlay()
{
	Super::BeginPlay();

	navigationMash = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);

	RandomPatrol();
}

void AEnemyDroneAIController::RandomPatrol()
{
	if (navigationMash)
	{
		navigationMash->K2_GetRandomReachablePointInRadius(this, GetPawn()->GetActorLocation(), randomLocation, 1500.f);

		MoveToLocation(randomLocation);

		FTimerHandle PointDelay;
		GetWorld()->GetTimerManager().SetTimer(PointDelay, this, &AEnemyDroneAIController::RandomPatrol, 3.f, true, -1.f);
	}
}


