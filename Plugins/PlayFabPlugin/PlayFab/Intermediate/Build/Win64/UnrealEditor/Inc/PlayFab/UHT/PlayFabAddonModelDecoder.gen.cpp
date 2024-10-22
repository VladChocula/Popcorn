// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabAddonModelDecoder.h"
#include "PlayFab/Classes/PlayFabAddonModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAddonModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAddonModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAddonModelDecoder_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdateAppleResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdateFacebookInstantGamesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdateFacebookResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdateGoogleResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdateKongregateResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdateNintendoResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdatePSNResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdateSteamResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonCreateOrUpdateTwitchResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeleteAppleResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeleteFacebookInstantGamesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeleteFacebookResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeleteGoogleResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeleteKongregateResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeleteNintendoResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeletePSNResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeleteSteamResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonDeleteTwitchResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetAppleResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetFacebookInstantGamesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetFacebookResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetGoogleResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetKongregateResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetNintendoResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetPSNResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetSteamResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAddonGetTwitchResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateAppleResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateAppleResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdateAppleResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdateAppleResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdateAppleResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateAppleResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateAppleResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdateAppleResponse, METADATA_PARAMS(0, nullptr) }; // 1608471280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdateAppleResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateAppleResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateAppleResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateAppleResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdateAppleResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdateAppleResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateAppleResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateFacebookInstantGamesResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookInstantGamesResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdateFacebookInstantGamesResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdateFacebookInstantGamesResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdateFacebookInstantGamesResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookInstantGamesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookInstantGamesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdateFacebookInstantGamesResponse, METADATA_PARAMS(0, nullptr) }; // 2439498550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdateFacebookInstantGamesResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookInstantGamesResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookInstantGamesResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateFacebookInstantGamesResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdateFacebookInstantGamesResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdateFacebookInstantGamesResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateFacebookInstantGamesResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateFacebookResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdateFacebookResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdateFacebookResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdateFacebookResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdateFacebookResponse, METADATA_PARAMS(0, nullptr) }; // 2764887951
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdateFacebookResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateFacebookResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateFacebookResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdateFacebookResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdateFacebookResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateFacebookResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateGoogleResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateGoogleResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdateGoogleResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdateGoogleResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdateGoogleResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateGoogleResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateGoogleResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdateGoogleResponse, METADATA_PARAMS(0, nullptr) }; // 3781801048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdateGoogleResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateGoogleResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateGoogleResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateGoogleResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdateGoogleResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdateGoogleResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateGoogleResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateKongregateResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateKongregateResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdateKongregateResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdateKongregateResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdateKongregateResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateKongregateResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateKongregateResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdateKongregateResponse, METADATA_PARAMS(0, nullptr) }; // 1842561573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdateKongregateResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateKongregateResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateKongregateResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateKongregateResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdateKongregateResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdateKongregateResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateKongregateResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateNintendoResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateNintendoResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdateNintendoResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdateNintendoResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdateNintendoResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateNintendoResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateNintendoResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdateNintendoResponse, METADATA_PARAMS(0, nullptr) }; // 300612348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdateNintendoResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateNintendoResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateNintendoResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateNintendoResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdateNintendoResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdateNintendoResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateNintendoResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdatePSNResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdatePSNResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdatePSNResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdatePSNResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdatePSNResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdatePSNResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdatePSNResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdatePSNResponse, METADATA_PARAMS(0, nullptr) }; // 586859785
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdatePSNResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdatePSNResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdatePSNResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdatePSNResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdatePSNResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdatePSNResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdatePSNResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateSteamResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateSteamResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdateSteamResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdateSteamResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdateSteamResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateSteamResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateSteamResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdateSteamResponse, METADATA_PARAMS(0, nullptr) }; // 1605567718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdateSteamResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateSteamResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateSteamResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateSteamResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdateSteamResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdateSteamResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateSteamResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateTwitchResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateTwitchResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonCreateOrUpdateTwitchResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the CreateOrUpdateTwitchResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the CreateOrUpdateTwitchResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateTwitchResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateTwitchResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonCreateOrUpdateTwitchResponse, METADATA_PARAMS(0, nullptr) }; // 2657999850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeCreateOrUpdateTwitchResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateTwitchResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeCreateOrUpdateTwitchResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateTwitchResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonCreateOrUpdateTwitchResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeCreateOrUpdateTwitchResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeCreateOrUpdateTwitchResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeleteAppleResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeleteAppleResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeleteAppleResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteAppleResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteAppleResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteAppleResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteAppleResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeleteAppleResponse, METADATA_PARAMS(0, nullptr) }; // 1970110454
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeleteAppleResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteAppleResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteAppleResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeleteAppleResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeleteAppleResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeleteAppleResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeleteAppleResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeleteFacebookInstantGamesResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeleteFacebookInstantGamesResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeleteFacebookInstantGamesResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteFacebookInstantGamesResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteFacebookInstantGamesResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteFacebookInstantGamesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteFacebookInstantGamesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeleteFacebookInstantGamesResponse, METADATA_PARAMS(0, nullptr) }; // 2907167672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeleteFacebookInstantGamesResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteFacebookInstantGamesResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteFacebookInstantGamesResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeleteFacebookInstantGamesResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeleteFacebookInstantGamesResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeleteFacebookInstantGamesResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeleteFacebookInstantGamesResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeleteFacebookResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeleteFacebookResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeleteFacebookResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteFacebookResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteFacebookResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteFacebookResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteFacebookResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeleteFacebookResponse, METADATA_PARAMS(0, nullptr) }; // 1333496466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeleteFacebookResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteFacebookResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteFacebookResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeleteFacebookResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeleteFacebookResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeleteFacebookResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeleteFacebookResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeleteGoogleResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeleteGoogleResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeleteGoogleResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteGoogleResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteGoogleResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteGoogleResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteGoogleResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeleteGoogleResponse, METADATA_PARAMS(0, nullptr) }; // 3421653845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeleteGoogleResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteGoogleResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteGoogleResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeleteGoogleResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeleteGoogleResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeleteGoogleResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeleteGoogleResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeleteKongregateResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeleteKongregateResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeleteKongregateResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteKongregateResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteKongregateResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteKongregateResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteKongregateResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeleteKongregateResponse, METADATA_PARAMS(0, nullptr) }; // 4059021339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeleteKongregateResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteKongregateResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteKongregateResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeleteKongregateResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeleteKongregateResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeleteKongregateResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeleteKongregateResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeleteNintendoResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeleteNintendoResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeleteNintendoResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteNintendoResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteNintendoResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteNintendoResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteNintendoResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeleteNintendoResponse, METADATA_PARAMS(0, nullptr) }; // 2859731377
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeleteNintendoResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteNintendoResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteNintendoResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeleteNintendoResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeleteNintendoResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeleteNintendoResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeleteNintendoResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeletePSNResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeletePSNResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeletePSNResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeletePSNResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeletePSNResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeletePSNResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeletePSNResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeletePSNResponse, METADATA_PARAMS(0, nullptr) }; // 3796920061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeletePSNResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeletePSNResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeletePSNResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeletePSNResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeletePSNResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeletePSNResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeletePSNResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeleteSteamResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeleteSteamResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeleteSteamResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteSteamResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteSteamResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteSteamResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteSteamResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeleteSteamResponse, METADATA_PARAMS(0, nullptr) }; // 508061443
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeleteSteamResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteSteamResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteSteamResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeleteSteamResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeleteSteamResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeleteSteamResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeleteSteamResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeDeleteTwitchResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeDeleteTwitchResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonDeleteTwitchResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the DeleteTwitchResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the DeleteTwitchResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteTwitchResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeDeleteTwitchResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonDeleteTwitchResponse, METADATA_PARAMS(0, nullptr) }; // 176942007
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeDeleteTwitchResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteTwitchResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeDeleteTwitchResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeDeleteTwitchResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonDeleteTwitchResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeDeleteTwitchResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeDeleteTwitchResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetAppleResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetAppleResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetAppleResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetAppleResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetAppleResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetAppleResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetAppleResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetAppleResponse, METADATA_PARAMS(0, nullptr) }; // 3931365901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetAppleResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetAppleResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetAppleResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetAppleResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetAppleResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetAppleResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetAppleResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetFacebookInstantGamesResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetFacebookInstantGamesResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetFacebookInstantGamesResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetFacebookInstantGamesResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetFacebookInstantGamesResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetFacebookInstantGamesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetFacebookInstantGamesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetFacebookInstantGamesResponse, METADATA_PARAMS(0, nullptr) }; // 215882748
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetFacebookInstantGamesResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetFacebookInstantGamesResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetFacebookInstantGamesResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetFacebookInstantGamesResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetFacebookInstantGamesResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetFacebookInstantGamesResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetFacebookInstantGamesResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetFacebookResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetFacebookResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetFacebookResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetFacebookResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetFacebookResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetFacebookResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetFacebookResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetFacebookResponse, METADATA_PARAMS(0, nullptr) }; // 1165323491
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetFacebookResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetFacebookResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetFacebookResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetFacebookResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetFacebookResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetFacebookResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetFacebookResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetGoogleResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetGoogleResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetGoogleResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetGoogleResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetGoogleResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetGoogleResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetGoogleResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetGoogleResponse, METADATA_PARAMS(0, nullptr) }; // 3345579942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetGoogleResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetGoogleResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetGoogleResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetGoogleResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetGoogleResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetGoogleResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetGoogleResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetKongregateResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetKongregateResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetKongregateResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetKongregateResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetKongregateResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetKongregateResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetKongregateResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetKongregateResponse, METADATA_PARAMS(0, nullptr) }; // 1244470236
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetKongregateResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetKongregateResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetKongregateResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetKongregateResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetKongregateResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetKongregateResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetKongregateResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetNintendoResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetNintendoResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetNintendoResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetNintendoResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetNintendoResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetNintendoResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetNintendoResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetNintendoResponse, METADATA_PARAMS(0, nullptr) }; // 4168986976
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetNintendoResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetNintendoResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetNintendoResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetNintendoResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetNintendoResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetNintendoResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetNintendoResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetPSNResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetPSNResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetPSNResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetPSNResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetPSNResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetPSNResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetPSNResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetPSNResponse, METADATA_PARAMS(0, nullptr) }; // 1084348198
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetPSNResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetPSNResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetPSNResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetPSNResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetPSNResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetPSNResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetPSNResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetSteamResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetSteamResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetSteamResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetSteamResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetSteamResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetSteamResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetSteamResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetSteamResponse, METADATA_PARAMS(0, nullptr) }; // 2356390610
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetSteamResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetSteamResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetSteamResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetSteamResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetSteamResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetSteamResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetSteamResponseResponse

// Begin Class UPlayFabAddonModelDecoder Function decodeGetTwitchResponseResponse
struct Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics
{
	struct PlayFabAddonModelDecoder_eventdecodeGetTwitchResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAddonGetTwitchResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Addon | Addon Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetTwitchResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetTwitchResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetTwitchResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAddonModelDecoder_eventdecodeGetTwitchResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAddonGetTwitchResponse, METADATA_PARAMS(0, nullptr) }; // 411332902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAddonModelDecoder, nullptr, "decodeGetTwitchResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetTwitchResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::PlayFabAddonModelDecoder_eventdecodeGetTwitchResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAddonModelDecoder::execdecodeGetTwitchResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAddonGetTwitchResponse*)Z_Param__Result=UPlayFabAddonModelDecoder::decodeGetTwitchResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAddonModelDecoder Function decodeGetTwitchResponseResponse

// Begin Class UPlayFabAddonModelDecoder
void UPlayFabAddonModelDecoder::StaticRegisterNativesUPlayFabAddonModelDecoder()
{
	UClass* Class = UPlayFabAddonModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeCreateOrUpdateAppleResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateAppleResponseResponse },
		{ "decodeCreateOrUpdateFacebookInstantGamesResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateFacebookInstantGamesResponseResponse },
		{ "decodeCreateOrUpdateFacebookResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateFacebookResponseResponse },
		{ "decodeCreateOrUpdateGoogleResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateGoogleResponseResponse },
		{ "decodeCreateOrUpdateKongregateResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateKongregateResponseResponse },
		{ "decodeCreateOrUpdateNintendoResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateNintendoResponseResponse },
		{ "decodeCreateOrUpdatePSNResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdatePSNResponseResponse },
		{ "decodeCreateOrUpdateSteamResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateSteamResponseResponse },
		{ "decodeCreateOrUpdateTwitchResponseResponse", &UPlayFabAddonModelDecoder::execdecodeCreateOrUpdateTwitchResponseResponse },
		{ "decodeDeleteAppleResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeleteAppleResponseResponse },
		{ "decodeDeleteFacebookInstantGamesResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeleteFacebookInstantGamesResponseResponse },
		{ "decodeDeleteFacebookResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeleteFacebookResponseResponse },
		{ "decodeDeleteGoogleResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeleteGoogleResponseResponse },
		{ "decodeDeleteKongregateResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeleteKongregateResponseResponse },
		{ "decodeDeleteNintendoResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeleteNintendoResponseResponse },
		{ "decodeDeletePSNResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeletePSNResponseResponse },
		{ "decodeDeleteSteamResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeleteSteamResponseResponse },
		{ "decodeDeleteTwitchResponseResponse", &UPlayFabAddonModelDecoder::execdecodeDeleteTwitchResponseResponse },
		{ "decodeGetAppleResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetAppleResponseResponse },
		{ "decodeGetFacebookInstantGamesResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetFacebookInstantGamesResponseResponse },
		{ "decodeGetFacebookResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetFacebookResponseResponse },
		{ "decodeGetGoogleResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetGoogleResponseResponse },
		{ "decodeGetKongregateResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetKongregateResponseResponse },
		{ "decodeGetNintendoResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetNintendoResponseResponse },
		{ "decodeGetPSNResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetPSNResponseResponse },
		{ "decodeGetSteamResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetSteamResponseResponse },
		{ "decodeGetTwitchResponseResponse", &UPlayFabAddonModelDecoder::execdecodeGetTwitchResponseResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabAddonModelDecoder);
UClass* Z_Construct_UClass_UPlayFabAddonModelDecoder_NoRegister()
{
	return UPlayFabAddonModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabAddonModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabAddonModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabAddonModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateAppleResponseResponse, "decodeCreateOrUpdateAppleResponseResponse" }, // 3736221266
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookInstantGamesResponseResponse, "decodeCreateOrUpdateFacebookInstantGamesResponseResponse" }, // 1892953371
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateFacebookResponseResponse, "decodeCreateOrUpdateFacebookResponseResponse" }, // 1536991141
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateGoogleResponseResponse, "decodeCreateOrUpdateGoogleResponseResponse" }, // 2724396699
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateKongregateResponseResponse, "decodeCreateOrUpdateKongregateResponseResponse" }, // 3167600414
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateNintendoResponseResponse, "decodeCreateOrUpdateNintendoResponseResponse" }, // 3855135605
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdatePSNResponseResponse, "decodeCreateOrUpdatePSNResponseResponse" }, // 1033488783
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateSteamResponseResponse, "decodeCreateOrUpdateSteamResponseResponse" }, // 4153906603
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeCreateOrUpdateTwitchResponseResponse, "decodeCreateOrUpdateTwitchResponseResponse" }, // 4102290909
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteAppleResponseResponse, "decodeDeleteAppleResponseResponse" }, // 438779655
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookInstantGamesResponseResponse, "decodeDeleteFacebookInstantGamesResponseResponse" }, // 18116008
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteFacebookResponseResponse, "decodeDeleteFacebookResponseResponse" }, // 3326330733
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteGoogleResponseResponse, "decodeDeleteGoogleResponseResponse" }, // 1298114881
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteKongregateResponseResponse, "decodeDeleteKongregateResponseResponse" }, // 3082670195
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteNintendoResponseResponse, "decodeDeleteNintendoResponseResponse" }, // 1910583295
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeletePSNResponseResponse, "decodeDeletePSNResponseResponse" }, // 3700270735
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteSteamResponseResponse, "decodeDeleteSteamResponseResponse" }, // 3423170329
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeDeleteTwitchResponseResponse, "decodeDeleteTwitchResponseResponse" }, // 1558338725
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetAppleResponseResponse, "decodeGetAppleResponseResponse" }, // 4082972248
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookInstantGamesResponseResponse, "decodeGetFacebookInstantGamesResponseResponse" }, // 506562273
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetFacebookResponseResponse, "decodeGetFacebookResponseResponse" }, // 3840291033
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetGoogleResponseResponse, "decodeGetGoogleResponseResponse" }, // 2102385741
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetKongregateResponseResponse, "decodeGetKongregateResponseResponse" }, // 2457471905
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetNintendoResponseResponse, "decodeGetNintendoResponseResponse" }, // 3287154168
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetPSNResponseResponse, "decodeGetPSNResponseResponse" }, // 292729733
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetSteamResponseResponse, "decodeGetSteamResponseResponse" }, // 3160533126
		{ &Z_Construct_UFunction_UPlayFabAddonModelDecoder_decodeGetTwitchResponseResponse, "decodeGetTwitchResponseResponse" }, // 1266605215
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAddonModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabAddonModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAddonModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAddonModelDecoder_Statics::ClassParams = {
	&UPlayFabAddonModelDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAddonModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabAddonModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabAddonModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabAddonModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabAddonModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabAddonModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabAddonModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabAddonModelDecoder>()
{
	return UPlayFabAddonModelDecoder::StaticClass();
}
UPlayFabAddonModelDecoder::UPlayFabAddonModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAddonModelDecoder);
UPlayFabAddonModelDecoder::~UPlayFabAddonModelDecoder() {}
// End Class UPlayFabAddonModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabAddonModelDecoder, UPlayFabAddonModelDecoder::StaticClass, TEXT("UPlayFabAddonModelDecoder"), &Z_Registration_Info_UClass_UPlayFabAddonModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabAddonModelDecoder), 3525630064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_2389751263(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
