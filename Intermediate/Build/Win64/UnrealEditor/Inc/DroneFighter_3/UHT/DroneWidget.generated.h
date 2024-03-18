// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DroneWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONEFIGHTER_3_DroneWidget_generated_h
#error "DroneWidget.generated.h already included, missing '#pragma once' in DroneWidget.h"
#endif
#define DRONEFIGHTER_3_DroneWidget_generated_h

#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_SPARSE_DATA
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDroneHealth);


#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_ACCESSORS
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDroneWidget(); \
	friend struct Z_Construct_UClass_UDroneWidget_Statics; \
public: \
	DECLARE_CLASS(UDroneWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DroneFighter_3"), NO_API) \
	DECLARE_SERIALIZER(UDroneWidget)


#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDroneWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDroneWidget(UDroneWidget&&); \
	NO_API UDroneWidget(const UDroneWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDroneWidget) \
	NO_API virtual ~UDroneWidget();


#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_12_PROLOG
#define FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_SPARSE_DATA \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_ACCESSORS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONEFIGHTER_3_API UClass* StaticClass<class UDroneWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
