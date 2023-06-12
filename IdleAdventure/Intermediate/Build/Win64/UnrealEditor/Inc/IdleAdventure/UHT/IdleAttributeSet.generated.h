// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/IdleAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef IDLEADVENTURE_IdleAttributeSet_generated_h
#error "IdleAttributeSet.generated.h already included, missing '#pragma once' in IdleAttributeSet.h"
#endif
#define IDLEADVENTURE_IdleAttributeSet_generated_h

#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_SPARSE_DATA
#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxWoodcutExp); \
	DECLARE_FUNCTION(execOnRep_WoodcutExp);


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxWoodcutExp); \
	DECLARE_FUNCTION(execOnRep_WoodcutExp);


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_ACCESSORS
#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIdleAttributeSet(); \
	friend struct Z_Construct_UClass_UIdleAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UIdleAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IdleAdventure"), NO_API) \
	DECLARE_SERIALIZER(UIdleAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WoodcutExp=NETFIELD_REP_START, \
		MaxWoodcutExp, \
		NETFIELD_REP_END=MaxWoodcutExp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UIdleAttributeSet) \
public:


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUIdleAttributeSet(); \
	friend struct Z_Construct_UClass_UIdleAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UIdleAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IdleAdventure"), NO_API) \
	DECLARE_SERIALIZER(UIdleAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WoodcutExp=NETFIELD_REP_START, \
		MaxWoodcutExp, \
		NETFIELD_REP_END=MaxWoodcutExp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UIdleAttributeSet) \
public:


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIdleAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIdleAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIdleAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIdleAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIdleAttributeSet(UIdleAttributeSet&&); \
	NO_API UIdleAttributeSet(const UIdleAttributeSet&); \
public: \
	NO_API virtual ~UIdleAttributeSet();


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIdleAttributeSet(UIdleAttributeSet&&); \
	NO_API UIdleAttributeSet(const UIdleAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIdleAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIdleAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIdleAttributeSet) \
	NO_API virtual ~UIdleAttributeSet();


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_16_PROLOG
#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_SPARSE_DATA \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_RPC_WRAPPERS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_ACCESSORS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_INCLASS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_SPARSE_DATA \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_ACCESSORS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IDLEADVENTURE_API UClass* StaticClass<class UIdleAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_AbilitySystem_IdleAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
