// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/Player/IdlePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdlePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdlePlayerController();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdlePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	DEFINE_FUNCTION(AIdlePlayerController::execGetLog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLog();
		P_NATIVE_END;
	}
	void AIdlePlayerController::StaticRegisterNativesAIdlePlayerController()
	{
		UClass* Class = AIdlePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLog", &AIdlePlayerController::execGetLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIdlePlayerController_GetLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIdlePlayerController_GetLog_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//timer handle\n" },
		{ "ModuleRelativePath", "Public/Player/IdlePlayerController.h" },
		{ "ToolTip", "timer handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIdlePlayerController_GetLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIdlePlayerController, nullptr, "GetLog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIdlePlayerController_GetLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIdlePlayerController_GetLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIdlePlayerController_GetLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIdlePlayerController_GetLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIdlePlayerController);
	UClass* Z_Construct_UClass_AIdlePlayerController_NoRegister()
	{
		return AIdlePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AIdlePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IdleContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIdlePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIdlePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIdlePlayerController_GetLog, "GetLog" }, // 63085697
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdlePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/IdlePlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/IdlePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_IdleContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/IdlePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_IdleContext = { "IdleContext", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIdlePlayerController, IdleContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_IdleContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_IdleContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/IdlePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIdlePlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_ClickAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/IdlePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIdlePlayerController, ClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_ClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_ClickAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIdlePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_IdleContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIdlePlayerController_Statics::NewProp_ClickAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIdlePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIdlePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIdlePlayerController_Statics::ClassParams = {
		&AIdlePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AIdlePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AIdlePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIdlePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIdlePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIdlePlayerController()
	{
		if (!Z_Registration_Info_UClass_AIdlePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIdlePlayerController.OuterSingleton, Z_Construct_UClass_AIdlePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIdlePlayerController.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<AIdlePlayerController>()
	{
		return AIdlePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIdlePlayerController);
	AIdlePlayerController::~AIdlePlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIdlePlayerController, AIdlePlayerController::StaticClass, TEXT("AIdlePlayerController"), &Z_Registration_Info_UClass_AIdlePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIdlePlayerController), 1496544070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerController_h_3203308859(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
