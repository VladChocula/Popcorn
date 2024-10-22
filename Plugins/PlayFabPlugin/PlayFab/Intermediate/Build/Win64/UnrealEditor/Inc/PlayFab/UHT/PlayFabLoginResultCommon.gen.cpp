// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabLoginResultCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLoginResultCommon() {}

// Begin Cross Module References
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabLoginResultCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FPlayFabLoginResultCommon
static_assert(std::is_polymorphic<FPlayFabLoginResultCommon>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FPlayFabLoginResultCommon cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayFabLoginResultCommon;
class UScriptStruct* FPlayFabLoginResultCommon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabLoginResultCommon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayFabLoginResultCommon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabLoginResultCommon"));
	}
	return Z_Registration_Info_UScriptStruct_PlayFabLoginResultCommon.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabLoginResultCommon>()
{
	return FPlayFabLoginResultCommon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Base class for all PlayFab Login method Results\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLoginResultCommon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all PlayFab Login method Results" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationContext_MetaData[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An authentication context returned by Login methods (can used in multi-user scenarios)\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLoginResultCommon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An authentication context returned by Login methods (can used in multi-user scenarios)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuthenticationContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabLoginResultCommon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewProp_AuthenticationContext = { "AuthenticationContext", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabLoginResultCommon, AuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthenticationContext_MetaData), NewProp_AuthenticationContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewProp_AuthenticationContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"PlayFabLoginResultCommon",
	Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::PropPointers),
	sizeof(FPlayFabLoginResultCommon),
	alignof(FPlayFabLoginResultCommon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayFabLoginResultCommon()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabLoginResultCommon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayFabLoginResultCommon.InnerSingleton, Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayFabLoginResultCommon.InnerSingleton;
}
// End ScriptStruct FPlayFabLoginResultCommon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLoginResultCommon_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayFabLoginResultCommon::StaticStruct, Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewStructOps, TEXT("PlayFabLoginResultCommon"), &Z_Registration_Info_UScriptStruct_PlayFabLoginResultCommon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayFabLoginResultCommon), 3366658663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLoginResultCommon_h_3078895688(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLoginResultCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLoginResultCommon_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
