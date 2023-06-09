// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdleAdventure/Public/Interact/TreeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_ATreeBase();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_ATreeBase_NoRegister();
	IDLEADVENTURE_API UClass* Z_Construct_UClass_UTargetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IdleAdventure();
// End Cross Module References
	void ATreeBase::StaticRegisterNativesATreeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATreeBase);
	UClass* Z_Construct_UClass_ATreeBase_NoRegister()
	{
		return ATreeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATreeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreeMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IdleAdventure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interact/TreeBase.h" },
		{ "ModuleRelativePath", "Public/Interact/TreeBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeBase_Statics::NewProp_TreeMesh_MetaData[] = {
		{ "Category", "TreeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interact/TreeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreeBase_Statics::NewProp_TreeMesh = { "TreeMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreeBase, TreeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreeBase_Statics::NewProp_TreeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeBase_Statics::NewProp_TreeMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreeBase_Statics::NewProp_TreeMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATreeBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ATreeBase, ITargetInterface), false },  // 2487921588
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATreeBase_Statics::ClassParams = {
		&ATreeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATreeBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATreeBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATreeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreeBase()
	{
		if (!Z_Registration_Info_UClass_ATreeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATreeBase.OuterSingleton, Z_Construct_UClass_ATreeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATreeBase.OuterSingleton;
	}
	template<> IDLEADVENTURE_API UClass* StaticClass<ATreeBase>()
	{
		return ATreeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreeBase);
	ATreeBase::~ATreeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TreeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TreeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATreeBase, ATreeBase::StaticClass, TEXT("ATreeBase"), &Z_Registration_Info_UClass_ATreeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATreeBase), 3661009446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TreeBase_h_424786241(TEXT("/Script/IdleAdventure"),
		Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TreeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Interact_TreeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
