// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneFighter_3/Drone_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrone_GameMode() {}
// Cross Module References
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADrone_GameMode();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADrone_GameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DroneFighter_3();
// End Cross Module References
	void ADrone_GameMode::StaticRegisterNativesADrone_GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrone_GameMode);
	UClass* Z_Construct_UClass_ADrone_GameMode_NoRegister()
	{
		return ADrone_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADrone_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrone_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneFighter_3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrone_GameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Drone_GameMode.h" },
		{ "ModuleRelativePath", "Drone_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrone_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrone_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrone_GameMode_Statics::ClassParams = {
		&ADrone_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrone_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrone_GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADrone_GameMode()
	{
		if (!Z_Registration_Info_UClass_ADrone_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrone_GameMode.OuterSingleton, Z_Construct_UClass_ADrone_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrone_GameMode.OuterSingleton;
	}
	template<> DRONEFIGHTER_3_API UClass* StaticClass<ADrone_GameMode>()
	{
		return ADrone_GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrone_GameMode);
	ADrone_GameMode::~ADrone_GameMode() {}
	struct Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrone_GameMode, ADrone_GameMode::StaticClass, TEXT("ADrone_GameMode"), &Z_Registration_Info_UClass_ADrone_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrone_GameMode), 2966510890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_GameMode_h_2104862734(TEXT("/Script/DroneFighter_3"),
		Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_Drone_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
