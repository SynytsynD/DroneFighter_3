// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneFighter_3/EnemyDrone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyDrone() {}
// Cross Module References
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADrone();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_AEnemyDrone();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_AEnemyDrone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneFighter_3();
// End Cross Module References
	void AEnemyDrone::StaticRegisterNativesAEnemyDrone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyDrone);
	UClass* Z_Construct_UClass_AEnemyDrone_NoRegister()
	{
		return AEnemyDrone::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyDrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyDrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADrone,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneFighter_3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDrone_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDrone_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyDrone.h" },
		{ "ModuleRelativePath", "EnemyDrone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyDrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyDrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyDrone_Statics::ClassParams = {
		&AEnemyDrone::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDrone_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyDrone_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemyDrone()
	{
		if (!Z_Registration_Info_UClass_AEnemyDrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyDrone.OuterSingleton, Z_Construct_UClass_AEnemyDrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyDrone.OuterSingleton;
	}
	template<> DRONEFIGHTER_3_API UClass* StaticClass<AEnemyDrone>()
	{
		return AEnemyDrone::StaticClass();
	}
	AEnemyDrone::AEnemyDrone() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyDrone);
	AEnemyDrone::~AEnemyDrone() {}
	struct Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDrone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDrone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyDrone, AEnemyDrone::StaticClass, TEXT("AEnemyDrone"), &Z_Registration_Info_UClass_AEnemyDrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyDrone), 3226868624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDrone_h_3593611447(TEXT("/Script/DroneFighter_3"),
		Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDrone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDrone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
