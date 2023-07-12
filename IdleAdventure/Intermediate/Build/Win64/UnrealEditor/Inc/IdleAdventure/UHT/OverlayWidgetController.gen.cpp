// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/UI/WidgetController/OverlayWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayWidgetController() {}
// Cross Module References
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleWidgetController();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UOverlayWidgetController();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	IDLEADVENTURE_API UFunction* Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature();
	IDLEADVENTURE_API UFunction* Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics
	{
		struct _Script_IdleAdventure_eventOnEXPChangedSignature_Parms
		{
			float NewEXP;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewEXP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::NewProp_NewEXP = { "NewEXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_IdleAdventure_eventOnEXPChangedSignature_Parms, NewEXP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::NewProp_NewEXP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IdleAdventure, nullptr, "OnEXPChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::_Script_IdleAdventure_eventOnEXPChangedSignature_Parms), Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEXPChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEXPChangedSignature, float NewEXP)
{
	struct _Script_IdleAdventure_eventOnEXPChangedSignature_Parms
	{
		float NewEXP;
	};
	_Script_IdleAdventure_eventOnEXPChangedSignature_Parms Parms;
	Parms.NewEXP=NewEXP;
	OnEXPChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics
	{
		struct _Script_IdleAdventure_eventOnMaxEXPChangedSignature_Parms
		{
			float NewMaxEXP;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxEXP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::NewProp_NewMaxEXP = { "NewMaxEXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_IdleAdventure_eventOnMaxEXPChangedSignature_Parms, NewMaxEXP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::NewProp_NewMaxEXP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IdleAdventure, nullptr, "OnMaxEXPChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::_Script_IdleAdventure_eventOnMaxEXPChangedSignature_Parms), Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxEXPChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxEXPChangedSignature, float NewMaxEXP)
{
	struct _Script_IdleAdventure_eventOnMaxEXPChangedSignature_Parms
	{
		float NewMaxEXP;
	};
	_Script_IdleAdventure_eventOnMaxEXPChangedSignature_Parms Parms;
	Parms.NewMaxEXP=NewMaxEXP;
	OnMaxEXPChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UOverlayWidgetController::StaticRegisterNativesUOverlayWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlayWidgetController);
	UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister()
	{
		return UOverlayWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UOverlayWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEXPChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEXPChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxEXPChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxEXPChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIdleWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/WidgetController/OverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnEXPChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnEXPChanged = { "OnEXPChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOverlayWidgetController, OnEXPChanged), Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnEXPChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnEXPChanged_MetaData)) }; // 2821658415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxEXPChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxEXPChanged = { "OnMaxEXPChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOverlayWidgetController, OnMaxEXPChanged), Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxEXPChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxEXPChanged_MetaData)) }; // 576950600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnEXPChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxEXPChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlayWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams = {
		&UOverlayWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverlayWidgetController()
	{
		if (!Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<UOverlayWidgetController>()
	{
		return UOverlayWidgetController::StaticClass();
	}
	UOverlayWidgetController::UOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayWidgetController);
	UOverlayWidgetController::~UOverlayWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_WidgetController_OverlayWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_WidgetController_OverlayWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidgetController, UOverlayWidgetController::StaticClass, TEXT("UOverlayWidgetController"), &Z_Registration_Info_UClass_UOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidgetController), 2107095506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_WidgetController_OverlayWidgetController_h_673233580(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_WidgetController_OverlayWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_WidgetController_OverlayWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
