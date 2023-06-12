// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/IdleEffectActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef IDLEADVENTURE_IdleEffectActor_generated_h
#error "IdleEffectActor.generated.h already included, missing '#pragma once' in IdleEffectActor.h"
#endif
#define IDLEADVENTURE_IdleEffectActor_generated_h

#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_SPARSE_DATA
#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_ACCESSORS
#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIdleEffectActor(); \
	friend struct Z_Construct_UClass_AIdleEffectActor_Statics; \
public: \
	DECLARE_CLASS(AIdleEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IdleAdventure"), NO_API) \
	DECLARE_SERIALIZER(AIdleEffectActor)


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAIdleEffectActor(); \
	friend struct Z_Construct_UClass_AIdleEffectActor_Statics; \
public: \
	DECLARE_CLASS(AIdleEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IdleAdventure"), NO_API) \
	DECLARE_SERIALIZER(AIdleEffectActor)


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIdleEffectActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIdleEffectActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIdleEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIdleEffectActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIdleEffectActor(AIdleEffectActor&&); \
	NO_API AIdleEffectActor(const AIdleEffectActor&); \
public: \
	NO_API virtual ~AIdleEffectActor();


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIdleEffectActor(AIdleEffectActor&&); \
	NO_API AIdleEffectActor(const AIdleEffectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIdleEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIdleEffectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIdleEffectActor) \
	NO_API virtual ~AIdleEffectActor();


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_9_PROLOG
#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_SPARSE_DATA \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_RPC_WRAPPERS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_ACCESSORS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_INCLASS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_SPARSE_DATA \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_ACCESSORS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IDLEADVENTURE_API UClass* StaticClass<class AIdleEffectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_John_Documents_GitHub_IdleAdventure_IdleAdventure_Source_IdleAdventure_Public_Actor_IdleEffectActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
