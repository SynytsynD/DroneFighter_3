// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DroneShoot.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Pawn.h"
#include "Drone.generated.h"

UCLASS()

class DRONEFIGHTER_3_API ADrone : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADrone();

	void Move(const struct FInputActionValue& actionValue);

	void Rotate(const struct FInputActionValue& actionValue);

	//void Shoot(const struct FInputActionValue& actionValue);

	void ToggleFreeFly();

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* collision;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* body;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* head;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* springArm;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* camera;

	UPROPERTY(EditAnywhere)
	class UFloatingPawnMovement* movement;

	// Function that handles firing projectiles.
	UFUNCTION()
	void Fire();

	// Gun muzzle offset from the camera location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	//UPROPERTY(EditAnywhere)
	//FVector shootingOffset;

	//UPROPERTY(EditAnywhere)
	//TSubclassOf<class ADroneShoot> shootClass;

	UPROPERTY(EditAnywhere)
	float moveScale;

	UPROPERTY(EditAnywhere)
	float rotateScale;

	UPROPERTY(EditAnywhere)
	uint32 bFreeFly:1;

	UPROPERTY(EditAnywhere)
	float health = 100.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// Projectile class to spawn.
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class ADroneShoot> ProjectileClass;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
