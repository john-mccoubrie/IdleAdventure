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
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleUserWidget();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	void UIdleUserWidget::StaticRegisterNativesUIdleUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleUserWidget);
	UClass* Z_Construct_UClass_UIdleUserWidget_NoRegister()
	{
		return UIdleUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UIdleUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/IdleUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/IdleUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleUserWidget_Statics::ClassParams = {
		&UIdleUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_UIdleUserWidget, UIdleUserWidget::StaticClass, TEXT("UIdleUserWidget"), &Z_Registration_Info_UClass_UIdleUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleUserWidget), 1337507846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleUserWidget_h_3622511367(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
