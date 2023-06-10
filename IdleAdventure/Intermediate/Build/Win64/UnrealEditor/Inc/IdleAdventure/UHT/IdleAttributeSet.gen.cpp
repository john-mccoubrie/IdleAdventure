// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/AbilitySystem/IdleAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleAttributeSet();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	void UIdleAttributeSet::StaticRegisterNativesUIdleAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleAttributeSet);
	UClass* Z_Construct_UClass_UIdleAttributeSet_NoRegister()
	{
		return UIdleAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UIdleAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/IdleAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/IdleAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleAttributeSet_Statics::ClassParams = {
		&UIdleAttributeSet::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIdleAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIdleAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UIdleAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIdleAttributeSet.OuterSingleton, Z_Construct_UClass_UIdleAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIdleAttributeSet.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<UIdleAttributeSet>()
	{
		return UIdleAttributeSet::StaticClass();
	}
	UIdleAttributeSet::UIdleAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleAttributeSet);
	UIdleAttributeSet::~UIdleAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIdleAttributeSet, UIdleAttributeSet::StaticClass, TEXT("UIdleAttributeSet"), &Z_Registration_Info_UClass_UIdleAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleAttributeSet), 1614087835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_1519575913(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
