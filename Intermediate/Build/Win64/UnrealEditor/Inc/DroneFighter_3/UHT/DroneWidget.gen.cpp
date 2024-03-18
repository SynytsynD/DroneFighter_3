// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneFighter_3/DroneWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneWidget() {}
// Cross Module References
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_UDroneWidget();
	DRONEFIGHTER_3_API UClass* Z_Construct_UClass_UDroneWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DroneFighter_3();
// End Cross Module References
	DEFINE_FUNCTION(UDroneWidget::execGetDroneHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDroneHealth();
		P_NATIVE_END;
	}
	void UDroneWidget::StaticRegisterNativesUDroneWidget()
	{
		UClass* Class = UDroneWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDroneHealth", &UDroneWidget::execGetDroneHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics
	{
		struct DroneWidget_eventGetDroneHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DroneWidget_eventGetDroneHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DroneWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDroneWidget, nullptr, "GetDroneHealth", nullptr, nullptr, Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::DroneWidget_eventGetDroneHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::DroneWidget_eventGetDroneHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDroneWidget_GetDroneHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDroneWidget_GetDroneHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroneWidget);
	UClass* Z_Construct_UClass_UDroneWidget_NoRegister()
	{
		return UDroneWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDroneWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDroneWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneFighter_3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDroneWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDroneWidget_GetDroneHealth, "GetDroneHealth" }, // 2202183322
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DroneWidget.h" },
		{ "ModuleRelativePath", "DroneWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDroneWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneWidget_Statics::ClassParams = {
		&UDroneWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDroneWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDroneWidget()
	{
		if (!Z_Registration_Info_UClass_UDroneWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneWidget.OuterSingleton, Z_Construct_UClass_UDroneWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDroneWidget.OuterSingleton;
	}
	template<> DRONEFIGHTER_3_API UClass* StaticClass<UDroneWidget>()
	{
		return UDroneWidget::StaticClass();
	}
	UDroneWidget::UDroneWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneWidget);
	UDroneWidget::~UDroneWidget() {}
	struct Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDroneWidget, UDroneWidget::StaticClass, TEXT("UDroneWidget"), &Z_Registration_Info_UClass_UDroneWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneWidget), 3485077361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_2948194987(TEXT("/Script/DroneFighter_3"),
		Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DroneFighter_3_Source_DroneFighter_3_DroneWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
