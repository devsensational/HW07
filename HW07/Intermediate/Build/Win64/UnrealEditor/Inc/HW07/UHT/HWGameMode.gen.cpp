// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW07/HWGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HW07_API UClass* Z_Construct_UClass_AHWGameMode();
HW07_API UClass* Z_Construct_UClass_AHWGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW07();
// End Cross Module References

// Begin Class AHWGameMode
void AHWGameMode::StaticRegisterNativesAHWGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWGameMode);
UClass* Z_Construct_UClass_AHWGameMode_NoRegister()
{
	return AHWGameMode::StaticClass();
}
struct Z_Construct_UClass_AHWGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HWGameMode.h" },
		{ "ModuleRelativePath", "HWGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHWGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWGameMode_Statics::ClassParams = {
	&AHWGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWGameMode()
{
	if (!Z_Registration_Info_UClass_AHWGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWGameMode.OuterSingleton, Z_Construct_UClass_AHWGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWGameMode.OuterSingleton;
}
template<> HW07_API UClass* StaticClass<AHWGameMode>()
{
	return AHWGameMode::StaticClass();
}
AHWGameMode::AHWGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWGameMode);
AHWGameMode::~AHWGameMode() {}
// End Class AHWGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWGameMode, AHWGameMode::StaticClass, TEXT("AHWGameMode"), &Z_Registration_Info_UClass_AHWGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWGameMode), 2333316570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_2214697597(TEXT("/Script/HW07"),
	Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW07_HW07_Source_HW07_HWGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
