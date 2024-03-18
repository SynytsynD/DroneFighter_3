// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h" 
#include "DroneHUD.generated.h"

/**
 * 
 */
UCLASS()
class DRONEFIGHTER_3_API ADroneHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	ADroneHUD();

	virtual void BeginPlay() override;

	TSubclassOf<class UUserWidget> MainHUD;

	virtual void DrawHUD() override;

protected:
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrosshairTexture;
};







