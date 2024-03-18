// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneFighter_3/EnemyDroneAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyDroneAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_AEnemyDroneAIController();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_AEnemyDroneAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneFighter_3();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyDroneAIController::execRandomPatrol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomPatrol();
		P_NATIVE_END;
	}
	void AEnemyDroneAIController::StaticRegisterNativesAEnemyDroneAIController()
	{
		UClass* Class = AEnemyDroneAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RandomPatrol", &AEnemyDroneAIController::execRandomPatrol },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyDroneAIController_RandomPatrol_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyDroneAIController_RandomPatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyDroneAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyDroneAIController_RandomPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyDroneAIController, nullptr, "RandomPatrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyDroneAIController_RandomPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyDroneAIController_RandomPatrol_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyDroneAIController_RandomPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyDroneAIController_RandomPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyDroneAIController);
	UClass* Z_Construct_UClass_AEnemyDroneAIController_NoRegister()
	{
		return AEnemyDroneAIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyDroneAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyDroneAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneFighter_3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDroneAIController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyDroneAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyDroneAIController_RandomPatrol, "RandomPatrol" }, // 2531622626
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDroneAIController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDroneAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyDroneAIController.h" },
		{ "ModuleRelativePath", "EnemyDroneAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyDroneAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyDroneAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyDroneAIController_Statics::ClassParams = {
		&AEnemyDroneAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDroneAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyDroneAIController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemyDroneAIController()
	{
		if (!Z_Registration_Info_UClass_AEnemyDroneAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyDroneAIController.OuterSingleton, Z_Construct_UClass_AEnemyDroneAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyDroneAIController.OuterSingleton;
	}
	template<> DRONEFIGHTER_3_API UClass* StaticClass<AEnemyDroneAIController>()
	{
		return AEnemyDroneAIController::StaticClass();
	}
	AEnemyDroneAIController::AEnemyDroneAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyDroneAIController);
	AEnemyDroneAIController::~AEnemyDroneAIController() {}
	struct Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDroneAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDroneAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyDroneAIController, AEnemyDroneAIController::StaticClass, TEXT("AEnemyDroneAIController"), &Z_Registration_Info_UClass_AEnemyDroneAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyDroneAIController), 1060504963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDroneAIController_h_719034362(TEXT("/Script/DroneFighter_3"),
		Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDroneAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_EnemyDroneAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
