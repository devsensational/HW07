// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW07/HWCustomCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWCustomCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
HW07_API UClass* Z_Construct_UClass_AHWCustomCharacter();
HW07_API UClass* Z_Construct_UClass_AHWCustomCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW07();
// End Cross Module References

// Begin Class AHWCustomCharacter Function AltitudeControl
struct Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics
{
	struct HWCustomCharacter_eventAltitudeControl_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWCustomCharacter_eventAltitudeControl_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "AltitudeControl", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::HWCustomCharacter_eventAltitudeControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::HWCustomCharacter_eventAltitudeControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execAltitudeControl)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AltitudeControl(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function AltitudeControl

// Begin Class AHWCustomCharacter Function ApplyGravity
struct Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics
{
	struct HWCustomCharacter_eventApplyGravity_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWCustomCharacter_eventApplyGravity_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "ApplyGravity", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::HWCustomCharacter_eventApplyGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::HWCustomCharacter_eventApplyGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execApplyGravity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyGravity(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function ApplyGravity

// Begin Class AHWCustomCharacter Function CheckGrounded
struct Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics
{
	struct HWCustomCharacter_eventCheckGrounded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb0\x94\xeb\x8b\xa5 \xec\xb2\xb4\xed\x81\xac \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\x94\xeb\x8b\xa5 \xec\xb2\xb4\xed\x81\xac \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HWCustomCharacter_eventCheckGrounded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HWCustomCharacter_eventCheckGrounded_Parms), &Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "CheckGrounded", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::HWCustomCharacter_eventCheckGrounded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::HWCustomCharacter_eventCheckGrounded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execCheckGrounded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckGrounded();
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function CheckGrounded

// Begin Class AHWCustomCharacter Function Look
struct Z_Construct_UFunction_AHWCustomCharacter_Look_Statics
{
	struct HWCustomCharacter_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWCustomCharacter_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::HWCustomCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::HWCustomCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function Look

// Begin Class AHWCustomCharacter Function Move
struct Z_Construct_UFunction_AHWCustomCharacter_Move_Statics
{
	struct HWCustomCharacter_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\x88\xec\x9a\xb0\xec\x8a\xa4 \xea\xb0\x90\xeb\x8f\x84 \xec\xa1\xb0\xec\xa0\x88\n" },
#endif
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xec\x9a\xb0\xec\x8a\xa4 \xea\xb0\x90\xeb\x8f\x84 \xec\xa1\xb0\xec\xa0\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWCustomCharacter_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::HWCustomCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::HWCustomCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function Move

// Begin Class AHWCustomCharacter Function PerformGroundTrace
struct Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics
{
	struct HWCustomCharacter_eventPerformGroundTrace_Parms
	{
		FHitResult HitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWCustomCharacter_eventPerformGroundTrace_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HWCustomCharacter_eventPerformGroundTrace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HWCustomCharacter_eventPerformGroundTrace_Parms), &Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "PerformGroundTrace", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::HWCustomCharacter_eventPerformGroundTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::HWCustomCharacter_eventPerformGroundTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execPerformGroundTrace)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PerformGroundTrace(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function PerformGroundTrace

// Begin Class AHWCustomCharacter Function Roll
struct Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics
{
	struct HWCustomCharacter_eventRoll_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWCustomCharacter_eventRoll_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "Roll", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::HWCustomCharacter_eventRoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::HWCustomCharacter_eventRoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_Roll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_Roll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execRoll)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Roll(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function Roll

// Begin Class AHWCustomCharacter Function StartJump
struct Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics
{
	struct HWCustomCharacter_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWCustomCharacter_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::HWCustomCharacter_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::HWCustomCharacter_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function StartJump

// Begin Class AHWCustomCharacter Function StopJump
struct Z_Construct_UFunction_AHWCustomCharacter_StopJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "StopJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_StopJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHWCustomCharacter_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execStopJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump();
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function StopJump

// Begin Class AHWCustomCharacter Function SwitchFly
struct Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics
{
	struct HWCustomCharacter_eventSwitchFly_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWCustomCharacter_eventSwitchFly_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWCustomCharacter, nullptr, "SwitchFly", nullptr, nullptr, Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::HWCustomCharacter_eventSwitchFly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::HWCustomCharacter_eventSwitchFly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWCustomCharacter_SwitchFly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWCustomCharacter_SwitchFly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWCustomCharacter::execSwitchFly)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchFly(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AHWCustomCharacter Function SwitchFly

// Begin Class AHWCustomCharacter
void AHWCustomCharacter::StaticRegisterNativesAHWCustomCharacter()
{
	UClass* Class = AHWCustomCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AltitudeControl", &AHWCustomCharacter::execAltitudeControl },
		{ "ApplyGravity", &AHWCustomCharacter::execApplyGravity },
		{ "CheckGrounded", &AHWCustomCharacter::execCheckGrounded },
		{ "Look", &AHWCustomCharacter::execLook },
		{ "Move", &AHWCustomCharacter::execMove },
		{ "PerformGroundTrace", &AHWCustomCharacter::execPerformGroundTrace },
		{ "Roll", &AHWCustomCharacter::execRoll },
		{ "StartJump", &AHWCustomCharacter::execStartJump },
		{ "StopJump", &AHWCustomCharacter::execStopJump },
		{ "SwitchFly", &AHWCustomCharacter::execSwitchFly },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWCustomCharacter);
UClass* Z_Construct_UClass_AHWCustomCharacter_NoRegister()
{
	return AHWCustomCharacter::StaticClass();
}
struct Z_Construct_UClass_AHWCustomCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HWCustomCharacter.h" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrounded_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb0\xa9\xec\xa7\x80 \xec\x83\x81\xed\x83\x9c \xed\x99\x95\xec\x9d\xb8 \xea\xb4\x80\xeb\xa0\xa8 \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb0\xa9\xec\xa7\x80 \xec\x83\x81\xed\x83\x9c \xed\x99\x95\xec\x9d\xb8 \xea\xb4\x80\xeb\xa0\xa8 \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundCheckDistance_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb0\x94\xeb\x8b\xa5 \xec\xb2\xb4\xed\x81\xac\xed\x95\xa0 \xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\x94\xeb\x8b\xa5 \xec\xb2\xb4\xed\x81\xac\xed\x95\xa0 \xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVerticalVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \xeb\xac\xb4\xeb\xb8\x8c\xeb\xa8\xbc\xed\x8a\xb8 \xec\x86\x8d\xec\x84\xb1 */" },
#endif
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xac\xb4\xeb\xb8\x8c\xeb\xa8\xbc\xed\x8a\xb8 \xec\x86\x8d\xec\x84\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControl_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xec\xa4\x91\xec\x97\x90\xec\x84\x9c\xec\x9d\x98 \xec\x9d\xb4\xeb\x8f\x99 \xec\xa0\x9c\xec\x96\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xec\xa4\x91\xec\x97\x90\xec\x84\x9c\xec\x9d\x98 \xec\x9d\xb4\xeb\x8f\x99 \xec\xa0\x9c\xec\x96\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollingSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xea\xb4\x80\xeb\xa0\xa8 \xec\x84\xb9\xec\x85\x98 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xea\xb4\x80\xeb\xa0\xa8 \xec\x84\xb9\xec\x85\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Mesh \xea\xb4\x80\xeb\xa0\xa8 \xec\x84\xb9\xec\x85\x98 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh \xea\xb4\x80\xeb\xa0\xa8 \xec\x84\xb9\xec\x85\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "HWCustomCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsGrounded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrounded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundCheckDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentVerticalVelocity;
	static void NewProp_bIsJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AltitudeSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHWCustomCharacter_AltitudeControl, "AltitudeControl" }, // 656408841
		{ &Z_Construct_UFunction_AHWCustomCharacter_ApplyGravity, "ApplyGravity" }, // 2017707684
		{ &Z_Construct_UFunction_AHWCustomCharacter_CheckGrounded, "CheckGrounded" }, // 2173910228
		{ &Z_Construct_UFunction_AHWCustomCharacter_Look, "Look" }, // 2078349971
		{ &Z_Construct_UFunction_AHWCustomCharacter_Move, "Move" }, // 1691824418
		{ &Z_Construct_UFunction_AHWCustomCharacter_PerformGroundTrace, "PerformGroundTrace" }, // 545437368
		{ &Z_Construct_UFunction_AHWCustomCharacter_Roll, "Roll" }, // 3451499113
		{ &Z_Construct_UFunction_AHWCustomCharacter_StartJump, "StartJump" }, // 3676843746
		{ &Z_Construct_UFunction_AHWCustomCharacter_StopJump, "StopJump" }, // 1499961539
		{ &Z_Construct_UFunction_AHWCustomCharacter_SwitchFly, "SwitchFly" }, // 821083371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWCustomCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_bIsGrounded_SetBit(void* Obj)
{
	((AHWCustomCharacter*)Obj)->bIsGrounded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_bIsGrounded = { "bIsGrounded", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHWCustomCharacter), &Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_bIsGrounded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGrounded_MetaData), NewProp_bIsGrounded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_GroundCheckDistance = { "GroundCheckDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, GroundCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundCheckDistance_MetaData), NewProp_GroundCheckDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComponent_MetaData), NewProp_CapsuleComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_VerticalVelocity = { "VerticalVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, VerticalVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalVelocity_MetaData), NewProp_VerticalVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_CurrentVerticalVelocity = { "CurrentVerticalVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, CurrentVerticalVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentVerticalVelocity_MetaData), NewProp_CurrentVerticalVelocity_MetaData) };
void Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_bIsJumping_SetBit(void* Obj)
{
	((AHWCustomCharacter*)Obj)->bIsJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHWCustomCharacter), &Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJumping_MetaData), NewProp_bIsJumping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, JumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpForce_MetaData), NewProp_JumpForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_AirControl = { "AirControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, AirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControl_MetaData), NewProp_AirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_AltitudeSpeed = { "AltitudeSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, AltitudeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltitudeSpeed_MetaData), NewProp_AltitudeSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_RollingSpeed = { "RollingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, RollingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollingSpeed_MetaData), NewProp_RollingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_JumpTime = { "JumpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, JumpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpTime_MetaData), NewProp_JumpTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWCustomCharacter, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHWCustomCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_bIsGrounded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_GroundCheckDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_CapsuleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_VerticalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_CurrentVerticalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_bIsJumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_JumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_AirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_AltitudeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_RollingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_JumpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWCustomCharacter_Statics::NewProp_AnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWCustomCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHWCustomCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_HW07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWCustomCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWCustomCharacter_Statics::ClassParams = {
	&AHWCustomCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHWCustomCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHWCustomCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWCustomCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWCustomCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWCustomCharacter()
{
	if (!Z_Registration_Info_UClass_AHWCustomCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWCustomCharacter.OuterSingleton, Z_Construct_UClass_AHWCustomCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWCustomCharacter.OuterSingleton;
}
template<> HW07_API UClass* StaticClass<AHWCustomCharacter>()
{
	return AHWCustomCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWCustomCharacter);
AHWCustomCharacter::~AHWCustomCharacter() {}
// End Class AHWCustomCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWCustomCharacter, AHWCustomCharacter::StaticClass, TEXT("AHWCustomCharacter"), &Z_Registration_Info_UClass_AHWCustomCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWCustomCharacter), 3653988708U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_1342255776(TEXT("/Script/HW07"),
	Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWCustomCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
