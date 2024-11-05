// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabEventsModelDecoder.h"
#include "PlayFab/Classes/PlayFabEventsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEventsModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEventsModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEventsModelDecoder_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabEventsModelDecoder Function decodeCreateTelemetryKeyResponseResponse
struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics
{
	struct PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FEventsCreateTelemetryKeyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateTelemetryKeyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateTelemetryKeyResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse, METADATA_PARAMS(0, nullptr) }; // 3963163621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeCreateTelemetryKeyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeCreateTelemetryKeyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventsCreateTelemetryKeyResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeCreateTelemetryKeyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabEventsModelDecoder Function decodeCreateTelemetryKeyResponseResponse

// Begin Class UPlayFabEventsModelDecoder Function decodeDeleteTelemetryKeyResponseResponse
struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics
{
	struct PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FEventsDeleteTelemetryKeyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteTelemetryKeyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteTelemetryKeyResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse, METADATA_PARAMS(0, nullptr) }; // 1601836023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeDeleteTelemetryKeyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeDeleteTelemetryKeyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventsDeleteTelemetryKeyResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeDeleteTelemetryKeyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabEventsModelDecoder Function decodeDeleteTelemetryKeyResponseResponse

// Begin Class UPlayFabEventsModelDecoder Function decodeGetTelemetryKeyResponseResponse
struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics
{
	struct PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FEventsGetTelemetryKeyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetTelemetryKeyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetTelemetryKeyResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse, METADATA_PARAMS(0, nullptr) }; // 2533809510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeGetTelemetryKeyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeGetTelemetryKeyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventsGetTelemetryKeyResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeGetTelemetryKeyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabEventsModelDecoder Function decodeGetTelemetryKeyResponseResponse

// Begin Class UPlayFabEventsModelDecoder Function decodeListTelemetryKeysResponseResponse
struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics
{
	struct PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FEventsListTelemetryKeysResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the ListTelemetryKeysResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the ListTelemetryKeysResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse, METADATA_PARAMS(0, nullptr) }; // 2055068425
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeListTelemetryKeysResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeListTelemetryKeysResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventsListTelemetryKeysResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeListTelemetryKeysResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabEventsModelDecoder Function decodeListTelemetryKeysResponseResponse

// Begin Class UPlayFabEventsModelDecoder Function decodeSetTelemetryKeyActiveResponseResponse
struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics
{
	struct PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FEventsSetTelemetryKeyActiveResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the SetTelemetryKeyActiveResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the SetTelemetryKeyActiveResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse, METADATA_PARAMS(0, nullptr) }; // 2097662164
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeSetTelemetryKeyActiveResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeSetTelemetryKeyActiveResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventsSetTelemetryKeyActiveResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeSetTelemetryKeyActiveResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabEventsModelDecoder Function decodeSetTelemetryKeyActiveResponseResponse

// Begin Class UPlayFabEventsModelDecoder Function decodeWriteEventsResponseResponse
struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics
{
	struct PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FEventsWriteEventsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the WriteEventsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the WriteEventsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsWriteEventsResponse, METADATA_PARAMS(0, nullptr) }; // 1566223588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeWriteEventsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeWriteEventsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventsWriteEventsResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeWriteEventsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabEventsModelDecoder Function decodeWriteEventsResponseResponse

// Begin Class UPlayFabEventsModelDecoder
void UPlayFabEventsModelDecoder::StaticRegisterNativesUPlayFabEventsModelDecoder()
{
	UClass* Class = UPlayFabEventsModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeCreateTelemetryKeyResponseResponse", &UPlayFabEventsModelDecoder::execdecodeCreateTelemetryKeyResponseResponse },
		{ "decodeDeleteTelemetryKeyResponseResponse", &UPlayFabEventsModelDecoder::execdecodeDeleteTelemetryKeyResponseResponse },
		{ "decodeGetTelemetryKeyResponseResponse", &UPlayFabEventsModelDecoder::execdecodeGetTelemetryKeyResponseResponse },
		{ "decodeListTelemetryKeysResponseResponse", &UPlayFabEventsModelDecoder::execdecodeListTelemetryKeysResponseResponse },
		{ "decodeSetTelemetryKeyActiveResponseResponse", &UPlayFabEventsModelDecoder::execdecodeSetTelemetryKeyActiveResponseResponse },
		{ "decodeWriteEventsResponseResponse", &UPlayFabEventsModelDecoder::execdecodeWriteEventsResponseResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabEventsModelDecoder);
UClass* Z_Construct_UClass_UPlayFabEventsModelDecoder_NoRegister()
{
	return UPlayFabEventsModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabEventsModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse, "decodeCreateTelemetryKeyResponseResponse" }, // 3833440250
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse, "decodeDeleteTelemetryKeyResponseResponse" }, // 1875163547
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse, "decodeGetTelemetryKeyResponseResponse" }, // 571326789
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse, "decodeListTelemetryKeysResponseResponse" }, // 173334029
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse, "decodeSetTelemetryKeyActiveResponseResponse" }, // 3896989799
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse, "decodeWriteEventsResponseResponse" }, // 3058862746
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabEventsModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::ClassParams = {
	&UPlayFabEventsModelDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabEventsModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabEventsModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabEventsModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabEventsModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabEventsModelDecoder>()
{
	return UPlayFabEventsModelDecoder::StaticClass();
}
UPlayFabEventsModelDecoder::UPlayFabEventsModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabEventsModelDecoder);
UPlayFabEventsModelDecoder::~UPlayFabEventsModelDecoder() {}
// End Class UPlayFabEventsModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabEventsModelDecoder, UPlayFabEventsModelDecoder::StaticClass, TEXT("UPlayFabEventsModelDecoder"), &Z_Registration_Info_UClass_UPlayFabEventsModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabEventsModelDecoder), 3449083137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_2183527797(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
