// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabInsightsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabInsightsModels() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FInsightsInsightsEmptyRequest
static_assert(std::is_polymorphic<FInsightsInsightsEmptyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsEmptyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest;
class UScriptStruct* FInsightsInsightsEmptyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsEmptyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsEmptyRequest>()
{
	return FInsightsInsightsEmptyRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Analytics\n//////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Analytics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsEmptyRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsEmptyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"InsightsInsightsEmptyRequest",
	Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers),
	sizeof(FInsightsInsightsEmptyRequest),
	alignof(FInsightsInsightsEmptyRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsEmptyRequest

// Begin ScriptStruct FInsightsInsightsGetDetailsResponse
static_assert(std::is_polymorphic<FInsightsInsightsGetDetailsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetDetailsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse;
class UScriptStruct* FInsightsInsightsGetDetailsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetDetailsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetDetailsResponse>()
{
	return FInsightsInsightsGetDetailsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataUsageMb_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of data (in MB) currently used by Insights. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of data (in MB) currently used by Insights." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Details of any error that occurred while retrieving Insights details. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Details of any error that occurred while retrieving Insights details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limits_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allowed range of values for performance level and data storage retention. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allowed range of values for performance level and data storage retention." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingOperations_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of pending Insights operations for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of pending Insights operations for the title." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current Insights performance level setting. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Insights performance level setting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current Insights data storage retention value in days. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Insights data storage retention value in days." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataUsageMb;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Limits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingOperations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingOperations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerformanceLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RetentionDays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetDetailsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb = { "DataUsageMb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, DataUsageMb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataUsageMb_MetaData), NewProp_DataUsageMb_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits = { "Limits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, Limits), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limits_MetaData), NewProp_Limits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_Inner = { "PendingOperations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations = { "PendingOperations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, PendingOperations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingOperations_MetaData), NewProp_PendingOperations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel = { "PerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, PerformanceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceLevel_MetaData), NewProp_PerformanceLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays = { "RetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, RetentionDays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetentionDays_MetaData), NewProp_RetentionDays_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"InsightsInsightsGetDetailsResponse",
	Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers),
	sizeof(FInsightsInsightsGetDetailsResponse),
	alignof(FInsightsInsightsGetDetailsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsGetDetailsResponse

// Begin ScriptStruct FInsightsInsightsGetLimitsResponse
static_assert(std::is_polymorphic<FInsightsInsightsGetLimitsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetLimitsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse;
class UScriptStruct* FInsightsInsightsGetLimitsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetLimitsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetLimitsResponse>()
{
	return FInsightsInsightsGetLimitsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default Insights performance level. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Insights performance level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStorageRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default Insights data storage retention days. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Insights data storage retention days." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StorageMaxRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum allowed data storage retention days. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed data storage retention days." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StorageMinRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum allowed data storage retention days. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum allowed data storage retention days." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubMeters_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of Insights submeter limits for the allowed performance levels. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Insights submeter limits for the allowed performance levels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultPerformanceLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultStorageRetentionDays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StorageMaxRetentionDays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StorageMinRetentionDays;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubMeters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubMeters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetLimitsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel = { "DefaultPerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, DefaultPerformanceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPerformanceLevel_MetaData), NewProp_DefaultPerformanceLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays = { "DefaultStorageRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, DefaultStorageRetentionDays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStorageRetentionDays_MetaData), NewProp_DefaultStorageRetentionDays_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays = { "StorageMaxRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, StorageMaxRetentionDays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StorageMaxRetentionDays_MetaData), NewProp_StorageMaxRetentionDays_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays = { "StorageMinRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, StorageMinRetentionDays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StorageMinRetentionDays_MetaData), NewProp_StorageMinRetentionDays_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_Inner = { "SubMeters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters = { "SubMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, SubMeters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubMeters_MetaData), NewProp_SubMeters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"InsightsInsightsGetLimitsResponse",
	Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers),
	sizeof(FInsightsInsightsGetLimitsResponse),
	alignof(FInsightsInsightsGetLimitsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsGetLimitsResponse

// Begin ScriptStruct FInsightsInsightsGetOperationStatusRequest
static_assert(std::is_polymorphic<FInsightsInsightsGetOperationStatusRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsGetOperationStatusRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest;
class UScriptStruct* FInsightsInsightsGetOperationStatusRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetOperationStatusRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetOperationStatusRequest>()
{
	return FInsightsInsightsGetOperationStatusRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current status for the requested operation id. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current status for the requested operation id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Id of the Insights operation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id of the Insights operation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetOperationStatusRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusRequest, OperationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationId_MetaData), NewProp_OperationId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"InsightsInsightsGetOperationStatusRequest",
	Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers),
	sizeof(FInsightsInsightsGetOperationStatusRequest),
	alignof(FInsightsInsightsGetOperationStatusRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsGetOperationStatusRequest

// Begin ScriptStruct FInsightsInsightsGetOperationStatusResponse
static_assert(std::is_polymorphic<FInsightsInsightsGetOperationStatusResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetOperationStatusResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse;
class UScriptStruct* FInsightsInsightsGetOperationStatusResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetOperationStatusResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetOperationStatusResponse>()
{
	return FInsightsInsightsGetOperationStatusResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional message related to the operation details. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional message related to the operation details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationCompletedTime_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time the operation was completed. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time the operation was completed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Id of the Insights operation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id of the Insights operation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationLastUpdated_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time the operation status was last updated. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time the operation status was last updated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationStartedTime_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time the operation started. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time the operation started." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of operation, SetPerformance or SetStorageRetention. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of operation, SetPerformance or SetStorageRetention." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationValue_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The value requested for the operation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value requested for the operation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current status of the operation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current status of the operation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationCompletedTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationLastUpdated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationStartedTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OperationValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetOperationStatusResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime = { "OperationCompletedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationCompletedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationCompletedTime_MetaData), NewProp_OperationCompletedTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationId_MetaData), NewProp_OperationId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated = { "OperationLastUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationLastUpdated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationLastUpdated_MetaData), NewProp_OperationLastUpdated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime = { "OperationStartedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationStartedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationStartedTime_MetaData), NewProp_OperationStartedTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationType_MetaData), NewProp_OperationType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue = { "OperationValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationValue_MetaData), NewProp_OperationValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"InsightsInsightsGetOperationStatusResponse",
	Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers),
	sizeof(FInsightsInsightsGetOperationStatusResponse),
	alignof(FInsightsInsightsGetOperationStatusResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsGetOperationStatusResponse

// Begin ScriptStruct FInsightsInsightsGetPendingOperationsRequest
static_assert(std::is_polymorphic<FInsightsInsightsGetPendingOperationsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsGetPendingOperationsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest;
class UScriptStruct* FInsightsInsightsGetPendingOperationsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetPendingOperationsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetPendingOperationsRequest>()
{
	return FInsightsInsightsGetPendingOperationsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a list of operations that are in the pending state for the requested operation type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of operations that are in the pending state for the requested operation type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of pending operations requested, or blank for all operation types. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of pending operations requested, or blank for all operation types." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetPendingOperationsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsRequest, OperationType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationType_MetaData), NewProp_OperationType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"InsightsInsightsGetPendingOperationsRequest",
	Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers),
	sizeof(FInsightsInsightsGetPendingOperationsRequest),
	alignof(FInsightsInsightsGetPendingOperationsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsGetPendingOperationsRequest

// Begin ScriptStruct FInsightsInsightsGetPendingOperationsResponse
static_assert(std::is_polymorphic<FInsightsInsightsGetPendingOperationsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetPendingOperationsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse;
class UScriptStruct* FInsightsInsightsGetPendingOperationsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetPendingOperationsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetPendingOperationsResponse>()
{
	return FInsightsInsightsGetPendingOperationsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingOperations_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of pending Insights operations. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of pending Insights operations." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingOperations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingOperations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetPendingOperationsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_Inner = { "PendingOperations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations = { "PendingOperations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsResponse, PendingOperations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingOperations_MetaData), NewProp_PendingOperations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"InsightsInsightsGetPendingOperationsResponse",
	Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers),
	sizeof(FInsightsInsightsGetPendingOperationsResponse),
	alignof(FInsightsInsightsGetPendingOperationsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsGetPendingOperationsResponse

// Begin ScriptStruct FInsightsInsightsOperationResponse
static_assert(std::is_polymorphic<FInsightsInsightsOperationResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsOperationResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse;
class UScriptStruct* FInsightsInsightsOperationResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsOperationResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsOperationResponse>()
{
	return FInsightsInsightsOperationResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional message related to the operation details. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional message related to the operation details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Id of the Insights operation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id of the Insights operation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of operation, SetPerformance or SetStorageRetention. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of operation, SetPerformance or SetStorageRetention." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsOperationResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, OperationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationId_MetaData), NewProp_OperationId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, OperationType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationType_MetaData), NewProp_OperationType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"InsightsInsightsOperationResponse",
	Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers),
	sizeof(FInsightsInsightsOperationResponse),
	alignof(FInsightsInsightsOperationResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsOperationResponse

// Begin ScriptStruct FInsightsInsightsSetPerformanceRequest
static_assert(std::is_polymorphic<FInsightsInsightsSetPerformanceRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsSetPerformanceRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest;
class UScriptStruct* FInsightsInsightsSetPerformanceRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsSetPerformanceRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsSetPerformanceRequest>()
{
	return FInsightsInsightsSetPerformanceRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the performance level to the requested value. Use the GetLimits method to get the allowed values. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the performance level to the requested value. Use the GetLimits method to get the allowed values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Insights performance level to apply to the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Insights performance level to apply to the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerformanceLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsSetPerformanceRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsSetPerformanceRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel = { "PerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsSetPerformanceRequest, PerformanceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceLevel_MetaData), NewProp_PerformanceLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"InsightsInsightsSetPerformanceRequest",
	Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers),
	sizeof(FInsightsInsightsSetPerformanceRequest),
	alignof(FInsightsInsightsSetPerformanceRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsSetPerformanceRequest

// Begin ScriptStruct FInsightsInsightsSetStorageRetentionRequest
static_assert(std::is_polymorphic<FInsightsInsightsSetStorageRetentionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsSetStorageRetentionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest;
class UScriptStruct* FInsightsInsightsSetStorageRetentionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsSetStorageRetentionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsSetStorageRetentionRequest>()
{
	return FInsightsInsightsSetStorageRetentionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the data storage retention to the requested value. Use the GetLimits method to get the range of allowed values. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the data storage retention to the requested value. Use the GetLimits method to get the range of allowed values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Insights data storage retention value (in days) to apply to the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Insights data storage retention value (in days) to apply to the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RetentionDays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsSetStorageRetentionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsSetStorageRetentionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays = { "RetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInsightsInsightsSetStorageRetentionRequest, RetentionDays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetentionDays_MetaData), NewProp_RetentionDays_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"InsightsInsightsSetStorageRetentionRequest",
	Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers),
	sizeof(FInsightsInsightsSetStorageRetentionRequest),
	alignof(FInsightsInsightsSetStorageRetentionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.InnerSingleton;
}
// End ScriptStruct FInsightsInsightsSetStorageRetentionRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInsightsInsightsEmptyRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewStructOps, TEXT("InsightsInsightsEmptyRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsEmptyRequest), 842733946U) },
		{ FInsightsInsightsGetDetailsResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewStructOps, TEXT("InsightsInsightsGetDetailsResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetDetailsResponse), 876333552U) },
		{ FInsightsInsightsGetLimitsResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewStructOps, TEXT("InsightsInsightsGetLimitsResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetLimitsResponse), 840235063U) },
		{ FInsightsInsightsGetOperationStatusRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewStructOps, TEXT("InsightsInsightsGetOperationStatusRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetOperationStatusRequest), 559491740U) },
		{ FInsightsInsightsGetOperationStatusResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewStructOps, TEXT("InsightsInsightsGetOperationStatusResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetOperationStatusResponse), 4004703226U) },
		{ FInsightsInsightsGetPendingOperationsRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewStructOps, TEXT("InsightsInsightsGetPendingOperationsRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetPendingOperationsRequest), 2430347516U) },
		{ FInsightsInsightsGetPendingOperationsResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewStructOps, TEXT("InsightsInsightsGetPendingOperationsResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetPendingOperationsResponse), 1070085782U) },
		{ FInsightsInsightsOperationResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewStructOps, TEXT("InsightsInsightsOperationResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsOperationResponse), 1666653236U) },
		{ FInsightsInsightsSetPerformanceRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewStructOps, TEXT("InsightsInsightsSetPerformanceRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsSetPerformanceRequest), 266792983U) },
		{ FInsightsInsightsSetStorageRetentionRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewStructOps, TEXT("InsightsInsightsSetStorageRetentionRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsSetStorageRetentionRequest), 702714287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_3559773291(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
