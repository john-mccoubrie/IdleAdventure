// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleAdventure_init() {}
	IDLEADVENTURE_API UFunction* Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature();
	IDLEADVENTURE_API UFunction* Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IdleAdventure;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IdleAdventure()
	{
		if (!Z_Registration_Info_UPackage__Script_IdleAdventure.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_IdleAdventure_OnEXPChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IdleAdventure_OnMaxEXPChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IdleAdventure",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x08D02FBE,
				0x24E9D8E6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IdleAdventure.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IdleAdventure.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IdleAdventure(Z_Construct_UPackage__Script_IdleAdventure, TEXT("/Script/IdleAdventure"), Z_Registration_Info_UPackage__Script_IdleAdventure, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x08D02FBE, 0x24E9D8E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
