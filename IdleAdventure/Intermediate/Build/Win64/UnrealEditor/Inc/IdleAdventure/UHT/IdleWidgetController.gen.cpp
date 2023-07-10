// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/UI/IdleWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleWidgetController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleWidgetController();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleWidgetController_NoRegister();
	IDLEADVENTURE_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetControllerParams;
class UScriptStruct* FWidgetControllerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetControllerParams, (UObject*)Z_Construct_UPackage__Script_IdleAdventure(), TEXT("WidgetControllerParams"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton;
}
template<> IDLEADVENTURE_API UScriptStruct* StaticStruct<FWidgetControllerParams>()
{
	return FWidgetControllerParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetControllerParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetControllerParams, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetControllerParams, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetControllerParams, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetControllerParams, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
		nullptr,
		&NewStructOps,
		"WidgetControllerParams",
		sizeof(FWidgetControllerParams),
		alignof(FWidgetControllerParams),
		Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UIdleWidgetController::execSetWidgetControllerParams)
	{
		P_GET_STRUCT_REF(FWidgetControllerParams,Z_Param_Out_WCParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetControllerParams(Z_Param_Out_WCParams);
		P_NATIVE_END;
	}
	void UIdleWidgetController::StaticRegisterNativesUIdleWidgetController()
	{
		UClass* Class = UIdleWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetControllerParams", &UIdleWidgetController::execSetWidgetControllerParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics
	{
		struct IdleWidgetController_eventSetWidgetControllerParams_Parms
		{
			FWidgetControllerParams WCParams;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WCParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WCParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams = { "WCParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IdleWidgetController_eventSetWidgetControllerParams_Parms, WCParams), Z_Construct_UScriptStruct_FWidgetControllerParams, METADATA_PARAMS(Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams_MetaData)) }; // 438774481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdleWidgetController, nullptr, "SetWidgetControllerParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::IdleWidgetController_eventSetWidgetControllerParams_Parms), Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleWidgetController);
	UClass* Z_Construct_UClass_UIdleWidgetController_NoRegister()
	{
		return UIdleWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UIdleWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIdleWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIdleWidgetController_SetWidgetControllerParams, "SetWidgetControllerParams" }, // 2128562536
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleWidgetController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/IdleWidgetController.h" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIdleWidgetController, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIdleWidgetController, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIdleWidgetController, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIdleWidgetController, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIdleWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdleWidgetController_Statics::NewProp_AttributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleWidgetController_Statics::ClassParams = {
		&UIdleWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIdleWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIdleWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIdleWidgetController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleWidgetController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIdleWidgetController()
	{
		if (!Z_Registration_Info_UClass_UIdleWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIdleWidgetController.OuterSingleton, Z_Construct_UClass_UIdleWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIdleWidgetController.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<UIdleWidgetController>()
	{
		return UIdleWidgetController::StaticClass();
	}
	UIdleWidgetController::UIdleWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleWidgetController);
	UIdleWidgetController::~UIdleWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ScriptStructInfo[] = {
		{ FWidgetControllerParams::StaticStruct, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps, TEXT("WidgetControllerParams"), &Z_Registration_Info_UScriptStruct_WidgetControllerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetControllerParams), 438774481U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIdleWidgetController, UIdleWidgetController::StaticClass, TEXT("UIdleWidgetController"), &Z_Registration_Info_UClass_UIdleWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleWidgetController), 580625349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_2798758679(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
