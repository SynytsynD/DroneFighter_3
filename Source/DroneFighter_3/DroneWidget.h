// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DroneHUD.h"
#include "DroneWidget.generated.h"

class ADrone;

UCLASS()
class DRONEFIGHTER_3_API UDroneWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetDroneHealth();
};





