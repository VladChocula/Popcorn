// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabExperimentationModelDecoder.h"
#include "PlayFab/Classes/PlayFabExperimentationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabExperimentationModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabExperimentationModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabExperimentationModelDecoder_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabExperimentationModelDecoder Function decodeCreateExclusionGroupResultResponse
struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics
{
	struct PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms
	{
		UPlayFabJsonObject* response;
		FExperimentationCreateExclusionGroupResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateExclusionGroupResult response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateExclusionGroupResult response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult, METADATA_PARAMS(0, nullptr) }; // 553406869
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeCreateExclusionGroupResultResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeCreateExclusionGroupResultResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FExperimentationCreateExclusionGroupResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeCreateExclusionGroupResultResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationModelDecoder Function decodeCreateExclusionGroupResultResponse

// Begin Class UPlayFabExperimentationModelDecoder Function decodeCreateExperimentResultResponse
struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics
{
	struct PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms
	{
		UPlayFabJsonObject* response;
		FExperimentationCreateExperimentResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateExperimentResult response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateExperimentResult response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult, METADATA_PARAMS(0, nullptr) }; // 304271111
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeCreateExperimentResultResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeCreateExperimentResultResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FExperimentationCreateExperimentResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeCreateExperimentResultResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationModelDecoder Function decodeCreateExperimentResultResponse

// Begin Class UPlayFabExperimentationModelDecoder Function decodeEmptyResponseResponse
struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics
{
	struct PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FExperimentationEmptyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the EmptyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 3338967991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeEmptyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeEmptyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FExperimentationEmptyResponse*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeEmptyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationModelDecoder Function decodeEmptyResponseResponse

// Begin Class UPlayFabExperimentationModelDecoder Function decodeGetExclusionGroupsResultResponse
struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics
{
	struct PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms
	{
		UPlayFabJsonObject* response;
		FExperimentationGetExclusionGroupsResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetExclusionGroupsResult response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetExclusionGroupsResult response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult, METADATA_PARAMS(0, nullptr) }; // 4202482301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetExclusionGroupsResultResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetExclusionGroupsResultResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FExperimentationGetExclusionGroupsResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetExclusionGroupsResultResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationModelDecoder Function decodeGetExclusionGroupsResultResponse

// Begin Class UPlayFabExperimentationModelDecoder Function decodeGetExclusionGroupTrafficResultResponse
struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics
{
	struct PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms
	{
		UPlayFabJsonObject* response;
		FExperimentationGetExclusionGroupTrafficResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetExclusionGroupTrafficResult response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetExclusionGroupTrafficResult response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult, METADATA_PARAMS(0, nullptr) }; // 3155578976
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetExclusionGroupTrafficResultResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetExclusionGroupTrafficResultResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FExperimentationGetExclusionGroupTrafficResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetExclusionGroupTrafficResultResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationModelDecoder Function decodeGetExclusionGroupTrafficResultResponse

// Begin Class UPlayFabExperimentationModelDecoder Function decodeGetExperimentsResultResponse
struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics
{
	struct PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms
	{
		UPlayFabJsonObject* response;
		FExperimentationGetExperimentsResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetExperimentsResult response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetExperimentsResult response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult, METADATA_PARAMS(0, nullptr) }; // 956563147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetExperimentsResultResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetExperimentsResultResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FExperimentationGetExperimentsResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetExperimentsResultResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationModelDecoder Function decodeGetExperimentsResultResponse

// Begin Class UPlayFabExperimentationModelDecoder Function decodeGetLatestScorecardResultResponse
struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics
{
	struct PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms
	{
		UPlayFabJsonObject* response;
		FExperimentationGetLatestScorecardResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetLatestScorecardResult response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetLatestScorecardResult response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult, METADATA_PARAMS(0, nullptr) }; // 2087434949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetLatestScorecardResultResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetLatestScorecardResultResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FExperimentationGetLatestScorecardResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetLatestScorecardResultResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationModelDecoder Function decodeGetLatestScorecardResultResponse

// Begin Class UPlayFabExperimentationModelDecoder Function decodeGetTreatmentAssignmentResultResponse
struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics
{
	struct PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms
	{
		UPlayFabJsonObject* response;
		FExperimentationGetTreatmentAssignmentResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetTreatmentAssignmentResult response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetTreatmentAssignmentResult response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult, METADATA_PARAMS(0, nullptr) }; // 962966664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetTreatmentAssignmentResultResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetTreatmentAssignmentResultResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FExperimentationGetTreatmentAssignmentResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetTreatmentAssignmentResultResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationModelDecoder Function decodeGetTreatmentAssignmentResultResponse

// Begin Class UPlayFabExperimentationModelDecoder
void UPlayFabExperimentationModelDecoder::StaticRegisterNativesUPlayFabExperimentationModelDecoder()
{
	UClass* Class = UPlayFabExperimentationModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeCreateExclusionGroupResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeCreateExclusionGroupResultResponse },
		{ "decodeCreateExperimentResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeCreateExperimentResultResponse },
		{ "decodeEmptyResponseResponse", &UPlayFabExperimentationModelDecoder::execdecodeEmptyResponseResponse },
		{ "decodeGetExclusionGroupsResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetExclusionGroupsResultResponse },
		{ "decodeGetExclusionGroupTrafficResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetExclusionGroupTrafficResultResponse },
		{ "decodeGetExperimentsResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetExperimentsResultResponse },
		{ "decodeGetLatestScorecardResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetLatestScorecardResultResponse },
		{ "decodeGetTreatmentAssignmentResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetTreatmentAssignmentResultResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabExperimentationModelDecoder);
UClass* Z_Construct_UClass_UPlayFabExperimentationModelDecoder_NoRegister()
{
	return UPlayFabExperimentationModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabExperimentationModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse, "decodeCreateExclusionGroupResultResponse" }, // 21208973
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse, "decodeCreateExperimentResultResponse" }, // 2099540344
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse, "decodeEmptyResponseResponse" }, // 3914155144
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse, "decodeGetExclusionGroupsResultResponse" }, // 2156318031
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse, "decodeGetExclusionGroupTrafficResultResponse" }, // 1724377365
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse, "decodeGetExperimentsResultResponse" }, // 1763512895
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse, "decodeGetLatestScorecardResultResponse" }, // 2706550763
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse, "decodeGetTreatmentAssignmentResultResponse" }, // 2369138111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabExperimentationModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::ClassParams = {
	&UPlayFabExperimentationModelDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabExperimentationModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabExperimentationModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabExperimentationModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabExperimentationModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabExperimentationModelDecoder>()
{
	return UPlayFabExperimentationModelDecoder::StaticClass();
}
UPlayFabExperimentationModelDecoder::UPlayFabExperimentationModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabExperimentationModelDecoder);
UPlayFabExperimentationModelDecoder::~UPlayFabExperimentationModelDecoder() {}
// End Class UPlayFabExperimentationModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabExperimentationModelDecoder, UPlayFabExperimentationModelDecoder::StaticClass, TEXT("UPlayFabExperimentationModelDecoder"), &Z_Registration_Info_UClass_UPlayFabExperimentationModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabExperimentationModelDecoder), 1411623369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_250905737(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
