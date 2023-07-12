// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/UI/IdleUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleUserWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleUserWidget();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	DEFINE_FUNCTION(UIdleUserWidget::execSetWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_InWidgetController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetController(Z_Param_InWidgetController);
		P_NATIVE_END;
	}
	static FName NAME_UIdleUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
	void UIdleUserWidget::WidgetControllerSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIdleUserWidget_WidgetControllerSet),NULL);
	}
	void UIdleUserWidget::StaticRegisterNativesUIdleUserWidget()
	{
		UClass* Class = UIdleUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetController", &UIdleUserWidget::execSetWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics
	{
		struct IdleUserWidget_eventSetWidgetController_Parms
		{
			UObject* InWidgetController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IdleUserWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::NewProp_InWidgetController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/IdleUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdleUserWidget, nullptr, "SetWidgetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::IdleUserWidget_eventSetWidgetController_Parms), Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdleUserWidget_SetWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIdleUserWidget_SetWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIdleUserWidget_WidgetControllerSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/IdleUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdleUserWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdleUserWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdleUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdleUserWidget_WidgetControllerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIdleUserWidget_WidgetControllerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleUserWidget);
	UClass* Z_Construct_UClass_UIdleUserWidget_NoRegister()
	{
		return UIdleUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UIdleUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIdleUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIdleUserWidget_SetWidgetController, "SetWidgetController" }, // 1747546198
		{ &Z_Construct_UFunction_UIdleUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 3752174587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/IdleUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/IdleUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleUserWidget_Statics::NewProp_WidgetController_MetaData[] = {
		{ "Category", "IdleUserWidget" },
		{ "ModuleRelativePath", "Public/UI/IdleUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIdleUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIdleUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIdleUserWidget_Statics::NewProp_WidgetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleUserWidget_Statics::NewProp_WidgetController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIdleUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdleUserWidget_Statics::NewProp_WidgetController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleUserWidget_Statics::ClassParams = {
		&UIdleUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIdleUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIdleUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIdleUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIdleUserWidget()
	{
		if (!Z_Registration_Info_UClass_UIdleUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIdleUserWidget.OuterSingleton, Z_Construct_UClass_UIdleUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIdleUserWidget.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<UIdleUserWidget>()
	{
		return UIdleUserWidget::StaticClass();
	}
	UIdleUserWidget::UIdleUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleUserWidget);
	UIdleUserWidget::~UIdleUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIdleUserWidget, UIdleUserWidget::StaticClass, TEXT("UIdleUserWidget"), &Z_Registration_Info_UClass_UIdleUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleUserWidget), 4003278196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleUserWidget_h_2744472115(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
