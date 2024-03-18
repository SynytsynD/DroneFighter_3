// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Drone_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DRONEFIGHTER_3_API ADrone_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	virtual void SetupInputComponent() override;

	UPROPERTY();
	class UInputMappingContext* pawnMappingContext;

	UPROPERTY();
	class UInputAction* moveAction;

	UPROPERTY();
	class UInputAction* rotateAction;

	UPROPERTY();
	class UInputAction* freeFlyAction;

	UPROPERTY();
	class UInputAction* shootAction;

};
