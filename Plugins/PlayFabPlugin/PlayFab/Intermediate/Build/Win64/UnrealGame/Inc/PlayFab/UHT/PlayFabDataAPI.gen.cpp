// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabDataAPI.h"
#include "PlayFab/Classes/PlayFabBaseModel.h"
#include "PlayFab/Classes/PlayFabDataModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabDataAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabDataAPI();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabDataAPI_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Delegate FOnPlayFabDataRequestCompleted
struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics
{
	struct _Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
{
	((_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabDataRequestCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayFabDataRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabDataRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabDataRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayFabDataRequestCompleted

// Begin Delegate FDelegateOnFailurePlayFabError
struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
{
	struct PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(0, nullptr) }; // 1109941606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabDataAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnFailurePlayFabError

// Begin Delegate FDelegateOnSuccessAbortFileUploads
struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics
{
	struct PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms
	{
		FDataAbortFileUploadsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// File\n//////////////////////////////////////////////////////\n// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n File\n\n callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms, result), Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse, METADATA_PARAMS(0, nullptr) }; // 3885273744
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessAbortFileUploads__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabDataAPI::FDelegateOnSuccessAbortFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAbortFileUploads, FDataAbortFileUploadsResponse result, UObject* customData)
{
	struct PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms
	{
		FDataAbortFileUploadsResponse result;
		UObject* customData;
	};
	PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessAbortFileUploads.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessAbortFileUploads

// Begin Delegate FDelegateOnSuccessDeleteFiles
struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics
{
	struct PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms
	{
		FDataDeleteFilesResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms, result), Z_Construct_UScriptStruct_FDataDeleteFilesResponse, METADATA_PARAMS(0, nullptr) }; // 1160852229
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessDeleteFiles__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabDataAPI::FDelegateOnSuccessDeleteFiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteFiles, FDataDeleteFilesResponse result, UObject* customData)
{
	struct PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms
	{
		FDataDeleteFilesResponse result;
		UObject* customData;
	};
	PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessDeleteFiles.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessDeleteFiles

// Begin Delegate FDelegateOnSuccessFinalizeFileUploads
struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics
{
	struct PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms
	{
		FDataFinalizeFileUploadsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms, result), Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse, METADATA_PARAMS(0, nullptr) }; // 4104921823
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessFinalizeFileUploads__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabDataAPI::FDelegateOnSuccessFinalizeFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessFinalizeFileUploads, FDataFinalizeFileUploadsResponse result, UObject* customData)
{
	struct PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms
	{
		FDataFinalizeFileUploadsResponse result;
		UObject* customData;
	};
	PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessFinalizeFileUploads.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessFinalizeFileUploads

// Begin Delegate FDelegateOnSuccessGetFiles
struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics
{
	struct PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms
	{
		FDataGetFilesResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms, result), Z_Construct_UScriptStruct_FDataGetFilesResponse, METADATA_PARAMS(0, nullptr) }; // 3345500513
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessGetFiles__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabDataAPI::FDelegateOnSuccessGetFiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFiles, FDataGetFilesResponse result, UObject* customData)
{
	struct PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms
	{
		FDataGetFilesResponse result;
		UObject* customData;
	};
	PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetFiles.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetFiles

// Begin Delegate FDelegateOnSuccessInitiateFileUploads
struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics
{
	struct PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms
	{
		FDataInitiateFileUploadsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms, result), Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse, METADATA_PARAMS(0, nullptr) }; // 2460767787
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessInitiateFileUploads__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabDataAPI::FDelegateOnSuccessInitiateFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessInitiateFileUploads, FDataInitiateFileUploadsResponse result, UObject* customData)
{
	struct PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms
	{
		FDataInitiateFileUploadsResponse result;
		UObject* customData;
	};
	PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessInitiateFileUploads.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessInitiateFileUploads

// Begin Delegate FDelegateOnSuccessGetObjects
struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics
{
	struct PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms
	{
		FDataGetObjectsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Object\n//////////////////////////////////////////////////////\n// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Object\n\n callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms, result), Z_Construct_UScriptStruct_FDataGetObjectsResponse, METADATA_PARAMS(0, nullptr) }; // 2462402023
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessGetObjects__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabDataAPI::FDelegateOnSuccessGetObjects_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetObjects, FDataGetObjectsResponse result, UObject* customData)
{
	struct PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms
	{
		FDataGetObjectsResponse result;
		UObject* customData;
	};
	PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetObjects.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetObjects

// Begin Delegate FDelegateOnSuccessSetObjects
struct Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics
{
	struct PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms
	{
		FDataSetObjectsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms, result), Z_Construct_UScriptStruct_FDataSetObjectsResponse, METADATA_PARAMS(0, nullptr) }; // 76317692
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DelegateOnSuccessSetObjects__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabDataAPI::FDelegateOnSuccessSetObjects_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetObjects, FDataSetObjectsResponse result, UObject* customData)
{
	struct PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms
	{
		FDataSetObjectsResponse result;
		UObject* customData;
	};
	PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessSetObjects.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessSetObjects

// Begin Class UPlayFabDataAPI Function AbortFileUploads
struct Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics
{
	struct PlayFabDataAPI_eventAbortFileUploads_Parms
	{
		FDataAbortFileUploadsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabDataAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Abort pending file uploads to an entity's profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abort pending file uploads to an entity's profile." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, request), Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest, METADATA_PARAMS(0, nullptr) }; // 2285251543
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3178022845
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3786604602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventAbortFileUploads_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "AbortFileUploads", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PlayFabDataAPI_eventAbortFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::PlayFabDataAPI_eventAbortFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execAbortFileUploads)
{
	P_GET_STRUCT(FDataAbortFileUploadsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::AbortFileUploads(Z_Param_request,FDelegateOnSuccessAbortFileUploads(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function AbortFileUploads

// Begin Class UPlayFabDataAPI Function DeleteFiles
struct Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics
{
	struct PlayFabDataAPI_eventDeleteFiles_Parms
	{
		FDataDeleteFilesRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabDataAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delete files on an entity's profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete files on an entity's profile." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, request), Z_Construct_UScriptStruct_FDataDeleteFilesRequest, METADATA_PARAMS(0, nullptr) }; // 879182786
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4187034142
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3786604602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventDeleteFiles_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "DeleteFiles", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PlayFabDataAPI_eventDeleteFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::PlayFabDataAPI_eventDeleteFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execDeleteFiles)
{
	P_GET_STRUCT(FDataDeleteFilesRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::DeleteFiles(Z_Param_request,FDelegateOnSuccessDeleteFiles(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function DeleteFiles

// Begin Class UPlayFabDataAPI Function FinalizeFileUploads
struct Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics
{
	struct PlayFabDataAPI_eventFinalizeFileUploads_Parms
	{
		FDataFinalizeFileUploadsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabDataAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finalize file uploads to an entity's profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finalize file uploads to an entity's profile." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, request), Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest, METADATA_PARAMS(0, nullptr) }; // 2046699750
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2837742543
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3786604602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventFinalizeFileUploads_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "FinalizeFileUploads", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PlayFabDataAPI_eventFinalizeFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::PlayFabDataAPI_eventFinalizeFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execFinalizeFileUploads)
{
	P_GET_STRUCT(FDataFinalizeFileUploadsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::FinalizeFileUploads(Z_Param_request,FDelegateOnSuccessFinalizeFileUploads(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function FinalizeFileUploads

// Begin Class UPlayFabDataAPI Function GetFiles
struct Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics
{
	struct PlayFabDataAPI_eventGetFiles_Parms
	{
		FDataGetFilesRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabDataAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retrieves file metadata from an entity's profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves file metadata from an entity's profile." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, request), Z_Construct_UScriptStruct_FDataGetFilesRequest, METADATA_PARAMS(0, nullptr) }; // 1447021151
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2546387903
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3786604602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetFiles_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "GetFiles", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PlayFabDataAPI_eventGetFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::PlayFabDataAPI_eventGetFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_GetFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_GetFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execGetFiles)
{
	P_GET_STRUCT(FDataGetFilesRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::GetFiles(Z_Param_request,FDelegateOnSuccessGetFiles(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function GetFiles

// Begin Class UPlayFabDataAPI Function GetObjects
struct Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics
{
	struct PlayFabDataAPI_eventGetObjects_Parms
	{
		FDataGetObjectsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabDataAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retrieves objects from an entity's profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves objects from an entity's profile." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, request), Z_Construct_UScriptStruct_FDataGetObjectsRequest, METADATA_PARAMS(0, nullptr) }; // 1762583076
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3254795062
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3786604602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventGetObjects_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "GetObjects", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PlayFabDataAPI_eventGetObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::PlayFabDataAPI_eventGetObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_GetObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_GetObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execGetObjects)
{
	P_GET_STRUCT(FDataGetObjectsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::GetObjects(Z_Param_request,FDelegateOnSuccessGetObjects(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function GetObjects

// Begin Class UPlayFabDataAPI Function HelperAbortFileUploads
struct Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics
{
	struct PlayFabDataAPI_eventHelperAbortFileUploads_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperAbortFileUploads_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperAbortFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabDataAPI_eventHelperAbortFileUploads_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperAbortFileUploads_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperAbortFileUploads", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PlayFabDataAPI_eventHelperAbortFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::PlayFabDataAPI_eventHelperAbortFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execHelperAbortFileUploads)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperAbortFileUploads(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function HelperAbortFileUploads

// Begin Class UPlayFabDataAPI Function HelperDeleteFiles
struct Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics
{
	struct PlayFabDataAPI_eventHelperDeleteFiles_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperDeleteFiles_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperDeleteFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabDataAPI_eventHelperDeleteFiles_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperDeleteFiles_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperDeleteFiles", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PlayFabDataAPI_eventHelperDeleteFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::PlayFabDataAPI_eventHelperDeleteFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execHelperDeleteFiles)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperDeleteFiles(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function HelperDeleteFiles

// Begin Class UPlayFabDataAPI Function HelperFinalizeFileUploads
struct Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics
{
	struct PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperFinalizeFileUploads", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::PlayFabDataAPI_eventHelperFinalizeFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execHelperFinalizeFileUploads)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperFinalizeFileUploads(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function HelperFinalizeFileUploads

// Begin Class UPlayFabDataAPI Function HelperGetFiles
struct Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics
{
	struct PlayFabDataAPI_eventHelperGetFiles_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperGetFiles_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperGetFiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabDataAPI_eventHelperGetFiles_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperGetFiles_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperGetFiles", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PlayFabDataAPI_eventHelperGetFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::PlayFabDataAPI_eventHelperGetFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execHelperGetFiles)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetFiles(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function HelperGetFiles

// Begin Class UPlayFabDataAPI Function HelperGetObjects
struct Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics
{
	struct PlayFabDataAPI_eventHelperGetObjects_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperGetObjects_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperGetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabDataAPI_eventHelperGetObjects_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperGetObjects_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperGetObjects", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PlayFabDataAPI_eventHelperGetObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::PlayFabDataAPI_eventHelperGetObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execHelperGetObjects)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetObjects(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function HelperGetObjects

// Begin Class UPlayFabDataAPI Function HelperInitiateFileUploads
struct Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics
{
	struct PlayFabDataAPI_eventHelperInitiateFileUploads_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperInitiateFileUploads_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperInitiateFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabDataAPI_eventHelperInitiateFileUploads_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperInitiateFileUploads_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperInitiateFileUploads", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PlayFabDataAPI_eventHelperInitiateFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::PlayFabDataAPI_eventHelperInitiateFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execHelperInitiateFileUploads)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperInitiateFileUploads(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function HelperInitiateFileUploads

// Begin Class UPlayFabDataAPI Function HelperSetObjects
struct Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics
{
	struct PlayFabDataAPI_eventHelperSetObjects_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabDataRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabDataRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperSetObjects_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventHelperSetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabDataAPI_eventHelperSetObjects_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabDataAPI_eventHelperSetObjects_Parms), &Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "HelperSetObjects", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PlayFabDataAPI_eventHelperSetObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::PlayFabDataAPI_eventHelperSetObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execHelperSetObjects)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperSetObjects(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function HelperSetObjects

// Begin Class UPlayFabDataAPI Function InitiateFileUploads
struct Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics
{
	struct PlayFabDataAPI_eventInitiateFileUploads_Parms
	{
		FDataInitiateFileUploadsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabDataAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initiates file uploads to an entity's profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiates file uploads to an entity's profile." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, request), Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest, METADATA_PARAMS(0, nullptr) }; // 2216434630
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3140229216
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3786604602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventInitiateFileUploads_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "InitiateFileUploads", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PlayFabDataAPI_eventInitiateFileUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::PlayFabDataAPI_eventInitiateFileUploads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execInitiateFileUploads)
{
	P_GET_STRUCT(FDataInitiateFileUploadsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::InitiateFileUploads(Z_Param_request,FDelegateOnSuccessInitiateFileUploads(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function InitiateFileUploads

// Begin Class UPlayFabDataAPI Function SetObjects
struct Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics
{
	struct PlayFabDataAPI_eventSetObjects_Parms
	{
		FDataSetObjectsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabDataAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Data | Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets objects on an entity's profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets objects on an entity's profile." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, request), Z_Construct_UScriptStruct_FDataSetObjectsRequest, METADATA_PARAMS(0, nullptr) }; // 3630474167
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2065462426
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3786604602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabDataAPI_eventSetObjects_Parms, ReturnValue), Z_Construct_UClass_UPlayFabDataAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataAPI, nullptr, "SetObjects", nullptr, nullptr, Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PlayFabDataAPI_eventSetObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::PlayFabDataAPI_eventSetObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabDataAPI_SetObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataAPI_SetObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabDataAPI::execSetObjects)
{
	P_GET_STRUCT(FDataSetObjectsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabDataAPI**)Z_Param__Result=UPlayFabDataAPI::SetObjects(Z_Param_request,FDelegateOnSuccessSetObjects(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabDataAPI Function SetObjects

// Begin Class UPlayFabDataAPI
void UPlayFabDataAPI::StaticRegisterNativesUPlayFabDataAPI()
{
	UClass* Class = UPlayFabDataAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AbortFileUploads", &UPlayFabDataAPI::execAbortFileUploads },
		{ "DeleteFiles", &UPlayFabDataAPI::execDeleteFiles },
		{ "FinalizeFileUploads", &UPlayFabDataAPI::execFinalizeFileUploads },
		{ "GetFiles", &UPlayFabDataAPI::execGetFiles },
		{ "GetObjects", &UPlayFabDataAPI::execGetObjects },
		{ "HelperAbortFileUploads", &UPlayFabDataAPI::execHelperAbortFileUploads },
		{ "HelperDeleteFiles", &UPlayFabDataAPI::execHelperDeleteFiles },
		{ "HelperFinalizeFileUploads", &UPlayFabDataAPI::execHelperFinalizeFileUploads },
		{ "HelperGetFiles", &UPlayFabDataAPI::execHelperGetFiles },
		{ "HelperGetObjects", &UPlayFabDataAPI::execHelperGetObjects },
		{ "HelperInitiateFileUploads", &UPlayFabDataAPI::execHelperInitiateFileUploads },
		{ "HelperSetObjects", &UPlayFabDataAPI::execHelperSetObjects },
		{ "InitiateFileUploads", &UPlayFabDataAPI::execInitiateFileUploads },
		{ "SetObjects", &UPlayFabDataAPI::execSetObjects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabDataAPI);
UClass* Z_Construct_UClass_UPlayFabDataAPI_NoRegister()
{
	return UPlayFabDataAPI::StaticClass();
}
struct Z_Construct_UClass_UPlayFabDataAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabDataAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataAPI.h" },
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
		{ &Z_Construct_UFunction_UPlayFabDataAPI_AbortFileUploads, "AbortFileUploads" }, // 1319932453
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 3786604602
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessAbortFileUploads__DelegateSignature, "DelegateOnSuccessAbortFileUploads__DelegateSignature" }, // 3178022845
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessDeleteFiles__DelegateSignature, "DelegateOnSuccessDeleteFiles__DelegateSignature" }, // 4187034142
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessFinalizeFileUploads__DelegateSignature, "DelegateOnSuccessFinalizeFileUploads__DelegateSignature" }, // 2837742543
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetFiles__DelegateSignature, "DelegateOnSuccessGetFiles__DelegateSignature" }, // 2546387903
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessGetObjects__DelegateSignature, "DelegateOnSuccessGetObjects__DelegateSignature" }, // 3254795062
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessInitiateFileUploads__DelegateSignature, "DelegateOnSuccessInitiateFileUploads__DelegateSignature" }, // 3140229216
		{ &Z_Construct_UDelegateFunction_UPlayFabDataAPI_DelegateOnSuccessSetObjects__DelegateSignature, "DelegateOnSuccessSetObjects__DelegateSignature" }, // 2065462426
		{ &Z_Construct_UFunction_UPlayFabDataAPI_DeleteFiles, "DeleteFiles" }, // 3120910800
		{ &Z_Construct_UFunction_UPlayFabDataAPI_FinalizeFileUploads, "FinalizeFileUploads" }, // 2279701286
		{ &Z_Construct_UFunction_UPlayFabDataAPI_GetFiles, "GetFiles" }, // 4017347725
		{ &Z_Construct_UFunction_UPlayFabDataAPI_GetObjects, "GetObjects" }, // 3563414985
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperAbortFileUploads, "HelperAbortFileUploads" }, // 1268755222
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperDeleteFiles, "HelperDeleteFiles" }, // 1410247562
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperFinalizeFileUploads, "HelperFinalizeFileUploads" }, // 878412734
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperGetFiles, "HelperGetFiles" }, // 2556326684
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperGetObjects, "HelperGetObjects" }, // 3570143673
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperInitiateFileUploads, "HelperInitiateFileUploads" }, // 275323132
		{ &Z_Construct_UFunction_UPlayFabDataAPI_HelperSetObjects, "HelperSetObjects" }, // 1130318033
		{ &Z_Construct_UFunction_UPlayFabDataAPI_InitiateFileUploads, "InitiateFileUploads" }, // 3261518536
		{ &Z_Construct_UFunction_UPlayFabDataAPI_SetObjects, "SetObjects" }, // 2159075026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabDataAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabDataAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabDataRequestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayFabResponse_MetaData), NewProp_OnPlayFabResponse_MetaData) }; // 931651049
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabDataAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallAuthenticationContext_MetaData), NewProp_CallAuthenticationContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabDataAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabDataAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabDataAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_OnPlayFabResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_CallAuthenticationContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabDataAPI_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayFabDataAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabDataAPI_Statics::ClassParams = {
	&UPlayFabDataAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayFabDataAPI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabDataAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabDataAPI()
{
	if (!Z_Registration_Info_UClass_UPlayFabDataAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabDataAPI.OuterSingleton, Z_Construct_UClass_UPlayFabDataAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabDataAPI.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabDataAPI>()
{
	return UPlayFabDataAPI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabDataAPI);
UPlayFabDataAPI::~UPlayFabDataAPI() {}
// End Class UPlayFabDataAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabDataAPI, UPlayFabDataAPI::StaticClass, TEXT("UPlayFabDataAPI"), &Z_Registration_Info_UClass_UPlayFabDataAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabDataAPI), 2485613150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_1168723639(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
