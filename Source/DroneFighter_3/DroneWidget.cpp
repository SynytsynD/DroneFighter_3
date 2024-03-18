// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneWidget.h"
#include "Drone.h"
#include "Kismet/GameplayStatics.h"

float UDroneWidget::GetDroneHealth()
{
	ADrone* MainDrone = Cast<ADrone>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	float GetHealth = MainDrone->health / 100.f;

	
	return GetHealth;

}
