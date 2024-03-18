// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneFighter_3/Drone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrone() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADrone();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADrone_NoRegister();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADroneShoot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneFighter_3();
// End Cross Module References
	DEFINE_FUNCTION(ADrone::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void ADrone::StaticRegisterNativesADrone()
	{
		UClass* Class = ADrone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ADrone::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADrone_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrone_Fire_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function that handles firing projectiles.\n" },
#endif
		{ "ModuleRelativePath", "Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that handles firing projectiles." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrone_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrone, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrone_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrone_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADrone_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrone_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrone);
	UClass* Z_Construct_UClass_ADrone_NoRegister()
	{
		return ADrone::StaticClass();
	}
	struct Z_Construct_UClass_ADrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_springArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotateScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotateScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreeFly_MetaData[];
#endif
		static void NewProp_bFreeFly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreeFly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneFighter_3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADrone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADrone_Fire, "Fire" }, // 4138793606
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Drone.h" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_collision_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, collision), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_collision_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_collision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_body_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_body_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_body_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_head_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, head), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_head_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_head_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_springArm_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_springArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_camera_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_movement_MetaData[] = {
		{ "Category", "Drone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_movement = { "movement", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_movement_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_movement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gun muzzle offset from the camera location.\n" },
#endif
		{ "ModuleRelativePath", "Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun muzzle offset from the camera location." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_MuzzleOffset_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_MuzzleOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_moveScale_MetaData[] = {
		{ "Category", "Drone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//TSubclassOf<class ADroneShoot> shootClass;\n" },
#endif
		{ "ModuleRelativePath", "Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nTSubclassOf<class ADroneShoot> shootClass;" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_moveScale = { "moveScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, moveScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_moveScale_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_moveScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_rotateScale_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_rotateScale = { "rotateScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, rotateScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_rotateScale_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_rotateScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_bFreeFly_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	void Z_Construct_UClass_ADrone_Statics::NewProp_bFreeFly_SetBit(void* Obj)
	{
		((ADrone*)Obj)->bFreeFly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_bFreeFly = { "bFreeFly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ADrone), &Z_Construct_UClass_ADrone_Statics::NewProp_bFreeFly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_bFreeFly_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_bFreeFly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Drone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_health_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn.\n" },
#endif
		{ "ModuleRelativePath", "Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADroneShoot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_collision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_springArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_moveScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_rotateScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_bFreeFly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrone_Statics::ClassParams = {
		&ADrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADrone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrone_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADrone()
	{
		if (!Z_Registration_Info_UClass_ADrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrone.OuterSingleton, Z_Construct_UClass_ADrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrone.OuterSingleton;
	}
	template<> DRONEFIGHTER_3_API UClass* StaticClass<ADrone>()
	{
		return ADrone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrone);
	ADrone::~ADrone() {}
	struct Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrone, ADrone::StaticClass, TEXT("ADrone"), &Z_Registration_Info_UClass_ADrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrone), 1248622355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_1700023538(TEXT("/Script/DroneFighter_3"),
		Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
