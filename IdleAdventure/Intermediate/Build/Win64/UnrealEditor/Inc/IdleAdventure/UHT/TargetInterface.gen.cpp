// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/Interact/TargetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UTargetInterface();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UTargetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	void UTargetInterface::StaticRegisterNativesUTargetInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetInterface);
	UClass* Z_Construct_UClass_UTargetInterface_NoRegister()
	{
		return UTargetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTargetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact/TargetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetInterface_Statics::ClassParams = {
		&UTargetInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetInterface()
	{
		if (!Z_Registration_Info_UClass_UTargetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetInterface.OuterSingleton, Z_Construct_UClass_UTargetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetInterface.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<UTargetInterface>()
	{
		return UTargetInterface::StaticClass();
	}
	UTargetInterface::UTargetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetInterface);
	UTargetInterface::~UTargetInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TargetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TargetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetInterface, UTargetInterface::StaticClass, TEXT("UTargetInterface"), &Z_Registration_Info_UClass_UTargetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetInterface), 2487921588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TargetInterface_h_1881159156(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TargetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TargetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
