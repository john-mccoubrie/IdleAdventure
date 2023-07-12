// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/UI/HUD/IdleHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdleHUD();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdleHUD_NoRegister();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleUserWidget_NoRegister();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	void AIdleHUD::StaticRegisterNativesAIdleHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIdleHUD);
	UClass* Z_Construct_UClass_AIdleHUD_NoRegister()
	{
		return AIdleHUD::StaticClass();
	}
	struct Z_Construct_UClass_AIdleHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetControllerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIdleHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdleHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/IdleHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/IdleHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/IdleHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIdleHUD, OverlayWidget), Z_Construct_UClass_UIdleUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "IdleHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/IdleHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIdleHUD, OverlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UIdleUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/IdleHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetController = { "OverlayWidgetController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIdleHUD, OverlayWidgetController), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData[] = {
		{ "Category", "IdleHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/IdleHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetControllerClass = { "OverlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIdleHUD, OverlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIdleHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIdleHUD_Statics::NewProp_OverlayWidgetControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIdleHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIdleHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIdleHUD_Statics::ClassParams = {
		&AIdleHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIdleHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIdleHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIdleHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIdleHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIdleHUD()
	{
		if (!Z_Registration_Info_UClass_AIdleHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIdleHUD.OuterSingleton, Z_Construct_UClass_AIdleHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIdleHUD.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<AIdleHUD>()
	{
		return AIdleHUD::StaticClass();
	}
	AIdleHUD::AIdleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIdleHUD);
	AIdleHUD::~AIdleHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_HUD_IdleHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_HUD_IdleHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIdleHUD, AIdleHUD::StaticClass, TEXT("AIdleHUD"), &Z_Registration_Info_UClass_AIdleHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIdleHUD), 931835683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_HUD_IdleHUD_h_2741010801(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_HUD_IdleHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_HUD_IdleHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
