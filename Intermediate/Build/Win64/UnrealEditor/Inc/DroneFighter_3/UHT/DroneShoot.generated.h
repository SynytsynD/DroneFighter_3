// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DroneShoot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DRONEFIGHTER_3_DroneShoot_generated_h
#error "DroneShoot.generated.h already included, missing '#pragma once' in DroneShoot.h"
#endif
#define DRONEFIGHTER_3_DroneShoot_generated_h

#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_SPARSE_DATA
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADroneShoot(); \
	friend struct Z_Construct_UClass_ADroneShoot_Statics; \
public: \
	DECLARE_CLASS(ADroneShoot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneFighter_3"), NO_API) \
	DECLARE_SERIALIZER(ADroneShoot)


#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADroneShoot(ADroneShoot&&); \
	NO_API ADroneShoot(const ADroneShoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADroneShoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADroneShoot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADroneShoot) \
	NO_API virtual ~ADroneShoot();


#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_11_PROLOG
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_SPARSE_DATA \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_INCLASS_NO_PURE_DECLS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONEFIGHTER_3_API UClass* StaticClass<class ADroneShoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DroneFighter_3_Source_DroneFighter_3_DroneShoot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
