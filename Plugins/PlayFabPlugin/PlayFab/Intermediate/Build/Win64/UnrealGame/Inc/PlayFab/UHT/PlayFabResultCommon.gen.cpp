// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabResultCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabResultCommon() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FPlayFabResultCommon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayFabResultCommon;
class UScriptStruct* FPlayFabResultCommon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabResultCommon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayFabResultCommon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabResultCommon, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabResultCommon"));
	}
	return Z_Registration_Info_UScriptStruct_PlayFabResultCommon.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabResultCommon>()
{
	return FPlayFabResultCommon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabResultCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "Category", "PlayFab | Core" },
		{ "ModuleRelativePath", "Classes/PlayFabResultCommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabResultCommon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabResultCommon, Request), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	nullptr,
	&NewStructOps,
	"PlayFabResultCommon",
	Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::PropPointers),
	sizeof(FPlayFabResultCommon),
	alignof(FPlayFabResultCommon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabResultCommon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayFabResultCommon.InnerSingleton, Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayFabResultCommon.InnerSingleton;
}
// End ScriptStruct FPlayFabResultCommon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabResultCommon_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayFabResultCommon::StaticStruct, Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewStructOps, TEXT("PlayFabResultCommon"), &Z_Registration_Info_UScriptStruct_PlayFabResultCommon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayFabResultCommon), 3683597086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabResultCommon_h_3957060826(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabResultCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabResultCommon_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
