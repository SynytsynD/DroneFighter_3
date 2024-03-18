// Fill out your copyright notice in the Description page of Project Settings.

#include "Drone.h"
#include "Drone_PlayerController.h"
#include "DroneShoot.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values
ADrone::ADrone()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	collision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collision"));
	SetRootComponent(collision);

	body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	body->SetupAttachment(collision);

	head = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));
	head->SetupAttachment(body);

	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	springArm->SetupAttachment(collision);

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(springArm, USpringArmComponent::SocketName);

	movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));

	moveScale = 1.f;
	rotateScale = 50.f;
	bFreeFly = false;
	//shootingOffset = FVector(300.f, 0.f, 0.f);
	//shootClass = ADroneShoot::StaticClass();

}

void ADrone::Move(const FInputActionValue& actionValue)
{
	FVector input = actionValue.Get<FInputActionValue::Axis3D>();

	AddMovementInput(GetActorRotation().RotateVector(input), moveScale);
}

void ADrone::Rotate(const FInputActionValue& actionValue)
{

	FRotator Input(actionValue[0], actionValue[1], actionValue[2]);
	Input *= GetWorld()->GetDeltaSeconds() * rotateScale;

	if (bFreeFly)
	{
		AddActorLocalRotation(Input);
	}
	else
	{
		Input += GetActorRotation();
		Input.Pitch = FMath::ClampAngle(Input.Pitch, -89.9f, 89.9f);
		Input.Roll = 0;
		SetActorRotation(Input);
	}
}

void ADrone::ToggleFreeFly()
{
	bFreeFly = !bFreeFly;
}

void ADrone::Fire()
{
	// Attempt to fire a projectile.
	if (ProjectileClass)
	{
		
		// Get the camera transform.
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		// Set MuzzleOffset to spawn projectiles slightly in front of the camera.
		MuzzleOffset.Set(100.0f, 0.0f, 0.0f);

		// Transform MuzzleOffset from camera space to world space.
		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

		// Skew the aim to be slightly upwards.
		FRotator MuzzleRotation = CameraRotation;
		MuzzleRotation.Pitch += 10.0f;

		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			// Spawn the projectile at the muzzle.
			ADroneShoot* Projectile = World->SpawnActor<ADroneShoot>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}


// Called to bind functionality to input
void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	ADrone_PlayerController* FPC = GetController<ADrone_PlayerController>();
	check(EIC && FPC);
	EIC->BindAction(FPC->moveAction, ETriggerEvent::Triggered, this, &ADrone::Move);
	EIC->BindAction(FPC->rotateAction, ETriggerEvent::Triggered, this, &ADrone::Rotate);
	EIC->BindAction(FPC->freeFlyAction, ETriggerEvent::Triggered, this, &ADrone::ToggleFreeFly);

	PlayerInputComponent->BindAxis("Turn", this, &ADrone::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUP/DOWN", this, &ADrone::AddControllerPitchInput);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ADrone::Fire);


	ULocalPlayer* LocalPlayer = FPC->GetLocalPlayer();
	check(LocalPlayer);
	UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);
	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(FPC->pawnMappingContext, 0);
}

// Called when the game starts or when spawned
void ADrone::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

