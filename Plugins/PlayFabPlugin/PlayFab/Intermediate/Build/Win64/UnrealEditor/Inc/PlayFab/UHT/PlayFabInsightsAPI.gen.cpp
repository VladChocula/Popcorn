// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabInsightsAPI.h"
#include "PlayFab/Classes/PlayFabBaseModel.h"
#include "PlayFab/Classes/PlayFabInsightsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabInsightsAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabInsightsAPI();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabInsightsAPI_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature();
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
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Delegate FOnPlayFabInsightsRequestCompleted
struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics
{
	struct _Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
{
	((_Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabInsightsRequestCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayFabInsightsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabInsightsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabInsightsRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayFabInsightsRequestCompleted

// Begin Delegate FDelegateOnFailurePlayFabError
struct Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
{
	struct PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(0, nullptr) }; // 1109941606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabInsightsAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnFailurePlayFabError

// Begin Delegate FDelegateOnSuccessGetDetails
struct Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms
	{
		FInsightsInsightsGetDetailsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Analytics\n//////////////////////////////////////////////////////\n// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Analytics\n\n callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms, result), Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse, METADATA_PARAMS(0, nullptr) }; // 876333552
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "DelegateOnSuccessGetDetails__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabInsightsAPI::FDelegateOnSuccessGetDetails_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetDetails, FInsightsInsightsGetDetailsResponse result, UObject* customData)
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms
	{
		FInsightsInsightsGetDetailsResponse result;
		UObject* customData;
	};
	PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetDetails.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetDetails

// Begin Delegate FDelegateOnSuccessGetLimits
struct Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms
	{
		FInsightsInsightsGetLimitsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms, result), Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse, METADATA_PARAMS(0, nullptr) }; // 840235063
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "DelegateOnSuccessGetLimits__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabInsightsAPI::FDelegateOnSuccessGetLimits_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLimits, FInsightsInsightsGetLimitsResponse result, UObject* customData)
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms
	{
		FInsightsInsightsGetLimitsResponse result;
		UObject* customData;
	};
	PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetLimits.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetLimits

// Begin Delegate FDelegateOnSuccessGetOperationStatus
struct Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms
	{
		FInsightsInsightsGetOperationStatusResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms, result), Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse, METADATA_PARAMS(0, nullptr) }; // 4004703226
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "DelegateOnSuccessGetOperationStatus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabInsightsAPI::FDelegateOnSuccessGetOperationStatus_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetOperationStatus, FInsightsInsightsGetOperationStatusResponse result, UObject* customData)
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms
	{
		FInsightsInsightsGetOperationStatusResponse result;
		UObject* customData;
	};
	PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetOperationStatus.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetOperationStatus

// Begin Delegate FDelegateOnSuccessGetPendingOperations
struct Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms
	{
		FInsightsInsightsGetPendingOperationsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms, result), Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse, METADATA_PARAMS(0, nullptr) }; // 1070085782
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "DelegateOnSuccessGetPendingOperations__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabInsightsAPI::FDelegateOnSuccessGetPendingOperations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPendingOperations, FInsightsInsightsGetPendingOperationsResponse result, UObject* customData)
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms
	{
		FInsightsInsightsGetPendingOperationsResponse result;
		UObject* customData;
	};
	PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetPendingOperations.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetPendingOperations

// Begin Delegate FDelegateOnSuccessSetPerformance
struct Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms
	{
		FInsightsInsightsOperationResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms, result), Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse, METADATA_PARAMS(0, nullptr) }; // 1666653236
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "DelegateOnSuccessSetPerformance__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabInsightsAPI::FDelegateOnSuccessSetPerformance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPerformance, FInsightsInsightsOperationResponse result, UObject* customData)
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms
	{
		FInsightsInsightsOperationResponse result;
		UObject* customData;
	};
	PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessSetPerformance.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessSetPerformance

// Begin Delegate FDelegateOnSuccessSetStorageRetention
struct Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms
	{
		FInsightsInsightsOperationResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms, result), Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse, METADATA_PARAMS(0, nullptr) }; // 1666653236
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "DelegateOnSuccessSetStorageRetention__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabInsightsAPI::FDelegateOnSuccessSetStorageRetention_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetStorageRetention, FInsightsInsightsOperationResponse result, UObject* customData)
{
	struct PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms
	{
		FInsightsInsightsOperationResponse result;
		UObject* customData;
	};
	PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessSetStorageRetention.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessSetStorageRetention

// Begin Class UPlayFabInsightsAPI Function GetDetails
struct Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics
{
	struct PlayFabInsightsAPI_eventGetDetails_Parms
	{
		FInsightsInsightsEmptyRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabInsightsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the current values for the Insights performance and data storage retention, list of pending operations, and the\n     * performance and data storage retention limits.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current values for the Insights performance and data storage retention, list of pending operations, and the\nperformance and data storage retention limits." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetDetails_Parms, request), Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest, METADATA_PARAMS(0, nullptr) }; // 842733946
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetDetails_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1697442751
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetDetails_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3062842529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetDetails_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetDetails_Parms, ReturnValue), Z_Construct_UClass_UPlayFabInsightsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "GetDetails", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::PlayFabInsightsAPI_eventGetDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::PlayFabInsightsAPI_eventGetDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execGetDetails)
{
	P_GET_STRUCT(FInsightsInsightsEmptyRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabInsightsAPI**)Z_Param__Result=UPlayFabInsightsAPI::GetDetails(Z_Param_request,FDelegateOnSuccessGetDetails(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function GetDetails

// Begin Class UPlayFabInsightsAPI Function GetLimits
struct Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics
{
	struct PlayFabInsightsAPI_eventGetLimits_Parms
	{
		FInsightsInsightsEmptyRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabInsightsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Retrieves the range of allowed values for performance and data storage retention values as well as the submeter details\n     * for each performance level.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the range of allowed values for performance and data storage retention values as well as the submeter details\nfor each performance level." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetLimits_Parms, request), Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest, METADATA_PARAMS(0, nullptr) }; // 842733946
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetLimits_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4104439216
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetLimits_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3062842529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetLimits_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetLimits_Parms, ReturnValue), Z_Construct_UClass_UPlayFabInsightsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "GetLimits", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::PlayFabInsightsAPI_eventGetLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::PlayFabInsightsAPI_eventGetLimits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execGetLimits)
{
	P_GET_STRUCT(FInsightsInsightsEmptyRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabInsightsAPI**)Z_Param__Result=UPlayFabInsightsAPI::GetLimits(Z_Param_request,FDelegateOnSuccessGetLimits(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function GetLimits

// Begin Class UPlayFabInsightsAPI Function GetOperationStatus
struct Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics
{
	struct PlayFabInsightsAPI_eventGetOperationStatus_Parms
	{
		FInsightsInsightsGetOperationStatusRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabInsightsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the status of a SetPerformance or SetStorageRetention operation. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the status of a SetPerformance or SetStorageRetention operation." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetOperationStatus_Parms, request), Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest, METADATA_PARAMS(0, nullptr) }; // 559491740
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetOperationStatus_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4104629670
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetOperationStatus_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3062842529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetOperationStatus_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetOperationStatus_Parms, ReturnValue), Z_Construct_UClass_UPlayFabInsightsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "GetOperationStatus", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::PlayFabInsightsAPI_eventGetOperationStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::PlayFabInsightsAPI_eventGetOperationStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execGetOperationStatus)
{
	P_GET_STRUCT(FInsightsInsightsGetOperationStatusRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabInsightsAPI**)Z_Param__Result=UPlayFabInsightsAPI::GetOperationStatus(Z_Param_request,FDelegateOnSuccessGetOperationStatus(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function GetOperationStatus

// Begin Class UPlayFabInsightsAPI Function GetPendingOperations
struct Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics
{
	struct PlayFabInsightsAPI_eventGetPendingOperations_Parms
	{
		FInsightsInsightsGetPendingOperationsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabInsightsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets a list of pending SetPerformance and/or SetStorageRetention operations for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a list of pending SetPerformance and/or SetStorageRetention operations for the title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetPendingOperations_Parms, request), Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest, METADATA_PARAMS(0, nullptr) }; // 2430347516
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetPendingOperations_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2956432157
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetPendingOperations_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3062842529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetPendingOperations_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventGetPendingOperations_Parms, ReturnValue), Z_Construct_UClass_UPlayFabInsightsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "GetPendingOperations", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::PlayFabInsightsAPI_eventGetPendingOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::PlayFabInsightsAPI_eventGetPendingOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execGetPendingOperations)
{
	P_GET_STRUCT(FInsightsInsightsGetPendingOperationsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabInsightsAPI**)Z_Param__Result=UPlayFabInsightsAPI::GetPendingOperations(Z_Param_request,FDelegateOnSuccessGetPendingOperations(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function GetPendingOperations

// Begin Class UPlayFabInsightsAPI Function HelperGetDetails
struct Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics
{
	struct PlayFabInsightsAPI_eventHelperGetDetails_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabInsightsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabInsightsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperGetDetails_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperGetDetails_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabInsightsAPI_eventHelperGetDetails_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabInsightsAPI_eventHelperGetDetails_Parms), &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "HelperGetDetails", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::PlayFabInsightsAPI_eventHelperGetDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::PlayFabInsightsAPI_eventHelperGetDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execHelperGetDetails)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetDetails(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function HelperGetDetails

// Begin Class UPlayFabInsightsAPI Function HelperGetLimits
struct Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics
{
	struct PlayFabInsightsAPI_eventHelperGetLimits_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabInsightsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabInsightsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperGetLimits_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperGetLimits_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabInsightsAPI_eventHelperGetLimits_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabInsightsAPI_eventHelperGetLimits_Parms), &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "HelperGetLimits", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::PlayFabInsightsAPI_eventHelperGetLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::PlayFabInsightsAPI_eventHelperGetLimits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execHelperGetLimits)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetLimits(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function HelperGetLimits

// Begin Class UPlayFabInsightsAPI Function HelperGetOperationStatus
struct Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics
{
	struct PlayFabInsightsAPI_eventHelperGetOperationStatus_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabInsightsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabInsightsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperGetOperationStatus_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperGetOperationStatus_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabInsightsAPI_eventHelperGetOperationStatus_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabInsightsAPI_eventHelperGetOperationStatus_Parms), &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "HelperGetOperationStatus", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::PlayFabInsightsAPI_eventHelperGetOperationStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::PlayFabInsightsAPI_eventHelperGetOperationStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execHelperGetOperationStatus)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetOperationStatus(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function HelperGetOperationStatus

// Begin Class UPlayFabInsightsAPI Function HelperGetPendingOperations
struct Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics
{
	struct PlayFabInsightsAPI_eventHelperGetPendingOperations_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabInsightsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabInsightsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperGetPendingOperations_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperGetPendingOperations_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabInsightsAPI_eventHelperGetPendingOperations_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabInsightsAPI_eventHelperGetPendingOperations_Parms), &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "HelperGetPendingOperations", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::PlayFabInsightsAPI_eventHelperGetPendingOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::PlayFabInsightsAPI_eventHelperGetPendingOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execHelperGetPendingOperations)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetPendingOperations(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function HelperGetPendingOperations

// Begin Class UPlayFabInsightsAPI Function HelperSetPerformance
struct Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics
{
	struct PlayFabInsightsAPI_eventHelperSetPerformance_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabInsightsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabInsightsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperSetPerformance_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperSetPerformance_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabInsightsAPI_eventHelperSetPerformance_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabInsightsAPI_eventHelperSetPerformance_Parms), &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "HelperSetPerformance", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::PlayFabInsightsAPI_eventHelperSetPerformance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::PlayFabInsightsAPI_eventHelperSetPerformance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execHelperSetPerformance)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperSetPerformance(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function HelperSetPerformance

// Begin Class UPlayFabInsightsAPI Function HelperSetStorageRetention
struct Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics
{
	struct PlayFabInsightsAPI_eventHelperSetStorageRetention_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabInsightsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabInsightsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperSetStorageRetention_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventHelperSetStorageRetention_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabInsightsAPI_eventHelperSetStorageRetention_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabInsightsAPI_eventHelperSetStorageRetention_Parms), &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "HelperSetStorageRetention", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::PlayFabInsightsAPI_eventHelperSetStorageRetention_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::PlayFabInsightsAPI_eventHelperSetStorageRetention_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execHelperSetStorageRetention)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperSetStorageRetention(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function HelperSetStorageRetention

// Begin Class UPlayFabInsightsAPI Function SetPerformance
struct Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics
{
	struct PlayFabInsightsAPI_eventSetPerformance_Parms
	{
		FInsightsInsightsSetPerformanceRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabInsightsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the Insights performance level value for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Insights performance level value for the title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetPerformance_Parms, request), Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest, METADATA_PARAMS(0, nullptr) }; // 266792983
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetPerformance_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1455560724
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetPerformance_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3062842529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetPerformance_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetPerformance_Parms, ReturnValue), Z_Construct_UClass_UPlayFabInsightsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "SetPerformance", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::PlayFabInsightsAPI_eventSetPerformance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::PlayFabInsightsAPI_eventSetPerformance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execSetPerformance)
{
	P_GET_STRUCT(FInsightsInsightsSetPerformanceRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabInsightsAPI**)Z_Param__Result=UPlayFabInsightsAPI::SetPerformance(Z_Param_request,FDelegateOnSuccessSetPerformance(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function SetPerformance

// Begin Class UPlayFabInsightsAPI Function SetStorageRetention
struct Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics
{
	struct PlayFabInsightsAPI_eventSetStorageRetention_Parms
	{
		FInsightsInsightsSetStorageRetentionRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabInsightsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Insights | Analytics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the Insights data storage retention days value for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Insights data storage retention days value for the title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetStorageRetention_Parms, request), Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest, METADATA_PARAMS(0, nullptr) }; // 702714287
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetStorageRetention_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 254409231
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetStorageRetention_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3062842529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetStorageRetention_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabInsightsAPI_eventSetStorageRetention_Parms, ReturnValue), Z_Construct_UClass_UPlayFabInsightsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabInsightsAPI, nullptr, "SetStorageRetention", nullptr, nullptr, Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::PlayFabInsightsAPI_eventSetStorageRetention_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::PlayFabInsightsAPI_eventSetStorageRetention_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabInsightsAPI::execSetStorageRetention)
{
	P_GET_STRUCT(FInsightsInsightsSetStorageRetentionRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabInsightsAPI**)Z_Param__Result=UPlayFabInsightsAPI::SetStorageRetention(Z_Param_request,FDelegateOnSuccessSetStorageRetention(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabInsightsAPI Function SetStorageRetention

// Begin Class UPlayFabInsightsAPI
void UPlayFabInsightsAPI::StaticRegisterNativesUPlayFabInsightsAPI()
{
	UClass* Class = UPlayFabInsightsAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDetails", &UPlayFabInsightsAPI::execGetDetails },
		{ "GetLimits", &UPlayFabInsightsAPI::execGetLimits },
		{ "GetOperationStatus", &UPlayFabInsightsAPI::execGetOperationStatus },
		{ "GetPendingOperations", &UPlayFabInsightsAPI::execGetPendingOperations },
		{ "HelperGetDetails", &UPlayFabInsightsAPI::execHelperGetDetails },
		{ "HelperGetLimits", &UPlayFabInsightsAPI::execHelperGetLimits },
		{ "HelperGetOperationStatus", &UPlayFabInsightsAPI::execHelperGetOperationStatus },
		{ "HelperGetPendingOperations", &UPlayFabInsightsAPI::execHelperGetPendingOperations },
		{ "HelperSetPerformance", &UPlayFabInsightsAPI::execHelperSetPerformance },
		{ "HelperSetStorageRetention", &UPlayFabInsightsAPI::execHelperSetStorageRetention },
		{ "SetPerformance", &UPlayFabInsightsAPI::execSetPerformance },
		{ "SetStorageRetention", &UPlayFabInsightsAPI::execSetStorageRetention },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabInsightsAPI);
UClass* Z_Construct_UClass_UPlayFabInsightsAPI_NoRegister()
{
	return UPlayFabInsightsAPI::StaticClass();
}
struct Z_Construct_UClass_UPlayFabInsightsAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabInsightsAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabInsightsAPI.h" },
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
		{ &Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 3062842529
		{ &Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetDetails__DelegateSignature, "DelegateOnSuccessGetDetails__DelegateSignature" }, // 1697442751
		{ &Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetLimits__DelegateSignature, "DelegateOnSuccessGetLimits__DelegateSignature" }, // 4104439216
		{ &Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetOperationStatus__DelegateSignature, "DelegateOnSuccessGetOperationStatus__DelegateSignature" }, // 4104629670
		{ &Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessGetPendingOperations__DelegateSignature, "DelegateOnSuccessGetPendingOperations__DelegateSignature" }, // 2956432157
		{ &Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetPerformance__DelegateSignature, "DelegateOnSuccessSetPerformance__DelegateSignature" }, // 1455560724
		{ &Z_Construct_UDelegateFunction_UPlayFabInsightsAPI_DelegateOnSuccessSetStorageRetention__DelegateSignature, "DelegateOnSuccessSetStorageRetention__DelegateSignature" }, // 254409231
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_GetDetails, "GetDetails" }, // 3130706144
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_GetLimits, "GetLimits" }, // 611131336
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_GetOperationStatus, "GetOperationStatus" }, // 2193849595
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_GetPendingOperations, "GetPendingOperations" }, // 242113598
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetDetails, "HelperGetDetails" }, // 3860824542
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetLimits, "HelperGetLimits" }, // 157489682
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetOperationStatus, "HelperGetOperationStatus" }, // 3512392783
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperGetPendingOperations, "HelperGetPendingOperations" }, // 530298103
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetPerformance, "HelperSetPerformance" }, // 3886016827
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_HelperSetStorageRetention, "HelperSetStorageRetention" }, // 1646314343
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_SetPerformance, "SetPerformance" }, // 3163097545
		{ &Z_Construct_UFunction_UPlayFabInsightsAPI_SetStorageRetention, "SetStorageRetention" }, // 742420169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabInsightsAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabInsightsAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabInsightsAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabInsightsRequestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayFabResponse_MetaData), NewProp_OnPlayFabResponse_MetaData) }; // 4229141455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabInsightsAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabInsightsAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallAuthenticationContext_MetaData), NewProp_CallAuthenticationContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabInsightsAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabInsightsAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabInsightsAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabInsightsAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabInsightsAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabInsightsAPI_Statics::NewProp_OnPlayFabResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabInsightsAPI_Statics::NewProp_CallAuthenticationContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabInsightsAPI_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabInsightsAPI_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabInsightsAPI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayFabInsightsAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabInsightsAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabInsightsAPI_Statics::ClassParams = {
	&UPlayFabInsightsAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayFabInsightsAPI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabInsightsAPI_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabInsightsAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabInsightsAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabInsightsAPI()
{
	if (!Z_Registration_Info_UClass_UPlayFabInsightsAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabInsightsAPI.OuterSingleton, Z_Construct_UClass_UPlayFabInsightsAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabInsightsAPI.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabInsightsAPI>()
{
	return UPlayFabInsightsAPI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabInsightsAPI);
UPlayFabInsightsAPI::~UPlayFabInsightsAPI() {}
// End Class UPlayFabInsightsAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabInsightsAPI, UPlayFabInsightsAPI::StaticClass, TEXT("UPlayFabInsightsAPI"), &Z_Registration_Info_UClass_UPlayFabInsightsAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabInsightsAPI), 49276792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_3564220726(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
