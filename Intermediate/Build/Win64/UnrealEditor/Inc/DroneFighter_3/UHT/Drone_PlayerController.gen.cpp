// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneFighter_3/Drone_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrone_PlayerController() {}
// Cross Module References
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADrone_PlayerController();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADrone_PlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneFighter_3();
// End Cross Module References
	void ADrone_PlayerController::StaticRegisterNativesADrone_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrone_PlayerController);
	UClass* Z_Construct_UClass_ADrone_PlayerController_NoRegister()
	{
		return ADrone_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADrone_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pawnMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotateAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rotateAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_freeFlyAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_freeFlyAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shootAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_shootAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrone_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneFighter_3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_PlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Drone_PlayerController.h" },
		{ "ModuleRelativePath", "Drone_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_pawnMappingContext_MetaData[] = {
		{ "ModuleRelativePath", "Drone_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_pawnMappingContext = { "pawnMappingContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone_PlayerController, pawnMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_pawnMappingContext_MetaData), Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_pawnMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_moveAction_MetaData[] = {
		{ "ModuleRelativePath", "Drone_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone_PlayerController, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_moveAction_MetaData), Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_moveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_rotateAction_MetaData[] = {
		{ "ModuleRelativePath", "Drone_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_rotateAction = { "rotateAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone_PlayerController, rotateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_rotateAction_MetaData), Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_rotateAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_freeFlyAction_MetaData[] = {
		{ "ModuleRelativePath", "Drone_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_freeFlyAction = { "freeFlyAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone_PlayerController, freeFlyAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_freeFlyAction_MetaData), Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_freeFlyAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_shootAction_MetaData[] = {
		{ "ModuleRelativePath", "Drone_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_shootAction = { "shootAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrone_PlayerController, shootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_shootAction_MetaData), Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_shootAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrone_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_pawnMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_moveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_rotateAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_freeFlyAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrone_PlayerController_Statics::NewProp_shootAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrone_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrone_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrone_PlayerController_Statics::ClassParams = {
		&ADrone_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADrone_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrone_PlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_PlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADrone_PlayerController()
	{
		if (!Z_Registration_Info_UClass_ADrone_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrone_PlayerController.OuterSingleton, Z_Construct_UClass_ADrone_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrone_PlayerController.OuterSingleton;
	}
	template<> DRONEFIGHTER_3_API UClass* StaticClass<ADrone_PlayerController>()
	{
		return ADrone_PlayerController::StaticClass();
	}
	ADrone_PlayerController::ADrone_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrone_PlayerController);
	ADrone_PlayerController::~ADrone_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrone_PlayerController, ADrone_PlayerController::StaticClass, TEXT("ADrone_PlayerController"), &Z_Registration_Info_UClass_ADrone_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrone_PlayerController), 2120025725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_PlayerController_h_3356712492(TEXT("/Script/DroneFighter_3"),
		Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
