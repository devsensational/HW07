// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HWCustomCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FInputActionValue;
#ifdef HW07_HWCustomCharacter_generated_h
#error "HWCustomCharacter.generated.h already included, missing '#pragma once' in HWCustomCharacter.h"
#endif
#define HW07_HWCustomCharacter_generated_h

#define FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAltitudeControl); \
	DECLARE_FUNCTION(execRoll); \
	DECLARE_FUNCTION(execSwitchFly); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execPerformGroundTrace); \
	DECLARE_FUNCTION(execCheckGrounded); \
	DECLARE_FUNCTION(execApplyGravity);


#define FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWCustomCharacter(); \
	friend struct Z_Construct_UClass_AHWCustomCharacter_Statics; \
public: \
	DECLARE_CLASS(AHWCustomCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW07"), NO_API) \
	DECLARE_SERIALIZER(AHWCustomCharacter)


#define FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWCustomCharacter(AHWCustomCharacter&&); \
	AHWCustomCharacter(const AHWCustomCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWCustomCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWCustomCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHWCustomCharacter) \
	NO_API virtual ~AHWCustomCharacter();


#define FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_14_PROLOG
#define FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW07_API UClass* StaticClass<class AHWCustomCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
