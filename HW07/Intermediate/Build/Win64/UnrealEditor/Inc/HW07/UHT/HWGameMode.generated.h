// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HWGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW07_HWGameMode_generated_h
#error "HWGameMode.generated.h already included, missing '#pragma once' in HWGameMode.h"
#endif
#define HW07_HWGameMode_generated_h

#define FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWGameMode(); \
	friend struct Z_Construct_UClass_AHWGameMode_Statics; \
public: \
	DECLARE_CLASS(AHWGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW07"), NO_API) \
	DECLARE_SERIALIZER(AHWGameMode)


#define FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHWGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWGameMode(AHWGameMode&&); \
	AHWGameMode(const AHWGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHWGameMode) \
	NO_API virtual ~AHWGameMode();


#define FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_12_PROLOG
#define FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW07_API UClass* StaticClass<class AHWGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
