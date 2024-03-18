// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone_PlayerController.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "InputModifiers.h"

static void MapKey(UInputMappingContext* InputMappingContext, UInputAction* InputAction, FKey Key,
	bool bNegate = false,
	bool bSwizzle = false, EInputAxisSwizzle SwizzleOrder = EInputAxisSwizzle::YXZ)
{
	FEnhancedActionKeyMapping& Mapping = InputMappingContext->MapKey(InputAction, Key);
	UObject* Outer = InputMappingContext->GetOuter();

	if (bNegate)
	{
		UInputModifierNegate* Negate = NewObject<UInputModifierNegate>(Outer);
		Mapping.Modifiers.Add(Negate);
	}

	if (bSwizzle)
	{
		UInputModifierSwizzleAxis* Swizzle = NewObject<UInputModifierSwizzleAxis>(Outer);
		Swizzle->Order = SwizzleOrder;
		Mapping.Modifiers.Add(Swizzle);
	}
}

void ADrone_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	pawnMappingContext = NewObject<UInputMappingContext>(this);

	moveAction = NewObject<UInputAction>(this);
	moveAction->ValueType = EInputActionValueType::Axis3D;
	MapKey(pawnMappingContext, moveAction, EKeys::W);
	MapKey(pawnMappingContext, moveAction, EKeys::S, true);
	MapKey(pawnMappingContext, moveAction, EKeys::A, true, true);
	MapKey(pawnMappingContext, moveAction, EKeys::D, false, true);
	MapKey(pawnMappingContext, moveAction, EKeys::SpaceBar, false, true, EInputAxisSwizzle::ZYX);
	MapKey(pawnMappingContext, moveAction, EKeys::LeftAlt, true, true, EInputAxisSwizzle::ZYX);

	rotateAction = NewObject<UInputAction>(this);
	rotateAction->ValueType = EInputActionValueType::Axis3D;
	MapKey(pawnMappingContext, rotateAction, EKeys::MouseY);
	MapKey(pawnMappingContext, rotateAction, EKeys::MouseX, false, true);
	MapKey(pawnMappingContext, rotateAction, EKeys::Q, true, true, EInputAxisSwizzle::ZYX);
	MapKey(pawnMappingContext, rotateAction, EKeys::E, false, true, EInputAxisSwizzle::ZYX);

	freeFlyAction = NewObject<UInputAction>(this);
	MapKey(pawnMappingContext, freeFlyAction, EKeys::F);

	shootAction = NewObject<UInputAction>(this);
	shootAction->ValueType = EInputActionValueType::Axis1D;
	MapKey(pawnMappingContext, shootAction, EKeys::LeftMouseButton);

}