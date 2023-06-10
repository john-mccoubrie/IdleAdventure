// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/Player/IdlePlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdlePlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdlePlayerState();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_AIdlePlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	void AIdlePlayerState::StaticRegisterNativesAIdlePlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIdlePlayerState);
	UClass* Z_Construct_UClass_AIdlePlayerState_NoRegister()
	{
		return AIdlePlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AIdlePlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIdlePlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdlePlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/IdlePlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/IdlePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIdlePlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIdlePlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIdlePlayerState_Statics::ClassParams = {
		&AIdlePlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIdlePlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIdlePlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIdlePlayerState()
	{
		if (!Z_Registration_Info_UClass_AIdlePlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIdlePlayerState.OuterSingleton, Z_Construct_UClass_AIdlePlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIdlePlayerState.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<AIdlePlayerState>()
	{
		return AIdlePlayerState::StaticClass();
	}
	AIdlePlayerState::AIdlePlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIdlePlayerState);
	AIdlePlayerState::~AIdlePlayerState() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIdlePlayerState, AIdlePlayerState::StaticClass, TEXT("AIdlePlayerState"), &Z_Registration_Info_UClass_AIdlePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIdlePlayerState), 4164440429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerState_h_2770324434(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Player_IdlePlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
