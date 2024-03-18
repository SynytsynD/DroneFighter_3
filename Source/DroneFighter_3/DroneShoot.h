// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "DroneShoot.generated.h"

UCLASS()
class DRONEFIGHTER_3_API ADroneShoot : public AActor
{
	GENERATED_BODY()
	
public:	
	//Sets default values for this actor's properties
	ADroneShoot();

	//UPROPERTY(EditAnywhere)
	//class USphereComponent* collision;

	///** Niagara FX component to hold system for flying visual. */
	//UPROPERTY(EditAnywhere)
	//class UNiagaraComponent* flySystemComponent;

	///** Projectile component to move the actor. */
	//UPROPERTY(EditAnywhere)
	//class UProjectileMovementComponent* movement;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComponent;

	// Projectile movement component.
	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	UStaticMeshComponent* ProjectileMeshComponent;

	// Projectile material
	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
	UMaterialInstanceDynamic* ProjectileMaterialInstance;

	// Function that initializes the projectile's velocity in the shoot direction.
	void FireInDirection(const FVector& ShootDirection);

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};
