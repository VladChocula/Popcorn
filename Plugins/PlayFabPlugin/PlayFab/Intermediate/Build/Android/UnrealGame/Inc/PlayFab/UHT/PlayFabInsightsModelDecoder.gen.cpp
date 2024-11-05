// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabInsightsModelDecoder.h"
#include "PlayFab/Classes/PlayFabInsightsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabInsightsModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabInsightsModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabInsightsModelDecoder_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabInsightsModelDecoder Function decodeInsightsGetDetailsResponseResponse
struct Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics
{
	struct PlayFabInsightsModelDecoder_eventdecodeInsightsGetDetailsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FInsightsInsightsGetDetailsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the InsightsGetDetailsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the InsightsGetDetailsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsGetDetailsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsGetDetailsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse, METADATA_PARAMS(0, nullptr) }; // 876333552
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsModelDecoder, nullptr, "decodeInsightsGetDetailsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsGetDetailsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsGetDetailsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsModelDecoder::execdecodeInsightsGetDetailsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInsightsInsightsGetDetailsResponse*)Z_Param__Result=UPlayFabInsightsModelDecoder::decodeInsightsGetDetailsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsModelDecoder Function decodeInsightsGetDetailsResponseResponse

// Begin Class UPlayFabInsightsModelDecoder Function decodeInsightsGetLimitsResponseResponse
struct Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics
{
	struct PlayFabInsightsModelDecoder_eventdecodeInsightsGetLimitsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FInsightsInsightsGetLimitsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the InsightsGetLimitsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the InsightsGetLimitsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsGetLimitsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsGetLimitsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse, METADATA_PARAMS(0, nullptr) }; // 840235063
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsModelDecoder, nullptr, "decodeInsightsGetLimitsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsGetLimitsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsGetLimitsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsModelDecoder::execdecodeInsightsGetLimitsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInsightsInsightsGetLimitsResponse*)Z_Param__Result=UPlayFabInsightsModelDecoder::decodeInsightsGetLimitsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsModelDecoder Function decodeInsightsGetLimitsResponseResponse

// Begin Class UPlayFabInsightsModelDecoder Function decodeInsightsGetOperationStatusResponseResponse
struct Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics
{
	struct PlayFabInsightsModelDecoder_eventdecodeInsightsGetOperationStatusResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FInsightsInsightsGetOperationStatusResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the InsightsGetOperationStatusResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the InsightsGetOperationStatusResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsGetOperationStatusResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsGetOperationStatusResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse, METADATA_PARAMS(0, nullptr) }; // 4004703226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsModelDecoder, nullptr, "decodeInsightsGetOperationStatusResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsGetOperationStatusResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsGetOperationStatusResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsModelDecoder::execdecodeInsightsGetOperationStatusResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInsightsInsightsGetOperationStatusResponse*)Z_Param__Result=UPlayFabInsightsModelDecoder::decodeInsightsGetOperationStatusResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsModelDecoder Function decodeInsightsGetOperationStatusResponseResponse

// Begin Class UPlayFabInsightsModelDecoder Function decodeInsightsGetPendingOperationsResponseResponse
struct Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics
{
	struct PlayFabInsightsModelDecoder_eventdecodeInsightsGetPendingOperationsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FInsightsInsightsGetPendingOperationsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the InsightsGetPendingOperationsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the InsightsGetPendingOperationsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsGetPendingOperationsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsGetPendingOperationsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse, METADATA_PARAMS(0, nullptr) }; // 1070085782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsModelDecoder, nullptr, "decodeInsightsGetPendingOperationsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsGetPendingOperationsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsGetPendingOperationsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsModelDecoder::execdecodeInsightsGetPendingOperationsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInsightsInsightsGetPendingOperationsResponse*)Z_Param__Result=UPlayFabInsightsModelDecoder::decodeInsightsGetPendingOperationsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsModelDecoder Function decodeInsightsGetPendingOperationsResponseResponse

// Begin Class UPlayFabInsightsModelDecoder Function decodeInsightsOperationResponseResponse
struct Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics
{
	struct PlayFabInsightsModelDecoder_eventdecodeInsightsOperationResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FInsightsInsightsOperationResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the InsightsOperationResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the InsightsOperationResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsOperationResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsModelDecoder_eventdecodeInsightsOperationResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse, METADATA_PARAMS(0, nullptr) }; // 1666653236
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsModelDecoder, nullptr, "decodeInsightsOperationResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsOperationResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::PlayFabInsightsModelDecoder_eventdecodeInsightsOperationResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsModelDecoder::execdecodeInsightsOperationResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInsightsInsightsOperationResponse*)Z_Param__Result=UPlayFabInsightsModelDecoder::decodeInsightsOperationResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsModelDecoder Function decodeInsightsOperationResponseResponse

// Begin Class UPlayFabInsightsModelDecoder
void UPlayFabInsightsModelDecoder::StaticRegisterNativesUPlayFabInsightsModelDecoder()
{
	UClass* Class = UPlayFabInsightsModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeInsightsGetDetailsResponseResponse", &UPlayFabInsightsModelDecoder::execdecodeInsightsGetDetailsResponseResponse },
		{ "decodeInsightsGetLimitsResponseResponse", &UPlayFabInsightsModelDecoder::execdecodeInsightsGetLimitsResponseResponse },
		{ "decodeInsightsGetOperationStatusResponseResponse", &UPlayFabInsightsModelDecoder::execdecodeInsightsGetOperationStatusResponseResponse },
		{ "decodeInsightsGetPendingOperationsResponseResponse", &UPlayFabInsightsModelDecoder::execdecodeInsightsGetPendingOperationsResponseResponse },
		{ "decodeInsightsOperationResponseResponse", &UPlayFabInsightsModelDecoder::execdecodeInsightsOperationResponseResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabInsightsModelDecoder);
UClass* Z_Construct_UClass_UPlayFabInsightsModelDecoder_NoRegister()
{
	return UPlayFabInsightsModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabInsightsModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetDetailsResponseResponse, "decodeInsightsGetDetailsResponseResponse" }, // 1636336926
		{ &Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetLimitsResponseResponse, "decodeInsightsGetLimitsResponseResponse" }, // 3753262542
		{ &Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetOperationStatusResponseResponse, "decodeInsightsGetOperationStatusResponseResponse" }, // 2178943680
		{ &Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsGetPendingOperationsResponseResponse, "decodeInsightsGetPendingOperationsResponseResponse" }, // 3863546962
		{ &Z_Construct_UFunction_UPlayFabInsightsModelDecoder_decodeInsightsOperationResponseResponse, "decodeInsightsOperationResponseResponse" }, // 1467408008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabInsightsModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics::ClassParams = {
	&UPlayFabInsightsModelDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabInsightsModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabInsightsModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabInsightsModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabInsightsModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabInsightsModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabInsightsModelDecoder>()
{
	return UPlayFabInsightsModelDecoder::StaticClass();
}
UPlayFabInsightsModelDecoder::UPlayFabInsightsModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabInsightsModelDecoder);
UPlayFabInsightsModelDecoder::~UPlayFabInsightsModelDecoder() {}
// End Class UPlayFabInsightsModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabInsightsModelDecoder, UPlayFabInsightsModelDecoder::StaticClass, TEXT("UPlayFabInsightsModelDecoder"), &Z_Registration_Info_UClass_UPlayFabInsightsModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabInsightsModelDecoder), 3026231648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_1502607672(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
