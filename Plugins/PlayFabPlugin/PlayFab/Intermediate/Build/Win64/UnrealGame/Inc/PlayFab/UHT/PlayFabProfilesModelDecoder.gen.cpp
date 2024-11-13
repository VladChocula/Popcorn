// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabProfilesModelDecoder.h"
#include "PlayFab/Classes/PlayFabProfilesModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabProfilesModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabProfilesModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabProfilesModelDecoder_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabProfilesModelDecoder Function decodeGetEntityProfileResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesGetEntityProfileResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetEntityProfileResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetEntityProfileResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse, METADATA_PARAMS(0, nullptr) }; // 2616782149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetEntityProfileResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetEntityProfileResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetEntityProfileResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesGetEntityProfileResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetEntityProfileResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeGetEntityProfileResponseResponse

// Begin Class UPlayFabProfilesModelDecoder Function decodeGetEntityProfilesResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesGetEntityProfilesResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetEntityProfilesResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetEntityProfilesResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse, METADATA_PARAMS(0, nullptr) }; // 663064908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetEntityProfilesResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetEntityProfilesResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetEntityProfilesResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesGetEntityProfilesResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetEntityProfilesResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeGetEntityProfilesResponseResponse

// Begin Class UPlayFabProfilesModelDecoder Function decodeGetGlobalPolicyResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesGetGlobalPolicyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetGlobalPolicyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetGlobalPolicyResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse, METADATA_PARAMS(0, nullptr) }; // 1258580056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetGlobalPolicyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetGlobalPolicyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetGlobalPolicyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesGetGlobalPolicyResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetGlobalPolicyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeGetGlobalPolicyResponseResponse

// Begin Class UPlayFabProfilesModelDecoder Function decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetTitlePlayersFromMasterPlayerAccountIdsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetTitlePlayersFromMasterPlayerAccountIdsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, METADATA_PARAMS(0, nullptr) }; // 1184417503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse

// Begin Class UPlayFabProfilesModelDecoder Function decodeGetTitlePlayersFromProviderIDsResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromProviderIDsResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesGetTitlePlayersFromProviderIDsResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetTitlePlayersFromProviderIDsResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetTitlePlayersFromProviderIDsResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromProviderIDsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromProviderIDsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse, METADATA_PARAMS(0, nullptr) }; // 3542589631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeGetTitlePlayersFromProviderIDsResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromProviderIDsResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeGetTitlePlayersFromProviderIDsResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeGetTitlePlayersFromProviderIDsResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesGetTitlePlayersFromProviderIDsResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeGetTitlePlayersFromProviderIDsResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeGetTitlePlayersFromProviderIDsResponseResponse

// Begin Class UPlayFabProfilesModelDecoder Function decodeSetDisplayNameResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeSetDisplayNameResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesSetDisplayNameResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the SetDisplayNameResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the SetDisplayNameResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetDisplayNameResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetDisplayNameResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse, METADATA_PARAMS(0, nullptr) }; // 1880665604
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeSetDisplayNameResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeSetDisplayNameResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeSetDisplayNameResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeSetDisplayNameResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesSetDisplayNameResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeSetDisplayNameResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeSetDisplayNameResponseResponse

// Begin Class UPlayFabProfilesModelDecoder Function decodeSetEntityProfilePolicyResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesSetEntityProfilePolicyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the SetEntityProfilePolicyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the SetEntityProfilePolicyResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse, METADATA_PARAMS(0, nullptr) }; // 1779242298
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeSetEntityProfilePolicyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeSetEntityProfilePolicyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeSetEntityProfilePolicyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesSetEntityProfilePolicyResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeSetEntityProfilePolicyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeSetEntityProfilePolicyResponseResponse

// Begin Class UPlayFabProfilesModelDecoder Function decodeSetGlobalPolicyResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesSetGlobalPolicyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the SetGlobalPolicyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the SetGlobalPolicyResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse, METADATA_PARAMS(0, nullptr) }; // 3953088412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeSetGlobalPolicyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeSetGlobalPolicyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeSetGlobalPolicyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesSetGlobalPolicyResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeSetGlobalPolicyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeSetGlobalPolicyResponseResponse

// Begin Class UPlayFabProfilesModelDecoder Function decodeSetProfileLanguageResponseResponse
struct Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics
{
	struct PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FProfilesSetProfileLanguageResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the SetProfileLanguageResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the SetProfileLanguageResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse, METADATA_PARAMS(0, nullptr) }; // 14804134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesModelDecoder, nullptr, "decodeSetProfileLanguageResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::PlayFabProfilesModelDecoder_eventdecodeSetProfileLanguageResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabProfilesModelDecoder::execdecodeSetProfileLanguageResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProfilesSetProfileLanguageResponse*)Z_Param__Result=UPlayFabProfilesModelDecoder::decodeSetProfileLanguageResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabProfilesModelDecoder Function decodeSetProfileLanguageResponseResponse

// Begin Class UPlayFabProfilesModelDecoder
void UPlayFabProfilesModelDecoder::StaticRegisterNativesUPlayFabProfilesModelDecoder()
{
	UClass* Class = UPlayFabProfilesModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeGetEntityProfileResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetEntityProfileResponseResponse },
		{ "decodeGetEntityProfilesResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetEntityProfilesResponseResponse },
		{ "decodeGetGlobalPolicyResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetGlobalPolicyResponseResponse },
		{ "decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse },
		{ "decodeGetTitlePlayersFromProviderIDsResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeGetTitlePlayersFromProviderIDsResponseResponse },
		{ "decodeSetDisplayNameResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeSetDisplayNameResponseResponse },
		{ "decodeSetEntityProfilePolicyResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeSetEntityProfilePolicyResponseResponse },
		{ "decodeSetGlobalPolicyResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeSetGlobalPolicyResponseResponse },
		{ "decodeSetProfileLanguageResponseResponse", &UPlayFabProfilesModelDecoder::execdecodeSetProfileLanguageResponseResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabProfilesModelDecoder);
UClass* Z_Construct_UClass_UPlayFabProfilesModelDecoder_NoRegister()
{
	return UPlayFabProfilesModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabProfilesModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfileResponseResponse, "decodeGetEntityProfileResponseResponse" }, // 3529678381
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetEntityProfilesResponseResponse, "decodeGetEntityProfilesResponseResponse" }, // 3566691577
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetGlobalPolicyResponseResponse, "decodeGetGlobalPolicyResponseResponse" }, // 1686863762
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse, "decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse" }, // 1366061892
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeGetTitlePlayersFromProviderIDsResponseResponse, "decodeGetTitlePlayersFromProviderIDsResponseResponse" }, // 3190737465
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetDisplayNameResponseResponse, "decodeSetDisplayNameResponseResponse" }, // 213027770
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetEntityProfilePolicyResponseResponse, "decodeSetEntityProfilePolicyResponseResponse" }, // 506920496
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetGlobalPolicyResponseResponse, "decodeSetGlobalPolicyResponseResponse" }, // 1842648264
		{ &Z_Construct_UFunction_UPlayFabProfilesModelDecoder_decodeSetProfileLanguageResponseResponse, "decodeSetProfileLanguageResponseResponse" }, // 565083413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabProfilesModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::ClassParams = {
	&UPlayFabProfilesModelDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabProfilesModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabProfilesModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabProfilesModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabProfilesModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabProfilesModelDecoder>()
{
	return UPlayFabProfilesModelDecoder::StaticClass();
}
UPlayFabProfilesModelDecoder::UPlayFabProfilesModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabProfilesModelDecoder);
UPlayFabProfilesModelDecoder::~UPlayFabProfilesModelDecoder() {}
// End Class UPlayFabProfilesModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabProfilesModelDecoder, UPlayFabProfilesModelDecoder::StaticClass, TEXT("UPlayFabProfilesModelDecoder"), &Z_Registration_Info_UClass_UPlayFabProfilesModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabProfilesModelDecoder), 1292573958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_1227388827(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
