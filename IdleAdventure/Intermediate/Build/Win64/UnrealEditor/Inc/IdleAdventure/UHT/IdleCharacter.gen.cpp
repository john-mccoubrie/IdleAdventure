// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/Character/IdleCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleCharacter() {}
// Cross Module References
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdleCharacter();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdleCharacter_NoRegister();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdleCharacterBase();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	void AIdleCharacter::StaticRegisterNativesAIdleCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIdleCharacter);
	UClass* Z_Construct_UClass_AIdleCharacter_NoRegister()
	{
		return AIdleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AIdleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIdleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIdleCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdleCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/IdleCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/IdleCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIdleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIdleCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIdleCharacter_Statics::ClassParams = {
		&AIdleCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIdleCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIdleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIdleCharacter()
	{
		if (!Z_Registration_Info_UClass_AIdleCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIdleCharacter.OuterSingleton, Z_Construct_UClass_AIdleCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIdleCharacter.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<AIdleCharacter>()
	{
		return AIdleCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIdleCharacter);
	AIdleCharacter::~AIdleCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Character_IdleCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Character_IdleCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIdleCharacter, AIdleCharacter::StaticClass, TEXT("AIdleCharacter"), &Z_Registration_Info_UClass_AIdleCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIdleCharacter), 2894172524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Character_IdleCharacter_h_3727362756(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Character_IdleCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Character_IdleCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
