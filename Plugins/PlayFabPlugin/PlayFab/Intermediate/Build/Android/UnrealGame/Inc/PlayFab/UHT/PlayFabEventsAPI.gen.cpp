// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabEventsAPI.h"
#include "PlayFab/Classes/PlayFabBaseModel.h"
#include "PlayFab/Classes/PlayFabEventsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEventsAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEventsAPI();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEventsAPI_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Delegate FOnPlayFabEventsRequestCompleted
struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics
{
	struct _Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
{
	((_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabEventsRequestCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayFabEventsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabEventsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabEventsRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayFabEventsRequestCompleted

// Begin Delegate FDelegateOnFailurePlayFabError
struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
{
	struct PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(0, nullptr) }; // 1109941606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabEventsAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnFailurePlayFabError

// Begin Delegate FDelegateOnSuccessCreateTelemetryKey
struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms
	{
		FEventsCreateTelemetryKeyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// PlayStream Events\n//////////////////////////////////////////////////////\n// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n PlayStream Events\n\n callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms, result), Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse, METADATA_PARAMS(0, nullptr) }; // 3963163621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessCreateTelemetryKey__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabEventsAPI::FDelegateOnSuccessCreateTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateTelemetryKey, FEventsCreateTelemetryKeyResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms
	{
		FEventsCreateTelemetryKeyResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessCreateTelemetryKey.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessCreateTelemetryKey

// Begin Delegate FDelegateOnSuccessDeleteTelemetryKey
struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms
	{
		FEventsDeleteTelemetryKeyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms, result), Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse, METADATA_PARAMS(0, nullptr) }; // 1601836023
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessDeleteTelemetryKey__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabEventsAPI::FDelegateOnSuccessDeleteTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteTelemetryKey, FEventsDeleteTelemetryKeyResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms
	{
		FEventsDeleteTelemetryKeyResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessDeleteTelemetryKey.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessDeleteTelemetryKey

// Begin Delegate FDelegateOnSuccessGetTelemetryKey
struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms
	{
		FEventsGetTelemetryKeyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms, result), Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse, METADATA_PARAMS(0, nullptr) }; // 2533809510
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessGetTelemetryKey__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabEventsAPI::FDelegateOnSuccessGetTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTelemetryKey, FEventsGetTelemetryKeyResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms
	{
		FEventsGetTelemetryKeyResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetTelemetryKey.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetTelemetryKey

// Begin Delegate FDelegateOnSuccessListTelemetryKeys
struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms
	{
		FEventsListTelemetryKeysResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms, result), Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse, METADATA_PARAMS(0, nullptr) }; // 2055068425
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessListTelemetryKeys__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabEventsAPI::FDelegateOnSuccessListTelemetryKeys_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListTelemetryKeys, FEventsListTelemetryKeysResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms
	{
		FEventsListTelemetryKeysResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListTelemetryKeys.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessListTelemetryKeys

// Begin Delegate FDelegateOnSuccessSetTelemetryKeyActive
struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms
	{
		FEventsSetTelemetryKeyActiveResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms, result), Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse, METADATA_PARAMS(0, nullptr) }; // 2097662164
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabEventsAPI::FDelegateOnSuccessSetTelemetryKeyActive_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTelemetryKeyActive, FEventsSetTelemetryKeyActiveResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms
	{
		FEventsSetTelemetryKeyActiveResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessSetTelemetryKeyActive.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessSetTelemetryKeyActive

// Begin Delegate FDelegateOnSuccessWriteEvents
struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms
	{
		FEventsWriteEventsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms, result), Z_Construct_UScriptStruct_FEventsWriteEventsResponse, METADATA_PARAMS(0, nullptr) }; // 1566223588
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessWriteEvents__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabEventsAPI::FDelegateOnSuccessWriteEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteEvents, FEventsWriteEventsResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms
	{
		FEventsWriteEventsResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessWriteEvents.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessWriteEvents

// Begin Delegate FDelegateOnSuccessWriteTelemetryEvents
struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms
	{
		FEventsWriteEventsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms, result), Z_Construct_UScriptStruct_FEventsWriteEventsResponse, METADATA_PARAMS(0, nullptr) }; // 1566223588
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessWriteTelemetryEvents__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabEventsAPI::FDelegateOnSuccessWriteTelemetryEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteTelemetryEvents, FEventsWriteEventsResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms
	{
		FEventsWriteEventsResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessWriteTelemetryEvents.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessWriteTelemetryEvents

// Begin Class UPlayFabEventsAPI Function CreateTelemetryKey
struct Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics
{
	struct PlayFabEventsAPI_eventCreateTelemetryKey_Parms
	{
		FEventsCreateTelemetryKeyRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabEventsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a new telemetry key for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new telemetry key for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, request), Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest, METADATA_PARAMS(0, nullptr) }; // 134923259
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1435090602
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2298511147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "CreateTelemetryKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PlayFabEventsAPI_eventCreateTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PlayFabEventsAPI_eventCreateTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execCreateTelemetryKey)
{
	P_GET_STRUCT(FEventsCreateTelemetryKeyRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::CreateTelemetryKey(Z_Param_request,FDelegateOnSuccessCreateTelemetryKey(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function CreateTelemetryKey

// Begin Class UPlayFabEventsAPI Function DeleteTelemetryKey
struct Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics
{
	struct PlayFabEventsAPI_eventDeleteTelemetryKey_Parms
	{
		FEventsDeleteTelemetryKeyRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabEventsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deletes a telemetry key configured for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes a telemetry key configured for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, request), Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest, METADATA_PARAMS(0, nullptr) }; // 3362273921
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1381013594
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2298511147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DeleteTelemetryKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PlayFabEventsAPI_eventDeleteTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PlayFabEventsAPI_eventDeleteTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execDeleteTelemetryKey)
{
	P_GET_STRUCT(FEventsDeleteTelemetryKeyRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::DeleteTelemetryKey(Z_Param_request,FDelegateOnSuccessDeleteTelemetryKey(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function DeleteTelemetryKey

// Begin Class UPlayFabEventsAPI Function GetTelemetryKey
struct Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics
{
	struct PlayFabEventsAPI_eventGetTelemetryKey_Parms
	{
		FEventsGetTelemetryKeyRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabEventsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets information about a telemetry key configured for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets information about a telemetry key configured for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, request), Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest, METADATA_PARAMS(0, nullptr) }; // 1814659837
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1267188648
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2298511147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "GetTelemetryKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PlayFabEventsAPI_eventGetTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PlayFabEventsAPI_eventGetTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execGetTelemetryKey)
{
	P_GET_STRUCT(FEventsGetTelemetryKeyRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::GetTelemetryKey(Z_Param_request,FDelegateOnSuccessGetTelemetryKey(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function GetTelemetryKey

// Begin Class UPlayFabEventsAPI Function HelperCreateTelemetryKey
struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics
{
	struct PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperCreateTelemetryKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperCreateTelemetryKey)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperCreateTelemetryKey(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function HelperCreateTelemetryKey

// Begin Class UPlayFabEventsAPI Function HelperDeleteTelemetryKey
struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics
{
	struct PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperDeleteTelemetryKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperDeleteTelemetryKey)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperDeleteTelemetryKey(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function HelperDeleteTelemetryKey

// Begin Class UPlayFabEventsAPI Function HelperGetTelemetryKey
struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics
{
	struct PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperGetTelemetryKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperGetTelemetryKey)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetTelemetryKey(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function HelperGetTelemetryKey

// Begin Class UPlayFabEventsAPI Function HelperListTelemetryKeys
struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics
{
	struct PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperListTelemetryKeys", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperListTelemetryKeys)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperListTelemetryKeys(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function HelperListTelemetryKeys

// Begin Class UPlayFabEventsAPI Function HelperSetTelemetryKeyActive
struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics
{
	struct PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperSetTelemetryKeyActive", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperSetTelemetryKeyActive)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperSetTelemetryKeyActive(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function HelperSetTelemetryKeyActive

// Begin Class UPlayFabEventsAPI Function HelperWriteEvents
struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics
{
	struct PlayFabEventsAPI_eventHelperWriteEvents_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperWriteEvents_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperWriteEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabEventsAPI_eventHelperWriteEvents_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperWriteEvents_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperWriteEvents", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PlayFabEventsAPI_eventHelperWriteEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PlayFabEventsAPI_eventHelperWriteEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperWriteEvents)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperWriteEvents(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function HelperWriteEvents

// Begin Class UPlayFabEventsAPI Function HelperWriteTelemetryEvents
struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics
{
	struct PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperWriteTelemetryEvents", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperWriteTelemetryEvents)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperWriteTelemetryEvents(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function HelperWriteTelemetryEvents

// Begin Class UPlayFabEventsAPI Function ListTelemetryKeys
struct Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics
{
	struct PlayFabEventsAPI_eventListTelemetryKeys_Parms
	{
		FEventsListTelemetryKeysRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabEventsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lists all telemetry keys configured for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lists all telemetry keys configured for the title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, request), Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest, METADATA_PARAMS(0, nullptr) }; // 2428579484
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 247271448
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2298511147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "ListTelemetryKeys", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PlayFabEventsAPI_eventListTelemetryKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PlayFabEventsAPI_eventListTelemetryKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execListTelemetryKeys)
{
	P_GET_STRUCT(FEventsListTelemetryKeysRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::ListTelemetryKeys(Z_Param_request,FDelegateOnSuccessListTelemetryKeys(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function ListTelemetryKeys

// Begin Class UPlayFabEventsAPI Function SetTelemetryKeyActive
struct Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics
{
	struct PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms
	{
		FEventsSetTelemetryKeyActiveRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabEventsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets a telemetry key to the active or deactivated state. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a telemetry key to the active or deactivated state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, request), Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest, METADATA_PARAMS(0, nullptr) }; // 1705374729
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3339570106
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2298511147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "SetTelemetryKeyActive", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execSetTelemetryKeyActive)
{
	P_GET_STRUCT(FEventsSetTelemetryKeyActiveRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::SetTelemetryKeyActive(Z_Param_request,FDelegateOnSuccessSetTelemetryKeyActive(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function SetTelemetryKeyActive

// Begin Class UPlayFabEventsAPI Function WriteEvents
struct Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics
{
	struct PlayFabEventsAPI_eventWriteEvents_Parms
	{
		FEventsWriteEventsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabEventsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Write batches of entity based events to PlayStream. The namespace of the Event must be 'custom' or start with 'custom.'. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Write batches of entity based events to PlayStream. The namespace of the Event must be 'custom' or start with 'custom.'." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, request), Z_Construct_UScriptStruct_FEventsWriteEventsRequest, METADATA_PARAMS(0, nullptr) }; // 2940132793
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4037211854
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2298511147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "WriteEvents", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PlayFabEventsAPI_eventWriteEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PlayFabEventsAPI_eventWriteEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execWriteEvents)
{
	P_GET_STRUCT(FEventsWriteEventsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::WriteEvents(Z_Param_request,FDelegateOnSuccessWriteEvents(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function WriteEvents

// Begin Class UPlayFabEventsAPI Function WriteTelemetryEvents
struct Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics
{
	struct PlayFabEventsAPI_eventWriteTelemetryEvents_Parms
	{
		FEventsWriteEventsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabEventsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Write batches of entity based events to as Telemetry events (bypass PlayStream). The namespace must be 'custom' or start\n     * with 'custom.'\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Write batches of entity based events to as Telemetry events (bypass PlayStream). The namespace must be 'custom' or start\nwith 'custom.'" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, request), Z_Construct_UScriptStruct_FEventsWriteEventsRequest, METADATA_PARAMS(0, nullptr) }; // 2940132793
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1480800137
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2298511147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "WriteTelemetryEvents", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PlayFabEventsAPI_eventWriteTelemetryEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PlayFabEventsAPI_eventWriteTelemetryEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execWriteTelemetryEvents)
{
	P_GET_STRUCT(FEventsWriteEventsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::WriteTelemetryEvents(Z_Param_request,FDelegateOnSuccessWriteTelemetryEvents(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function WriteTelemetryEvents

// Begin Class UPlayFabEventsAPI Function WriteTelemetryEventsWithTelemetryKey
struct Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics
{
	struct PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms
	{
		FEventsWriteEventsRequest request;
		FString telemetryKey;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabEventsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Write batches of entity based events to as Telemetry events (bypass PlayStream) using a Telemetry Key. The namespace must be 'custom' or start\n     * with 'custom.'\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Write batches of entity based events to as Telemetry events (bypass PlayStream) using a Telemetry Key. The namespace must be 'custom' or start\nwith 'custom.'" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_request;
	static const UECodeGen_Private::FStrPropertyParams NewProp_telemetryKey;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, request), Z_Construct_UScriptStruct_FEventsWriteEventsRequest, METADATA_PARAMS(0, nullptr) }; // 2940132793
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_telemetryKey = { "telemetryKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, telemetryKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1480800137
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2298511147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_telemetryKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "WriteTelemetryEventsWithTelemetryKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabEventsAPI::execWriteTelemetryEventsWithTelemetryKey)
{
	P_GET_STRUCT(FEventsWriteEventsRequest,Z_Param_request);
	P_GET_PROPERTY(FStrProperty,Z_Param_telemetryKey);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::WriteTelemetryEventsWithTelemetryKey(Z_Param_request,Z_Param_telemetryKey,FDelegateOnSuccessWriteTelemetryEvents(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabEventsAPI Function WriteTelemetryEventsWithTelemetryKey

// Begin Class UPlayFabEventsAPI
void UPlayFabEventsAPI::StaticRegisterNativesUPlayFabEventsAPI()
{
	UClass* Class = UPlayFabEventsAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTelemetryKey", &UPlayFabEventsAPI::execCreateTelemetryKey },
		{ "DeleteTelemetryKey", &UPlayFabEventsAPI::execDeleteTelemetryKey },
		{ "GetTelemetryKey", &UPlayFabEventsAPI::execGetTelemetryKey },
		{ "HelperCreateTelemetryKey", &UPlayFabEventsAPI::execHelperCreateTelemetryKey },
		{ "HelperDeleteTelemetryKey", &UPlayFabEventsAPI::execHelperDeleteTelemetryKey },
		{ "HelperGetTelemetryKey", &UPlayFabEventsAPI::execHelperGetTelemetryKey },
		{ "HelperListTelemetryKeys", &UPlayFabEventsAPI::execHelperListTelemetryKeys },
		{ "HelperSetTelemetryKeyActive", &UPlayFabEventsAPI::execHelperSetTelemetryKeyActive },
		{ "HelperWriteEvents", &UPlayFabEventsAPI::execHelperWriteEvents },
		{ "HelperWriteTelemetryEvents", &UPlayFabEventsAPI::execHelperWriteTelemetryEvents },
		{ "ListTelemetryKeys", &UPlayFabEventsAPI::execListTelemetryKeys },
		{ "SetTelemetryKeyActive", &UPlayFabEventsAPI::execSetTelemetryKeyActive },
		{ "WriteEvents", &UPlayFabEventsAPI::execWriteEvents },
		{ "WriteTelemetryEvents", &UPlayFabEventsAPI::execWriteTelemetryEvents },
		{ "WriteTelemetryEventsWithTelemetryKey", &UPlayFabEventsAPI::execWriteTelemetryEventsWithTelemetryKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabEventsAPI);
UClass* Z_Construct_UClass_UPlayFabEventsAPI_NoRegister()
{
	return UPlayFabEventsAPI::StaticClass();
}
struct Z_Construct_UClass_UPlayFabEventsAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabEventsAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Response data stored as JSON" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayFabResponse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallAuthenticationContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey, "CreateTelemetryKey" }, // 1133709972
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 2298511147
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature, "DelegateOnSuccessCreateTelemetryKey__DelegateSignature" }, // 1435090602
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature, "DelegateOnSuccessDeleteTelemetryKey__DelegateSignature" }, // 1381013594
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature, "DelegateOnSuccessGetTelemetryKey__DelegateSignature" }, // 1267188648
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature, "DelegateOnSuccessListTelemetryKeys__DelegateSignature" }, // 247271448
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature, "DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature" }, // 3339570106
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature, "DelegateOnSuccessWriteEvents__DelegateSignature" }, // 4037211854
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature, "DelegateOnSuccessWriteTelemetryEvents__DelegateSignature" }, // 1480800137
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey, "DeleteTelemetryKey" }, // 3772192930
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey, "GetTelemetryKey" }, // 2478463199
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey, "HelperCreateTelemetryKey" }, // 3128662000
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey, "HelperDeleteTelemetryKey" }, // 4139681790
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey, "HelperGetTelemetryKey" }, // 3544271513
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys, "HelperListTelemetryKeys" }, // 1056389226
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive, "HelperSetTelemetryKeyActive" }, // 4216252775
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents, "HelperWriteEvents" }, // 1515011435
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents, "HelperWriteTelemetryEvents" }, // 2895193242
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys, "ListTelemetryKeys" }, // 3311742988
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive, "SetTelemetryKeyActive" }, // 1065955323
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents, "WriteEvents" }, // 1454155641
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents, "WriteTelemetryEvents" }, // 468431335
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey, "WriteTelemetryEventsWithTelemetryKey" }, // 903806195
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabEventsAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabEventsAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayFabResponse_MetaData), NewProp_OnPlayFabResponse_MetaData) }; // 2928043599
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabEventsAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallAuthenticationContext_MetaData), NewProp_CallAuthenticationContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabEventsAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabEventsAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabEventsAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_OnPlayFabResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_CallAuthenticationContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayFabEventsAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::ClassParams = {
	&UPlayFabEventsAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayFabEventsAPI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabEventsAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabEventsAPI()
{
	if (!Z_Registration_Info_UClass_UPlayFabEventsAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabEventsAPI.OuterSingleton, Z_Construct_UClass_UPlayFabEventsAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabEventsAPI.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabEventsAPI>()
{
	return UPlayFabEventsAPI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabEventsAPI);
UPlayFabEventsAPI::~UPlayFabEventsAPI() {}
// End Class UPlayFabEventsAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabEventsAPI, UPlayFabEventsAPI::StaticClass, TEXT("UPlayFabEventsAPI"), &Z_Registration_Info_UClass_UPlayFabEventsAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabEventsAPI), 3030851357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_1681710654(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
