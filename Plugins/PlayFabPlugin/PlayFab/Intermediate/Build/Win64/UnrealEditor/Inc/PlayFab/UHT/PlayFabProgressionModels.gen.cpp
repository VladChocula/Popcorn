// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabProgressionModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabProgressionModels() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EExternalFriendSources();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FProgressionCreateLeaderboardDefinitionRequest
static_assert(std::is_polymorphic<FProgressionCreateLeaderboardDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionCreateLeaderboardDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionCreateLeaderboardDefinitionRequest;
class UScriptStruct* FProgressionCreateLeaderboardDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionCreateLeaderboardDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionCreateLeaderboardDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionCreateLeaderboardDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionCreateLeaderboardDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionCreateLeaderboardDefinitionRequest>()
{
	return FProgressionCreateLeaderboardDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Leaderboards\n//////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Leaderboards" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leaderboard columns describing the sort directions, cannot be changed after creation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaderboard columns describing the sort directions, cannot be changed after creation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The entity type being represented on the leaderboard. If it doesn't correspond to the PlayFab entity types, use\n     * 'external' as the type.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity type being represented on the leaderboard. If it doesn't correspond to the PlayFab entity types, use\n'external' as the type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A name for the leaderboard, unique per title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A name for the leaderboard, unique per title." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeLimit_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of entries on this leaderboard */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of entries on this leaderboard" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionConfiguration_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version reset configuration for the leaderboard definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The version reset configuration for the leaderboard definition." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Columns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeLimit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VersionConfiguration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionCreateLeaderboardDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateLeaderboardDefinitionRequest, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateLeaderboardDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateLeaderboardDefinitionRequest, EntityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityType_MetaData), NewProp_EntityType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateLeaderboardDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_SizeLimit = { "SizeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateLeaderboardDefinitionRequest, SizeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeLimit_MetaData), NewProp_SizeLimit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_VersionConfiguration = { "VersionConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateLeaderboardDefinitionRequest, VersionConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionConfiguration_MetaData), NewProp_VersionConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_EntityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_SizeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewProp_VersionConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionCreateLeaderboardDefinitionRequest",
	Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::PropPointers),
	sizeof(FProgressionCreateLeaderboardDefinitionRequest),
	alignof(FProgressionCreateLeaderboardDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionCreateLeaderboardDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionCreateLeaderboardDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionCreateLeaderboardDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FProgressionCreateLeaderboardDefinitionRequest

// Begin ScriptStruct FProgressionEmptyResponse
static_assert(std::is_polymorphic<FProgressionEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionEmptyResponse;
class UScriptStruct* FProgressionEmptyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionEmptyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionEmptyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionEmptyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionEmptyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionEmptyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionEmptyResponse>()
{
	return FProgressionEmptyResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionEmptyResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionEmptyResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionEmptyResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionEmptyResponse",
	nullptr,
	0,
	sizeof(FProgressionEmptyResponse),
	alignof(FProgressionEmptyResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionEmptyResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionEmptyResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionEmptyResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionEmptyResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionEmptyResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionEmptyResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionEmptyResponse.InnerSingleton;
}
// End ScriptStruct FProgressionEmptyResponse

// Begin ScriptStruct FProgressionDeleteLeaderboardDefinitionRequest
static_assert(std::is_polymorphic<FProgressionDeleteLeaderboardDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionDeleteLeaderboardDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardDefinitionRequest;
class UScriptStruct* FProgressionDeleteLeaderboardDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionDeleteLeaderboardDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionDeleteLeaderboardDefinitionRequest>()
{
	return FProgressionDeleteLeaderboardDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard definition to delete. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the leaderboard definition to delete." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionDeleteLeaderboardDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteLeaderboardDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteLeaderboardDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionDeleteLeaderboardDefinitionRequest",
	Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::PropPointers),
	sizeof(FProgressionDeleteLeaderboardDefinitionRequest),
	alignof(FProgressionDeleteLeaderboardDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FProgressionDeleteLeaderboardDefinitionRequest

// Begin ScriptStruct FProgressionDeleteLeaderboardEntriesRequest
static_assert(std::is_polymorphic<FProgressionDeleteLeaderboardEntriesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionDeleteLeaderboardEntriesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardEntriesRequest;
class UScriptStruct* FProgressionDeleteLeaderboardEntriesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardEntriesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardEntriesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionDeleteLeaderboardEntriesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardEntriesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionDeleteLeaderboardEntriesRequest>()
{
	return FProgressionDeleteLeaderboardEntriesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityIds_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The unique Ids of the entries to delete from the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique Ids of the entries to delete from the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the leaderboard." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionDeleteLeaderboardEntriesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteLeaderboardEntriesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::NewProp_EntityIds = { "EntityIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteLeaderboardEntriesRequest, EntityIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityIds_MetaData), NewProp_EntityIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteLeaderboardEntriesRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::NewProp_EntityIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionDeleteLeaderboardEntriesRequest",
	Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::PropPointers),
	sizeof(FProgressionDeleteLeaderboardEntriesRequest),
	alignof(FProgressionDeleteLeaderboardEntriesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardEntriesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardEntriesRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardEntriesRequest.InnerSingleton;
}
// End ScriptStruct FProgressionDeleteLeaderboardEntriesRequest

// Begin ScriptStruct FProgressionGetEntityLeaderboardResponse
static_assert(std::is_polymorphic<FProgressionGetEntityLeaderboardResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionGetEntityLeaderboardResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardResponse;
class UScriptStruct* FProgressionGetEntityLeaderboardResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetEntityLeaderboardResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetEntityLeaderboardResponse>()
{
	return FProgressionGetEntityLeaderboardResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leaderboard response */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaderboard response" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leaderboard columns describing the sort directions, */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaderboard columns describing the sort directions," },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rankings_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Individual entity rankings in the leaderboard, in sorted order by rank. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Individual entity rankings in the leaderboard, in sorted order by rank." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Version of the leaderboard being returned. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Version of the leaderboard being returned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Columns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rankings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rankings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetEntityLeaderboardResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetEntityLeaderboardResponse, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Rankings_Inner = { "Rankings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Rankings = { "Rankings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetEntityLeaderboardResponse, Rankings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rankings_MetaData), NewProp_Rankings_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetEntityLeaderboardResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Rankings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Rankings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionGetEntityLeaderboardResponse",
	Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::PropPointers),
	sizeof(FProgressionGetEntityLeaderboardResponse),
	alignof(FProgressionGetEntityLeaderboardResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardResponse.InnerSingleton;
}
// End ScriptStruct FProgressionGetEntityLeaderboardResponse

// Begin ScriptStruct FProgressionGetFriendLeaderboardForEntityRequest
static_assert(std::is_polymorphic<FProgressionGetFriendLeaderboardForEntityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionGetFriendLeaderboardForEntityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetFriendLeaderboardForEntityRequest;
class UScriptStruct* FProgressionGetFriendLeaderboardForEntityRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetFriendLeaderboardForEntityRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetFriendLeaderboardForEntityRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetFriendLeaderboardForEntityRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetFriendLeaderboardForEntityRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetFriendLeaderboardForEntityRequest>()
{
	return FProgressionGetFriendLeaderboardForEntityRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalFriendSources_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Indicates which other platforms' friends should be included in the response. In HTTP, it is represented as a\n     * comma-separated list of platforms.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates which other platforms' friends should be included in the response. In HTTP, it is represented as a\ncomma-separated list of platforms." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional version of the leaderboard, defaults to current version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional version of the leaderboard, defaults to current version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XboxToken_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExternalFriendSources_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExternalFriendSources;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_XboxToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetFriendLeaderboardForEntityRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetFriendLeaderboardForEntityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetFriendLeaderboardForEntityRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_ExternalFriendSources_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_ExternalFriendSources = { "ExternalFriendSources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetFriendLeaderboardForEntityRequest, ExternalFriendSources), Z_Construct_UEnum_PlayFab_EExternalFriendSources, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalFriendSources_MetaData), NewProp_ExternalFriendSources_MetaData) }; // 1203955138
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetFriendLeaderboardForEntityRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetFriendLeaderboardForEntityRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_XboxToken = { "XboxToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetFriendLeaderboardForEntityRequest, XboxToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XboxToken_MetaData), NewProp_XboxToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_ExternalFriendSources_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_ExternalFriendSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewProp_XboxToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionGetFriendLeaderboardForEntityRequest",
	Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::PropPointers),
	sizeof(FProgressionGetFriendLeaderboardForEntityRequest),
	alignof(FProgressionGetFriendLeaderboardForEntityRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetFriendLeaderboardForEntityRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetFriendLeaderboardForEntityRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetFriendLeaderboardForEntityRequest.InnerSingleton;
}
// End ScriptStruct FProgressionGetFriendLeaderboardForEntityRequest

// Begin ScriptStruct FProgressionGetEntityLeaderboardRequest
static_assert(std::is_polymorphic<FProgressionGetEntityLeaderboardRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionGetEntityLeaderboardRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardRequest;
class UScriptStruct* FProgressionGetEntityLeaderboardRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetEntityLeaderboardRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetEntityLeaderboardRequest>()
{
	return FProgressionGetEntityLeaderboardRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request to load a leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request to load a leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of results to return from the leaderboard. Minimum 1, maximum 1,000. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of results to return from the leaderboard. Minimum 1, maximum 1,000." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingPosition_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index position to start from. 1 is beginning of leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index position to start from. 1 is beginning of leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional version of the leaderboard, defaults to current version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional version of the leaderboard, defaults to current version." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PageSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetEntityLeaderboardRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetEntityLeaderboardRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetEntityLeaderboardRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetEntityLeaderboardRequest, PageSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageSize_MetaData), NewProp_PageSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetEntityLeaderboardRequest, StartingPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingPosition_MetaData), NewProp_StartingPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetEntityLeaderboardRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_PageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_StartingPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionGetEntityLeaderboardRequest",
	Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::PropPointers),
	sizeof(FProgressionGetEntityLeaderboardRequest),
	alignof(FProgressionGetEntityLeaderboardRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardRequest.InnerSingleton;
}
// End ScriptStruct FProgressionGetEntityLeaderboardRequest

// Begin ScriptStruct FProgressionGetLeaderboardAroundEntityRequest
static_assert(std::is_polymorphic<FProgressionGetLeaderboardAroundEntityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionGetLeaderboardAroundEntityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardAroundEntityRequest;
class UScriptStruct* FProgressionGetLeaderboardAroundEntityRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardAroundEntityRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardAroundEntityRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetLeaderboardAroundEntityRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardAroundEntityRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetLeaderboardAroundEntityRequest>()
{
	return FProgressionGetLeaderboardAroundEntityRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request to load a section of a leaderboard centered on a specific entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request to load a section of a leaderboard centered on a specific entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSurroundingEntries_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Number of surrounding entries to return (in addition to specified entity). In general, the number of ranks above and\n     * below will be split into half. For example, if the specified value is 10, 5 ranks above and 5 ranks below will be\n     * retrieved. However, the numbers will get skewed in either direction when the specified entity is towards the top or\n     * bottom of the leaderboard. Also, the number of entries returned can be lower than the value specified for entries at the\n     * bottom of the leaderboard.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of surrounding entries to return (in addition to specified entity). In general, the number of ranks above and\nbelow will be split into half. For example, if the specified value is 10, 5 ranks above and 5 ranks below will be\nretrieved. However, the numbers will get skewed in either direction when the specified entity is towards the top or\nbottom of the leaderboard. Also, the number of entries returned can be lower than the value specified for entries at the\nbottom of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional version of the leaderboard, defaults to current. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional version of the leaderboard, defaults to current." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSurroundingEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetLeaderboardAroundEntityRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardAroundEntityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardAroundEntityRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardAroundEntityRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_MaxSurroundingEntries = { "MaxSurroundingEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardAroundEntityRequest, MaxSurroundingEntries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSurroundingEntries_MetaData), NewProp_MaxSurroundingEntries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardAroundEntityRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_MaxSurroundingEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionGetLeaderboardAroundEntityRequest",
	Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::PropPointers),
	sizeof(FProgressionGetLeaderboardAroundEntityRequest),
	alignof(FProgressionGetLeaderboardAroundEntityRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardAroundEntityRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardAroundEntityRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardAroundEntityRequest.InnerSingleton;
}
// End ScriptStruct FProgressionGetLeaderboardAroundEntityRequest

// Begin ScriptStruct FProgressionGetLeaderboardDefinitionRequest
static_assert(std::is_polymorphic<FProgressionGetLeaderboardDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionGetLeaderboardDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionRequest;
class UScriptStruct* FProgressionGetLeaderboardDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetLeaderboardDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetLeaderboardDefinitionRequest>()
{
	return FProgressionGetLeaderboardDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard to retrieve the definition for. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the leaderboard to retrieve the definition for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetLeaderboardDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionGetLeaderboardDefinitionRequest",
	Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::PropPointers),
	sizeof(FProgressionGetLeaderboardDefinitionRequest),
	alignof(FProgressionGetLeaderboardDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FProgressionGetLeaderboardDefinitionRequest

// Begin ScriptStruct FProgressionGetLeaderboardDefinitionResponse
static_assert(std::is_polymorphic<FProgressionGetLeaderboardDefinitionResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionGetLeaderboardDefinitionResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionResponse;
class UScriptStruct* FProgressionGetLeaderboardDefinitionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetLeaderboardDefinitionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetLeaderboardDefinitionResponse>()
{
	return FProgressionGetLeaderboardDefinitionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sort direction of the leaderboard columns, cannot be changed after creation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sort direction of the leaderboard columns, cannot be changed after creation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Created time, in UTC */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Created time, in UTC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The entity type being represented on the leaderboard. If it doesn't correspond to the PlayFab entity types, use\n     * 'external' as the type.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity type being represented on the leaderboard. If it doesn't correspond to the PlayFab entity types, use\n'external' as the type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResetTime_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last time, in UTC, leaderboard version was incremented. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last time, in UTC, leaderboard version was incremented." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A name for the leaderboard, unique per title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A name for the leaderboard, unique per title." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeLimit_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of entries on this leaderboard */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of entries on this leaderboard" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latest Leaderboard version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latest Leaderboard version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionConfiguration_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version reset configuration for the leaderboard definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The version reset configuration for the leaderboard definition." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Columns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Created;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastResetTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VersionConfiguration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetLeaderboardDefinitionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionResponse, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionResponse, Created), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionResponse, EntityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityType_MetaData), NewProp_EntityType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_LastResetTime = { "LastResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionResponse, LastResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResetTime_MetaData), NewProp_LastResetTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionResponse, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_SizeLimit = { "SizeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionResponse, SizeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeLimit_MetaData), NewProp_SizeLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_VersionConfiguration = { "VersionConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardDefinitionResponse, VersionConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionConfiguration_MetaData), NewProp_VersionConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Created,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_EntityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_LastResetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_SizeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewProp_VersionConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionGetLeaderboardDefinitionResponse",
	Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::PropPointers),
	sizeof(FProgressionGetLeaderboardDefinitionResponse),
	alignof(FProgressionGetLeaderboardDefinitionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionResponse.InnerSingleton;
}
// End ScriptStruct FProgressionGetLeaderboardDefinitionResponse

// Begin ScriptStruct FProgressionGetLeaderboardForEntitiesRequest
static_assert(std::is_polymorphic<FProgressionGetLeaderboardForEntitiesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionGetLeaderboardForEntitiesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardForEntitiesRequest;
class UScriptStruct* FProgressionGetLeaderboardForEntitiesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardForEntitiesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardForEntitiesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetLeaderboardForEntitiesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardForEntitiesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetLeaderboardForEntitiesRequest>()
{
	return FProgressionGetLeaderboardForEntitiesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request a leaderboard limited to a collection of entities. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a leaderboard limited to a collection of entities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityIds_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of Entity IDs to include in the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of Entity IDs to include in the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional version of the leaderboard, defaults to current. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional version of the leaderboard, defaults to current." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetLeaderboardForEntitiesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardForEntitiesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewProp_EntityIds = { "EntityIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardForEntitiesRequest, EntityIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityIds_MetaData), NewProp_EntityIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardForEntitiesRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetLeaderboardForEntitiesRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewProp_EntityIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionGetLeaderboardForEntitiesRequest",
	Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::PropPointers),
	sizeof(FProgressionGetLeaderboardForEntitiesRequest),
	alignof(FProgressionGetLeaderboardForEntitiesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardForEntitiesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardForEntitiesRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardForEntitiesRequest.InnerSingleton;
}
// End ScriptStruct FProgressionGetLeaderboardForEntitiesRequest

// Begin ScriptStruct FProgressionIncrementLeaderboardVersionRequest
static_assert(std::is_polymorphic<FProgressionIncrementLeaderboardVersionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionIncrementLeaderboardVersionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionRequest;
class UScriptStruct* FProgressionIncrementLeaderboardVersionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionIncrementLeaderboardVersionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionIncrementLeaderboardVersionRequest>()
{
	return FProgressionIncrementLeaderboardVersionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard to increment the version for. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the leaderboard to increment the version for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionIncrementLeaderboardVersionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionIncrementLeaderboardVersionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionIncrementLeaderboardVersionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionIncrementLeaderboardVersionRequest",
	Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::PropPointers),
	sizeof(FProgressionIncrementLeaderboardVersionRequest),
	alignof(FProgressionIncrementLeaderboardVersionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionRequest.InnerSingleton;
}
// End ScriptStruct FProgressionIncrementLeaderboardVersionRequest

// Begin ScriptStruct FProgressionIncrementLeaderboardVersionResponse
static_assert(std::is_polymorphic<FProgressionIncrementLeaderboardVersionResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionIncrementLeaderboardVersionResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionResponse;
class UScriptStruct* FProgressionIncrementLeaderboardVersionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionIncrementLeaderboardVersionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionIncrementLeaderboardVersionResponse>()
{
	return FProgressionIncrementLeaderboardVersionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New Leaderboard version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New Leaderboard version." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionIncrementLeaderboardVersionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionIncrementLeaderboardVersionResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionIncrementLeaderboardVersionResponse",
	Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::PropPointers),
	sizeof(FProgressionIncrementLeaderboardVersionResponse),
	alignof(FProgressionIncrementLeaderboardVersionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionResponse.InnerSingleton;
}
// End ScriptStruct FProgressionIncrementLeaderboardVersionResponse

// Begin ScriptStruct FProgressionListLeaderboardDefinitionsRequest
static_assert(std::is_polymorphic<FProgressionListLeaderboardDefinitionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionListLeaderboardDefinitionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsRequest;
class UScriptStruct* FProgressionListLeaderboardDefinitionsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionListLeaderboardDefinitionsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionListLeaderboardDefinitionsRequest>()
{
	return FProgressionListLeaderboardDefinitionsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionListLeaderboardDefinitionsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionListLeaderboardDefinitionsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionListLeaderboardDefinitionsRequest",
	Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::PropPointers),
	sizeof(FProgressionListLeaderboardDefinitionsRequest),
	alignof(FProgressionListLeaderboardDefinitionsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsRequest.InnerSingleton;
}
// End ScriptStruct FProgressionListLeaderboardDefinitionsRequest

// Begin ScriptStruct FProgressionListLeaderboardDefinitionsResponse
static_assert(std::is_polymorphic<FProgressionListLeaderboardDefinitionsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionListLeaderboardDefinitionsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsResponse;
class UScriptStruct* FProgressionListLeaderboardDefinitionsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionListLeaderboardDefinitionsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionListLeaderboardDefinitionsResponse>()
{
	return FProgressionListLeaderboardDefinitionsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardDefinitions_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of leaderboard definitions for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of leaderboard definitions for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeaderboardDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeaderboardDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionListLeaderboardDefinitionsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::NewProp_LeaderboardDefinitions_Inner = { "LeaderboardDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::NewProp_LeaderboardDefinitions = { "LeaderboardDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionListLeaderboardDefinitionsResponse, LeaderboardDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardDefinitions_MetaData), NewProp_LeaderboardDefinitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::NewProp_LeaderboardDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::NewProp_LeaderboardDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionListLeaderboardDefinitionsResponse",
	Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::PropPointers),
	sizeof(FProgressionListLeaderboardDefinitionsResponse),
	alignof(FProgressionListLeaderboardDefinitionsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsResponse.InnerSingleton;
}
// End ScriptStruct FProgressionListLeaderboardDefinitionsResponse

// Begin ScriptStruct FProgressionUnlinkLeaderboardFromStatisticRequest
static_assert(std::is_polymorphic<FProgressionUnlinkLeaderboardFromStatisticRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionUnlinkLeaderboardFromStatisticRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionUnlinkLeaderboardFromStatisticRequest;
class UScriptStruct* FProgressionUnlinkLeaderboardFromStatisticRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionUnlinkLeaderboardFromStatisticRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionUnlinkLeaderboardFromStatisticRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionUnlinkLeaderboardFromStatisticRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionUnlinkLeaderboardFromStatisticRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionUnlinkLeaderboardFromStatisticRequest>()
{
	return FProgressionUnlinkLeaderboardFromStatisticRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard definition to unlink. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the leaderboard definition to unlink." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatisticName_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the statistic definition to unlink. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the statistic definition to unlink." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatisticName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionUnlinkLeaderboardFromStatisticRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUnlinkLeaderboardFromStatisticRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUnlinkLeaderboardFromStatisticRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_StatisticName = { "StatisticName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUnlinkLeaderboardFromStatisticRequest, StatisticName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatisticName_MetaData), NewProp_StatisticName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_StatisticName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionUnlinkLeaderboardFromStatisticRequest",
	Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::PropPointers),
	sizeof(FProgressionUnlinkLeaderboardFromStatisticRequest),
	alignof(FProgressionUnlinkLeaderboardFromStatisticRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionUnlinkLeaderboardFromStatisticRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionUnlinkLeaderboardFromStatisticRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionUnlinkLeaderboardFromStatisticRequest.InnerSingleton;
}
// End ScriptStruct FProgressionUnlinkLeaderboardFromStatisticRequest

// Begin ScriptStruct FProgressionUpdateLeaderboardEntriesRequest
static_assert(std::is_polymorphic<FProgressionUpdateLeaderboardEntriesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionUpdateLeaderboardEntriesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionUpdateLeaderboardEntriesRequest;
class UScriptStruct* FProgressionUpdateLeaderboardEntriesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionUpdateLeaderboardEntriesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionUpdateLeaderboardEntriesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionUpdateLeaderboardEntriesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionUpdateLeaderboardEntriesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionUpdateLeaderboardEntriesRequest>()
{
	return FProgressionUpdateLeaderboardEntriesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entries to add or update on the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entries to add or update on the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the leaderboard." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionUpdateLeaderboardEntriesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateLeaderboardEntriesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateLeaderboardEntriesRequest, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateLeaderboardEntriesRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewProp_LeaderboardName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionUpdateLeaderboardEntriesRequest",
	Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::PropPointers),
	sizeof(FProgressionUpdateLeaderboardEntriesRequest),
	alignof(FProgressionUpdateLeaderboardEntriesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionUpdateLeaderboardEntriesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionUpdateLeaderboardEntriesRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionUpdateLeaderboardEntriesRequest.InnerSingleton;
}
// End ScriptStruct FProgressionUpdateLeaderboardEntriesRequest

// Begin ScriptStruct FProgressionCreateStatisticDefinitionRequest
static_assert(std::is_polymorphic<FProgressionCreateStatisticDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionCreateStatisticDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionCreateStatisticDefinitionRequest;
class UScriptStruct* FProgressionCreateStatisticDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionCreateStatisticDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionCreateStatisticDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionCreateStatisticDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionCreateStatisticDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionCreateStatisticDefinitionRequest>()
{
	return FProgressionCreateStatisticDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Statistics\n//////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Statistics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The columns for the statistic defining the aggregation method for each column. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The columns for the statistic defining the aggregation method for each column." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity type allowed to have score(s) for this statistic. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity type allowed to have score(s) for this statistic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic. Must be less than 50 characters. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the statistic. Must be less than 50 characters. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionConfiguration_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version reset configuration for the statistic definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The version reset configuration for the statistic definition." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Columns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VersionConfiguration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionCreateStatisticDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateStatisticDefinitionRequest, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateStatisticDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateStatisticDefinitionRequest, EntityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityType_MetaData), NewProp_EntityType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateStatisticDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_VersionConfiguration = { "VersionConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionCreateStatisticDefinitionRequest, VersionConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionConfiguration_MetaData), NewProp_VersionConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_EntityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewProp_VersionConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionCreateStatisticDefinitionRequest",
	Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::PropPointers),
	sizeof(FProgressionCreateStatisticDefinitionRequest),
	alignof(FProgressionCreateStatisticDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionCreateStatisticDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionCreateStatisticDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionCreateStatisticDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FProgressionCreateStatisticDefinitionRequest

// Begin ScriptStruct FProgressionDeleteStatisticDefinitionRequest
static_assert(std::is_polymorphic<FProgressionDeleteStatisticDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionDeleteStatisticDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticDefinitionRequest;
class UScriptStruct* FProgressionDeleteStatisticDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionDeleteStatisticDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionDeleteStatisticDefinitionRequest>()
{
	return FProgressionDeleteStatisticDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic to delete. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the statistic to delete." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionDeleteStatisticDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteStatisticDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteStatisticDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionDeleteStatisticDefinitionRequest",
	Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::PropPointers),
	sizeof(FProgressionDeleteStatisticDefinitionRequest),
	alignof(FProgressionDeleteStatisticDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FProgressionDeleteStatisticDefinitionRequest

// Begin ScriptStruct FProgressionDeleteStatisticsRequest
static_assert(std::is_polymorphic<FProgressionDeleteStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionDeleteStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsRequest;
class UScriptStruct* FProgressionDeleteStatisticsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionDeleteStatisticsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionDeleteStatisticsRequest>()
{
	return FProgressionDeleteStatisticsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of statistics to remove from this entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of statistics to remove from this entity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statistics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Statistics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionDeleteStatisticsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteStatisticsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewProp_Statistics_Inner = { "Statistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteStatisticsRequest, Statistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewProp_Statistics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewProp_Statistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionDeleteStatisticsRequest",
	Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::PropPointers),
	sizeof(FProgressionDeleteStatisticsRequest),
	alignof(FProgressionDeleteStatisticsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsRequest.InnerSingleton;
}
// End ScriptStruct FProgressionDeleteStatisticsRequest

// Begin ScriptStruct FProgressionDeleteStatisticsResponse
static_assert(std::is_polymorphic<FProgressionDeleteStatisticsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionDeleteStatisticsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsResponse;
class UScriptStruct* FProgressionDeleteStatisticsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionDeleteStatisticsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionDeleteStatisticsResponse>()
{
	return FProgressionDeleteStatisticsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionDeleteStatisticsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionDeleteStatisticsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionDeleteStatisticsResponse",
	Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::PropPointers),
	sizeof(FProgressionDeleteStatisticsResponse),
	alignof(FProgressionDeleteStatisticsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsResponse.InnerSingleton;
}
// End ScriptStruct FProgressionDeleteStatisticsResponse

// Begin ScriptStruct FProgressionGetStatisticDefinitionRequest
static_assert(std::is_polymorphic<FProgressionGetStatisticDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionGetStatisticDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionRequest;
class UScriptStruct* FProgressionGetStatisticDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetStatisticDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetStatisticDefinitionRequest>()
{
	return FProgressionGetStatisticDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic. Must be less than 50 characters. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the statistic. Must be less than 50 characters." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetStatisticDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionGetStatisticDefinitionRequest",
	Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::PropPointers),
	sizeof(FProgressionGetStatisticDefinitionRequest),
	alignof(FProgressionGetStatisticDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FProgressionGetStatisticDefinitionRequest

// Begin ScriptStruct FProgressionGetStatisticDefinitionResponse
static_assert(std::is_polymorphic<FProgressionGetStatisticDefinitionResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionGetStatisticDefinitionResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionResponse;
class UScriptStruct* FProgressionGetStatisticDefinitionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetStatisticDefinitionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetStatisticDefinitionResponse>()
{
	return FProgressionGetStatisticDefinitionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The columns for the statistic defining the aggregation method for each column. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The columns for the statistic defining the aggregation method for each column." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Created time, in UTC */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Created time, in UTC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity type that can have this statistic. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity type that can have this statistic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResetTime_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last time, in UTC, statistic version was incremented. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last time, in UTC, statistic version was incremented." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedLeaderboardNames_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of leaderboards that are linked to this statistic definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of leaderboards that are linked to this statistic definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the statistic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Statistic version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Statistic version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionConfiguration_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version reset configuration for the leaderboard definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The version reset configuration for the leaderboard definition." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Columns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Created;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastResetTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LinkedLeaderboardNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VersionConfiguration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetStatisticDefinitionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionResponse, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionResponse, Created), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionResponse, EntityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityType_MetaData), NewProp_EntityType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_LastResetTime = { "LastResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionResponse, LastResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResetTime_MetaData), NewProp_LastResetTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_LinkedLeaderboardNames = { "LinkedLeaderboardNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionResponse, LinkedLeaderboardNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedLeaderboardNames_MetaData), NewProp_LinkedLeaderboardNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionResponse, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_VersionConfiguration = { "VersionConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticDefinitionResponse, VersionConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionConfiguration_MetaData), NewProp_VersionConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Created,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_EntityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_LastResetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_LinkedLeaderboardNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewProp_VersionConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionGetStatisticDefinitionResponse",
	Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::PropPointers),
	sizeof(FProgressionGetStatisticDefinitionResponse),
	alignof(FProgressionGetStatisticDefinitionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionResponse.InnerSingleton;
}
// End ScriptStruct FProgressionGetStatisticDefinitionResponse

// Begin ScriptStruct FProgressionGetStatisticsRequest
static_assert(std::is_polymorphic<FProgressionGetStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionGetStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsRequest;
class UScriptStruct* FProgressionGetStatisticsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetStatisticsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetStatisticsRequest>()
{
	return FProgressionGetStatisticsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetStatisticsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionGetStatisticsRequest",
	Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::PropPointers),
	sizeof(FProgressionGetStatisticsRequest),
	alignof(FProgressionGetStatisticsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsRequest.InnerSingleton;
}
// End ScriptStruct FProgressionGetStatisticsRequest

// Begin ScriptStruct FProgressionGetStatisticsResponse
static_assert(std::is_polymorphic<FProgressionGetStatisticsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionGetStatisticsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsResponse;
class UScriptStruct* FProgressionGetStatisticsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetStatisticsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetStatisticsResponse>()
{
	return FProgressionGetStatisticsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnDetails_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A mapping of statistic name to the columns defined in the corresponding definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A mapping of statistic name to the columns defined in the corresponding definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of statistics keyed by Name. Only the latest version of a statistic is returned. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of statistics keyed by Name. Only the latest version of a statistic is returned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColumnDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statistics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetStatisticsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::NewProp_ColumnDetails = { "ColumnDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsResponse, ColumnDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnDetails_MetaData), NewProp_ColumnDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsResponse, Statistics), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::NewProp_ColumnDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::NewProp_Statistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionGetStatisticsResponse",
	Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::PropPointers),
	sizeof(FProgressionGetStatisticsResponse),
	alignof(FProgressionGetStatisticsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsResponse.InnerSingleton;
}
// End ScriptStruct FProgressionGetStatisticsResponse

// Begin ScriptStruct FProgressionGetStatisticsForEntitiesRequest
static_assert(std::is_polymorphic<FProgressionGetStatisticsForEntitiesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionGetStatisticsForEntitiesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesRequest;
class UScriptStruct* FProgressionGetStatisticsForEntitiesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetStatisticsForEntitiesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetStatisticsForEntitiesRequest>()
{
	return FProgressionGetStatisticsForEntitiesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of Entity IDs to retrieve statistics for. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of Entity IDs to retrieve statistics for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetStatisticsForEntitiesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsForEntitiesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsForEntitiesRequest, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entities_MetaData), NewProp_Entities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::NewProp_Entities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::NewProp_Entities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionGetStatisticsForEntitiesRequest",
	Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::PropPointers),
	sizeof(FProgressionGetStatisticsForEntitiesRequest),
	alignof(FProgressionGetStatisticsForEntitiesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesRequest.InnerSingleton;
}
// End ScriptStruct FProgressionGetStatisticsForEntitiesRequest

// Begin ScriptStruct FProgressionGetStatisticsForEntitiesResponse
static_assert(std::is_polymorphic<FProgressionGetStatisticsForEntitiesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionGetStatisticsForEntitiesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesResponse;
class UScriptStruct* FProgressionGetStatisticsForEntitiesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionGetStatisticsForEntitiesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionGetStatisticsForEntitiesResponse>()
{
	return FProgressionGetStatisticsForEntitiesResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnDetails_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A mapping of statistic name to the columns defined in the corresponding definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A mapping of statistic name to the columns defined in the corresponding definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitiesStatistics_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of entities mapped to their statistics. Only the latest version of a statistic is returned. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of entities mapped to their statistics. Only the latest version of a statistic is returned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColumnDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntitiesStatistics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntitiesStatistics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionGetStatisticsForEntitiesResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::NewProp_ColumnDetails = { "ColumnDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsForEntitiesResponse, ColumnDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnDetails_MetaData), NewProp_ColumnDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::NewProp_EntitiesStatistics_Inner = { "EntitiesStatistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::NewProp_EntitiesStatistics = { "EntitiesStatistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionGetStatisticsForEntitiesResponse, EntitiesStatistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitiesStatistics_MetaData), NewProp_EntitiesStatistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::NewProp_ColumnDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::NewProp_EntitiesStatistics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::NewProp_EntitiesStatistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionGetStatisticsForEntitiesResponse",
	Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::PropPointers),
	sizeof(FProgressionGetStatisticsForEntitiesResponse),
	alignof(FProgressionGetStatisticsForEntitiesResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesResponse.InnerSingleton;
}
// End ScriptStruct FProgressionGetStatisticsForEntitiesResponse

// Begin ScriptStruct FProgressionIncrementStatisticVersionRequest
static_assert(std::is_polymorphic<FProgressionIncrementStatisticVersionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionIncrementStatisticVersionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionRequest;
class UScriptStruct* FProgressionIncrementStatisticVersionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionIncrementStatisticVersionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionIncrementStatisticVersionRequest>()
{
	return FProgressionIncrementStatisticVersionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic to increment the version of. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the statistic to increment the version of." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionIncrementStatisticVersionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionIncrementStatisticVersionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionIncrementStatisticVersionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionIncrementStatisticVersionRequest",
	Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::PropPointers),
	sizeof(FProgressionIncrementStatisticVersionRequest),
	alignof(FProgressionIncrementStatisticVersionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionRequest.InnerSingleton;
}
// End ScriptStruct FProgressionIncrementStatisticVersionRequest

// Begin ScriptStruct FProgressionIncrementStatisticVersionResponse
static_assert(std::is_polymorphic<FProgressionIncrementStatisticVersionResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionIncrementStatisticVersionResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionResponse;
class UScriptStruct* FProgressionIncrementStatisticVersionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionIncrementStatisticVersionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionIncrementStatisticVersionResponse>()
{
	return FProgressionIncrementStatisticVersionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New statistic version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New statistic version." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionIncrementStatisticVersionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionIncrementStatisticVersionResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionIncrementStatisticVersionResponse",
	Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::PropPointers),
	sizeof(FProgressionIncrementStatisticVersionResponse),
	alignof(FProgressionIncrementStatisticVersionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionResponse.InnerSingleton;
}
// End ScriptStruct FProgressionIncrementStatisticVersionResponse

// Begin ScriptStruct FProgressionListStatisticDefinitionsRequest
static_assert(std::is_polymorphic<FProgressionListStatisticDefinitionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionListStatisticDefinitionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsRequest;
class UScriptStruct* FProgressionListStatisticDefinitionsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionListStatisticDefinitionsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionListStatisticDefinitionsRequest>()
{
	return FProgressionListStatisticDefinitionsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionListStatisticDefinitionsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionListStatisticDefinitionsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionListStatisticDefinitionsRequest",
	Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::PropPointers),
	sizeof(FProgressionListStatisticDefinitionsRequest),
	alignof(FProgressionListStatisticDefinitionsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsRequest.InnerSingleton;
}
// End ScriptStruct FProgressionListStatisticDefinitionsRequest

// Begin ScriptStruct FProgressionListStatisticDefinitionsResponse
static_assert(std::is_polymorphic<FProgressionListStatisticDefinitionsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionListStatisticDefinitionsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsResponse;
class UScriptStruct* FProgressionListStatisticDefinitionsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionListStatisticDefinitionsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionListStatisticDefinitionsResponse>()
{
	return FProgressionListStatisticDefinitionsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatisticDefinitions_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of statistic definitions for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of statistic definitions for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatisticDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatisticDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionListStatisticDefinitionsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionListStatisticDefinitionsResponse, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions_Inner = { "StatisticDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions = { "StatisticDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionListStatisticDefinitionsResponse, StatisticDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatisticDefinitions_MetaData), NewProp_StatisticDefinitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionListStatisticDefinitionsResponse",
	Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::PropPointers),
	sizeof(FProgressionListStatisticDefinitionsResponse),
	alignof(FProgressionListStatisticDefinitionsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsResponse.InnerSingleton;
}
// End ScriptStruct FProgressionListStatisticDefinitionsResponse

// Begin ScriptStruct FProgressionUpdateStatisticsRequest
static_assert(std::is_polymorphic<FProgressionUpdateStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProgressionUpdateStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsRequest;
class UScriptStruct* FProgressionUpdateStatisticsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionUpdateStatisticsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionUpdateStatisticsRequest>()
{
	return FProgressionUpdateStatisticsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of statistics to update, maximum 50. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of statistics to update, maximum 50." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statistics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Statistics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionUpdateStatisticsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateStatisticsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewProp_Statistics_Inner = { "Statistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateStatisticsRequest, Statistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewProp_Statistics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewProp_Statistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProgressionUpdateStatisticsRequest",
	Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::PropPointers),
	sizeof(FProgressionUpdateStatisticsRequest),
	alignof(FProgressionUpdateStatisticsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsRequest.InnerSingleton;
}
// End ScriptStruct FProgressionUpdateStatisticsRequest

// Begin ScriptStruct FProgressionUpdateStatisticsResponse
static_assert(std::is_polymorphic<FProgressionUpdateStatisticsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProgressionUpdateStatisticsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsResponse;
class UScriptStruct* FProgressionUpdateStatisticsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProgressionUpdateStatisticsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProgressionUpdateStatisticsResponse>()
{
	return FProgressionUpdateStatisticsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnDetails_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A mapping of statistic name to the columns defined in the corresponding definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A mapping of statistic name to the columns defined in the corresponding definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updated entity profile statistics. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updated entity profile statistics." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColumnDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statistics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionUpdateStatisticsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::NewProp_ColumnDetails = { "ColumnDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateStatisticsResponse, ColumnDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnDetails_MetaData), NewProp_ColumnDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateStatisticsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressionUpdateStatisticsResponse, Statistics), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::NewProp_ColumnDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::NewProp_Statistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProgressionUpdateStatisticsResponse",
	Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::PropPointers),
	sizeof(FProgressionUpdateStatisticsResponse),
	alignof(FProgressionUpdateStatisticsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsResponse.InnerSingleton;
}
// End ScriptStruct FProgressionUpdateStatisticsResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProgressionCreateLeaderboardDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionCreateLeaderboardDefinitionRequest_Statics::NewStructOps, TEXT("ProgressionCreateLeaderboardDefinitionRequest"), &Z_Registration_Info_UScriptStruct_ProgressionCreateLeaderboardDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionCreateLeaderboardDefinitionRequest), 2173495039U) },
		{ FProgressionEmptyResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionEmptyResponse_Statics::NewStructOps, TEXT("ProgressionEmptyResponse"), &Z_Registration_Info_UScriptStruct_ProgressionEmptyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionEmptyResponse), 988469615U) },
		{ FProgressionDeleteLeaderboardDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardDefinitionRequest_Statics::NewStructOps, TEXT("ProgressionDeleteLeaderboardDefinitionRequest"), &Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionDeleteLeaderboardDefinitionRequest), 414226721U) },
		{ FProgressionDeleteLeaderboardEntriesRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionDeleteLeaderboardEntriesRequest_Statics::NewStructOps, TEXT("ProgressionDeleteLeaderboardEntriesRequest"), &Z_Registration_Info_UScriptStruct_ProgressionDeleteLeaderboardEntriesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionDeleteLeaderboardEntriesRequest), 2959576090U) },
		{ FProgressionGetEntityLeaderboardResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse_Statics::NewStructOps, TEXT("ProgressionGetEntityLeaderboardResponse"), &Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetEntityLeaderboardResponse), 2631006570U) },
		{ FProgressionGetFriendLeaderboardForEntityRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetFriendLeaderboardForEntityRequest_Statics::NewStructOps, TEXT("ProgressionGetFriendLeaderboardForEntityRequest"), &Z_Registration_Info_UScriptStruct_ProgressionGetFriendLeaderboardForEntityRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetFriendLeaderboardForEntityRequest), 438844383U) },
		{ FProgressionGetEntityLeaderboardRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardRequest_Statics::NewStructOps, TEXT("ProgressionGetEntityLeaderboardRequest"), &Z_Registration_Info_UScriptStruct_ProgressionGetEntityLeaderboardRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetEntityLeaderboardRequest), 1159496745U) },
		{ FProgressionGetLeaderboardAroundEntityRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetLeaderboardAroundEntityRequest_Statics::NewStructOps, TEXT("ProgressionGetLeaderboardAroundEntityRequest"), &Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardAroundEntityRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetLeaderboardAroundEntityRequest), 2369167046U) },
		{ FProgressionGetLeaderboardDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionRequest_Statics::NewStructOps, TEXT("ProgressionGetLeaderboardDefinitionRequest"), &Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetLeaderboardDefinitionRequest), 1481588750U) },
		{ FProgressionGetLeaderboardDefinitionResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse_Statics::NewStructOps, TEXT("ProgressionGetLeaderboardDefinitionResponse"), &Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardDefinitionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetLeaderboardDefinitionResponse), 1743655900U) },
		{ FProgressionGetLeaderboardForEntitiesRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetLeaderboardForEntitiesRequest_Statics::NewStructOps, TEXT("ProgressionGetLeaderboardForEntitiesRequest"), &Z_Registration_Info_UScriptStruct_ProgressionGetLeaderboardForEntitiesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetLeaderboardForEntitiesRequest), 3819795743U) },
		{ FProgressionIncrementLeaderboardVersionRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionRequest_Statics::NewStructOps, TEXT("ProgressionIncrementLeaderboardVersionRequest"), &Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionIncrementLeaderboardVersionRequest), 2126749997U) },
		{ FProgressionIncrementLeaderboardVersionResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse_Statics::NewStructOps, TEXT("ProgressionIncrementLeaderboardVersionResponse"), &Z_Registration_Info_UScriptStruct_ProgressionIncrementLeaderboardVersionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionIncrementLeaderboardVersionResponse), 4088364392U) },
		{ FProgressionListLeaderboardDefinitionsRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsRequest_Statics::NewStructOps, TEXT("ProgressionListLeaderboardDefinitionsRequest"), &Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionListLeaderboardDefinitionsRequest), 3057542770U) },
		{ FProgressionListLeaderboardDefinitionsResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse_Statics::NewStructOps, TEXT("ProgressionListLeaderboardDefinitionsResponse"), &Z_Registration_Info_UScriptStruct_ProgressionListLeaderboardDefinitionsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionListLeaderboardDefinitionsResponse), 3006688280U) },
		{ FProgressionUnlinkLeaderboardFromStatisticRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionUnlinkLeaderboardFromStatisticRequest_Statics::NewStructOps, TEXT("ProgressionUnlinkLeaderboardFromStatisticRequest"), &Z_Registration_Info_UScriptStruct_ProgressionUnlinkLeaderboardFromStatisticRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionUnlinkLeaderboardFromStatisticRequest), 3313656814U) },
		{ FProgressionUpdateLeaderboardEntriesRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionUpdateLeaderboardEntriesRequest_Statics::NewStructOps, TEXT("ProgressionUpdateLeaderboardEntriesRequest"), &Z_Registration_Info_UScriptStruct_ProgressionUpdateLeaderboardEntriesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionUpdateLeaderboardEntriesRequest), 816986229U) },
		{ FProgressionCreateStatisticDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionCreateStatisticDefinitionRequest_Statics::NewStructOps, TEXT("ProgressionCreateStatisticDefinitionRequest"), &Z_Registration_Info_UScriptStruct_ProgressionCreateStatisticDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionCreateStatisticDefinitionRequest), 131530660U) },
		{ FProgressionDeleteStatisticDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionDeleteStatisticDefinitionRequest_Statics::NewStructOps, TEXT("ProgressionDeleteStatisticDefinitionRequest"), &Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionDeleteStatisticDefinitionRequest), 1146643197U) },
		{ FProgressionDeleteStatisticsRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionDeleteStatisticsRequest_Statics::NewStructOps, TEXT("ProgressionDeleteStatisticsRequest"), &Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionDeleteStatisticsRequest), 2058793835U) },
		{ FProgressionDeleteStatisticsResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse_Statics::NewStructOps, TEXT("ProgressionDeleteStatisticsResponse"), &Z_Registration_Info_UScriptStruct_ProgressionDeleteStatisticsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionDeleteStatisticsResponse), 4059704952U) },
		{ FProgressionGetStatisticDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionRequest_Statics::NewStructOps, TEXT("ProgressionGetStatisticDefinitionRequest"), &Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetStatisticDefinitionRequest), 2501441068U) },
		{ FProgressionGetStatisticDefinitionResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse_Statics::NewStructOps, TEXT("ProgressionGetStatisticDefinitionResponse"), &Z_Registration_Info_UScriptStruct_ProgressionGetStatisticDefinitionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetStatisticDefinitionResponse), 250036216U) },
		{ FProgressionGetStatisticsRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetStatisticsRequest_Statics::NewStructOps, TEXT("ProgressionGetStatisticsRequest"), &Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetStatisticsRequest), 4051166169U) },
		{ FProgressionGetStatisticsResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse_Statics::NewStructOps, TEXT("ProgressionGetStatisticsResponse"), &Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetStatisticsResponse), 3844305530U) },
		{ FProgressionGetStatisticsForEntitiesRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesRequest_Statics::NewStructOps, TEXT("ProgressionGetStatisticsForEntitiesRequest"), &Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetStatisticsForEntitiesRequest), 28653190U) },
		{ FProgressionGetStatisticsForEntitiesResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse_Statics::NewStructOps, TEXT("ProgressionGetStatisticsForEntitiesResponse"), &Z_Registration_Info_UScriptStruct_ProgressionGetStatisticsForEntitiesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionGetStatisticsForEntitiesResponse), 3678425518U) },
		{ FProgressionIncrementStatisticVersionRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionRequest_Statics::NewStructOps, TEXT("ProgressionIncrementStatisticVersionRequest"), &Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionIncrementStatisticVersionRequest), 3530576964U) },
		{ FProgressionIncrementStatisticVersionResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse_Statics::NewStructOps, TEXT("ProgressionIncrementStatisticVersionResponse"), &Z_Registration_Info_UScriptStruct_ProgressionIncrementStatisticVersionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionIncrementStatisticVersionResponse), 3834632518U) },
		{ FProgressionListStatisticDefinitionsRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsRequest_Statics::NewStructOps, TEXT("ProgressionListStatisticDefinitionsRequest"), &Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionListStatisticDefinitionsRequest), 920966458U) },
		{ FProgressionListStatisticDefinitionsResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse_Statics::NewStructOps, TEXT("ProgressionListStatisticDefinitionsResponse"), &Z_Registration_Info_UScriptStruct_ProgressionListStatisticDefinitionsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionListStatisticDefinitionsResponse), 749756346U) },
		{ FProgressionUpdateStatisticsRequest::StaticStruct, Z_Construct_UScriptStruct_FProgressionUpdateStatisticsRequest_Statics::NewStructOps, TEXT("ProgressionUpdateStatisticsRequest"), &Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionUpdateStatisticsRequest), 708647659U) },
		{ FProgressionUpdateStatisticsResponse::StaticStruct, Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse_Statics::NewStructOps, TEXT("ProgressionUpdateStatisticsResponse"), &Z_Registration_Info_UScriptStruct_ProgressionUpdateStatisticsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressionUpdateStatisticsResponse), 4090490378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModels_h_3730763017(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
