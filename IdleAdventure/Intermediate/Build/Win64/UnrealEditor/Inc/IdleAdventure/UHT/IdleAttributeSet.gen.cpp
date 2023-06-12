// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/AbilitySystem/IdleAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleAttributeSet();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UIdleAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	DEFINE_FUNCTION(UIdleAttributeSet::execOnRep_MaxWoodcutExp)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxWoodcutExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxWoodcutExp(Z_Param_Out_OldMaxWoodcutExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIdleAttributeSet::execOnRep_WoodcutExp)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldWoodcutExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WoodcutExp(Z_Param_Out_OldWoodcutExp);
		P_NATIVE_END;
	}
	void UIdleAttributeSet::StaticRegisterNativesUIdleAttributeSet()
	{
		UClass* Class = UIdleAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_MaxWoodcutExp", &UIdleAttributeSet::execOnRep_MaxWoodcutExp },
			{ "OnRep_WoodcutExp", &UIdleAttributeSet::execOnRep_WoodcutExp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics
	{
		struct IdleAttributeSet_eventOnRep_MaxWoodcutExp_Parms
		{
			FGameplayAttributeData OldMaxWoodcutExp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxWoodcutExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxWoodcutExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::NewProp_OldMaxWoodcutExp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::NewProp_OldMaxWoodcutExp = { "OldMaxWoodcutExp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IdleAttributeSet_eventOnRep_MaxWoodcutExp_Parms, OldMaxWoodcutExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::NewProp_OldMaxWoodcutExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::NewProp_OldMaxWoodcutExp_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::NewProp_OldMaxWoodcutExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/IdleAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdleAttributeSet, nullptr, "OnRep_MaxWoodcutExp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::IdleAttributeSet_eventOnRep_MaxWoodcutExp_Parms), Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics
	{
		struct IdleAttributeSet_eventOnRep_WoodcutExp_Parms
		{
			FGameplayAttributeData OldWoodcutExp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldWoodcutExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldWoodcutExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::NewProp_OldWoodcutExp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::NewProp_OldWoodcutExp = { "OldWoodcutExp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IdleAttributeSet_eventOnRep_WoodcutExp_Parms, OldWoodcutExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::NewProp_OldWoodcutExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::NewProp_OldWoodcutExp_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::NewProp_OldWoodcutExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/IdleAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIdleAttributeSet, nullptr, "OnRep_WoodcutExp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::IdleAttributeSet_eventOnRep_WoodcutExp_Parms), Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleAttributeSet);
	UClass* Z_Construct_UClass_UIdleAttributeSet_NoRegister()
	{
		return UIdleAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UIdleAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WoodcutExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WoodcutExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWoodcutExp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxWoodcutExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIdleAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIdleAttributeSet_OnRep_MaxWoodcutExp, "OnRep_MaxWoodcutExp" }, // 3556629305
		{ &Z_Construct_UFunction_UIdleAttributeSet_OnRep_WoodcutExp, "OnRep_WoodcutExp" }, // 3582628292
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/IdleAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/IdleAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_WoodcutExp_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "Public/AbilitySystem/IdleAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_WoodcutExp = { "WoodcutExp", "OnRep_WoodcutExp", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIdleAttributeSet, WoodcutExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_WoodcutExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_WoodcutExp_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_MaxWoodcutExp_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "Public/AbilitySystem/IdleAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_MaxWoodcutExp = { "MaxWoodcutExp", "OnRep_MaxWoodcutExp", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIdleAttributeSet, MaxWoodcutExp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_MaxWoodcutExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_MaxWoodcutExp_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIdleAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_WoodcutExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIdleAttributeSet_Statics::NewProp_MaxWoodcutExp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleAttributeSet_Statics::ClassParams = {
		&UIdleAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIdleAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIdleAttributeSet_Statics::PropPointers),
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

	void UIdleAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WoodcutExp(TEXT("WoodcutExp"));
		static const FName Name_MaxWoodcutExp(TEXT("MaxWoodcutExp"));

		const bool bIsValid = true
			&& Name_WoodcutExp == ClassReps[(int32)ENetFields_Private::WoodcutExp].Property->GetFName()
			&& Name_MaxWoodcutExp == ClassReps[(int32)ENetFields_Private::MaxWoodcutExp].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UIdleAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleAttributeSet);
	UIdleAttributeSet::~UIdleAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIdleAttributeSet, UIdleAttributeSet::StaticClass, TEXT("UIdleAttributeSet"), &Z_Registration_Info_UClass_UIdleAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleAttributeSet), 1458852899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_1351226081(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
