// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabLeaderboardsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLeaderboardsModels() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EExternalFriendSources();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FLeaderboardsCreateLeaderboardDefinitionRequest
static_assert(std::is_polymorphic<FLeaderboardsCreateLeaderboardDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsCreateLeaderboardDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsCreateLeaderboardDefinitionRequest;
class UScriptStruct* FLeaderboardsCreateLeaderboardDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsCreateLeaderboardDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsCreateLeaderboardDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsCreateLeaderboardDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsCreateLeaderboardDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsCreateLeaderboardDefinitionRequest>()
{
	return FLeaderboardsCreateLeaderboardDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Leaderboards\n//////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Leaderboards" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leaderboard columns describing the sort directions, cannot be changed after creation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaderboard columns describing the sort directions, cannot be changed after creation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The entity type being represented on the leaderboard. If it doesn't correspond to the PlayFab entity types, use\n     * 'external' as the type.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity type being represented on the leaderboard. If it doesn't correspond to the PlayFab entity types, use\n'external' as the type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A name for the leaderboard, unique per title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A name for the leaderboard, unique per title." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeLimit_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of entries on this leaderboard */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of entries on this leaderboard" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionConfiguration_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version reset configuration for the leaderboard definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsCreateLeaderboardDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateLeaderboardDefinitionRequest, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateLeaderboardDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateLeaderboardDefinitionRequest, EntityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityType_MetaData), NewProp_EntityType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateLeaderboardDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_SizeLimit = { "SizeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateLeaderboardDefinitionRequest, SizeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeLimit_MetaData), NewProp_SizeLimit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_VersionConfiguration = { "VersionConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateLeaderboardDefinitionRequest, VersionConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionConfiguration_MetaData), NewProp_VersionConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_EntityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_SizeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewProp_VersionConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsCreateLeaderboardDefinitionRequest",
	Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::PropPointers),
	sizeof(FLeaderboardsCreateLeaderboardDefinitionRequest),
	alignof(FLeaderboardsCreateLeaderboardDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsCreateLeaderboardDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsCreateLeaderboardDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsCreateLeaderboardDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsCreateLeaderboardDefinitionRequest

// Begin ScriptStruct FLeaderboardsEmptyResponse
static_assert(std::is_polymorphic<FLeaderboardsEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsEmptyResponse;
class UScriptStruct* FLeaderboardsEmptyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsEmptyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsEmptyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsEmptyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsEmptyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsEmptyResponse>()
{
	return FLeaderboardsEmptyResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsEmptyResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsEmptyResponse",
	nullptr,
	0,
	sizeof(FLeaderboardsEmptyResponse),
	alignof(FLeaderboardsEmptyResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsEmptyResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsEmptyResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsEmptyResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsEmptyResponse

// Begin ScriptStruct FLeaderboardsDeleteLeaderboardDefinitionRequest
static_assert(std::is_polymorphic<FLeaderboardsDeleteLeaderboardDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsDeleteLeaderboardDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardDefinitionRequest;
class UScriptStruct* FLeaderboardsDeleteLeaderboardDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsDeleteLeaderboardDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsDeleteLeaderboardDefinitionRequest>()
{
	return FLeaderboardsDeleteLeaderboardDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard definition to delete. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsDeleteLeaderboardDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteLeaderboardDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteLeaderboardDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsDeleteLeaderboardDefinitionRequest",
	Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::PropPointers),
	sizeof(FLeaderboardsDeleteLeaderboardDefinitionRequest),
	alignof(FLeaderboardsDeleteLeaderboardDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsDeleteLeaderboardDefinitionRequest

// Begin ScriptStruct FLeaderboardsDeleteLeaderboardEntriesRequest
static_assert(std::is_polymorphic<FLeaderboardsDeleteLeaderboardEntriesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsDeleteLeaderboardEntriesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardEntriesRequest;
class UScriptStruct* FLeaderboardsDeleteLeaderboardEntriesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardEntriesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardEntriesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsDeleteLeaderboardEntriesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardEntriesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsDeleteLeaderboardEntriesRequest>()
{
	return FLeaderboardsDeleteLeaderboardEntriesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityIds_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The unique Ids of the entries to delete from the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique Ids of the entries to delete from the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsDeleteLeaderboardEntriesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteLeaderboardEntriesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::NewProp_EntityIds = { "EntityIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteLeaderboardEntriesRequest, EntityIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityIds_MetaData), NewProp_EntityIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteLeaderboardEntriesRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::NewProp_EntityIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsDeleteLeaderboardEntriesRequest",
	Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::PropPointers),
	sizeof(FLeaderboardsDeleteLeaderboardEntriesRequest),
	alignof(FLeaderboardsDeleteLeaderboardEntriesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardEntriesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardEntriesRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardEntriesRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsDeleteLeaderboardEntriesRequest

// Begin ScriptStruct FLeaderboardsGetLeaderboardDefinitionRequest
static_assert(std::is_polymorphic<FLeaderboardsGetLeaderboardDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetLeaderboardDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionRequest;
class UScriptStruct* FLeaderboardsGetLeaderboardDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetLeaderboardDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetLeaderboardDefinitionRequest>()
{
	return FLeaderboardsGetLeaderboardDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard to retrieve the definition for. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetLeaderboardDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetLeaderboardDefinitionRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetLeaderboardDefinitionRequest),
	alignof(FLeaderboardsGetLeaderboardDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetLeaderboardDefinitionRequest

// Begin ScriptStruct FLeaderboardsGetLeaderboardDefinitionResponse
static_assert(std::is_polymorphic<FLeaderboardsGetLeaderboardDefinitionResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsGetLeaderboardDefinitionResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionResponse;
class UScriptStruct* FLeaderboardsGetLeaderboardDefinitionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetLeaderboardDefinitionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetLeaderboardDefinitionResponse>()
{
	return FLeaderboardsGetLeaderboardDefinitionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sort direction of the leaderboard columns, cannot be changed after creation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sort direction of the leaderboard columns, cannot be changed after creation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Created time, in UTC */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Created time, in UTC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The entity type being represented on the leaderboard. If it doesn't correspond to the PlayFab entity types, use\n     * 'external' as the type.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity type being represented on the leaderboard. If it doesn't correspond to the PlayFab entity types, use\n'external' as the type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResetTime_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last time, in UTC, leaderboard version was incremented. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last time, in UTC, leaderboard version was incremented." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A name for the leaderboard, unique per title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A name for the leaderboard, unique per title." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeLimit_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of entries on this leaderboard */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of entries on this leaderboard" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latest Leaderboard version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latest Leaderboard version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionConfiguration_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version reset configuration for the leaderboard definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetLeaderboardDefinitionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionResponse, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionResponse, Created), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionResponse, EntityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityType_MetaData), NewProp_EntityType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_LastResetTime = { "LastResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionResponse, LastResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResetTime_MetaData), NewProp_LastResetTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionResponse, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_SizeLimit = { "SizeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionResponse, SizeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeLimit_MetaData), NewProp_SizeLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_VersionConfiguration = { "VersionConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardDefinitionResponse, VersionConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionConfiguration_MetaData), NewProp_VersionConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Created,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_EntityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_LastResetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_SizeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewProp_VersionConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsGetLeaderboardDefinitionResponse",
	Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::PropPointers),
	sizeof(FLeaderboardsGetLeaderboardDefinitionResponse),
	alignof(FLeaderboardsGetLeaderboardDefinitionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetLeaderboardDefinitionResponse

// Begin ScriptStruct FLeaderboardsIncrementLeaderboardVersionRequest
static_assert(std::is_polymorphic<FLeaderboardsIncrementLeaderboardVersionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsIncrementLeaderboardVersionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionRequest;
class UScriptStruct* FLeaderboardsIncrementLeaderboardVersionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsIncrementLeaderboardVersionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsIncrementLeaderboardVersionRequest>()
{
	return FLeaderboardsIncrementLeaderboardVersionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard to increment the version for. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsIncrementLeaderboardVersionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsIncrementLeaderboardVersionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsIncrementLeaderboardVersionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsIncrementLeaderboardVersionRequest",
	Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::PropPointers),
	sizeof(FLeaderboardsIncrementLeaderboardVersionRequest),
	alignof(FLeaderboardsIncrementLeaderboardVersionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsIncrementLeaderboardVersionRequest

// Begin ScriptStruct FLeaderboardsIncrementLeaderboardVersionResponse
static_assert(std::is_polymorphic<FLeaderboardsIncrementLeaderboardVersionResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsIncrementLeaderboardVersionResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionResponse;
class UScriptStruct* FLeaderboardsIncrementLeaderboardVersionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsIncrementLeaderboardVersionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsIncrementLeaderboardVersionResponse>()
{
	return FLeaderboardsIncrementLeaderboardVersionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New Leaderboard version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New Leaderboard version." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsIncrementLeaderboardVersionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsIncrementLeaderboardVersionResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsIncrementLeaderboardVersionResponse",
	Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::PropPointers),
	sizeof(FLeaderboardsIncrementLeaderboardVersionResponse),
	alignof(FLeaderboardsIncrementLeaderboardVersionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsIncrementLeaderboardVersionResponse

// Begin ScriptStruct FLeaderboardsListLeaderboardDefinitionsRequest
static_assert(std::is_polymorphic<FLeaderboardsListLeaderboardDefinitionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsListLeaderboardDefinitionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsRequest;
class UScriptStruct* FLeaderboardsListLeaderboardDefinitionsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsListLeaderboardDefinitionsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsListLeaderboardDefinitionsRequest>()
{
	return FLeaderboardsListLeaderboardDefinitionsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsListLeaderboardDefinitionsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsListLeaderboardDefinitionsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsListLeaderboardDefinitionsRequest",
	Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::PropPointers),
	sizeof(FLeaderboardsListLeaderboardDefinitionsRequest),
	alignof(FLeaderboardsListLeaderboardDefinitionsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsListLeaderboardDefinitionsRequest

// Begin ScriptStruct FLeaderboardsListLeaderboardDefinitionsResponse
static_assert(std::is_polymorphic<FLeaderboardsListLeaderboardDefinitionsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsListLeaderboardDefinitionsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsResponse;
class UScriptStruct* FLeaderboardsListLeaderboardDefinitionsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsListLeaderboardDefinitionsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsListLeaderboardDefinitionsResponse>()
{
	return FLeaderboardsListLeaderboardDefinitionsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardDefinitions_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of leaderboard definitions for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsListLeaderboardDefinitionsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::NewProp_LeaderboardDefinitions_Inner = { "LeaderboardDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::NewProp_LeaderboardDefinitions = { "LeaderboardDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsListLeaderboardDefinitionsResponse, LeaderboardDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardDefinitions_MetaData), NewProp_LeaderboardDefinitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::NewProp_LeaderboardDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::NewProp_LeaderboardDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsListLeaderboardDefinitionsResponse",
	Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::PropPointers),
	sizeof(FLeaderboardsListLeaderboardDefinitionsResponse),
	alignof(FLeaderboardsListLeaderboardDefinitionsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsListLeaderboardDefinitionsResponse

// Begin ScriptStruct FLeaderboardsUnlinkLeaderboardFromStatisticRequest
static_assert(std::is_polymorphic<FLeaderboardsUnlinkLeaderboardFromStatisticRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsUnlinkLeaderboardFromStatisticRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsUnlinkLeaderboardFromStatisticRequest;
class UScriptStruct* FLeaderboardsUnlinkLeaderboardFromStatisticRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsUnlinkLeaderboardFromStatisticRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsUnlinkLeaderboardFromStatisticRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsUnlinkLeaderboardFromStatisticRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsUnlinkLeaderboardFromStatisticRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsUnlinkLeaderboardFromStatisticRequest>()
{
	return FLeaderboardsUnlinkLeaderboardFromStatisticRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard definition to unlink. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the leaderboard definition to unlink." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatisticName_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the statistic definition to unlink. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsUnlinkLeaderboardFromStatisticRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUnlinkLeaderboardFromStatisticRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUnlinkLeaderboardFromStatisticRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_StatisticName = { "StatisticName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUnlinkLeaderboardFromStatisticRequest, StatisticName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatisticName_MetaData), NewProp_StatisticName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::NewProp_StatisticName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsUnlinkLeaderboardFromStatisticRequest",
	Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::PropPointers),
	sizeof(FLeaderboardsUnlinkLeaderboardFromStatisticRequest),
	alignof(FLeaderboardsUnlinkLeaderboardFromStatisticRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsUnlinkLeaderboardFromStatisticRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsUnlinkLeaderboardFromStatisticRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsUnlinkLeaderboardFromStatisticRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsUnlinkLeaderboardFromStatisticRequest

// Begin ScriptStruct FLeaderboardsUpdateLeaderboardEntriesRequest
static_assert(std::is_polymorphic<FLeaderboardsUpdateLeaderboardEntriesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsUpdateLeaderboardEntriesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsUpdateLeaderboardEntriesRequest;
class UScriptStruct* FLeaderboardsUpdateLeaderboardEntriesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsUpdateLeaderboardEntriesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsUpdateLeaderboardEntriesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsUpdateLeaderboardEntriesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsUpdateLeaderboardEntriesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsUpdateLeaderboardEntriesRequest>()
{
	return FLeaderboardsUpdateLeaderboardEntriesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entries to add or update on the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entries to add or update on the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsUpdateLeaderboardEntriesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateLeaderboardEntriesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateLeaderboardEntriesRequest, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateLeaderboardEntriesRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewProp_LeaderboardName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsUpdateLeaderboardEntriesRequest",
	Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::PropPointers),
	sizeof(FLeaderboardsUpdateLeaderboardEntriesRequest),
	alignof(FLeaderboardsUpdateLeaderboardEntriesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsUpdateLeaderboardEntriesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsUpdateLeaderboardEntriesRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsUpdateLeaderboardEntriesRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsUpdateLeaderboardEntriesRequest

// Begin ScriptStruct FLeaderboardsCreateStatisticDefinitionRequest
static_assert(std::is_polymorphic<FLeaderboardsCreateStatisticDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsCreateStatisticDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsCreateStatisticDefinitionRequest;
class UScriptStruct* FLeaderboardsCreateStatisticDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsCreateStatisticDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsCreateStatisticDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsCreateStatisticDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsCreateStatisticDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsCreateStatisticDefinitionRequest>()
{
	return FLeaderboardsCreateStatisticDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Statistics and Leaderboards\n//////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Statistics and Leaderboards" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The columns for the statistic defining the aggregation method for each column. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The columns for the statistic defining the aggregation method for each column." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity type allowed to have score(s) for this statistic. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity type allowed to have score(s) for this statistic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic. Must be less than 50 characters. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the statistic. Must be less than 50 characters. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionConfiguration_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version reset configuration for the statistic definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsCreateStatisticDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateStatisticDefinitionRequest, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateStatisticDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateStatisticDefinitionRequest, EntityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityType_MetaData), NewProp_EntityType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateStatisticDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_VersionConfiguration = { "VersionConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsCreateStatisticDefinitionRequest, VersionConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionConfiguration_MetaData), NewProp_VersionConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_EntityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewProp_VersionConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsCreateStatisticDefinitionRequest",
	Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::PropPointers),
	sizeof(FLeaderboardsCreateStatisticDefinitionRequest),
	alignof(FLeaderboardsCreateStatisticDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsCreateStatisticDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsCreateStatisticDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsCreateStatisticDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsCreateStatisticDefinitionRequest

// Begin ScriptStruct FLeaderboardsDeleteStatisticDefinitionRequest
static_assert(std::is_polymorphic<FLeaderboardsDeleteStatisticDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsDeleteStatisticDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticDefinitionRequest;
class UScriptStruct* FLeaderboardsDeleteStatisticDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsDeleteStatisticDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsDeleteStatisticDefinitionRequest>()
{
	return FLeaderboardsDeleteStatisticDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic to delete. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsDeleteStatisticDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteStatisticDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteStatisticDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsDeleteStatisticDefinitionRequest",
	Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::PropPointers),
	sizeof(FLeaderboardsDeleteStatisticDefinitionRequest),
	alignof(FLeaderboardsDeleteStatisticDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsDeleteStatisticDefinitionRequest

// Begin ScriptStruct FLeaderboardsDeleteStatisticsRequest
static_assert(std::is_polymorphic<FLeaderboardsDeleteStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsDeleteStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsRequest;
class UScriptStruct* FLeaderboardsDeleteStatisticsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsDeleteStatisticsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsDeleteStatisticsRequest>()
{
	return FLeaderboardsDeleteStatisticsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of statistics to remove from this entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsDeleteStatisticsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteStatisticsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewProp_Statistics_Inner = { "Statistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteStatisticsRequest, Statistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewProp_Statistics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewProp_Statistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsDeleteStatisticsRequest",
	Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::PropPointers),
	sizeof(FLeaderboardsDeleteStatisticsRequest),
	alignof(FLeaderboardsDeleteStatisticsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsDeleteStatisticsRequest

// Begin ScriptStruct FLeaderboardsDeleteStatisticsResponse
static_assert(std::is_polymorphic<FLeaderboardsDeleteStatisticsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsDeleteStatisticsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsResponse;
class UScriptStruct* FLeaderboardsDeleteStatisticsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsDeleteStatisticsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsDeleteStatisticsResponse>()
{
	return FLeaderboardsDeleteStatisticsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsDeleteStatisticsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsDeleteStatisticsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsDeleteStatisticsResponse",
	Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::PropPointers),
	sizeof(FLeaderboardsDeleteStatisticsResponse),
	alignof(FLeaderboardsDeleteStatisticsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsDeleteStatisticsResponse

// Begin ScriptStruct FLeaderboardsGetEntityLeaderboardResponse
static_assert(std::is_polymorphic<FLeaderboardsGetEntityLeaderboardResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsGetEntityLeaderboardResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardResponse;
class UScriptStruct* FLeaderboardsGetEntityLeaderboardResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetEntityLeaderboardResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetEntityLeaderboardResponse>()
{
	return FLeaderboardsGetEntityLeaderboardResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leaderboard response */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaderboard response" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leaderboard columns describing the sort directions, */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaderboard columns describing the sort directions," },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rankings_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Individual entity rankings in the leaderboard, in sorted order by rank. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Individual entity rankings in the leaderboard, in sorted order by rank." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Version of the leaderboard being returned. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetEntityLeaderboardResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetEntityLeaderboardResponse, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Rankings_Inner = { "Rankings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Rankings = { "Rankings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetEntityLeaderboardResponse, Rankings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rankings_MetaData), NewProp_Rankings_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetEntityLeaderboardResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Rankings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Rankings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsGetEntityLeaderboardResponse",
	Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::PropPointers),
	sizeof(FLeaderboardsGetEntityLeaderboardResponse),
	alignof(FLeaderboardsGetEntityLeaderboardResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetEntityLeaderboardResponse

// Begin ScriptStruct FLeaderboardsGetFriendLeaderboardForEntityRequest
static_assert(std::is_polymorphic<FLeaderboardsGetFriendLeaderboardForEntityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetFriendLeaderboardForEntityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetFriendLeaderboardForEntityRequest;
class UScriptStruct* FLeaderboardsGetFriendLeaderboardForEntityRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetFriendLeaderboardForEntityRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetFriendLeaderboardForEntityRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetFriendLeaderboardForEntityRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetFriendLeaderboardForEntityRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetFriendLeaderboardForEntityRequest>()
{
	return FLeaderboardsGetFriendLeaderboardForEntityRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalFriendSources_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Indicates which other platforms' friends should be included in the response. In HTTP, it is represented as a\n     * comma-separated list of platforms.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates which other platforms' friends should be included in the response. In HTTP, it is represented as a\ncomma-separated list of platforms." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional version of the leaderboard, defaults to current version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional version of the leaderboard, defaults to current version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XboxToken_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetFriendLeaderboardForEntityRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetFriendLeaderboardForEntityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetFriendLeaderboardForEntityRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_ExternalFriendSources_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_ExternalFriendSources = { "ExternalFriendSources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetFriendLeaderboardForEntityRequest, ExternalFriendSources), Z_Construct_UEnum_PlayFab_EExternalFriendSources, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalFriendSources_MetaData), NewProp_ExternalFriendSources_MetaData) }; // 1203955138
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetFriendLeaderboardForEntityRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetFriendLeaderboardForEntityRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_XboxToken = { "XboxToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetFriendLeaderboardForEntityRequest, XboxToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XboxToken_MetaData), NewProp_XboxToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_ExternalFriendSources_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_ExternalFriendSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewProp_XboxToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetFriendLeaderboardForEntityRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetFriendLeaderboardForEntityRequest),
	alignof(FLeaderboardsGetFriendLeaderboardForEntityRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetFriendLeaderboardForEntityRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetFriendLeaderboardForEntityRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetFriendLeaderboardForEntityRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetFriendLeaderboardForEntityRequest

// Begin ScriptStruct FLeaderboardsGetEntityLeaderboardRequest
static_assert(std::is_polymorphic<FLeaderboardsGetEntityLeaderboardRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetEntityLeaderboardRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardRequest;
class UScriptStruct* FLeaderboardsGetEntityLeaderboardRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetEntityLeaderboardRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetEntityLeaderboardRequest>()
{
	return FLeaderboardsGetEntityLeaderboardRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request to load a leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request to load a leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of results to return from the leaderboard. Minimum 1, maximum 1,000. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of results to return from the leaderboard. Minimum 1, maximum 1,000." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingPosition_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index position to start from. 1 is beginning of leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index position to start from. 1 is beginning of leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional version of the leaderboard, defaults to current version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetEntityLeaderboardRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetEntityLeaderboardRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetEntityLeaderboardRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetEntityLeaderboardRequest, PageSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageSize_MetaData), NewProp_PageSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetEntityLeaderboardRequest, StartingPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingPosition_MetaData), NewProp_StartingPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetEntityLeaderboardRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_PageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_StartingPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetEntityLeaderboardRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetEntityLeaderboardRequest),
	alignof(FLeaderboardsGetEntityLeaderboardRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetEntityLeaderboardRequest

// Begin ScriptStruct FLeaderboardsGetLeaderboardAroundEntityRequest
static_assert(std::is_polymorphic<FLeaderboardsGetLeaderboardAroundEntityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetLeaderboardAroundEntityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardAroundEntityRequest;
class UScriptStruct* FLeaderboardsGetLeaderboardAroundEntityRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardAroundEntityRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardAroundEntityRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetLeaderboardAroundEntityRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardAroundEntityRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetLeaderboardAroundEntityRequest>()
{
	return FLeaderboardsGetLeaderboardAroundEntityRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request to load a section of a leaderboard centered on a specific entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request to load a section of a leaderboard centered on a specific entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSurroundingEntries_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Number of surrounding entries to return (in addition to specified entity). In general, the number of ranks above and\n     * below will be split into half. For example, if the specified value is 10, 5 ranks above and 5 ranks below will be\n     * retrieved. However, the numbers will get skewed in either direction when the specified entity is towards the top or\n     * bottom of the leaderboard. Also, the number of entries returned can be lower than the value specified for entries at the\n     * bottom of the leaderboard.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of surrounding entries to return (in addition to specified entity). In general, the number of ranks above and\nbelow will be split into half. For example, if the specified value is 10, 5 ranks above and 5 ranks below will be\nretrieved. However, the numbers will get skewed in either direction when the specified entity is towards the top or\nbottom of the leaderboard. Also, the number of entries returned can be lower than the value specified for entries at the\nbottom of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional version of the leaderboard, defaults to current. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetLeaderboardAroundEntityRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardAroundEntityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardAroundEntityRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardAroundEntityRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_MaxSurroundingEntries = { "MaxSurroundingEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardAroundEntityRequest, MaxSurroundingEntries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSurroundingEntries_MetaData), NewProp_MaxSurroundingEntries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardAroundEntityRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_MaxSurroundingEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetLeaderboardAroundEntityRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetLeaderboardAroundEntityRequest),
	alignof(FLeaderboardsGetLeaderboardAroundEntityRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardAroundEntityRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardAroundEntityRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardAroundEntityRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetLeaderboardAroundEntityRequest

// Begin ScriptStruct FLeaderboardsGetLeaderboardForEntitiesRequest
static_assert(std::is_polymorphic<FLeaderboardsGetLeaderboardForEntitiesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetLeaderboardForEntitiesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardForEntitiesRequest;
class UScriptStruct* FLeaderboardsGetLeaderboardForEntitiesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardForEntitiesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardForEntitiesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetLeaderboardForEntitiesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardForEntitiesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetLeaderboardForEntitiesRequest>()
{
	return FLeaderboardsGetLeaderboardForEntitiesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request a leaderboard limited to a collection of entities. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a leaderboard limited to a collection of entities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityIds_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of Entity IDs to include in the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of Entity IDs to include in the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the leaderboard. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional version of the leaderboard, defaults to current. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetLeaderboardForEntitiesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardForEntitiesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewProp_EntityIds = { "EntityIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardForEntitiesRequest, EntityIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityIds_MetaData), NewProp_EntityIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardForEntitiesRequest, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetLeaderboardForEntitiesRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewProp_EntityIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetLeaderboardForEntitiesRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetLeaderboardForEntitiesRequest),
	alignof(FLeaderboardsGetLeaderboardForEntitiesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardForEntitiesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardForEntitiesRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardForEntitiesRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetLeaderboardForEntitiesRequest

// Begin ScriptStruct FLeaderboardsGetStatisticDefinitionRequest
static_assert(std::is_polymorphic<FLeaderboardsGetStatisticDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetStatisticDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionRequest;
class UScriptStruct* FLeaderboardsGetStatisticDefinitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetStatisticDefinitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetStatisticDefinitionRequest>()
{
	return FLeaderboardsGetStatisticDefinitionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic. Must be less than 50 characters. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetStatisticDefinitionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetStatisticDefinitionRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetStatisticDefinitionRequest),
	alignof(FLeaderboardsGetStatisticDefinitionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetStatisticDefinitionRequest

// Begin ScriptStruct FLeaderboardsGetStatisticDefinitionResponse
static_assert(std::is_polymorphic<FLeaderboardsGetStatisticDefinitionResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsGetStatisticDefinitionResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionResponse;
class UScriptStruct* FLeaderboardsGetStatisticDefinitionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetStatisticDefinitionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetStatisticDefinitionResponse>()
{
	return FLeaderboardsGetStatisticDefinitionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The columns for the statistic defining the aggregation method for each column. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The columns for the statistic defining the aggregation method for each column." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Created time, in UTC */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Created time, in UTC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity type that can have this statistic. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity type that can have this statistic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResetTime_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last time, in UTC, statistic version was incremented. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last time, in UTC, statistic version was incremented." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedLeaderboardNames_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of leaderboards that are linked to this statistic definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of leaderboards that are linked to this statistic definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the statistic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Statistic version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Statistic version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionConfiguration_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version reset configuration for the leaderboard definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetStatisticDefinitionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionResponse, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionResponse, Created), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionResponse, EntityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityType_MetaData), NewProp_EntityType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_LastResetTime = { "LastResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionResponse, LastResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResetTime_MetaData), NewProp_LastResetTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_LinkedLeaderboardNames = { "LinkedLeaderboardNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionResponse, LinkedLeaderboardNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedLeaderboardNames_MetaData), NewProp_LinkedLeaderboardNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionResponse, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_VersionConfiguration = { "VersionConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionResponse, VersionConfiguration), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionConfiguration_MetaData), NewProp_VersionConfiguration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Created,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_EntityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_LastResetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_LinkedLeaderboardNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewProp_VersionConfiguration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsGetStatisticDefinitionResponse",
	Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::PropPointers),
	sizeof(FLeaderboardsGetStatisticDefinitionResponse),
	alignof(FLeaderboardsGetStatisticDefinitionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetStatisticDefinitionResponse

// Begin ScriptStruct FLeaderboardsGetStatisticDefinitionsRequest
static_assert(std::is_polymorphic<FLeaderboardsGetStatisticDefinitionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetStatisticDefinitionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsRequest;
class UScriptStruct* FLeaderboardsGetStatisticDefinitionsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetStatisticDefinitionsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetStatisticDefinitionsRequest>()
{
	return FLeaderboardsGetStatisticDefinitionsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetStatisticDefinitionsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetStatisticDefinitionsRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetStatisticDefinitionsRequest),
	alignof(FLeaderboardsGetStatisticDefinitionsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetStatisticDefinitionsRequest

// Begin ScriptStruct FLeaderboardsGetStatisticDefinitionsResponse
static_assert(std::is_polymorphic<FLeaderboardsGetStatisticDefinitionsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsGetStatisticDefinitionsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsResponse;
class UScriptStruct* FLeaderboardsGetStatisticDefinitionsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetStatisticDefinitionsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetStatisticDefinitionsResponse>()
{
	return FLeaderboardsGetStatisticDefinitionsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatisticDefinitions_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of statistic definitions for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of statistic definitions for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatisticDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatisticDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetStatisticDefinitionsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions_Inner = { "StatisticDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions = { "StatisticDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticDefinitionsResponse, StatisticDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatisticDefinitions_MetaData), NewProp_StatisticDefinitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsGetStatisticDefinitionsResponse",
	Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::PropPointers),
	sizeof(FLeaderboardsGetStatisticDefinitionsResponse),
	alignof(FLeaderboardsGetStatisticDefinitionsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetStatisticDefinitionsResponse

// Begin ScriptStruct FLeaderboardsGetStatisticsRequest
static_assert(std::is_polymorphic<FLeaderboardsGetStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsRequest;
class UScriptStruct* FLeaderboardsGetStatisticsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetStatisticsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetStatisticsRequest>()
{
	return FLeaderboardsGetStatisticsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetStatisticsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetStatisticsRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetStatisticsRequest),
	alignof(FLeaderboardsGetStatisticsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetStatisticsRequest

// Begin ScriptStruct FLeaderboardsGetStatisticsResponse
static_assert(std::is_polymorphic<FLeaderboardsGetStatisticsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsGetStatisticsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsResponse;
class UScriptStruct* FLeaderboardsGetStatisticsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetStatisticsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetStatisticsResponse>()
{
	return FLeaderboardsGetStatisticsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnDetails_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A mapping of statistic name to the columns defined in the corresponding definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A mapping of statistic name to the columns defined in the corresponding definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of statistics keyed by Name. Only the latest version of a statistic is returned. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetStatisticsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::NewProp_ColumnDetails = { "ColumnDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsResponse, ColumnDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnDetails_MetaData), NewProp_ColumnDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsResponse, Statistics), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::NewProp_ColumnDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::NewProp_Statistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsGetStatisticsResponse",
	Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::PropPointers),
	sizeof(FLeaderboardsGetStatisticsResponse),
	alignof(FLeaderboardsGetStatisticsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetStatisticsResponse

// Begin ScriptStruct FLeaderboardsGetStatisticsForEntitiesRequest
static_assert(std::is_polymorphic<FLeaderboardsGetStatisticsForEntitiesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsGetStatisticsForEntitiesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesRequest;
class UScriptStruct* FLeaderboardsGetStatisticsForEntitiesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetStatisticsForEntitiesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetStatisticsForEntitiesRequest>()
{
	return FLeaderboardsGetStatisticsForEntitiesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of Entity IDs to retrieve statistics for. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetStatisticsForEntitiesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsForEntitiesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsForEntitiesRequest, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entities_MetaData), NewProp_Entities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::NewProp_Entities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::NewProp_Entities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsGetStatisticsForEntitiesRequest",
	Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::PropPointers),
	sizeof(FLeaderboardsGetStatisticsForEntitiesRequest),
	alignof(FLeaderboardsGetStatisticsForEntitiesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetStatisticsForEntitiesRequest

// Begin ScriptStruct FLeaderboardsGetStatisticsForEntitiesResponse
static_assert(std::is_polymorphic<FLeaderboardsGetStatisticsForEntitiesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsGetStatisticsForEntitiesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesResponse;
class UScriptStruct* FLeaderboardsGetStatisticsForEntitiesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsGetStatisticsForEntitiesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsGetStatisticsForEntitiesResponse>()
{
	return FLeaderboardsGetStatisticsForEntitiesResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnDetails_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A mapping of statistic name to the columns defined in the corresponding definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A mapping of statistic name to the columns defined in the corresponding definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitiesStatistics_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of entities mapped to their statistics. Only the latest version of a statistic is returned. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsGetStatisticsForEntitiesResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::NewProp_ColumnDetails = { "ColumnDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsForEntitiesResponse, ColumnDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnDetails_MetaData), NewProp_ColumnDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::NewProp_EntitiesStatistics_Inner = { "EntitiesStatistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::NewProp_EntitiesStatistics = { "EntitiesStatistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsGetStatisticsForEntitiesResponse, EntitiesStatistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitiesStatistics_MetaData), NewProp_EntitiesStatistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::NewProp_ColumnDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::NewProp_EntitiesStatistics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::NewProp_EntitiesStatistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsGetStatisticsForEntitiesResponse",
	Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::PropPointers),
	sizeof(FLeaderboardsGetStatisticsForEntitiesResponse),
	alignof(FLeaderboardsGetStatisticsForEntitiesResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsGetStatisticsForEntitiesResponse

// Begin ScriptStruct FLeaderboardsIncrementStatisticVersionRequest
static_assert(std::is_polymorphic<FLeaderboardsIncrementStatisticVersionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsIncrementStatisticVersionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionRequest;
class UScriptStruct* FLeaderboardsIncrementStatisticVersionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsIncrementStatisticVersionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsIncrementStatisticVersionRequest>()
{
	return FLeaderboardsIncrementStatisticVersionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the statistic to increment the version of. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsIncrementStatisticVersionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsIncrementStatisticVersionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsIncrementStatisticVersionRequest, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsIncrementStatisticVersionRequest",
	Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::PropPointers),
	sizeof(FLeaderboardsIncrementStatisticVersionRequest),
	alignof(FLeaderboardsIncrementStatisticVersionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsIncrementStatisticVersionRequest

// Begin ScriptStruct FLeaderboardsIncrementStatisticVersionResponse
static_assert(std::is_polymorphic<FLeaderboardsIncrementStatisticVersionResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsIncrementStatisticVersionResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionResponse;
class UScriptStruct* FLeaderboardsIncrementStatisticVersionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsIncrementStatisticVersionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsIncrementStatisticVersionResponse>()
{
	return FLeaderboardsIncrementStatisticVersionResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New statistic version. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New statistic version." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsIncrementStatisticVersionResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsIncrementStatisticVersionResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsIncrementStatisticVersionResponse",
	Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::PropPointers),
	sizeof(FLeaderboardsIncrementStatisticVersionResponse),
	alignof(FLeaderboardsIncrementStatisticVersionResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsIncrementStatisticVersionResponse

// Begin ScriptStruct FLeaderboardsListStatisticDefinitionsRequest
static_assert(std::is_polymorphic<FLeaderboardsListStatisticDefinitionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsListStatisticDefinitionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsRequest;
class UScriptStruct* FLeaderboardsListStatisticDefinitionsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsListStatisticDefinitionsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsListStatisticDefinitionsRequest>()
{
	return FLeaderboardsListStatisticDefinitionsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsListStatisticDefinitionsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsListStatisticDefinitionsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsListStatisticDefinitionsRequest",
	Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::PropPointers),
	sizeof(FLeaderboardsListStatisticDefinitionsRequest),
	alignof(FLeaderboardsListStatisticDefinitionsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsListStatisticDefinitionsRequest

// Begin ScriptStruct FLeaderboardsListStatisticDefinitionsResponse
static_assert(std::is_polymorphic<FLeaderboardsListStatisticDefinitionsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsListStatisticDefinitionsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsResponse;
class UScriptStruct* FLeaderboardsListStatisticDefinitionsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsListStatisticDefinitionsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsListStatisticDefinitionsResponse>()
{
	return FLeaderboardsListStatisticDefinitionsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatisticDefinitions_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of statistic definitions for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsListStatisticDefinitionsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsListStatisticDefinitionsResponse, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions_Inner = { "StatisticDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions = { "StatisticDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsListStatisticDefinitionsResponse, StatisticDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatisticDefinitions_MetaData), NewProp_StatisticDefinitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::NewProp_StatisticDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsListStatisticDefinitionsResponse",
	Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::PropPointers),
	sizeof(FLeaderboardsListStatisticDefinitionsResponse),
	alignof(FLeaderboardsListStatisticDefinitionsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsListStatisticDefinitionsResponse

// Begin ScriptStruct FLeaderboardsUpdateStatisticsRequest
static_assert(std::is_polymorphic<FLeaderboardsUpdateStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLeaderboardsUpdateStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsRequest;
class UScriptStruct* FLeaderboardsUpdateStatisticsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsUpdateStatisticsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsUpdateStatisticsRequest>()
{
	return FLeaderboardsUpdateStatisticsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of statistics to update, maximum 50. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsUpdateStatisticsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateStatisticsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewProp_Statistics_Inner = { "Statistics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateStatisticsRequest, Statistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewProp_Statistics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewProp_Statistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"LeaderboardsUpdateStatisticsRequest",
	Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::PropPointers),
	sizeof(FLeaderboardsUpdateStatisticsRequest),
	alignof(FLeaderboardsUpdateStatisticsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsRequest.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsRequest.InnerSingleton;
}
// End ScriptStruct FLeaderboardsUpdateStatisticsRequest

// Begin ScriptStruct FLeaderboardsUpdateStatisticsResponse
static_assert(std::is_polymorphic<FLeaderboardsUpdateStatisticsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLeaderboardsUpdateStatisticsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsResponse;
class UScriptStruct* FLeaderboardsUpdateStatisticsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LeaderboardsUpdateStatisticsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLeaderboardsUpdateStatisticsResponse>()
{
	return FLeaderboardsUpdateStatisticsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnDetails_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A mapping of statistic name to the columns defined in the corresponding definition. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A mapping of statistic name to the columns defined in the corresponding definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updated entity profile statistics. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardsUpdateStatisticsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::NewProp_ColumnDetails = { "ColumnDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateStatisticsResponse, ColumnDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnDetails_MetaData), NewProp_ColumnDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateStatisticsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardsUpdateStatisticsResponse, Statistics), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::NewProp_ColumnDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::NewProp_Statistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"LeaderboardsUpdateStatisticsResponse",
	Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::PropPointers),
	sizeof(FLeaderboardsUpdateStatisticsResponse),
	alignof(FLeaderboardsUpdateStatisticsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsResponse.InnerSingleton;
}
// End ScriptStruct FLeaderboardsUpdateStatisticsResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLeaderboardsCreateLeaderboardDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsCreateLeaderboardDefinitionRequest_Statics::NewStructOps, TEXT("LeaderboardsCreateLeaderboardDefinitionRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsCreateLeaderboardDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsCreateLeaderboardDefinitionRequest), 3309039794U) },
		{ FLeaderboardsEmptyResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse_Statics::NewStructOps, TEXT("LeaderboardsEmptyResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsEmptyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsEmptyResponse), 1707282111U) },
		{ FLeaderboardsDeleteLeaderboardDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardDefinitionRequest_Statics::NewStructOps, TEXT("LeaderboardsDeleteLeaderboardDefinitionRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsDeleteLeaderboardDefinitionRequest), 4277650012U) },
		{ FLeaderboardsDeleteLeaderboardEntriesRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsDeleteLeaderboardEntriesRequest_Statics::NewStructOps, TEXT("LeaderboardsDeleteLeaderboardEntriesRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsDeleteLeaderboardEntriesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsDeleteLeaderboardEntriesRequest), 1853838768U) },
		{ FLeaderboardsGetLeaderboardDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionRequest_Statics::NewStructOps, TEXT("LeaderboardsGetLeaderboardDefinitionRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetLeaderboardDefinitionRequest), 2678920339U) },
		{ FLeaderboardsGetLeaderboardDefinitionResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse_Statics::NewStructOps, TEXT("LeaderboardsGetLeaderboardDefinitionResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardDefinitionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetLeaderboardDefinitionResponse), 3238118768U) },
		{ FLeaderboardsIncrementLeaderboardVersionRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionRequest_Statics::NewStructOps, TEXT("LeaderboardsIncrementLeaderboardVersionRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsIncrementLeaderboardVersionRequest), 230069641U) },
		{ FLeaderboardsIncrementLeaderboardVersionResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse_Statics::NewStructOps, TEXT("LeaderboardsIncrementLeaderboardVersionResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsIncrementLeaderboardVersionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsIncrementLeaderboardVersionResponse), 392003926U) },
		{ FLeaderboardsListLeaderboardDefinitionsRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsRequest_Statics::NewStructOps, TEXT("LeaderboardsListLeaderboardDefinitionsRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsListLeaderboardDefinitionsRequest), 2123262140U) },
		{ FLeaderboardsListLeaderboardDefinitionsResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse_Statics::NewStructOps, TEXT("LeaderboardsListLeaderboardDefinitionsResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsListLeaderboardDefinitionsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsListLeaderboardDefinitionsResponse), 3998172070U) },
		{ FLeaderboardsUnlinkLeaderboardFromStatisticRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsUnlinkLeaderboardFromStatisticRequest_Statics::NewStructOps, TEXT("LeaderboardsUnlinkLeaderboardFromStatisticRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsUnlinkLeaderboardFromStatisticRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsUnlinkLeaderboardFromStatisticRequest), 1914063927U) },
		{ FLeaderboardsUpdateLeaderboardEntriesRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsUpdateLeaderboardEntriesRequest_Statics::NewStructOps, TEXT("LeaderboardsUpdateLeaderboardEntriesRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsUpdateLeaderboardEntriesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsUpdateLeaderboardEntriesRequest), 644463315U) },
		{ FLeaderboardsCreateStatisticDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsCreateStatisticDefinitionRequest_Statics::NewStructOps, TEXT("LeaderboardsCreateStatisticDefinitionRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsCreateStatisticDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsCreateStatisticDefinitionRequest), 1669595923U) },
		{ FLeaderboardsDeleteStatisticDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticDefinitionRequest_Statics::NewStructOps, TEXT("LeaderboardsDeleteStatisticDefinitionRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsDeleteStatisticDefinitionRequest), 2584280669U) },
		{ FLeaderboardsDeleteStatisticsRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsRequest_Statics::NewStructOps, TEXT("LeaderboardsDeleteStatisticsRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsDeleteStatisticsRequest), 89882871U) },
		{ FLeaderboardsDeleteStatisticsResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse_Statics::NewStructOps, TEXT("LeaderboardsDeleteStatisticsResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsDeleteStatisticsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsDeleteStatisticsResponse), 1463845676U) },
		{ FLeaderboardsGetEntityLeaderboardResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse_Statics::NewStructOps, TEXT("LeaderboardsGetEntityLeaderboardResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetEntityLeaderboardResponse), 4096382263U) },
		{ FLeaderboardsGetFriendLeaderboardForEntityRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetFriendLeaderboardForEntityRequest_Statics::NewStructOps, TEXT("LeaderboardsGetFriendLeaderboardForEntityRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetFriendLeaderboardForEntityRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetFriendLeaderboardForEntityRequest), 2436005779U) },
		{ FLeaderboardsGetEntityLeaderboardRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardRequest_Statics::NewStructOps, TEXT("LeaderboardsGetEntityLeaderboardRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetEntityLeaderboardRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetEntityLeaderboardRequest), 2614315299U) },
		{ FLeaderboardsGetLeaderboardAroundEntityRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardAroundEntityRequest_Statics::NewStructOps, TEXT("LeaderboardsGetLeaderboardAroundEntityRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardAroundEntityRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetLeaderboardAroundEntityRequest), 3938393632U) },
		{ FLeaderboardsGetLeaderboardForEntitiesRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardForEntitiesRequest_Statics::NewStructOps, TEXT("LeaderboardsGetLeaderboardForEntitiesRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetLeaderboardForEntitiesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetLeaderboardForEntitiesRequest), 1392271940U) },
		{ FLeaderboardsGetStatisticDefinitionRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionRequest_Statics::NewStructOps, TEXT("LeaderboardsGetStatisticDefinitionRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetStatisticDefinitionRequest), 306225676U) },
		{ FLeaderboardsGetStatisticDefinitionResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse_Statics::NewStructOps, TEXT("LeaderboardsGetStatisticDefinitionResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetStatisticDefinitionResponse), 4242106806U) },
		{ FLeaderboardsGetStatisticDefinitionsRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsRequest_Statics::NewStructOps, TEXT("LeaderboardsGetStatisticDefinitionsRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetStatisticDefinitionsRequest), 968816932U) },
		{ FLeaderboardsGetStatisticDefinitionsResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse_Statics::NewStructOps, TEXT("LeaderboardsGetStatisticDefinitionsResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticDefinitionsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetStatisticDefinitionsResponse), 3139977831U) },
		{ FLeaderboardsGetStatisticsRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsRequest_Statics::NewStructOps, TEXT("LeaderboardsGetStatisticsRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetStatisticsRequest), 677667431U) },
		{ FLeaderboardsGetStatisticsResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse_Statics::NewStructOps, TEXT("LeaderboardsGetStatisticsResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetStatisticsResponse), 703329285U) },
		{ FLeaderboardsGetStatisticsForEntitiesRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesRequest_Statics::NewStructOps, TEXT("LeaderboardsGetStatisticsForEntitiesRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetStatisticsForEntitiesRequest), 2280346512U) },
		{ FLeaderboardsGetStatisticsForEntitiesResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse_Statics::NewStructOps, TEXT("LeaderboardsGetStatisticsForEntitiesResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsGetStatisticsForEntitiesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsGetStatisticsForEntitiesResponse), 913478776U) },
		{ FLeaderboardsIncrementStatisticVersionRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionRequest_Statics::NewStructOps, TEXT("LeaderboardsIncrementStatisticVersionRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsIncrementStatisticVersionRequest), 3340646633U) },
		{ FLeaderboardsIncrementStatisticVersionResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse_Statics::NewStructOps, TEXT("LeaderboardsIncrementStatisticVersionResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsIncrementStatisticVersionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsIncrementStatisticVersionResponse), 3645743905U) },
		{ FLeaderboardsListStatisticDefinitionsRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsRequest_Statics::NewStructOps, TEXT("LeaderboardsListStatisticDefinitionsRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsListStatisticDefinitionsRequest), 2402477041U) },
		{ FLeaderboardsListStatisticDefinitionsResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse_Statics::NewStructOps, TEXT("LeaderboardsListStatisticDefinitionsResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsListStatisticDefinitionsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsListStatisticDefinitionsResponse), 4144721463U) },
		{ FLeaderboardsUpdateStatisticsRequest::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsRequest_Statics::NewStructOps, TEXT("LeaderboardsUpdateStatisticsRequest"), &Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsUpdateStatisticsRequest), 4118220693U) },
		{ FLeaderboardsUpdateStatisticsResponse::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse_Statics::NewStructOps, TEXT("LeaderboardsUpdateStatisticsResponse"), &Z_Registration_Info_UScriptStruct_LeaderboardsUpdateStatisticsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardsUpdateStatisticsResponse), 2138865466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModels_h_3995329589(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
