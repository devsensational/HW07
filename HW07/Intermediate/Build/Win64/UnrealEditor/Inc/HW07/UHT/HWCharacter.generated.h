// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HWCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef HW07_HWCharacter_generated_h
#error "HWCharacter.generated.h already included, missing '#pragma once' in HWCharacter.h"
#endif
#define HW07_HWCharacter_generated_h

#define FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMove);


#define FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWCharacter(); \
	friend struct Z_Construct_UClass_AHWCharacter_Statics; \
public: \
	DECLARE_CLASS(AHWCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW07"), NO_API) \
	DECLARE_SERIALIZER(AHWCharacter)


#define FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWCharacter(AHWCharacter&&); \
	AHWCharacter(const AHWCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHWCharacter) \
	NO_API virtual ~AHWCharacter();


#define FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h_14_PROLOG
#define FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW07_API UClass* StaticClass<class AHWCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_HW07_HW07_Source_HW07_HWCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
