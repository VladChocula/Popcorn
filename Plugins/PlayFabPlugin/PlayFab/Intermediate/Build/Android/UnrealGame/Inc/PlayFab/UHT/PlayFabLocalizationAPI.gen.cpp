// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabLocalizationAPI.h"
#include "PlayFab/Classes/PlayFabBaseModel.h"
#include "PlayFab/Classes/PlayFabLocalizationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLocalizationAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationAPI();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationAPI_NoRegister();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Delegate FOnPlayFabLocalizationRequestCompleted
struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics
{
	struct _Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
{
	((_Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabLocalizationRequestCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayFabLocalizationRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabLocalizationRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabLocalizationRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayFabLocalizationRequestCompleted

// Begin Delegate FDelegateOnFailurePlayFabError
struct Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
{
	struct PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(0, nullptr) }; // 1109941606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabLocalizationAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnFailurePlayFabError

// Begin Delegate FDelegateOnSuccessGetLanguageList
struct Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics
{
	struct PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms
	{
		FLocalizationGetLanguageListResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Localization\n//////////////////////////////////////////////////////\n// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Localization\n\n callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms, result), Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, METADATA_PARAMS(0, nullptr) }; // 2532679549
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationAPI, nullptr, "DelegateOnSuccessGetLanguageList__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabLocalizationAPI::FDelegateOnSuccessGetLanguageList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLanguageList, FLocalizationGetLanguageListResponse result, UObject* customData)
{
	struct PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms
	{
		FLocalizationGetLanguageListResponse result;
		UObject* customData;
	};
	PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetLanguageList.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetLanguageList

// Begin Class UPlayFabLocalizationAPI Function GetLanguageList
struct Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics
{
	struct PlayFabLocalizationAPI_eventGetLanguageList_Parms
	{
		FLocalizationGetLanguageListRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabLocalizationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Localization | Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retrieves the list of allowed languages, only accessible by title entities */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the list of allowed languages, only accessible by title entities" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, request), Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest, METADATA_PARAMS(0, nullptr) }; // 369215245
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4230933407
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 544770784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventGetLanguageList_Parms, ReturnValue), Z_Construct_UClass_UPlayFabLocalizationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationAPI, nullptr, "GetLanguageList", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PlayFabLocalizationAPI_eventGetLanguageList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::PlayFabLocalizationAPI_eventGetLanguageList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLocalizationAPI::execGetLanguageList)
{
	P_GET_STRUCT(FLocalizationGetLanguageListRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabLocalizationAPI**)Z_Param__Result=UPlayFabLocalizationAPI::GetLanguageList(Z_Param_request,FDelegateOnSuccessGetLanguageList(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabLocalizationAPI Function GetLanguageList

// Begin Class UPlayFabLocalizationAPI Function HelperGetLanguageList
struct Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics
{
	struct PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Localization | Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabLocalizationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabLocalizationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms), &Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationAPI, nullptr, "HelperGetLanguageList", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::PlayFabLocalizationAPI_eventHelperGetLanguageList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLocalizationAPI::execHelperGetLanguageList)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetLanguageList(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabLocalizationAPI Function HelperGetLanguageList

// Begin Class UPlayFabLocalizationAPI
void UPlayFabLocalizationAPI::StaticRegisterNativesUPlayFabLocalizationAPI()
{
	UClass* Class = UPlayFabLocalizationAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLanguageList", &UPlayFabLocalizationAPI::execGetLanguageList },
		{ "HelperGetLanguageList", &UPlayFabLocalizationAPI::execHelperGetLanguageList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabLocalizationAPI);
UClass* Z_Construct_UClass_UPlayFabLocalizationAPI_NoRegister()
{
	return UPlayFabLocalizationAPI::StaticClass();
}
struct Z_Construct_UClass_UPlayFabLocalizationAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabLocalizationAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationAPI.h" },
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
		{ &Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 544770784
		{ &Z_Construct_UDelegateFunction_UPlayFabLocalizationAPI_DelegateOnSuccessGetLanguageList__DelegateSignature, "DelegateOnSuccessGetLanguageList__DelegateSignature" }, // 4230933407
		{ &Z_Construct_UFunction_UPlayFabLocalizationAPI_GetLanguageList, "GetLanguageList" }, // 1325158289
		{ &Z_Construct_UFunction_UPlayFabLocalizationAPI_HelperGetLanguageList, "HelperGetLanguageList" }, // 1902310454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabLocalizationAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabLocalizationAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabLocalizationRequestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayFabResponse_MetaData), NewProp_OnPlayFabResponse_MetaData) }; // 2586469169
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabLocalizationAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallAuthenticationContext_MetaData), NewProp_CallAuthenticationContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabLocalizationAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabLocalizationAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_OnPlayFabResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_CallAuthenticationContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::ClassParams = {
	&UPlayFabLocalizationAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabLocalizationAPI()
{
	if (!Z_Registration_Info_UClass_UPlayFabLocalizationAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabLocalizationAPI.OuterSingleton, Z_Construct_UClass_UPlayFabLocalizationAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabLocalizationAPI.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabLocalizationAPI>()
{
	return UPlayFabLocalizationAPI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabLocalizationAPI);
UPlayFabLocalizationAPI::~UPlayFabLocalizationAPI() {}
// End Class UPlayFabLocalizationAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabLocalizationAPI, UPlayFabLocalizationAPI::StaticClass, TEXT("UPlayFabLocalizationAPI"), &Z_Registration_Info_UClass_UPlayFabLocalizationAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabLocalizationAPI), 365836329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_4092763354(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
