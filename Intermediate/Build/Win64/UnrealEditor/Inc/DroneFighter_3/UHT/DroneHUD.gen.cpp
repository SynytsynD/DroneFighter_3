// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneFighter_3/DroneHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneHUD() {}
// Cross Module References
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADroneHUD();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_ADroneHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneFighter_3();
// End Cross Module References
	void ADroneHUD::StaticRegisterNativesADroneHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADroneHUD);
	UClass* Z_Construct_UClass_ADroneHUD_NoRegister()
	{
		return ADroneHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADroneHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADroneHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneFighter_3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADroneHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DroneHUD.h" },
		{ "ModuleRelativePath", "DroneHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneHUD_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "DroneHUD" },
		{ "ModuleRelativePath", "DroneHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADroneHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADroneHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADroneHUD_Statics::NewProp_CrosshairTexture_MetaData), Z_Construct_UClass_ADroneHUD_Statics::NewProp_CrosshairTexture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADroneHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADroneHUD_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADroneHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADroneHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADroneHUD_Statics::ClassParams = {
		&ADroneHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADroneHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADroneHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADroneHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ADroneHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADroneHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADroneHUD()
	{
		if (!Z_Registration_Info_UClass_ADroneHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADroneHUD.OuterSingleton, Z_Construct_UClass_ADroneHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADroneHUD.OuterSingleton;
	}
	template<> DRONEFIGHTER_3_API UClass* StaticClass<ADroneHUD>()
	{
		return ADroneHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADroneHUD);
	ADroneHUD::~ADroneHUD() {}
	struct Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADroneHUD, ADroneHUD::StaticClass, TEXT("ADroneHUD"), &Z_Registration_Info_UClass_ADroneHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADroneHUD), 1673586825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneHUD_h_2071963303(TEXT("/Script/DroneFighter_3"),
		Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
