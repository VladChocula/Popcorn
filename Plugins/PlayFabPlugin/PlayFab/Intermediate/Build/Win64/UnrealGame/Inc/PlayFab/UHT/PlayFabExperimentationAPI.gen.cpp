// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabExperimentationAPI.h"
#include "PlayFab/Classes/PlayFabBaseModel.h"
#include "PlayFab/Classes/PlayFabExperimentationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabExperimentationAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabExperimentationAPI();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Delegate FOnPlayFabExperimentationRequestCompleted
struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics
{
	struct _Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
{
	((_Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabExperimentationRequestCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayFabExperimentationRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabExperimentationRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabExperimentationRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayFabExperimentationRequestCompleted

// Begin Delegate FDelegateOnFailurePlayFabError
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(0, nullptr) }; // 1109941606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnFailurePlayFabError

// Begin Delegate FDelegateOnSuccessCreateExclusionGroup
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms
	{
		FExperimentationCreateExclusionGroupResult result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Experimentation\n//////////////////////////////////////////////////////\n// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Experimentation\n\n callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms, result), Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult, METADATA_PARAMS(0, nullptr) }; // 553406869
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessCreateExclusionGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessCreateExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateExclusionGroup, FExperimentationCreateExclusionGroupResult result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms
	{
		FExperimentationCreateExclusionGroupResult result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessCreateExclusionGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessCreateExclusionGroup

// Begin Delegate FDelegateOnSuccessCreateExperiment
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms
	{
		FExperimentationCreateExperimentResult result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms, result), Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult, METADATA_PARAMS(0, nullptr) }; // 304271111
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessCreateExperiment__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessCreateExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateExperiment, FExperimentationCreateExperimentResult result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms
	{
		FExperimentationCreateExperimentResult result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessCreateExperiment.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessCreateExperiment

// Begin Delegate FDelegateOnSuccessDeleteExclusionGroup
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms, result), Z_Construct_UScriptStruct_FExperimentationEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 3338967991
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessDeleteExclusionGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessDeleteExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteExclusionGroup, FExperimentationEmptyResponse result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessDeleteExclusionGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessDeleteExclusionGroup

// Begin Delegate FDelegateOnSuccessDeleteExperiment
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms, result), Z_Construct_UScriptStruct_FExperimentationEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 3338967991
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessDeleteExperiment__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessDeleteExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteExperiment, FExperimentationEmptyResponse result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessDeleteExperiment.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessDeleteExperiment

// Begin Delegate FDelegateOnSuccessGetExclusionGroups
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms
	{
		FExperimentationGetExclusionGroupsResult result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms, result), Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult, METADATA_PARAMS(0, nullptr) }; // 4202482301
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessGetExclusionGroups__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessGetExclusionGroups_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExclusionGroups, FExperimentationGetExclusionGroupsResult result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms
	{
		FExperimentationGetExclusionGroupsResult result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetExclusionGroups.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetExclusionGroups

// Begin Delegate FDelegateOnSuccessGetExclusionGroupTraffic
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms
	{
		FExperimentationGetExclusionGroupTrafficResult result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms, result), Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult, METADATA_PARAMS(0, nullptr) }; // 3155578976
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessGetExclusionGroupTraffic_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExclusionGroupTraffic, FExperimentationGetExclusionGroupTrafficResult result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms
	{
		FExperimentationGetExclusionGroupTrafficResult result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetExclusionGroupTraffic.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetExclusionGroupTraffic

// Begin Delegate FDelegateOnSuccessGetExperiments
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms
	{
		FExperimentationGetExperimentsResult result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms, result), Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult, METADATA_PARAMS(0, nullptr) }; // 956563147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessGetExperiments__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessGetExperiments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExperiments, FExperimentationGetExperimentsResult result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms
	{
		FExperimentationGetExperimentsResult result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetExperiments.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetExperiments

// Begin Delegate FDelegateOnSuccessGetLatestScorecard
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms
	{
		FExperimentationGetLatestScorecardResult result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms, result), Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult, METADATA_PARAMS(0, nullptr) }; // 2087434949
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessGetLatestScorecard__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessGetLatestScorecard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLatestScorecard, FExperimentationGetLatestScorecardResult result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms
	{
		FExperimentationGetLatestScorecardResult result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetLatestScorecard.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetLatestScorecard

// Begin Delegate FDelegateOnSuccessGetTreatmentAssignment
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms
	{
		FExperimentationGetTreatmentAssignmentResult result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms, result), Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult, METADATA_PARAMS(0, nullptr) }; // 962966664
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessGetTreatmentAssignment__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessGetTreatmentAssignment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTreatmentAssignment, FExperimentationGetTreatmentAssignmentResult result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms
	{
		FExperimentationGetTreatmentAssignmentResult result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetTreatmentAssignment.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetTreatmentAssignment

// Begin Delegate FDelegateOnSuccessStartExperiment
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms, result), Z_Construct_UScriptStruct_FExperimentationEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 3338967991
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessStartExperiment__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessStartExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStartExperiment, FExperimentationEmptyResponse result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessStartExperiment.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessStartExperiment

// Begin Delegate FDelegateOnSuccessStopExperiment
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms, result), Z_Construct_UScriptStruct_FExperimentationEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 3338967991
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessStopExperiment__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessStopExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStopExperiment, FExperimentationEmptyResponse result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessStopExperiment.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessStopExperiment

// Begin Delegate FDelegateOnSuccessUpdateExclusionGroup
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms, result), Z_Construct_UScriptStruct_FExperimentationEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 3338967991
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessUpdateExclusionGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessUpdateExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateExclusionGroup, FExperimentationEmptyResponse result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessUpdateExclusionGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessUpdateExclusionGroup

// Begin Delegate FDelegateOnSuccessUpdateExperiment
struct Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms, result), Z_Construct_UScriptStruct_FExperimentationEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 3338967991
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DelegateOnSuccessUpdateExperiment__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabExperimentationAPI::FDelegateOnSuccessUpdateExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateExperiment, FExperimentationEmptyResponse result, UObject* customData)
{
	struct PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms
	{
		FExperimentationEmptyResponse result;
		UObject* customData;
	};
	PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessUpdateExperiment.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessUpdateExperiment

// Begin Class UPlayFabExperimentationAPI Function CreateExclusionGroup
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics
{
	struct PlayFabExperimentationAPI_eventCreateExclusionGroup_Parms
	{
		FExperimentationCreateExclusionGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a new experiment exclusion group for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new experiment exclusion group for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExclusionGroup_Parms, request), Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest, METADATA_PARAMS(0, nullptr) }; // 3425371209
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExclusionGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4291832893
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExclusionGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExclusionGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "CreateExclusionGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::PlayFabExperimentationAPI_eventCreateExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::PlayFabExperimentationAPI_eventCreateExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execCreateExclusionGroup)
{
	P_GET_STRUCT(FExperimentationCreateExclusionGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::CreateExclusionGroup(Z_Param_request,FDelegateOnSuccessCreateExclusionGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function CreateExclusionGroup

// Begin Class UPlayFabExperimentationAPI Function CreateExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventCreateExperiment_Parms
	{
		FExperimentationCreateExperimentRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a new experiment for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new experiment for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExperiment_Parms, request), Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest, METADATA_PARAMS(0, nullptr) }; // 450176534
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExperiment_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3202492736
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExperiment_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventCreateExperiment_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "CreateExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::PlayFabExperimentationAPI_eventCreateExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::PlayFabExperimentationAPI_eventCreateExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execCreateExperiment)
{
	P_GET_STRUCT(FExperimentationCreateExperimentRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::CreateExperiment(Z_Param_request,FDelegateOnSuccessCreateExperiment(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function CreateExperiment

// Begin Class UPlayFabExperimentationAPI Function DeleteExclusionGroup
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics
{
	struct PlayFabExperimentationAPI_eventDeleteExclusionGroup_Parms
	{
		FExperimentationDeleteExclusionGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deletes an existing exclusion group for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes an existing exclusion group for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExclusionGroup_Parms, request), Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest, METADATA_PARAMS(0, nullptr) }; // 2056899300
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExclusionGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1525349892
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExclusionGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExclusionGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DeleteExclusionGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::PlayFabExperimentationAPI_eventDeleteExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::PlayFabExperimentationAPI_eventDeleteExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execDeleteExclusionGroup)
{
	P_GET_STRUCT(FExperimentationDeleteExclusionGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::DeleteExclusionGroup(Z_Param_request,FDelegateOnSuccessDeleteExclusionGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function DeleteExclusionGroup

// Begin Class UPlayFabExperimentationAPI Function DeleteExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventDeleteExperiment_Parms
	{
		FExperimentationDeleteExperimentRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deletes an existing experiment for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes an existing experiment for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExperiment_Parms, request), Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest, METADATA_PARAMS(0, nullptr) }; // 2880162404
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExperiment_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3400821887
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExperiment_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventDeleteExperiment_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "DeleteExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::PlayFabExperimentationAPI_eventDeleteExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::PlayFabExperimentationAPI_eventDeleteExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execDeleteExperiment)
{
	P_GET_STRUCT(FExperimentationDeleteExperimentRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::DeleteExperiment(Z_Param_request,FDelegateOnSuccessDeleteExperiment(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function DeleteExperiment

// Begin Class UPlayFabExperimentationAPI Function GetExclusionGroups
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics
{
	struct PlayFabExperimentationAPI_eventGetExclusionGroups_Parms
	{
		FExperimentationGetExclusionGroupsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the details of all exclusion groups for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the details of all exclusion groups for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroups_Parms, request), Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest, METADATA_PARAMS(0, nullptr) }; // 3318877382
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroups_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4223706532
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroups_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroups_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroups_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "GetExclusionGroups", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::PlayFabExperimentationAPI_eventGetExclusionGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::PlayFabExperimentationAPI_eventGetExclusionGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execGetExclusionGroups)
{
	P_GET_STRUCT(FExperimentationGetExclusionGroupsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::GetExclusionGroups(Z_Param_request,FDelegateOnSuccessGetExclusionGroups(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function GetExclusionGroups

// Begin Class UPlayFabExperimentationAPI Function GetExclusionGroupTraffic
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics
{
	struct PlayFabExperimentationAPI_eventGetExclusionGroupTraffic_Parms
	{
		FExperimentationGetExclusionGroupTrafficRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the details of all exclusion groups for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the details of all exclusion groups for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroupTraffic_Parms, request), Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest, METADATA_PARAMS(0, nullptr) }; // 3799662381
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroupTraffic_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2831114610
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroupTraffic_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroupTraffic_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExclusionGroupTraffic_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "GetExclusionGroupTraffic", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::PlayFabExperimentationAPI_eventGetExclusionGroupTraffic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::PlayFabExperimentationAPI_eventGetExclusionGroupTraffic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execGetExclusionGroupTraffic)
{
	P_GET_STRUCT(FExperimentationGetExclusionGroupTrafficRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::GetExclusionGroupTraffic(Z_Param_request,FDelegateOnSuccessGetExclusionGroupTraffic(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function GetExclusionGroupTraffic

// Begin Class UPlayFabExperimentationAPI Function GetExperiments
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics
{
	struct PlayFabExperimentationAPI_eventGetExperiments_Parms
	{
		FExperimentationGetExperimentsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the details of all experiments for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the details of all experiments for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExperiments_Parms, request), Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest, METADATA_PARAMS(0, nullptr) }; // 3236837530
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExperiments_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4217583034
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExperiments_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExperiments_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetExperiments_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "GetExperiments", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::PlayFabExperimentationAPI_eventGetExperiments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::PlayFabExperimentationAPI_eventGetExperiments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execGetExperiments)
{
	P_GET_STRUCT(FExperimentationGetExperimentsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::GetExperiments(Z_Param_request,FDelegateOnSuccessGetExperiments(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function GetExperiments

// Begin Class UPlayFabExperimentationAPI Function GetLatestScorecard
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics
{
	struct PlayFabExperimentationAPI_eventGetLatestScorecard_Parms
	{
		FExperimentationGetLatestScorecardRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the latest scorecard of the experiment for the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the latest scorecard of the experiment for the title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetLatestScorecard_Parms, request), Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest, METADATA_PARAMS(0, nullptr) }; // 3702488117
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetLatestScorecard_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2597098234
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetLatestScorecard_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetLatestScorecard_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetLatestScorecard_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "GetLatestScorecard", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::PlayFabExperimentationAPI_eventGetLatestScorecard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::PlayFabExperimentationAPI_eventGetLatestScorecard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execGetLatestScorecard)
{
	P_GET_STRUCT(FExperimentationGetLatestScorecardRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::GetLatestScorecard(Z_Param_request,FDelegateOnSuccessGetLatestScorecard(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function GetLatestScorecard

// Begin Class UPlayFabExperimentationAPI Function GetTreatmentAssignment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics
{
	struct PlayFabExperimentationAPI_eventGetTreatmentAssignment_Parms
	{
		FExperimentationGetTreatmentAssignmentRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the treatment assignments for a player for every running experiment in the title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the treatment assignments for a player for every running experiment in the title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetTreatmentAssignment_Parms, request), Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest, METADATA_PARAMS(0, nullptr) }; // 3803523770
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetTreatmentAssignment_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2423501014
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetTreatmentAssignment_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetTreatmentAssignment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventGetTreatmentAssignment_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "GetTreatmentAssignment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::PlayFabExperimentationAPI_eventGetTreatmentAssignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::PlayFabExperimentationAPI_eventGetTreatmentAssignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execGetTreatmentAssignment)
{
	P_GET_STRUCT(FExperimentationGetTreatmentAssignmentRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::GetTreatmentAssignment(Z_Param_request,FDelegateOnSuccessGetTreatmentAssignment(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function GetTreatmentAssignment

// Begin Class UPlayFabExperimentationAPI Function HelperCreateExclusionGroup
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics
{
	struct PlayFabExperimentationAPI_eventHelperCreateExclusionGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperCreateExclusionGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperCreateExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperCreateExclusionGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperCreateExclusionGroup_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperCreateExclusionGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::PlayFabExperimentationAPI_eventHelperCreateExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::PlayFabExperimentationAPI_eventHelperCreateExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperCreateExclusionGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperCreateExclusionGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperCreateExclusionGroup

// Begin Class UPlayFabExperimentationAPI Function HelperCreateExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventHelperCreateExperiment_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperCreateExperiment_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperCreateExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperCreateExperiment_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperCreateExperiment_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperCreateExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::PlayFabExperimentationAPI_eventHelperCreateExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::PlayFabExperimentationAPI_eventHelperCreateExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperCreateExperiment)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperCreateExperiment(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperCreateExperiment

// Begin Class UPlayFabExperimentationAPI Function HelperDeleteExclusionGroup
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics
{
	struct PlayFabExperimentationAPI_eventHelperDeleteExclusionGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperDeleteExclusionGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperDeleteExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperDeleteExclusionGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperDeleteExclusionGroup_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperDeleteExclusionGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::PlayFabExperimentationAPI_eventHelperDeleteExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::PlayFabExperimentationAPI_eventHelperDeleteExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperDeleteExclusionGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperDeleteExclusionGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperDeleteExclusionGroup

// Begin Class UPlayFabExperimentationAPI Function HelperDeleteExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventHelperDeleteExperiment_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperDeleteExperiment_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperDeleteExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperDeleteExperiment_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperDeleteExperiment_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperDeleteExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::PlayFabExperimentationAPI_eventHelperDeleteExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::PlayFabExperimentationAPI_eventHelperDeleteExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperDeleteExperiment)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperDeleteExperiment(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperDeleteExperiment

// Begin Class UPlayFabExperimentationAPI Function HelperGetExclusionGroups
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics
{
	struct PlayFabExperimentationAPI_eventHelperGetExclusionGroups_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetExclusionGroups_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetExclusionGroups_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperGetExclusionGroups_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperGetExclusionGroups_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperGetExclusionGroups", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::PlayFabExperimentationAPI_eventHelperGetExclusionGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::PlayFabExperimentationAPI_eventHelperGetExclusionGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperGetExclusionGroups)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetExclusionGroups(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperGetExclusionGroups

// Begin Class UPlayFabExperimentationAPI Function HelperGetExclusionGroupTraffic
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics
{
	struct PlayFabExperimentationAPI_eventHelperGetExclusionGroupTraffic_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetExclusionGroupTraffic_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetExclusionGroupTraffic_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperGetExclusionGroupTraffic_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperGetExclusionGroupTraffic_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperGetExclusionGroupTraffic", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::PlayFabExperimentationAPI_eventHelperGetExclusionGroupTraffic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::PlayFabExperimentationAPI_eventHelperGetExclusionGroupTraffic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperGetExclusionGroupTraffic)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetExclusionGroupTraffic(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperGetExclusionGroupTraffic

// Begin Class UPlayFabExperimentationAPI Function HelperGetExperiments
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics
{
	struct PlayFabExperimentationAPI_eventHelperGetExperiments_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetExperiments_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetExperiments_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperGetExperiments_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperGetExperiments_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperGetExperiments", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::PlayFabExperimentationAPI_eventHelperGetExperiments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::PlayFabExperimentationAPI_eventHelperGetExperiments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperGetExperiments)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetExperiments(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperGetExperiments

// Begin Class UPlayFabExperimentationAPI Function HelperGetLatestScorecard
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics
{
	struct PlayFabExperimentationAPI_eventHelperGetLatestScorecard_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetLatestScorecard_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetLatestScorecard_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperGetLatestScorecard_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperGetLatestScorecard_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperGetLatestScorecard", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::PlayFabExperimentationAPI_eventHelperGetLatestScorecard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::PlayFabExperimentationAPI_eventHelperGetLatestScorecard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperGetLatestScorecard)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetLatestScorecard(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperGetLatestScorecard

// Begin Class UPlayFabExperimentationAPI Function HelperGetTreatmentAssignment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics
{
	struct PlayFabExperimentationAPI_eventHelperGetTreatmentAssignment_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetTreatmentAssignment_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperGetTreatmentAssignment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperGetTreatmentAssignment_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperGetTreatmentAssignment_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperGetTreatmentAssignment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::PlayFabExperimentationAPI_eventHelperGetTreatmentAssignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::PlayFabExperimentationAPI_eventHelperGetTreatmentAssignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperGetTreatmentAssignment)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetTreatmentAssignment(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperGetTreatmentAssignment

// Begin Class UPlayFabExperimentationAPI Function HelperStartExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventHelperStartExperiment_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperStartExperiment_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperStartExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperStartExperiment_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperStartExperiment_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperStartExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::PlayFabExperimentationAPI_eventHelperStartExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::PlayFabExperimentationAPI_eventHelperStartExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperStartExperiment)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperStartExperiment(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperStartExperiment

// Begin Class UPlayFabExperimentationAPI Function HelperStopExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventHelperStopExperiment_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperStopExperiment_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperStopExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperStopExperiment_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperStopExperiment_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperStopExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::PlayFabExperimentationAPI_eventHelperStopExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::PlayFabExperimentationAPI_eventHelperStopExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperStopExperiment)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperStopExperiment(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperStopExperiment

// Begin Class UPlayFabExperimentationAPI Function HelperUpdateExclusionGroup
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics
{
	struct PlayFabExperimentationAPI_eventHelperUpdateExclusionGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperUpdateExclusionGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperUpdateExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperUpdateExclusionGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperUpdateExclusionGroup_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperUpdateExclusionGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::PlayFabExperimentationAPI_eventHelperUpdateExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::PlayFabExperimentationAPI_eventHelperUpdateExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperUpdateExclusionGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperUpdateExclusionGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperUpdateExclusionGroup

// Begin Class UPlayFabExperimentationAPI Function HelperUpdateExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventHelperUpdateExperiment_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabExperimentationRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabExperimentationRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperUpdateExperiment_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventHelperUpdateExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabExperimentationAPI_eventHelperUpdateExperiment_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabExperimentationAPI_eventHelperUpdateExperiment_Parms), &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "HelperUpdateExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::PlayFabExperimentationAPI_eventHelperUpdateExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::PlayFabExperimentationAPI_eventHelperUpdateExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execHelperUpdateExperiment)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperUpdateExperiment(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function HelperUpdateExperiment

// Begin Class UPlayFabExperimentationAPI Function StartExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventStartExperiment_Parms
	{
		FExperimentationStartExperimentRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts an existing experiment for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts an existing experiment for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStartExperiment_Parms, request), Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest, METADATA_PARAMS(0, nullptr) }; // 3641060968
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStartExperiment_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2433992983
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStartExperiment_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStartExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStartExperiment_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "StartExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::PlayFabExperimentationAPI_eventStartExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::PlayFabExperimentationAPI_eventStartExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execStartExperiment)
{
	P_GET_STRUCT(FExperimentationStartExperimentRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::StartExperiment(Z_Param_request,FDelegateOnSuccessStartExperiment(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function StartExperiment

// Begin Class UPlayFabExperimentationAPI Function StopExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventStopExperiment_Parms
	{
		FExperimentationStopExperimentRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops an existing experiment for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops an existing experiment for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStopExperiment_Parms, request), Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest, METADATA_PARAMS(0, nullptr) }; // 73019536
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStopExperiment_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2760425397
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStopExperiment_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStopExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventStopExperiment_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "StopExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::PlayFabExperimentationAPI_eventStopExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::PlayFabExperimentationAPI_eventStopExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execStopExperiment)
{
	P_GET_STRUCT(FExperimentationStopExperimentRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::StopExperiment(Z_Param_request,FDelegateOnSuccessStopExperiment(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function StopExperiment

// Begin Class UPlayFabExperimentationAPI Function UpdateExclusionGroup
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics
{
	struct PlayFabExperimentationAPI_eventUpdateExclusionGroup_Parms
	{
		FExperimentationUpdateExclusionGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates an existing exclusion group for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an existing exclusion group for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExclusionGroup_Parms, request), Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest, METADATA_PARAMS(0, nullptr) }; // 475288009
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExclusionGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2328244389
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExclusionGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExclusionGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExclusionGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "UpdateExclusionGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::PlayFabExperimentationAPI_eventUpdateExclusionGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::PlayFabExperimentationAPI_eventUpdateExclusionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execUpdateExclusionGroup)
{
	P_GET_STRUCT(FExperimentationUpdateExclusionGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::UpdateExclusionGroup(Z_Param_request,FDelegateOnSuccessUpdateExclusionGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function UpdateExclusionGroup

// Begin Class UPlayFabExperimentationAPI Function UpdateExperiment
struct Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics
{
	struct PlayFabExperimentationAPI_eventUpdateExperiment_Parms
	{
		FExperimentationUpdateExperimentRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabExperimentationAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Experimentation | Experimentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates an existing experiment for a title. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an existing experiment for a title." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExperiment_Parms, request), Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest, METADATA_PARAMS(0, nullptr) }; // 323030787
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExperiment_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2668148053
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExperiment_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1485953104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExperiment_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabExperimentationAPI_eventUpdateExperiment_Parms, ReturnValue), Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationAPI, nullptr, "UpdateExperiment", nullptr, nullptr, Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::PlayFabExperimentationAPI_eventUpdateExperiment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::PlayFabExperimentationAPI_eventUpdateExperiment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabExperimentationAPI::execUpdateExperiment)
{
	P_GET_STRUCT(FExperimentationUpdateExperimentRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabExperimentationAPI**)Z_Param__Result=UPlayFabExperimentationAPI::UpdateExperiment(Z_Param_request,FDelegateOnSuccessUpdateExperiment(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabExperimentationAPI Function UpdateExperiment

// Begin Class UPlayFabExperimentationAPI
void UPlayFabExperimentationAPI::StaticRegisterNativesUPlayFabExperimentationAPI()
{
	UClass* Class = UPlayFabExperimentationAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateExclusionGroup", &UPlayFabExperimentationAPI::execCreateExclusionGroup },
		{ "CreateExperiment", &UPlayFabExperimentationAPI::execCreateExperiment },
		{ "DeleteExclusionGroup", &UPlayFabExperimentationAPI::execDeleteExclusionGroup },
		{ "DeleteExperiment", &UPlayFabExperimentationAPI::execDeleteExperiment },
		{ "GetExclusionGroups", &UPlayFabExperimentationAPI::execGetExclusionGroups },
		{ "GetExclusionGroupTraffic", &UPlayFabExperimentationAPI::execGetExclusionGroupTraffic },
		{ "GetExperiments", &UPlayFabExperimentationAPI::execGetExperiments },
		{ "GetLatestScorecard", &UPlayFabExperimentationAPI::execGetLatestScorecard },
		{ "GetTreatmentAssignment", &UPlayFabExperimentationAPI::execGetTreatmentAssignment },
		{ "HelperCreateExclusionGroup", &UPlayFabExperimentationAPI::execHelperCreateExclusionGroup },
		{ "HelperCreateExperiment", &UPlayFabExperimentationAPI::execHelperCreateExperiment },
		{ "HelperDeleteExclusionGroup", &UPlayFabExperimentationAPI::execHelperDeleteExclusionGroup },
		{ "HelperDeleteExperiment", &UPlayFabExperimentationAPI::execHelperDeleteExperiment },
		{ "HelperGetExclusionGroups", &UPlayFabExperimentationAPI::execHelperGetExclusionGroups },
		{ "HelperGetExclusionGroupTraffic", &UPlayFabExperimentationAPI::execHelperGetExclusionGroupTraffic },
		{ "HelperGetExperiments", &UPlayFabExperimentationAPI::execHelperGetExperiments },
		{ "HelperGetLatestScorecard", &UPlayFabExperimentationAPI::execHelperGetLatestScorecard },
		{ "HelperGetTreatmentAssignment", &UPlayFabExperimentationAPI::execHelperGetTreatmentAssignment },
		{ "HelperStartExperiment", &UPlayFabExperimentationAPI::execHelperStartExperiment },
		{ "HelperStopExperiment", &UPlayFabExperimentationAPI::execHelperStopExperiment },
		{ "HelperUpdateExclusionGroup", &UPlayFabExperimentationAPI::execHelperUpdateExclusionGroup },
		{ "HelperUpdateExperiment", &UPlayFabExperimentationAPI::execHelperUpdateExperiment },
		{ "StartExperiment", &UPlayFabExperimentationAPI::execStartExperiment },
		{ "StopExperiment", &UPlayFabExperimentationAPI::execStopExperiment },
		{ "UpdateExclusionGroup", &UPlayFabExperimentationAPI::execUpdateExclusionGroup },
		{ "UpdateExperiment", &UPlayFabExperimentationAPI::execUpdateExperiment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabExperimentationAPI);
UClass* Z_Construct_UClass_UPlayFabExperimentationAPI_NoRegister()
{
	return UPlayFabExperimentationAPI::StaticClass();
}
struct Z_Construct_UClass_UPlayFabExperimentationAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabExperimentationAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationAPI.h" },
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
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExclusionGroup, "CreateExclusionGroup" }, // 1323747959
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_CreateExperiment, "CreateExperiment" }, // 2977588840
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 1485953104
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExclusionGroup__DelegateSignature, "DelegateOnSuccessCreateExclusionGroup__DelegateSignature" }, // 4291832893
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessCreateExperiment__DelegateSignature, "DelegateOnSuccessCreateExperiment__DelegateSignature" }, // 3202492736
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExclusionGroup__DelegateSignature, "DelegateOnSuccessDeleteExclusionGroup__DelegateSignature" }, // 1525349892
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessDeleteExperiment__DelegateSignature, "DelegateOnSuccessDeleteExperiment__DelegateSignature" }, // 3400821887
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroups__DelegateSignature, "DelegateOnSuccessGetExclusionGroups__DelegateSignature" }, // 4223706532
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature, "DelegateOnSuccessGetExclusionGroupTraffic__DelegateSignature" }, // 2831114610
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetExperiments__DelegateSignature, "DelegateOnSuccessGetExperiments__DelegateSignature" }, // 4217583034
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetLatestScorecard__DelegateSignature, "DelegateOnSuccessGetLatestScorecard__DelegateSignature" }, // 2597098234
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessGetTreatmentAssignment__DelegateSignature, "DelegateOnSuccessGetTreatmentAssignment__DelegateSignature" }, // 2423501014
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStartExperiment__DelegateSignature, "DelegateOnSuccessStartExperiment__DelegateSignature" }, // 2433992983
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessStopExperiment__DelegateSignature, "DelegateOnSuccessStopExperiment__DelegateSignature" }, // 2760425397
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExclusionGroup__DelegateSignature, "DelegateOnSuccessUpdateExclusionGroup__DelegateSignature" }, // 2328244389
		{ &Z_Construct_UDelegateFunction_UPlayFabExperimentationAPI_DelegateOnSuccessUpdateExperiment__DelegateSignature, "DelegateOnSuccessUpdateExperiment__DelegateSignature" }, // 2668148053
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExclusionGroup, "DeleteExclusionGroup" }, // 2786137493
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_DeleteExperiment, "DeleteExperiment" }, // 855817297
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroups, "GetExclusionGroups" }, // 3055179334
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExclusionGroupTraffic, "GetExclusionGroupTraffic" }, // 1551825473
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_GetExperiments, "GetExperiments" }, // 3433570248
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_GetLatestScorecard, "GetLatestScorecard" }, // 4046687766
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_GetTreatmentAssignment, "GetTreatmentAssignment" }, // 3063109043
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExclusionGroup, "HelperCreateExclusionGroup" }, // 1361500157
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperCreateExperiment, "HelperCreateExperiment" }, // 4239586346
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExclusionGroup, "HelperDeleteExclusionGroup" }, // 2860985500
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperDeleteExperiment, "HelperDeleteExperiment" }, // 3977971677
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroups, "HelperGetExclusionGroups" }, // 1477913783
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExclusionGroupTraffic, "HelperGetExclusionGroupTraffic" }, // 602705210
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetExperiments, "HelperGetExperiments" }, // 2557191544
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetLatestScorecard, "HelperGetLatestScorecard" }, // 1733364146
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperGetTreatmentAssignment, "HelperGetTreatmentAssignment" }, // 595215158
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStartExperiment, "HelperStartExperiment" }, // 3853702477
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperStopExperiment, "HelperStopExperiment" }, // 2723085132
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExclusionGroup, "HelperUpdateExclusionGroup" }, // 3658711226
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_HelperUpdateExperiment, "HelperUpdateExperiment" }, // 2515014325
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_StartExperiment, "StartExperiment" }, // 2653889756
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_StopExperiment, "StopExperiment" }, // 998726808
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExclusionGroup, "UpdateExclusionGroup" }, // 2761700572
		{ &Z_Construct_UFunction_UPlayFabExperimentationAPI_UpdateExperiment, "UpdateExperiment" }, // 3848426589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabExperimentationAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabExperimentationAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabExperimentationRequestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayFabResponse_MetaData), NewProp_OnPlayFabResponse_MetaData) }; // 597647987
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabExperimentationAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallAuthenticationContext_MetaData), NewProp_CallAuthenticationContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabExperimentationAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabExperimentationAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::NewProp_OnPlayFabResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::NewProp_CallAuthenticationContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::ClassParams = {
	&UPlayFabExperimentationAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabExperimentationAPI()
{
	if (!Z_Registration_Info_UClass_UPlayFabExperimentationAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabExperimentationAPI.OuterSingleton, Z_Construct_UClass_UPlayFabExperimentationAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabExperimentationAPI.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabExperimentationAPI>()
{
	return UPlayFabExperimentationAPI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabExperimentationAPI);
UPlayFabExperimentationAPI::~UPlayFabExperimentationAPI() {}
// End Class UPlayFabExperimentationAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabExperimentationAPI, UPlayFabExperimentationAPI::StaticClass, TEXT("UPlayFabExperimentationAPI"), &Z_Registration_Info_UClass_UPlayFabExperimentationAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabExperimentationAPI), 4042633040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_4000348999(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
