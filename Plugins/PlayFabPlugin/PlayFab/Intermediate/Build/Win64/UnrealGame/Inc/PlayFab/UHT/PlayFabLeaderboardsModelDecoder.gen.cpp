// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabLeaderboardsModelDecoder.h"
#include "PlayFab/Classes/PlayFabLeaderboardsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLeaderboardsModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeDeleteStatisticsResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsDeleteStatisticsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteStatisticsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteStatisticsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsDeleteStatisticsResponse, METADATA_PARAMS(0, nullptr) }; // 1463845676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeDeleteStatisticsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeDeleteStatisticsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsDeleteStatisticsResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeDeleteStatisticsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeDeleteStatisticsResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeEmptyResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeEmptyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsEmptyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the EmptyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the EmptyResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeEmptyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeEmptyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 1707282111
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeEmptyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeEmptyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeEmptyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeEmptyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsEmptyResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeEmptyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeEmptyResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeGetEntityLeaderboardResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsGetEntityLeaderboardResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetEntityLeaderboardResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetEntityLeaderboardResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsGetEntityLeaderboardResponse, METADATA_PARAMS(0, nullptr) }; // 4096382263
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeGetEntityLeaderboardResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeGetEntityLeaderboardResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsGetEntityLeaderboardResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeGetEntityLeaderboardResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeGetEntityLeaderboardResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeGetLeaderboardDefinitionResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsGetLeaderboardDefinitionResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetLeaderboardDefinitionResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetLeaderboardDefinitionResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsGetLeaderboardDefinitionResponse, METADATA_PARAMS(0, nullptr) }; // 3238118768
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeGetLeaderboardDefinitionResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeGetLeaderboardDefinitionResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsGetLeaderboardDefinitionResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeGetLeaderboardDefinitionResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeGetLeaderboardDefinitionResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeGetStatisticDefinitionResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsGetStatisticDefinitionResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetStatisticDefinitionResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetStatisticDefinitionResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionResponse, METADATA_PARAMS(0, nullptr) }; // 4242106806
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeGetStatisticDefinitionResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeGetStatisticDefinitionResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsGetStatisticDefinitionResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeGetStatisticDefinitionResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeGetStatisticDefinitionResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeGetStatisticDefinitionsResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsGetStatisticDefinitionsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetStatisticDefinitionsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetStatisticDefinitionsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticDefinitionsResponse, METADATA_PARAMS(0, nullptr) }; // 3139977831
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeGetStatisticDefinitionsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticDefinitionsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeGetStatisticDefinitionsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsGetStatisticDefinitionsResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeGetStatisticDefinitionsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeGetStatisticDefinitionsResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeGetStatisticsForEntitiesResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsGetStatisticsForEntitiesResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetStatisticsForEntitiesResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetStatisticsForEntitiesResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsForEntitiesResponse, METADATA_PARAMS(0, nullptr) }; // 913478776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeGetStatisticsForEntitiesResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeGetStatisticsForEntitiesResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsGetStatisticsForEntitiesResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeGetStatisticsForEntitiesResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeGetStatisticsForEntitiesResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeGetStatisticsResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsGetStatisticsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetStatisticsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetStatisticsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsGetStatisticsResponse, METADATA_PARAMS(0, nullptr) }; // 703329285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeGetStatisticsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeGetStatisticsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsGetStatisticsResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeGetStatisticsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeGetStatisticsResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeIncrementLeaderboardVersionResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsIncrementLeaderboardVersionResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the IncrementLeaderboardVersionResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the IncrementLeaderboardVersionResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsIncrementLeaderboardVersionResponse, METADATA_PARAMS(0, nullptr) }; // 392003926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeIncrementLeaderboardVersionResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeIncrementLeaderboardVersionResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsIncrementLeaderboardVersionResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeIncrementLeaderboardVersionResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeIncrementLeaderboardVersionResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeIncrementStatisticVersionResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsIncrementStatisticVersionResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the IncrementStatisticVersionResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the IncrementStatisticVersionResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsIncrementStatisticVersionResponse, METADATA_PARAMS(0, nullptr) }; // 3645743905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeIncrementStatisticVersionResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeIncrementStatisticVersionResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsIncrementStatisticVersionResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeIncrementStatisticVersionResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeIncrementStatisticVersionResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeListLeaderboardDefinitionsResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsListLeaderboardDefinitionsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the ListLeaderboardDefinitionsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the ListLeaderboardDefinitionsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsListLeaderboardDefinitionsResponse, METADATA_PARAMS(0, nullptr) }; // 3998172070
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeListLeaderboardDefinitionsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeListLeaderboardDefinitionsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsListLeaderboardDefinitionsResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeListLeaderboardDefinitionsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeListLeaderboardDefinitionsResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeListStatisticDefinitionsResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsListStatisticDefinitionsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the ListStatisticDefinitionsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the ListStatisticDefinitionsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsListStatisticDefinitionsResponse, METADATA_PARAMS(0, nullptr) }; // 4144721463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeListStatisticDefinitionsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeListStatisticDefinitionsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsListStatisticDefinitionsResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeListStatisticDefinitionsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeListStatisticDefinitionsResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder Function decodeUpdateStatisticsResponseResponse
struct Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics
{
	struct PlayFabLeaderboardsModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLeaderboardsUpdateStatisticsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Leaderboards | Statistics and Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the UpdateStatisticsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the UpdateStatisticsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLeaderboardsModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLeaderboardsUpdateStatisticsResponse, METADATA_PARAMS(0, nullptr) }; // 2138865466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, nullptr, "decodeUpdateStatisticsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PlayFabLeaderboardsModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLeaderboardsModelDecoder::execdecodeUpdateStatisticsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLeaderboardsUpdateStatisticsResponse*)Z_Param__Result=UPlayFabLeaderboardsModelDecoder::decodeUpdateStatisticsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLeaderboardsModelDecoder Function decodeUpdateStatisticsResponseResponse

// Begin Class UPlayFabLeaderboardsModelDecoder
void UPlayFabLeaderboardsModelDecoder::StaticRegisterNativesUPlayFabLeaderboardsModelDecoder()
{
	UClass* Class = UPlayFabLeaderboardsModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeDeleteStatisticsResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeDeleteStatisticsResponseResponse },
		{ "decodeEmptyResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeEmptyResponseResponse },
		{ "decodeGetEntityLeaderboardResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeGetEntityLeaderboardResponseResponse },
		{ "decodeGetLeaderboardDefinitionResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeGetLeaderboardDefinitionResponseResponse },
		{ "decodeGetStatisticDefinitionResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeGetStatisticDefinitionResponseResponse },
		{ "decodeGetStatisticDefinitionsResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeGetStatisticDefinitionsResponseResponse },
		{ "decodeGetStatisticsForEntitiesResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeGetStatisticsForEntitiesResponseResponse },
		{ "decodeGetStatisticsResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeGetStatisticsResponseResponse },
		{ "decodeIncrementLeaderboardVersionResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeIncrementLeaderboardVersionResponseResponse },
		{ "decodeIncrementStatisticVersionResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeIncrementStatisticVersionResponseResponse },
		{ "decodeListLeaderboardDefinitionsResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeListLeaderboardDefinitionsResponseResponse },
		{ "decodeListStatisticDefinitionsResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeListStatisticDefinitionsResponseResponse },
		{ "decodeUpdateStatisticsResponseResponse", &UPlayFabLeaderboardsModelDecoder::execdecodeUpdateStatisticsResponseResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabLeaderboardsModelDecoder);
UClass* Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_NoRegister()
{
	return UPlayFabLeaderboardsModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabLeaderboardsModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabLeaderboardsModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeDeleteStatisticsResponseResponse, "decodeDeleteStatisticsResponseResponse" }, // 2895135160
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeEmptyResponseResponse, "decodeEmptyResponseResponse" }, // 2025069147
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetEntityLeaderboardResponseResponse, "decodeGetEntityLeaderboardResponseResponse" }, // 2322706979
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetLeaderboardDefinitionResponseResponse, "decodeGetLeaderboardDefinitionResponseResponse" }, // 1642707196
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionResponseResponse, "decodeGetStatisticDefinitionResponseResponse" }, // 1297814874
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticDefinitionsResponseResponse, "decodeGetStatisticDefinitionsResponseResponse" }, // 3915686987
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsForEntitiesResponseResponse, "decodeGetStatisticsForEntitiesResponseResponse" }, // 910225578
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeGetStatisticsResponseResponse, "decodeGetStatisticsResponseResponse" }, // 2568032905
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementLeaderboardVersionResponseResponse, "decodeIncrementLeaderboardVersionResponseResponse" }, // 1859099883
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeIncrementStatisticVersionResponseResponse, "decodeIncrementStatisticVersionResponseResponse" }, // 1705846625
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListLeaderboardDefinitionsResponseResponse, "decodeListLeaderboardDefinitionsResponseResponse" }, // 1497427850
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeListStatisticDefinitionsResponseResponse, "decodeListStatisticDefinitionsResponseResponse" }, // 1824400547
		{ &Z_Construct_UFunction_UPlayFabLeaderboardsModelDecoder_decodeUpdateStatisticsResponseResponse, "decodeUpdateStatisticsResponseResponse" }, // 259334553
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabLeaderboardsModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_Statics::ClassParams = {
	&UPlayFabLeaderboardsModelDecoder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabLeaderboardsModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabLeaderboardsModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabLeaderboardsModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabLeaderboardsModelDecoder>()
{
	return UPlayFabLeaderboardsModelDecoder::StaticClass();
}
UPlayFabLeaderboardsModelDecoder::UPlayFabLeaderboardsModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabLeaderboardsModelDecoder);
UPlayFabLeaderboardsModelDecoder::~UPlayFabLeaderboardsModelDecoder() {}
// End Class UPlayFabLeaderboardsModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder, UPlayFabLeaderboardsModelDecoder::StaticClass, TEXT("UPlayFabLeaderboardsModelDecoder"), &Z_Registration_Info_UClass_UPlayFabLeaderboardsModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabLeaderboardsModelDecoder), 1423214578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_4006506206(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
