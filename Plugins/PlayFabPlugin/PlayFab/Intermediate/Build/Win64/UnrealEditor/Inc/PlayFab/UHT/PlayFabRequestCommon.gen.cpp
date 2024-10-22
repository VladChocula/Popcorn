// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabRequestCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabRequestCommon() {}

// Begin Cross Module References
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FPlayFabRequestCommon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayFabRequestCommon;
class UScriptStruct* FPlayFabRequestCommon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabRequestCommon, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabRequestCommon"));
	}
	return Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabRequestCommon>()
{
	return FPlayFabRequestCommon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Base class for all PlayFab Requests\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabRequestCommon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all PlayFab Requests" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationContext_MetaData[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An optional authentication context (can used in multi-user scenarios)\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabRequestCommon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional authentication context (can used in multi-user scenarios)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuthenticationContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabRequestCommon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext = { "AuthenticationContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabRequestCommon, AuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthenticationContext_MetaData), NewProp_AuthenticationContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	nullptr,
	&NewStructOps,
	"PlayFabRequestCommon",
	Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers),
	sizeof(FPlayFabRequestCommon),
	alignof(FPlayFabRequestCommon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.InnerSingleton, Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.InnerSingleton;
}
// End ScriptStruct FPlayFabRequestCommon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayFabRequestCommon::StaticStruct, Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewStructOps, TEXT("PlayFabRequestCommon"), &Z_Registration_Info_UScriptStruct_PlayFabRequestCommon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayFabRequestCommon), 1011664660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_1744876187(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
