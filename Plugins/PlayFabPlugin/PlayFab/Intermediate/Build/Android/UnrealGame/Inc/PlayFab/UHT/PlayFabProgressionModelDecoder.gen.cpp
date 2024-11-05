// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabProgressionModelDecoder.h"
#include "PlayFab/Classes/PlayFabProgressionModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabProgressionModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabProgressionModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabProgressionModelDecoder_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabProgressionModelDecoder Function decodeDeleteStatisticsResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionDeleteStatisticsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteStatisticsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionDeleteStatisticsResponse, METADATA_PARAMS(0, nullptr) }; // 4059704952
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeDeleteStatisticsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeDeleteStatisticsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeDeleteStatisticsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionDeleteStatisticsResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeDeleteStatisticsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeDeleteStatisticsResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeEmptyResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeEmptyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionEmptyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the EmptyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeEmptyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeEmptyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 988469615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeEmptyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeEmptyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeEmptyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeEmptyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionEmptyResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeEmptyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeEmptyResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeGetEntityLeaderboardResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionGetEntityLeaderboardResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetEntityLeaderboardResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionGetEntityLeaderboardResponse, METADATA_PARAMS(0, nullptr) }; // 2631006570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeGetEntityLeaderboardResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetEntityLeaderboardResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeGetEntityLeaderboardResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionGetEntityLeaderboardResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeGetEntityLeaderboardResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeGetEntityLeaderboardResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeGetLeaderboardDefinitionResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionGetLeaderboardDefinitionResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetLeaderboardDefinitionResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionGetLeaderboardDefinitionResponse, METADATA_PARAMS(0, nullptr) }; // 1743655900
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeGetLeaderboardDefinitionResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetLeaderboardDefinitionResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeGetLeaderboardDefinitionResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionGetLeaderboardDefinitionResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeGetLeaderboardDefinitionResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeGetLeaderboardDefinitionResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeGetStatisticDefinitionResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionGetStatisticDefinitionResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetStatisticDefinitionResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionGetStatisticDefinitionResponse, METADATA_PARAMS(0, nullptr) }; // 250036216
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeGetStatisticDefinitionResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetStatisticDefinitionResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeGetStatisticDefinitionResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionGetStatisticDefinitionResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeGetStatisticDefinitionResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeGetStatisticDefinitionResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeGetStatisticsForEntitiesResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionGetStatisticsForEntitiesResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetStatisticsForEntitiesResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionGetStatisticsForEntitiesResponse, METADATA_PARAMS(0, nullptr) }; // 3678425518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeGetStatisticsForEntitiesResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetStatisticsForEntitiesResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeGetStatisticsForEntitiesResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionGetStatisticsForEntitiesResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeGetStatisticsForEntitiesResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeGetStatisticsForEntitiesResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeGetStatisticsResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionGetStatisticsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetStatisticsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionGetStatisticsResponse, METADATA_PARAMS(0, nullptr) }; // 3844305530
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeGetStatisticsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeGetStatisticsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeGetStatisticsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionGetStatisticsResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeGetStatisticsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeGetStatisticsResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeIncrementLeaderboardVersionResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionIncrementLeaderboardVersionResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the IncrementLeaderboardVersionResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionIncrementLeaderboardVersionResponse, METADATA_PARAMS(0, nullptr) }; // 4088364392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeIncrementLeaderboardVersionResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeIncrementLeaderboardVersionResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeIncrementLeaderboardVersionResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionIncrementLeaderboardVersionResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeIncrementLeaderboardVersionResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeIncrementLeaderboardVersionResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeIncrementStatisticVersionResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionIncrementStatisticVersionResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the IncrementStatisticVersionResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionIncrementStatisticVersionResponse, METADATA_PARAMS(0, nullptr) }; // 3834632518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeIncrementStatisticVersionResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeIncrementStatisticVersionResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeIncrementStatisticVersionResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionIncrementStatisticVersionResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeIncrementStatisticVersionResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeIncrementStatisticVersionResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeListLeaderboardDefinitionsResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionListLeaderboardDefinitionsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Leaderboards Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the ListLeaderboardDefinitionsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionListLeaderboardDefinitionsResponse, METADATA_PARAMS(0, nullptr) }; // 3006688280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeListLeaderboardDefinitionsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeListLeaderboardDefinitionsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeListLeaderboardDefinitionsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionListLeaderboardDefinitionsResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeListLeaderboardDefinitionsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeListLeaderboardDefinitionsResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeListStatisticDefinitionsResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionListStatisticDefinitionsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the ListStatisticDefinitionsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionListStatisticDefinitionsResponse, METADATA_PARAMS(0, nullptr) }; // 749756346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeListStatisticDefinitionsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeListStatisticDefinitionsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeListStatisticDefinitionsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionListStatisticDefinitionsResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeListStatisticDefinitionsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeListStatisticDefinitionsResponseResponse

// Begin Class UPlayFabProgressionModelDecoder Function decodeUpdateStatisticsResponseResponse
struct Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics
{
	struct PlayFabProgressionModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProgressionUpdateStatisticsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Progression | Statistics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the UpdateStatisticsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProgressionModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProgressionUpdateStatisticsResponse, METADATA_PARAMS(0, nullptr) }; // 4090490378
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProgressionModelDecoder, nullptr, "decodeUpdateStatisticsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::PlayFabProgressionModelDecoder_eventdecodeUpdateStatisticsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProgressionModelDecoder::execdecodeUpdateStatisticsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProgressionUpdateStatisticsResponse*)Z_Param__Result=UPlayFabProgressionModelDecoder::decodeUpdateStatisticsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProgressionModelDecoder Function decodeUpdateStatisticsResponseResponse

// Begin Class UPlayFabProgressionModelDecoder
void UPlayFabProgressionModelDecoder::StaticRegisterNativesUPlayFabProgressionModelDecoder()
{
	UClass* Class = UPlayFabProgressionModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeDeleteStatisticsResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeDeleteStatisticsResponseResponse },
		{ "decodeEmptyResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeEmptyResponseResponse },
		{ "decodeGetEntityLeaderboardResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeGetEntityLeaderboardResponseResponse },
		{ "decodeGetLeaderboardDefinitionResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeGetLeaderboardDefinitionResponseResponse },
		{ "decodeGetStatisticDefinitionResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeGetStatisticDefinitionResponseResponse },
		{ "decodeGetStatisticsForEntitiesResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeGetStatisticsForEntitiesResponseResponse },
		{ "decodeGetStatisticsResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeGetStatisticsResponseResponse },
		{ "decodeIncrementLeaderboardVersionResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeIncrementLeaderboardVersionResponseResponse },
		{ "decodeIncrementStatisticVersionResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeIncrementStatisticVersionResponseResponse },
		{ "decodeListLeaderboardDefinitionsResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeListLeaderboardDefinitionsResponseResponse },
		{ "decodeListStatisticDefinitionsResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeListStatisticDefinitionsResponseResponse },
		{ "decodeUpdateStatisticsResponseResponse", &UPlayFabProgressionModelDecoder::execdecodeUpdateStatisticsResponseResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabProgressionModelDecoder);
UClass* Z_Construct_UClass_UPlayFabProgressionModelDecoder_NoRegister()
{
	return UPlayFabProgressionModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabProgressionModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabProgressionModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabProgressionModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeDeleteStatisticsResponseResponse, "decodeDeleteStatisticsResponseResponse" }, // 3045721117
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeEmptyResponseResponse, "decodeEmptyResponseResponse" }, // 842649482
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetEntityLeaderboardResponseResponse, "decodeGetEntityLeaderboardResponseResponse" }, // 492216099
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetLeaderboardDefinitionResponseResponse, "decodeGetLeaderboardDefinitionResponseResponse" }, // 1336660822
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticDefinitionResponseResponse, "decodeGetStatisticDefinitionResponseResponse" }, // 109549255
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsForEntitiesResponseResponse, "decodeGetStatisticsForEntitiesResponseResponse" }, // 1924168387
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeGetStatisticsResponseResponse, "decodeGetStatisticsResponseResponse" }, // 1089802561
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementLeaderboardVersionResponseResponse, "decodeIncrementLeaderboardVersionResponseResponse" }, // 2752797620
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeIncrementStatisticVersionResponseResponse, "decodeIncrementStatisticVersionResponseResponse" }, // 522792906
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListLeaderboardDefinitionsResponseResponse, "decodeListLeaderboardDefinitionsResponseResponse" }, // 212568089
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeListStatisticDefinitionsResponseResponse, "decodeListStatisticDefinitionsResponseResponse" }, // 3491659821
		{ &Z_Construct_UFunction_UPlayFabProgressionModelDecoder_decodeUpdateStatisticsResponseResponse, "decodeUpdateStatisticsResponseResponse" }, // 1348577193
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabProgressionModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabProgressionModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProgressionModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabProgressionModelDecoder_Statics::ClassParams = {
	&UPlayFabProgressionModelDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProgressionModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabProgressionModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabProgressionModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabProgressionModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabProgressionModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabProgressionModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabProgressionModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabProgressionModelDecoder>()
{
	return UPlayFabProgressionModelDecoder::StaticClass();
}
UPlayFabProgressionModelDecoder::UPlayFabProgressionModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabProgressionModelDecoder);
UPlayFabProgressionModelDecoder::~UPlayFabProgressionModelDecoder() {}
// End Class UPlayFabProgressionModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabProgressionModelDecoder, UPlayFabProgressionModelDecoder::StaticClass, TEXT("UPlayFabProgressionModelDecoder"), &Z_Registration_Info_UClass_UPlayFabProgressionModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabProgressionModelDecoder), 1193248323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_3817824593(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
