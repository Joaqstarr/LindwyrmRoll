// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPActionRotator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UFCTweenBPActionRotator;
enum class EFCEase : uint8;
#ifdef FCTWEEN_FCTweenBPActionRotator_generated_h
#error "FCTweenBPActionRotator.generated.h already included, missing '#pragma once' in FCTweenBPActionRotator.h"
#endif
#define FCTWEEN_FCTweenBPActionRotator_generated_h

#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_9_DELEGATE \
struct _Script_FCTween_eventTweenUpdateRotatorOutputPin_Parms \
{ \
	FRotator Value; \
}; \
static inline void FTweenUpdateRotatorOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdateRotatorOutputPin, FRotator Value) \
{ \
	_Script_FCTween_eventTweenUpdateRotatorOutputPin_Parms Parms; \
	Parms.Value=Value; \
	TweenUpdateRotatorOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_SPARSE_DATA
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTweenRotatorCustomCurve); \
	DECLARE_FUNCTION(execTweenRotator);


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTweenRotatorCustomCurve); \
	DECLARE_FUNCTION(execTweenRotator);


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_ACCESSORS
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionRotator(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionRotator_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPActionRotator, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPActionRotator)


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionRotator(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionRotator_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPActionRotator, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPActionRotator)


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionRotator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionRotator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionRotator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBPActionRotator(UFCTweenBPActionRotator&&); \
	NO_API UFCTweenBPActionRotator(const UFCTweenBPActionRotator&); \
public: \
	NO_API virtual ~UFCTweenBPActionRotator();


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBPActionRotator(UFCTweenBPActionRotator&&); \
	NO_API UFCTweenBPActionRotator(const UFCTweenBPActionRotator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionRotator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionRotator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionRotator) \
	NO_API virtual ~UFCTweenBPActionRotator();


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_11_PROLOG
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_SPARSE_DATA \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_RPC_WRAPPERS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_ACCESSORS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_INCLASS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_SPARSE_DATA \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_ACCESSORS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FCTWEEN_API UClass* StaticClass<class UFCTweenBPActionRotator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
