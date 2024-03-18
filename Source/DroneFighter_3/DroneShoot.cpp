// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneShoot.h"
#include "Drone.h"
#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


// Sets default values
//ADroneShoot::ADroneShoot()
//{
//	collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
//	SetRootComponent(collision);
//	collision->SetSphereRadius(25.f);
//	collision->SetCollisionProfileName(TEXT("BlockAllDynamic"));
//
//	flySystemComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara"));
//	flySystemComponent->SetupAttachment(collision);
//
//	movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
//	movement->InitialSpeed = 20000.f;
//	movement->MaxSpeed = 20000.f;
//	movement->ProjectileGravityScale = 0.f;
//
//}

ADroneShoot::ADroneShoot()
{
    PrimaryActorTick.bCanEverTick = true;

    if (!RootComponent)
    {
        RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
    }

    if (!CollisionComponent)
    {
        // Use a sphere as a simple collision representation.
        CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
        CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("DroneShoot"));
        // Event called when component hits something.
        CollisionComponent->OnComponentHit.AddDynamic(this, &ADroneShoot::OnHit);
        // Set the sphere's collision radius.
        CollisionComponent->InitSphereRadius(15.0f);
        // Set the root component to be the collision component.
        RootComponent = CollisionComponent;
    }
    
    if (!ProjectileMovementComponent)
    {
        // Use this component to drive this projectile's movement.
        ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
        ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
        ProjectileMovementComponent->InitialSpeed = 3000.0f;
        ProjectileMovementComponent->MaxSpeed = 3000.0f;
        ProjectileMovementComponent->bRotationFollowsVelocity = true;
        ProjectileMovementComponent->bShouldBounce = true;
        ProjectileMovementComponent->Bounciness = 0.3f;
        ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
    }

    if (!ProjectileMeshComponent)
    { 
        ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
        static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("'/Game/Texture/Bullet/Sphere.Sphere'"));
        if (Mesh.Succeeded())
        {
            ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
        }

        static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("'/Game/Texture/Bullet/SphereMaterial.SphereMaterial'"));
        if (Material.Succeeded())
        {
            ProjectileMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, ProjectileMeshComponent);
        }
        ProjectileMeshComponent->SetMaterial(0, ProjectileMaterialInstance);
        ProjectileMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
        ProjectileMeshComponent->SetupAttachment(RootComponent);
    }

    InitialLifeSpan = 3.0f;

}

void ADroneShoot::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    if (OtherActor != this && OtherComponent->IsSimulatingPhysics())
    {
        OtherComponent->AddImpulseAtLocation(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);
    }
    Destroy();
}


// Called when the game starts or when spawned
void ADroneShoot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADroneShoot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Function that initializes the projectile's velocity in the shoot direction.
void ADroneShoot::FireInDirection(const FVector& ShootDirection)
{
    ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}