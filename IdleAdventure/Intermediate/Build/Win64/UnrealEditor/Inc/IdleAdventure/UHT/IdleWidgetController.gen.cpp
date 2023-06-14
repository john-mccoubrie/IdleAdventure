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
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleWidgetController();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleWidgetController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	void UIdleWidgetController::StaticRegisterNativesUIdleWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleWidgetController);
	UClass* Z_Construct_UClass_UIdleWidgetController_NoRegister()
	{
		return UIdleWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UIdleWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleWidgetController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/IdleWidgetController.h" },
		{ "ModuleRelativePath", "Public/UI/IdleWidgetController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleWidgetController_Statics::ClassParams = {
		&UIdleWidgetController::StaticClass,
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
		0x001000A0u,
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIdleWidgetController, UIdleWidgetController::StaticClass, TEXT("UIdleWidgetController"), &Z_Registration_Info_UClass_UIdleWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleWidgetController), 103694075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_3367900721(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_UI_IdleWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
