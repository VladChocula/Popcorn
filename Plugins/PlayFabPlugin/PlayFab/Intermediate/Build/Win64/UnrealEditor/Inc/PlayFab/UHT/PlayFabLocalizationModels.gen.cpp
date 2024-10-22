// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabLocalizationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLocalizationModels() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FLocalizationGetLanguageListRequest
static_assert(std::is_polymorphic<FLocalizationGetLanguageListRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLocalizationGetLanguageListRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest;
class UScriptStruct* FLocalizationGetLanguageListRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LocalizationGetLanguageListRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLocalizationGetLanguageListRequest>()
{
	return FLocalizationGetLanguageListRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Localization\n//////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Localization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Localization | Localization Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationGetLanguageListRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationGetLanguageListRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LocalizationGetLanguageListRequest",
	Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers),
	sizeof(FLocalizationGetLanguageListRequest),
	alignof(FLocalizationGetLanguageListRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.InnerSingleton, Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.InnerSingleton;
}
// End ScriptStruct FLocalizationGetLanguageListRequest

// Begin ScriptStruct FLocalizationGetLanguageListResponse
static_assert(std::is_polymorphic<FLocalizationGetLanguageListResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLocalizationGetLanguageListResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse;
class UScriptStruct* FLocalizationGetLanguageListResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LocalizationGetLanguageListResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLocalizationGetLanguageListResponse>()
{
	return FLocalizationGetLanguageListResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageList_MetaData[] = {
		{ "Category", "PlayFab | Localization | Localization Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of allowed languages, in BCP47 two-letter format */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of allowed languages, in BCP47 two-letter format" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LanguageList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationGetLanguageListResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList = { "LanguageList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationGetLanguageListResponse, LanguageList), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageList_MetaData), NewProp_LanguageList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LocalizationGetLanguageListResponse",
	Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers),
	sizeof(FLocalizationGetLanguageListResponse),
	alignof(FLocalizationGetLanguageListResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.InnerSingleton, Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.InnerSingleton;
}
// End ScriptStruct FLocalizationGetLanguageListResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocalizationGetLanguageListRequest::StaticStruct, Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewStructOps, TEXT("LocalizationGetLanguageListRequest"), &Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizationGetLanguageListRequest), 369215245U) },
		{ FLocalizationGetLanguageListResponse::StaticStruct, Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewStructOps, TEXT("LocalizationGetLanguageListResponse"), &Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizationGetLanguageListResponse), 2532679549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_2659134708(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
