// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabCloudScriptModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabCloudScriptModels() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptEmptyResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FCloudScriptExecuteCloudScriptResult
static_assert(std::is_polymorphic<FCloudScriptExecuteCloudScriptResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptExecuteCloudScriptResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptExecuteCloudScriptResult;
class UScriptStruct* FCloudScriptExecuteCloudScriptResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptExecuteCloudScriptResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptExecuteCloudScriptResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteCloudScriptResult"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptExecuteCloudScriptResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteCloudScriptResult>()
{
	return FCloudScriptExecuteCloudScriptResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Server-Side Cloud Script\n//////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Server-Side Cloud Script" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APIRequestsIssued_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of PlayFab API requests issued by the CloudScript function */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of PlayFab API requests issued by the CloudScript function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Information about the error, if any, that occurred during execution */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about the error, if any, that occurred during execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeSeconds_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the function that executed */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the function that executed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The object returned from the CloudScript function, if any */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object returned from the CloudScript function, if any" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionResultTooLarge_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Flag indicating if the FunctionResult was too large and was subsequently dropped from this event. This only occurs if\n     * the total event size is larger than 350KB.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag indicating if the FunctionResult was too large and was subsequently dropped from this event. This only occurs if\nthe total event size is larger than 350KB." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HttpRequestsIssued_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of external HTTP requests issued by the CloudScript function */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of external HTTP requests issued by the CloudScript function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Logs_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Entries logged during the function execution. These include both entries logged in the function code using log.info()\n     * and log.error() and error entries for API and HTTP request failures.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entries logged during the function execution. These include both entries logged in the function code using log.info()\nand log.error() and error entries for API and HTTP request failures." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogsTooLarge_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Flag indicating if the logs were too large and were subsequently dropped from this event. This only occurs if the total\n     * event size is larger than 350KB after the FunctionResult was removed.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag indicating if the logs were too large and were subsequently dropped from this event. This only occurs if the total\nevent size is larger than 350KB after the FunctionResult was removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryConsumedBytes_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessorTimeSeconds_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Processor time consumed while executing the function. This does not include time spent waiting on API calls or HTTP\n     * requests.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processor time consumed while executing the function. This does not include time spent waiting on API calls or HTTP\nrequests." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Revision_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The revision of the CloudScript that executed */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The revision of the CloudScript that executed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_APIRequestsIssued;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Error;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionTimeSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
	static void NewProp_FunctionResultTooLarge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FunctionResultTooLarge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HttpRequestsIssued;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Logs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Logs;
	static void NewProp_LogsTooLarge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LogsTooLarge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryConsumedBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessorTimeSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Revision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteCloudScriptResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_APIRequestsIssued = { "APIRequestsIssued", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, APIRequestsIssued), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APIRequestsIssued_MetaData), NewProp_APIRequestsIssued_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, Error), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ExecutionTimeSeconds = { "ExecutionTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, ExecutionTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTimeSeconds_MetaData), NewProp_ExecutionTimeSeconds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionResult_MetaData), NewProp_FunctionResult_MetaData) };
void Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge_SetBit(void* Obj)
{
	((FCloudScriptExecuteCloudScriptResult*)Obj)->FunctionResultTooLarge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge = { "FunctionResultTooLarge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloudScriptExecuteCloudScriptResult), &Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionResultTooLarge_MetaData), NewProp_FunctionResultTooLarge_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_HttpRequestsIssued = { "HttpRequestsIssued", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, HttpRequestsIssued), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HttpRequestsIssued_MetaData), NewProp_HttpRequestsIssued_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs_Inner = { "Logs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs = { "Logs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, Logs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Logs_MetaData), NewProp_Logs_MetaData) };
void Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge_SetBit(void* Obj)
{
	((FCloudScriptExecuteCloudScriptResult*)Obj)->LogsTooLarge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge = { "LogsTooLarge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloudScriptExecuteCloudScriptResult), &Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogsTooLarge_MetaData), NewProp_LogsTooLarge_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_MemoryConsumedBytes = { "MemoryConsumedBytes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, MemoryConsumedBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryConsumedBytes_MetaData), NewProp_MemoryConsumedBytes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ProcessorTimeSeconds = { "ProcessorTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, ProcessorTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessorTimeSeconds_MetaData), NewProp_ProcessorTimeSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Revision = { "Revision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, Revision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Revision_MetaData), NewProp_Revision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_APIRequestsIssued,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ExecutionTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_HttpRequestsIssued,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_MemoryConsumedBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ProcessorTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Revision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"CloudScriptExecuteCloudScriptResult",
	Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::PropPointers),
	sizeof(FCloudScriptExecuteCloudScriptResult),
	alignof(FCloudScriptExecuteCloudScriptResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptExecuteCloudScriptResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptExecuteCloudScriptResult.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptExecuteCloudScriptResult.InnerSingleton;
}
// End ScriptStruct FCloudScriptExecuteCloudScriptResult

// Begin ScriptStruct FCloudScriptExecuteEntityCloudScriptRequest
static_assert(std::is_polymorphic<FCloudScriptExecuteEntityCloudScriptRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptExecuteEntityCloudScriptRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptExecuteEntityCloudScriptRequest;
class UScriptStruct* FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptExecuteEntityCloudScriptRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptExecuteEntityCloudScriptRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteEntityCloudScriptRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptExecuteEntityCloudScriptRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteEntityCloudScriptRequest>()
{
	return FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Executes CloudScript with the entity profile that is defined in the request. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes CloudScript with the entity profile that is defined in the request." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the CloudScript function to execute */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the CloudScript function to execute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionParameter_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Object that is passed in to the function as the first argument */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object that is passed in to the function as the first argument" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratePlayStreamEvent_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Generate a 'entity_executed_cloudscript' PlayStream event containing the results of the function execution and other\n     * contextual information. This event will show up in the PlayStream debugger console for the player in Game Manager.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a 'entity_executed_cloudscript' PlayStream event containing the results of the function execution and other\ncontextual information. This event will show up in the PlayStream debugger console for the player in Game Manager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevisionSelection_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Option for which revision of the CloudScript to execute. 'Latest' executes the most recently created revision, 'Live'\n     * executes the current live, published revision, and 'Specific' executes the specified revision. The default value is\n     * 'Specific', if the SpecificRevision parameter is specified, otherwise it is 'Live'.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Option for which revision of the CloudScript to execute. 'Latest' executes the most recently created revision, 'Live'\nexecutes the current live, published revision, and 'Specific' executes the specified revision. The default value is\n'Specific', if the SpecificRevision parameter is specified, otherwise it is 'Live'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificRevision_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The specific revision to execute, when RevisionSelection is set to 'Specific' */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The specific revision to execute, when RevisionSelection is set to 'Specific'" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionParameter;
	static void NewProp_GeneratePlayStreamEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneratePlayStreamEvent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RevisionSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RevisionSelection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpecificRevision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteEntityCloudScriptRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter = { "FunctionParameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, FunctionParameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionParameter_MetaData), NewProp_FunctionParameter_MetaData) };
void Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit(void* Obj)
{
	((FCloudScriptExecuteEntityCloudScriptRequest*)Obj)->GeneratePlayStreamEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent = { "GeneratePlayStreamEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloudScriptExecuteEntityCloudScriptRequest), &Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratePlayStreamEvent_MetaData), NewProp_GeneratePlayStreamEvent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection = { "RevisionSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, RevisionSelection), Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevisionSelection_MetaData), NewProp_RevisionSelection_MetaData) }; // 814663451
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision = { "SpecificRevision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, SpecificRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificRevision_MetaData), NewProp_SpecificRevision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptExecuteEntityCloudScriptRequest",
	Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers),
	sizeof(FCloudScriptExecuteEntityCloudScriptRequest),
	alignof(FCloudScriptExecuteEntityCloudScriptRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptExecuteEntityCloudScriptRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptExecuteEntityCloudScriptRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptExecuteEntityCloudScriptRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptExecuteEntityCloudScriptRequest

// Begin ScriptStruct FCloudScriptExecuteFunctionRequest
static_assert(std::is_polymorphic<FCloudScriptExecuteFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptExecuteFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionRequest;
class UScriptStruct* FCloudScriptExecuteFunctionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteFunctionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteFunctionRequest>()
{
	return FCloudScriptExecuteFunctionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Executes an Azure Function with the profile of the entity that is defined in the request. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes an Azure Function with the profile of the entity that is defined in the request." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the CloudScript function to execute */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the CloudScript function to execute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionParameter_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Object that is passed in to the function as the FunctionArgument field of the FunctionExecutionContext data structure */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object that is passed in to the function as the FunctionArgument field of the FunctionExecutionContext data structure" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratePlayStreamEvent_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Generate a 'entity_executed_cloudscript_function' PlayStream event containing the results of the function execution and\n     * other contextual information. This event will show up in the PlayStream debugger console for the player in Game Manager.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a 'entity_executed_cloudscript_function' PlayStream event containing the results of the function execution and\nother contextual information. This event will show up in the PlayStream debugger console for the player in Game Manager." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionParameter;
	static void NewProp_GeneratePlayStreamEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneratePlayStreamEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteFunctionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter = { "FunctionParameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, FunctionParameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionParameter_MetaData), NewProp_FunctionParameter_MetaData) };
void Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit(void* Obj)
{
	((FCloudScriptExecuteFunctionRequest*)Obj)->GeneratePlayStreamEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent = { "GeneratePlayStreamEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloudScriptExecuteFunctionRequest), &Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratePlayStreamEvent_MetaData), NewProp_GeneratePlayStreamEvent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptExecuteFunctionRequest",
	Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers),
	sizeof(FCloudScriptExecuteFunctionRequest),
	alignof(FCloudScriptExecuteFunctionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptExecuteFunctionRequest

// Begin ScriptStruct FCloudScriptExecuteFunctionResult
static_assert(std::is_polymorphic<FCloudScriptExecuteFunctionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptExecuteFunctionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionResult;
class UScriptStruct* FCloudScriptExecuteFunctionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteFunctionResult"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteFunctionResult>()
{
	return FCloudScriptExecuteFunctionResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Error from the CloudScript Azure Function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Error from the CloudScript Azure Function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeMilliseconds_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The amount of time the function took to execute */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time the function took to execute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the function that executed */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the function that executed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The object returned from the function, if any */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object returned from the function, if any" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionResultTooLarge_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag indicating if the FunctionResult was too large and was subsequently dropped from this event. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag indicating if the FunctionResult was too large and was subsequently dropped from this event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Error;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionTimeMilliseconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
	static void NewProp_FunctionResultTooLarge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FunctionResultTooLarge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteFunctionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, Error), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds = { "ExecutionTimeMilliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, ExecutionTimeMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTimeMilliseconds_MetaData), NewProp_ExecutionTimeMilliseconds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionResult_MetaData), NewProp_FunctionResult_MetaData) };
void Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_SetBit(void* Obj)
{
	((FCloudScriptExecuteFunctionResult*)Obj)->FunctionResultTooLarge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge = { "FunctionResultTooLarge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloudScriptExecuteFunctionResult), &Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionResultTooLarge_MetaData), NewProp_FunctionResultTooLarge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"CloudScriptExecuteFunctionResult",
	Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers),
	sizeof(FCloudScriptExecuteFunctionResult),
	alignof(FCloudScriptExecuteFunctionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionResult.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionResult.InnerSingleton;
}
// End ScriptStruct FCloudScriptExecuteFunctionResult

// Begin ScriptStruct FCloudScriptGetFunctionRequest
static_assert(std::is_polymorphic<FCloudScriptGetFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptGetFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionRequest;
class UScriptStruct* FCloudScriptGetFunctionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptGetFunctionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptGetFunctionRequest>()
{
	return FCloudScriptGetFunctionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the function to register */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the function to register" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptGetFunctionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptGetFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptGetFunctionRequest, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_FunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptGetFunctionRequest",
	Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::PropPointers),
	sizeof(FCloudScriptGetFunctionRequest),
	alignof(FCloudScriptGetFunctionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptGetFunctionRequest

// Begin ScriptStruct FCloudScriptGetFunctionResult
static_assert(std::is_polymorphic<FCloudScriptGetFunctionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptGetFunctionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionResult;
class UScriptStruct* FCloudScriptGetFunctionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptGetFunctionResult"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptGetFunctionResult>()
{
	return FCloudScriptGetFunctionResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The connection string for the storage account containing the queue for a queue trigger Azure Function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The connection string for the storage account containing the queue for a queue trigger Azure Function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionUrl_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The URL to be invoked to execute an HTTP triggered function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The URL to be invoked to execute an HTTP triggered function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the queue for a queue trigger Azure Function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the queue for a queue trigger Azure Function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerType_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The trigger type for the function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The trigger type for the function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QueueName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TriggerType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptGetFunctionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptGetFunctionResult, ConnectionString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionString_MetaData), NewProp_ConnectionString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_FunctionUrl = { "FunctionUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptGetFunctionResult, FunctionUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionUrl_MetaData), NewProp_FunctionUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptGetFunctionResult, QueueName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueueName_MetaData), NewProp_QueueName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_TriggerType = { "TriggerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptGetFunctionResult, TriggerType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerType_MetaData), NewProp_TriggerType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_ConnectionString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_FunctionUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_QueueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_TriggerType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"CloudScriptGetFunctionResult",
	Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::PropPointers),
	sizeof(FCloudScriptGetFunctionResult),
	alignof(FCloudScriptGetFunctionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionResult.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionResult.InnerSingleton;
}
// End ScriptStruct FCloudScriptGetFunctionResult

// Begin ScriptStruct FCloudScriptListEventHubFunctionsResult
static_assert(std::is_polymorphic<FCloudScriptListEventHubFunctionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptListEventHubFunctionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptListEventHubFunctionsResult;
class UScriptStruct* FCloudScriptListEventHubFunctionsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListEventHubFunctionsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptListEventHubFunctionsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListEventHubFunctionsResult"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListEventHubFunctionsResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListEventHubFunctionsResult>()
{
	return FCloudScriptListEventHubFunctionsResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of EventHub triggered functions that are currently registered for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of EventHub triggered functions that are currently registered for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListEventHubFunctionsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptListEventHubFunctionsResult, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::NewProp_Functions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"CloudScriptListEventHubFunctionsResult",
	Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::PropPointers),
	sizeof(FCloudScriptListEventHubFunctionsResult),
	alignof(FCloudScriptListEventHubFunctionsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListEventHubFunctionsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptListEventHubFunctionsResult.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListEventHubFunctionsResult.InnerSingleton;
}
// End ScriptStruct FCloudScriptListEventHubFunctionsResult

// Begin ScriptStruct FCloudScriptListFunctionsRequest
static_assert(std::is_polymorphic<FCloudScriptListFunctionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptListFunctionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsRequest;
class UScriptStruct* FCloudScriptListFunctionsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListFunctionsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListFunctionsRequest>()
{
	return FCloudScriptListFunctionsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A title can have many functions, ListHttpFunctions will return a list of all the currently registered HTTP triggered\n * functions for a given title.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A title can have many functions, ListHttpFunctions will return a list of all the currently registered HTTP triggered\nfunctions for a given title." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListFunctionsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptListFunctionsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptListFunctionsRequest",
	Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::PropPointers),
	sizeof(FCloudScriptListFunctionsRequest),
	alignof(FCloudScriptListFunctionsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptListFunctionsRequest

// Begin ScriptStruct FCloudScriptListFunctionsResult
static_assert(std::is_polymorphic<FCloudScriptListFunctionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptListFunctionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsResult;
class UScriptStruct* FCloudScriptListFunctionsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListFunctionsResult"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListFunctionsResult>()
{
	return FCloudScriptListFunctionsResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of functions that are currently registered for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of functions that are currently registered for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListFunctionsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptListFunctionsResult, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"CloudScriptListFunctionsResult",
	Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::PropPointers),
	sizeof(FCloudScriptListFunctionsResult),
	alignof(FCloudScriptListFunctionsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsResult.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsResult.InnerSingleton;
}
// End ScriptStruct FCloudScriptListFunctionsResult

// Begin ScriptStruct FCloudScriptListHttpFunctionsResult
static_assert(std::is_polymorphic<FCloudScriptListHttpFunctionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptListHttpFunctionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptListHttpFunctionsResult;
class UScriptStruct* FCloudScriptListHttpFunctionsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListHttpFunctionsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptListHttpFunctionsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListHttpFunctionsResult"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListHttpFunctionsResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListHttpFunctionsResult>()
{
	return FCloudScriptListHttpFunctionsResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of HTTP triggered functions that are currently registered for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of HTTP triggered functions that are currently registered for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListHttpFunctionsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptListHttpFunctionsResult, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"CloudScriptListHttpFunctionsResult",
	Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::PropPointers),
	sizeof(FCloudScriptListHttpFunctionsResult),
	alignof(FCloudScriptListHttpFunctionsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListHttpFunctionsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptListHttpFunctionsResult.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListHttpFunctionsResult.InnerSingleton;
}
// End ScriptStruct FCloudScriptListHttpFunctionsResult

// Begin ScriptStruct FCloudScriptListQueuedFunctionsResult
static_assert(std::is_polymorphic<FCloudScriptListQueuedFunctionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptListQueuedFunctionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptListQueuedFunctionsResult;
class UScriptStruct* FCloudScriptListQueuedFunctionsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListQueuedFunctionsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptListQueuedFunctionsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListQueuedFunctionsResult"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListQueuedFunctionsResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListQueuedFunctionsResult>()
{
	return FCloudScriptListQueuedFunctionsResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of Queue triggered functions that are currently registered for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of Queue triggered functions that are currently registered for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListQueuedFunctionsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptListQueuedFunctionsResult, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"CloudScriptListQueuedFunctionsResult",
	Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::PropPointers),
	sizeof(FCloudScriptListQueuedFunctionsResult),
	alignof(FCloudScriptListQueuedFunctionsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptListQueuedFunctionsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptListQueuedFunctionsResult.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptListQueuedFunctionsResult.InnerSingleton;
}
// End ScriptStruct FCloudScriptListQueuedFunctionsResult

// Begin ScriptStruct FCloudScriptEmptyResult
static_assert(std::is_polymorphic<FCloudScriptEmptyResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptEmptyResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptEmptyResult;
class UScriptStruct* FCloudScriptEmptyResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptEmptyResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptEmptyResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptEmptyResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptEmptyResult"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptEmptyResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptEmptyResult>()
{
	return FCloudScriptEmptyResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptEmptyResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"CloudScriptEmptyResult",
	nullptr,
	0,
	sizeof(FCloudScriptEmptyResult),
	alignof(FCloudScriptEmptyResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptEmptyResult()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptEmptyResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptEmptyResult.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptEmptyResult.InnerSingleton;
}
// End ScriptStruct FCloudScriptEmptyResult

// Begin ScriptStruct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest
static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForEntityTriggeredActionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForEntityTriggeredActionRequest;
class UScriptStruct* FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForEntityTriggeredActionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForEntityTriggeredActionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForEntityTriggeredActionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>()
{
	return FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The result of the function execution. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The result of the function execution." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionResult_MetaData), NewProp_FunctionResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptPostFunctionResultForEntityTriggeredActionRequest",
	Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers),
	sizeof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest),
	alignof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForEntityTriggeredActionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForEntityTriggeredActionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForEntityTriggeredActionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest

// Begin ScriptStruct FCloudScriptPostFunctionResultForFunctionExecutionRequest
static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForFunctionExecutionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForFunctionExecutionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForFunctionExecutionRequest;
class UScriptStruct* FCloudScriptPostFunctionResultForFunctionExecutionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForFunctionExecutionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForFunctionExecutionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForFunctionExecutionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForFunctionExecutionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForFunctionExecutionRequest>()
{
	return FCloudScriptPostFunctionResultForFunctionExecutionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The result of the function execution. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The result of the function execution." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForFunctionExecutionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForFunctionExecutionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForFunctionExecutionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForFunctionExecutionRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionResult_MetaData), NewProp_FunctionResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_FunctionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptPostFunctionResultForFunctionExecutionRequest",
	Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::PropPointers),
	sizeof(FCloudScriptPostFunctionResultForFunctionExecutionRequest),
	alignof(FCloudScriptPostFunctionResultForFunctionExecutionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForFunctionExecutionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForFunctionExecutionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForFunctionExecutionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptPostFunctionResultForFunctionExecutionRequest

// Begin ScriptStruct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest
static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForPlayerTriggeredActionRequest;
class UScriptStruct* FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>()
{
	return FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The result of the function execution. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The result of the function execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerProfile_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The player profile the function was invoked with. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player profile the function was invoked with." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayStreamEventEnvelope_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The triggering PlayStream event, if any, that caused the function to be invoked. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The triggering PlayStream event, if any, that caused the function to be invoked." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayStreamEventEnvelope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionResult_MetaData), NewProp_FunctionResult_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile = { "PlayerProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, PlayerProfile), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerProfile_MetaData), NewProp_PlayerProfile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope = { "PlayStreamEventEnvelope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, PlayStreamEventEnvelope), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayStreamEventEnvelope_MetaData), NewProp_PlayStreamEventEnvelope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptPostFunctionResultForPlayerTriggeredActionRequest",
	Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers),
	sizeof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest),
	alignof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest

// Begin ScriptStruct FCloudScriptPostFunctionResultForScheduledTaskRequest
static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForScheduledTaskRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForScheduledTaskRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForScheduledTaskRequest;
class UScriptStruct* FCloudScriptPostFunctionResultForScheduledTaskRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForScheduledTaskRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForScheduledTaskRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForScheduledTaskRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForScheduledTaskRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForScheduledTaskRequest>()
{
	return FCloudScriptPostFunctionResultForScheduledTaskRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The result of the function execution */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The result of the function execution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledTaskId_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The id of the scheduled task that invoked the function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the scheduled task that invoked the function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScheduledTaskId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForScheduledTaskRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForScheduledTaskRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForScheduledTaskRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionResult_MetaData), NewProp_FunctionResult_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_ScheduledTaskId = { "ScheduledTaskId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForScheduledTaskRequest, ScheduledTaskId), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScheduledTaskId_MetaData), NewProp_ScheduledTaskId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_FunctionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_ScheduledTaskId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptPostFunctionResultForScheduledTaskRequest",
	Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::PropPointers),
	sizeof(FCloudScriptPostFunctionResultForScheduledTaskRequest),
	alignof(FCloudScriptPostFunctionResultForScheduledTaskRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForScheduledTaskRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForScheduledTaskRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForScheduledTaskRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptPostFunctionResultForScheduledTaskRequest

// Begin ScriptStruct FCloudScriptRegisterEventHubFunctionRequest
static_assert(std::is_polymorphic<FCloudScriptRegisterEventHubFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptRegisterEventHubFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptRegisterEventHubFunctionRequest;
class UScriptStruct* FCloudScriptRegisterEventHubFunctionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptRegisterEventHubFunctionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptRegisterEventHubFunctionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptRegisterEventHubFunctionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptRegisterEventHubFunctionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptRegisterEventHubFunctionRequest>()
{
	return FCloudScriptRegisterEventHubFunctionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A title can have many functions, RegisterEventHubFunction associates a function name with an event hub name and\n * connection string.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A title can have many functions, RegisterEventHubFunction associates a function name with an event hub name and\nconnection string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A connection string for the namespace of the event hub for the Azure Function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A connection string for the namespace of the event hub for the Azure Function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventHubName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the event hub for the Azure Function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the event hub for the Azure Function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the function to register */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the function to register" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventHubName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptRegisterEventHubFunctionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterEventHubFunctionRequest, ConnectionString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionString_MetaData), NewProp_ConnectionString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterEventHubFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewProp_EventHubName = { "EventHubName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterEventHubFunctionRequest, EventHubName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventHubName_MetaData), NewProp_EventHubName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterEventHubFunctionRequest, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewProp_ConnectionString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewProp_EventHubName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewProp_FunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptRegisterEventHubFunctionRequest",
	Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::PropPointers),
	sizeof(FCloudScriptRegisterEventHubFunctionRequest),
	alignof(FCloudScriptRegisterEventHubFunctionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptRegisterEventHubFunctionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptRegisterEventHubFunctionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptRegisterEventHubFunctionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptRegisterEventHubFunctionRequest

// Begin ScriptStruct FCloudScriptRegisterHttpFunctionRequest
static_assert(std::is_polymorphic<FCloudScriptRegisterHttpFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptRegisterHttpFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptRegisterHttpFunctionRequest;
class UScriptStruct* FCloudScriptRegisterHttpFunctionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptRegisterHttpFunctionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptRegisterHttpFunctionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptRegisterHttpFunctionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptRegisterHttpFunctionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptRegisterHttpFunctionRequest>()
{
	return FCloudScriptRegisterHttpFunctionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the function to register */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the function to register" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionUrl_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Full URL for Azure Function that implements the function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full URL for Azure Function that implements the function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptRegisterHttpFunctionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterHttpFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterHttpFunctionRequest, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionUrl = { "FunctionUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterHttpFunctionRequest, FunctionUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionUrl_MetaData), NewProp_FunctionUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptRegisterHttpFunctionRequest",
	Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::PropPointers),
	sizeof(FCloudScriptRegisterHttpFunctionRequest),
	alignof(FCloudScriptRegisterHttpFunctionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptRegisterHttpFunctionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptRegisterHttpFunctionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptRegisterHttpFunctionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptRegisterHttpFunctionRequest

// Begin ScriptStruct FCloudScriptRegisterQueuedFunctionRequest
static_assert(std::is_polymorphic<FCloudScriptRegisterQueuedFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptRegisterQueuedFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptRegisterQueuedFunctionRequest;
class UScriptStruct* FCloudScriptRegisterQueuedFunctionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptRegisterQueuedFunctionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptRegisterQueuedFunctionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptRegisterQueuedFunctionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptRegisterQueuedFunctionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptRegisterQueuedFunctionRequest>()
{
	return FCloudScriptRegisterQueuedFunctionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A title can have many functions, RegisterQueuedFunction associates a function name with a queue name and connection\n * string.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A title can have many functions, RegisterQueuedFunction associates a function name with a queue name and connection\nstring." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A connection string for the storage account that hosts the queue for the Azure Function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A connection string for the storage account that hosts the queue for the Azure Function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the function to register */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the function to register" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the queue for the Azure Function. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the queue for the Azure Function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QueueName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptRegisterQueuedFunctionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterQueuedFunctionRequest, ConnectionString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionString_MetaData), NewProp_ConnectionString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterQueuedFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterQueuedFunctionRequest, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptRegisterQueuedFunctionRequest, QueueName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueueName_MetaData), NewProp_QueueName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_ConnectionString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_QueueName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptRegisterQueuedFunctionRequest",
	Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::PropPointers),
	sizeof(FCloudScriptRegisterQueuedFunctionRequest),
	alignof(FCloudScriptRegisterQueuedFunctionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptRegisterQueuedFunctionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptRegisterQueuedFunctionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptRegisterQueuedFunctionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptRegisterQueuedFunctionRequest

// Begin ScriptStruct FCloudScriptUnregisterFunctionRequest
static_assert(std::is_polymorphic<FCloudScriptUnregisterFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptUnregisterFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudScriptUnregisterFunctionRequest;
class UScriptStruct* FCloudScriptUnregisterFunctionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptUnregisterFunctionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudScriptUnregisterFunctionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptUnregisterFunctionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptUnregisterFunctionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptUnregisterFunctionRequest>()
{
	return FCloudScriptUnregisterFunctionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the function to register */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the function to register" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptUnregisterFunctionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptUnregisterFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudScriptUnregisterFunctionRequest, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_FunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"CloudScriptUnregisterFunctionRequest",
	Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::PropPointers),
	sizeof(FCloudScriptUnregisterFunctionRequest),
	alignof(FCloudScriptUnregisterFunctionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_CloudScriptUnregisterFunctionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudScriptUnregisterFunctionRequest.InnerSingleton, Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloudScriptUnregisterFunctionRequest.InnerSingleton;
}
// End ScriptStruct FCloudScriptUnregisterFunctionRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCloudScriptExecuteCloudScriptResult::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewStructOps, TEXT("CloudScriptExecuteCloudScriptResult"), &Z_Registration_Info_UScriptStruct_CloudScriptExecuteCloudScriptResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptExecuteCloudScriptResult), 1032846796U) },
		{ FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewStructOps, TEXT("CloudScriptExecuteEntityCloudScriptRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptExecuteEntityCloudScriptRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptExecuteEntityCloudScriptRequest), 3472856409U) },
		{ FCloudScriptExecuteFunctionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewStructOps, TEXT("CloudScriptExecuteFunctionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptExecuteFunctionRequest), 1362225249U) },
		{ FCloudScriptExecuteFunctionResult::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewStructOps, TEXT("CloudScriptExecuteFunctionResult"), &Z_Registration_Info_UScriptStruct_CloudScriptExecuteFunctionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptExecuteFunctionResult), 3729676824U) },
		{ FCloudScriptGetFunctionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewStructOps, TEXT("CloudScriptGetFunctionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptGetFunctionRequest), 879083226U) },
		{ FCloudScriptGetFunctionResult::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewStructOps, TEXT("CloudScriptGetFunctionResult"), &Z_Registration_Info_UScriptStruct_CloudScriptGetFunctionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptGetFunctionResult), 3284073088U) },
		{ FCloudScriptListEventHubFunctionsResult::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptListEventHubFunctionsResult_Statics::NewStructOps, TEXT("CloudScriptListEventHubFunctionsResult"), &Z_Registration_Info_UScriptStruct_CloudScriptListEventHubFunctionsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptListEventHubFunctionsResult), 799336566U) },
		{ FCloudScriptListFunctionsRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewStructOps, TEXT("CloudScriptListFunctionsRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptListFunctionsRequest), 385262971U) },
		{ FCloudScriptListFunctionsResult::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewStructOps, TEXT("CloudScriptListFunctionsResult"), &Z_Registration_Info_UScriptStruct_CloudScriptListFunctionsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptListFunctionsResult), 2278269011U) },
		{ FCloudScriptListHttpFunctionsResult::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewStructOps, TEXT("CloudScriptListHttpFunctionsResult"), &Z_Registration_Info_UScriptStruct_CloudScriptListHttpFunctionsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptListHttpFunctionsResult), 2557529837U) },
		{ FCloudScriptListQueuedFunctionsResult::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewStructOps, TEXT("CloudScriptListQueuedFunctionsResult"), &Z_Registration_Info_UScriptStruct_CloudScriptListQueuedFunctionsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptListQueuedFunctionsResult), 187370885U) },
		{ FCloudScriptEmptyResult::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::NewStructOps, TEXT("CloudScriptEmptyResult"), &Z_Registration_Info_UScriptStruct_CloudScriptEmptyResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptEmptyResult), 1469174665U) },
		{ FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewStructOps, TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForEntityTriggeredActionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest), 2084049422U) },
		{ FCloudScriptPostFunctionResultForFunctionExecutionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewStructOps, TEXT("CloudScriptPostFunctionResultForFunctionExecutionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForFunctionExecutionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptPostFunctionResultForFunctionExecutionRequest), 2694455900U) },
		{ FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewStructOps, TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForPlayerTriggeredActionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest), 304082017U) },
		{ FCloudScriptPostFunctionResultForScheduledTaskRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewStructOps, TEXT("CloudScriptPostFunctionResultForScheduledTaskRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptPostFunctionResultForScheduledTaskRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptPostFunctionResultForScheduledTaskRequest), 1590635762U) },
		{ FCloudScriptRegisterEventHubFunctionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptRegisterEventHubFunctionRequest_Statics::NewStructOps, TEXT("CloudScriptRegisterEventHubFunctionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptRegisterEventHubFunctionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptRegisterEventHubFunctionRequest), 2057557228U) },
		{ FCloudScriptRegisterHttpFunctionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewStructOps, TEXT("CloudScriptRegisterHttpFunctionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptRegisterHttpFunctionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptRegisterHttpFunctionRequest), 1964765178U) },
		{ FCloudScriptRegisterQueuedFunctionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewStructOps, TEXT("CloudScriptRegisterQueuedFunctionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptRegisterQueuedFunctionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptRegisterQueuedFunctionRequest), 735402320U) },
		{ FCloudScriptUnregisterFunctionRequest::StaticStruct, Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewStructOps, TEXT("CloudScriptUnregisterFunctionRequest"), &Z_Registration_Info_UScriptStruct_CloudScriptUnregisterFunctionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudScriptUnregisterFunctionRequest), 3378641127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModels_h_2906633494(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
