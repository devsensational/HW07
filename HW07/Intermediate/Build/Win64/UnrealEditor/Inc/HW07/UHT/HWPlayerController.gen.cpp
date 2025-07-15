// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW07/HWPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HW07_API UClass* Z_Construct_UClass_AHWPlayerController();
HW07_API UClass* Z_Construct_UClass_AHWPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW07();
// End Cross Module References

// Begin Class AHWPlayerController Function AddInputMappingContext
struct Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics
{
	struct HWPlayerController_eventAddInputMappingContext_Parms
	{
		UInputMappingContext* ContextToAdd;
		int32 Priority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "CPP_Default_Priority", "0" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextToAdd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::NewProp_ContextToAdd = { "ContextToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWPlayerController_eventAddInputMappingContext_Parms, ContextToAdd), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWPlayerController_eventAddInputMappingContext_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::NewProp_ContextToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWPlayerController, nullptr, "AddInputMappingContext", nullptr, nullptr, Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::HWPlayerController_eventAddInputMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::HWPlayerController_eventAddInputMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWPlayerController::execAddInputMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_ContextToAdd);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInputMappingContext(Z_Param_ContextToAdd,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class AHWPlayerController Function AddInputMappingContext

// Begin Class AHWPlayerController Function ClearAllInputMappingContexts
struct Z_Construct_UFunction_AHWPlayerController_ClearAllInputMappingContexts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWPlayerController_ClearAllInputMappingContexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWPlayerController, nullptr, "ClearAllInputMappingContexts", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_ClearAllInputMappingContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWPlayerController_ClearAllInputMappingContexts_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHWPlayerController_ClearAllInputMappingContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWPlayerController_ClearAllInputMappingContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWPlayerController::execClearAllInputMappingContexts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllInputMappingContexts();
	P_NATIVE_END;
}
// End Class AHWPlayerController Function ClearAllInputMappingContexts

// Begin Class AHWPlayerController Function RemoveInputMappingContext
struct Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics
{
	struct HWPlayerController_eventRemoveInputMappingContext_Parms
	{
		UInputMappingContext* ContextToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::NewProp_ContextToRemove = { "ContextToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWPlayerController_eventRemoveInputMappingContext_Parms, ContextToRemove), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::NewProp_ContextToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWPlayerController, nullptr, "RemoveInputMappingContext", nullptr, nullptr, Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::HWPlayerController_eventRemoveInputMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::HWPlayerController_eventRemoveInputMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWPlayerController::execRemoveInputMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_ContextToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInputMappingContext(Z_Param_ContextToRemove);
	P_NATIVE_END;
}
// End Class AHWPlayerController Function RemoveInputMappingContext

// Begin Class AHWPlayerController Function SwitchToFlyingMode
struct Z_Construct_UFunction_AHWPlayerController_SwitchToFlyingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWPlayerController_SwitchToFlyingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWPlayerController, nullptr, "SwitchToFlyingMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_SwitchToFlyingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWPlayerController_SwitchToFlyingMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHWPlayerController_SwitchToFlyingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWPlayerController_SwitchToFlyingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWPlayerController::execSwitchToFlyingMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToFlyingMode();
	P_NATIVE_END;
}
// End Class AHWPlayerController Function SwitchToFlyingMode

// Begin Class AHWPlayerController Function SwitchToInputMappingContext
struct Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics
{
	struct HWPlayerController_eventSwitchToInputMappingContext_Parms
	{
		UInputMappingContext* NewContext;
		int32 Priority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "CPP_Default_Priority", "0" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::NewProp_NewContext = { "NewContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWPlayerController_eventSwitchToInputMappingContext_Parms, NewContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HWPlayerController_eventSwitchToInputMappingContext_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::NewProp_NewContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWPlayerController, nullptr, "SwitchToInputMappingContext", nullptr, nullptr, Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::HWPlayerController_eventSwitchToInputMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::HWPlayerController_eventSwitchToInputMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWPlayerController::execSwitchToInputMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_NewContext);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToInputMappingContext(Z_Param_NewContext,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class AHWPlayerController Function SwitchToInputMappingContext

// Begin Class AHWPlayerController Function SwitchToNormalMode
struct Z_Construct_UFunction_AHWPlayerController_SwitchToNormalMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHWPlayerController_SwitchToNormalMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHWPlayerController, nullptr, "SwitchToNormalMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHWPlayerController_SwitchToNormalMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHWPlayerController_SwitchToNormalMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHWPlayerController_SwitchToNormalMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHWPlayerController_SwitchToNormalMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHWPlayerController::execSwitchToNormalMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToNormalMode();
	P_NATIVE_END;
}
// End Class AHWPlayerController Function SwitchToNormalMode

// Begin Class AHWPlayerController
void AHWPlayerController::StaticRegisterNativesAHWPlayerController()
{
	UClass* Class = AHWPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInputMappingContext", &AHWPlayerController::execAddInputMappingContext },
		{ "ClearAllInputMappingContexts", &AHWPlayerController::execClearAllInputMappingContexts },
		{ "RemoveInputMappingContext", &AHWPlayerController::execRemoveInputMappingContext },
		{ "SwitchToFlyingMode", &AHWPlayerController::execSwitchToFlyingMode },
		{ "SwitchToInputMappingContext", &AHWPlayerController::execSwitchToInputMappingContext },
		{ "SwitchToNormalMode", &AHWPlayerController::execSwitchToNormalMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWPlayerController);
UClass* Z_Construct_UClass_AHWPlayerController_NoRegister()
{
	return AHWPlayerController::StaticClass();
}
struct Z_Construct_UClass_AHWPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HWPlayerController.h" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyingMappingContext_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyAction_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollAction_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeControlAction_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlyingMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlyAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AltitudeControlAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHWPlayerController_AddInputMappingContext, "AddInputMappingContext" }, // 482409320
		{ &Z_Construct_UFunction_AHWPlayerController_ClearAllInputMappingContexts, "ClearAllInputMappingContexts" }, // 3513201189
		{ &Z_Construct_UFunction_AHWPlayerController_RemoveInputMappingContext, "RemoveInputMappingContext" }, // 620661151
		{ &Z_Construct_UFunction_AHWPlayerController_SwitchToFlyingMode, "SwitchToFlyingMode" }, // 4284864960
		{ &Z_Construct_UFunction_AHWPlayerController_SwitchToInputMappingContext, "SwitchToInputMappingContext" }, // 3170469084
		{ &Z_Construct_UFunction_AHWPlayerController_SwitchToNormalMode, "SwitchToNormalMode" }, // 4272020151
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_FlyingMappingContext = { "FlyingMappingContext", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, FlyingMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyingMappingContext_MetaData), NewProp_FlyingMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_FlyAction = { "FlyAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, FlyAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyAction_MetaData), NewProp_FlyAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_RollAction = { "RollAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, RollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollAction_MetaData), NewProp_RollAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_AltitudeControlAction = { "AltitudeControlAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, AltitudeControlAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltitudeControlAction_MetaData), NewProp_AltitudeControlAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHWPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_FlyingMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_FlyAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_RollAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_AltitudeControlAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHWPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_HW07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWPlayerController_Statics::ClassParams = {
	&AHWPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHWPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWPlayerController()
{
	if (!Z_Registration_Info_UClass_AHWPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWPlayerController.OuterSingleton, Z_Construct_UClass_AHWPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWPlayerController.OuterSingleton;
}
template<> HW07_API UClass* StaticClass<AHWPlayerController>()
{
	return AHWPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWPlayerController);
AHWPlayerController::~AHWPlayerController() {}
// End Class AHWPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWPlayerController, AHWPlayerController::StaticClass, TEXT("AHWPlayerController"), &Z_Registration_Info_UClass_AHWPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWPlayerController), 2177697443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWPlayerController_h_1236776868(TEXT("/Script/HW07"),
	Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
