// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEFIGHTER_3_Drone_generated_h
#error "Drone.generated.h already included, missing '#pragma once' in Drone.h"
#endif
#define DRONEFIGHTER_3_Drone_generated_h

#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_SPARSE_DATA
#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrone(); \
	friend struct Z_Construct_UClass_ADrone_Statics; \
public: \
	DECLARE_CLASS(ADrone, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneFighter_3"), NO_API) \
	DECLARE_SERIALIZER(ADrone)


#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrone(ADrone&&); \
	NO_API ADrone(const ADrone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrone) \
	NO_API virtual ~ADrone();


#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_13_PROLOG
#define FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_SPARSE_DATA \
	FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_INCLASS_NO_PURE_DECLS \
	FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONEFIGHTER_3_API UClass* StaticClass<class ADrone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DroneFighter_3_Source_DroneFighter_3_Drone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
