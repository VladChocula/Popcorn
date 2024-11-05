// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabGroupsAPI.h"
#include "PlayFab/Classes/PlayFabBaseModel.h"
#include "PlayFab/Classes/PlayFabGroupsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabGroupsAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabGroupsAPI();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature();
PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAddMembersRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsBlockEntityRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Delegate FOnPlayFabGroupsRequestCompleted
struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics
{
	struct _Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_response;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
{
	((_Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabGroupsRequestCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayFabGroupsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabGroupsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabGroupsRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayFabGroupsRequestCompleted

// Begin Delegate FDelegateOnFailurePlayFabError
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(0, nullptr) }; // 1109941606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnFailurePlayFabError

// Begin Delegate FDelegateOnSuccessAcceptGroupApplication
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////\n// Groups\n//////////////////////////////////////////////////////\n// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n Groups\n\n callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessAcceptGroupApplication__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessAcceptGroupApplication_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAcceptGroupApplication, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessAcceptGroupApplication.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessAcceptGroupApplication

// Begin Delegate FDelegateOnSuccessAcceptGroupInvitation
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessAcceptGroupInvitation__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessAcceptGroupInvitation_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAcceptGroupInvitation, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessAcceptGroupInvitation.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessAcceptGroupInvitation

// Begin Delegate FDelegateOnSuccessAddMembers
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessAddMembers__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessAddMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddMembers, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessAddMembers.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessAddMembers

// Begin Delegate FDelegateOnSuccessApplyToGroup
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms
	{
		FGroupsApplyToGroupResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms, result), Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse, METADATA_PARAMS(0, nullptr) }; // 2453034722
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessApplyToGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessApplyToGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessApplyToGroup, FGroupsApplyToGroupResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms
	{
		FGroupsApplyToGroupResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessApplyToGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessApplyToGroup

// Begin Delegate FDelegateOnSuccessBlockEntity
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessBlockEntity__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessBlockEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessBlockEntity, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessBlockEntity.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessBlockEntity

// Begin Delegate FDelegateOnSuccessChangeMemberRole
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessChangeMemberRole__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessChangeMemberRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessChangeMemberRole, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessChangeMemberRole.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessChangeMemberRole

// Begin Delegate FDelegateOnSuccessCreateGroup
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms
	{
		FGroupsCreateGroupResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms, result), Z_Construct_UScriptStruct_FGroupsCreateGroupResponse, METADATA_PARAMS(0, nullptr) }; // 2826256379
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessCreateGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessCreateGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateGroup, FGroupsCreateGroupResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms
	{
		FGroupsCreateGroupResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessCreateGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessCreateGroup

// Begin Delegate FDelegateOnSuccessCreateRole
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms
	{
		FGroupsCreateGroupRoleResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms, result), Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse, METADATA_PARAMS(0, nullptr) }; // 2507173558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessCreateRole__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessCreateRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateRole, FGroupsCreateGroupRoleResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms
	{
		FGroupsCreateGroupRoleResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessCreateRole.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessCreateRole

// Begin Delegate FDelegateOnSuccessDeleteGroup
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessDeleteGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessDeleteGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteGroup, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessDeleteGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessDeleteGroup

// Begin Delegate FDelegateOnSuccessDeleteRole
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessDeleteRole__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessDeleteRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteRole, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessDeleteRole.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessDeleteRole

// Begin Delegate FDelegateOnSuccessGetGroup
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms
	{
		FGroupsGetGroupResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms, result), Z_Construct_UScriptStruct_FGroupsGetGroupResponse, METADATA_PARAMS(0, nullptr) }; // 3217014330
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessGetGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessGetGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGroup, FGroupsGetGroupResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms
	{
		FGroupsGetGroupResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetGroup

// Begin Delegate FDelegateOnSuccessInviteToGroup
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms
	{
		FGroupsInviteToGroupResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms, result), Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse, METADATA_PARAMS(0, nullptr) }; // 236161290
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessInviteToGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessInviteToGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessInviteToGroup, FGroupsInviteToGroupResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms
	{
		FGroupsInviteToGroupResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessInviteToGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessInviteToGroup

// Begin Delegate FDelegateOnSuccessIsMember
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms
	{
		FGroupsIsMemberResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms, result), Z_Construct_UScriptStruct_FGroupsIsMemberResponse, METADATA_PARAMS(0, nullptr) }; // 3282340308
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessIsMember__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessIsMember_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessIsMember, FGroupsIsMemberResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms
	{
		FGroupsIsMemberResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessIsMember.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessIsMember

// Begin Delegate FDelegateOnSuccessListGroupApplications
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms
	{
		FGroupsListGroupApplicationsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms, result), Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse, METADATA_PARAMS(0, nullptr) }; // 208879379
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessListGroupApplications__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessListGroupApplications_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupApplications, FGroupsListGroupApplicationsResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms
	{
		FGroupsListGroupApplicationsResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListGroupApplications.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessListGroupApplications

// Begin Delegate FDelegateOnSuccessListGroupBlocks
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms
	{
		FGroupsListGroupBlocksResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms, result), Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse, METADATA_PARAMS(0, nullptr) }; // 84772974
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessListGroupBlocks__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessListGroupBlocks_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupBlocks, FGroupsListGroupBlocksResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms
	{
		FGroupsListGroupBlocksResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListGroupBlocks.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessListGroupBlocks

// Begin Delegate FDelegateOnSuccessListGroupInvitations
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms
	{
		FGroupsListGroupInvitationsResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms, result), Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse, METADATA_PARAMS(0, nullptr) }; // 3308454690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessListGroupInvitations__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessListGroupInvitations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupInvitations, FGroupsListGroupInvitationsResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms
	{
		FGroupsListGroupInvitationsResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListGroupInvitations.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessListGroupInvitations

// Begin Delegate FDelegateOnSuccessListGroupMembers
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms
	{
		FGroupsListGroupMembersResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms, result), Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse, METADATA_PARAMS(0, nullptr) }; // 3264635863
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessListGroupMembers__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessListGroupMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupMembers, FGroupsListGroupMembersResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms
	{
		FGroupsListGroupMembersResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListGroupMembers.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessListGroupMembers

// Begin Delegate FDelegateOnSuccessListMembership
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms
	{
		FGroupsListMembershipResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms, result), Z_Construct_UScriptStruct_FGroupsListMembershipResponse, METADATA_PARAMS(0, nullptr) }; // 33525665
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessListMembership__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessListMembership_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMembership, FGroupsListMembershipResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms
	{
		FGroupsListMembershipResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListMembership.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessListMembership

// Begin Delegate FDelegateOnSuccessListMembershipOpportunities
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms
	{
		FGroupsListMembershipOpportunitiesResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms, result), Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse, METADATA_PARAMS(0, nullptr) }; // 853011401
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessListMembershipOpportunities__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessListMembershipOpportunities_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMembershipOpportunities, FGroupsListMembershipOpportunitiesResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms
	{
		FGroupsListMembershipOpportunitiesResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListMembershipOpportunities.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessListMembershipOpportunities

// Begin Delegate FDelegateOnSuccessRemoveGroupApplication
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessRemoveGroupApplication__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessRemoveGroupApplication_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGroupApplication, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessRemoveGroupApplication.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessRemoveGroupApplication

// Begin Delegate FDelegateOnSuccessRemoveGroupInvitation
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessRemoveGroupInvitation__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessRemoveGroupInvitation_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGroupInvitation, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessRemoveGroupInvitation.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessRemoveGroupInvitation

// Begin Delegate FDelegateOnSuccessRemoveMembers
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessRemoveMembers__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessRemoveMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveMembers, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessRemoveMembers.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessRemoveMembers

// Begin Delegate FDelegateOnSuccessUnblockEntity
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms, result), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 776100136
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessUnblockEntity__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessUnblockEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnblockEntity, FGroupsEmptyResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms
	{
		FGroupsEmptyResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessUnblockEntity.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessUnblockEntity

// Begin Delegate FDelegateOnSuccessUpdateGroup
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms
	{
		FGroupsUpdateGroupResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms, result), Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse, METADATA_PARAMS(0, nullptr) }; // 731856670
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessUpdateGroup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessUpdateGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateGroup, FGroupsUpdateGroupResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms
	{
		FGroupsUpdateGroupResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessUpdateGroup.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessUpdateGroup

// Begin Delegate FDelegateOnSuccessUpdateRole
struct Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms
	{
		FGroupsUpdateGroupRoleResponse result;
		UObject* customData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// callbacks\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms, result), Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse, METADATA_PARAMS(0, nullptr) }; // 2729751562
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::NewProp_customData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DelegateOnSuccessUpdateRole__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayFabGroupsAPI::FDelegateOnSuccessUpdateRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateRole, FGroupsUpdateGroupRoleResponse result, UObject* customData)
{
	struct PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms
	{
		FGroupsUpdateGroupRoleResponse result;
		UObject* customData;
	};
	PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessUpdateRole.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessUpdateRole

// Begin Class UPlayFabGroupsAPI Function AcceptGroupApplication
struct Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics
{
	struct PlayFabGroupsAPI_eventAcceptGroupApplication_Parms
	{
		FGroupsAcceptGroupApplicationRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Accepts an outstanding invitation to to join a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accepts an outstanding invitation to to join a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupApplication_Parms, request), Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest, METADATA_PARAMS(0, nullptr) }; // 1628680703
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupApplication_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 751579818
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupApplication_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupApplication_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupApplication_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "AcceptGroupApplication", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::PlayFabGroupsAPI_eventAcceptGroupApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::PlayFabGroupsAPI_eventAcceptGroupApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execAcceptGroupApplication)
{
	P_GET_STRUCT(FGroupsAcceptGroupApplicationRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::AcceptGroupApplication(Z_Param_request,FDelegateOnSuccessAcceptGroupApplication(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function AcceptGroupApplication

// Begin Class UPlayFabGroupsAPI Function AcceptGroupInvitation
struct Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics
{
	struct PlayFabGroupsAPI_eventAcceptGroupInvitation_Parms
	{
		FGroupsAcceptGroupInvitationRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Accepts an invitation to join a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accepts an invitation to join a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupInvitation_Parms, request), Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest, METADATA_PARAMS(0, nullptr) }; // 689343858
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupInvitation_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3194129229
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupInvitation_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupInvitation_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAcceptGroupInvitation_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "AcceptGroupInvitation", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::PlayFabGroupsAPI_eventAcceptGroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::PlayFabGroupsAPI_eventAcceptGroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execAcceptGroupInvitation)
{
	P_GET_STRUCT(FGroupsAcceptGroupInvitationRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::AcceptGroupInvitation(Z_Param_request,FDelegateOnSuccessAcceptGroupInvitation(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function AcceptGroupInvitation

// Begin Class UPlayFabGroupsAPI Function AddMembers
struct Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics
{
	struct PlayFabGroupsAPI_eventAddMembers_Parms
	{
		FGroupsAddMembersRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds members to a group or role. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds members to a group or role." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAddMembers_Parms, request), Z_Construct_UScriptStruct_FGroupsAddMembersRequest, METADATA_PARAMS(0, nullptr) }; // 449440377
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAddMembers_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 317831740
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAddMembers_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAddMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventAddMembers_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "AddMembers", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::PlayFabGroupsAPI_eventAddMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::PlayFabGroupsAPI_eventAddMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execAddMembers)
{
	P_GET_STRUCT(FGroupsAddMembersRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::AddMembers(Z_Param_request,FDelegateOnSuccessAddMembers(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function AddMembers

// Begin Class UPlayFabGroupsAPI Function ApplyToGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics
{
	struct PlayFabGroupsAPI_eventApplyToGroup_Parms
	{
		FGroupsApplyToGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies to join a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies to join a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventApplyToGroup_Parms, request), Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest, METADATA_PARAMS(0, nullptr) }; // 234464971
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventApplyToGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3862913246
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventApplyToGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventApplyToGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventApplyToGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "ApplyToGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::PlayFabGroupsAPI_eventApplyToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::PlayFabGroupsAPI_eventApplyToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execApplyToGroup)
{
	P_GET_STRUCT(FGroupsApplyToGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::ApplyToGroup(Z_Param_request,FDelegateOnSuccessApplyToGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function ApplyToGroup

// Begin Class UPlayFabGroupsAPI Function BlockEntity
struct Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics
{
	struct PlayFabGroupsAPI_eventBlockEntity_Parms
	{
		FGroupsBlockEntityRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blocks a list of entities from joining a group. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blocks a list of entities from joining a group." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventBlockEntity_Parms, request), Z_Construct_UScriptStruct_FGroupsBlockEntityRequest, METADATA_PARAMS(0, nullptr) }; // 3715393106
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventBlockEntity_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1831538901
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventBlockEntity_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventBlockEntity_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventBlockEntity_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "BlockEntity", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::PlayFabGroupsAPI_eventBlockEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::PlayFabGroupsAPI_eventBlockEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execBlockEntity)
{
	P_GET_STRUCT(FGroupsBlockEntityRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::BlockEntity(Z_Param_request,FDelegateOnSuccessBlockEntity(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function BlockEntity

// Begin Class UPlayFabGroupsAPI Function ChangeMemberRole
struct Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics
{
	struct PlayFabGroupsAPI_eventChangeMemberRole_Parms
	{
		FGroupsChangeMemberRoleRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Changes the role membership of a list of entities from one role to another. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the role membership of a list of entities from one role to another." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventChangeMemberRole_Parms, request), Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest, METADATA_PARAMS(0, nullptr) }; // 1547015625
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventChangeMemberRole_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2367770863
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventChangeMemberRole_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventChangeMemberRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventChangeMemberRole_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "ChangeMemberRole", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::PlayFabGroupsAPI_eventChangeMemberRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::PlayFabGroupsAPI_eventChangeMemberRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execChangeMemberRole)
{
	P_GET_STRUCT(FGroupsChangeMemberRoleRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::ChangeMemberRole(Z_Param_request,FDelegateOnSuccessChangeMemberRole(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function ChangeMemberRole

// Begin Class UPlayFabGroupsAPI Function CreateGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics
{
	struct PlayFabGroupsAPI_eventCreateGroup_Parms
	{
		FGroupsCreateGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a new group. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new group." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateGroup_Parms, request), Z_Construct_UScriptStruct_FGroupsCreateGroupRequest, METADATA_PARAMS(0, nullptr) }; // 83266746
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 148190946
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "CreateGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::PlayFabGroupsAPI_eventCreateGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::PlayFabGroupsAPI_eventCreateGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execCreateGroup)
{
	P_GET_STRUCT(FGroupsCreateGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::CreateGroup(Z_Param_request,FDelegateOnSuccessCreateGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function CreateGroup

// Begin Class UPlayFabGroupsAPI Function CreateRole
struct Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics
{
	struct PlayFabGroupsAPI_eventCreateRole_Parms
	{
		FGroupsCreateGroupRoleRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a new group role. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new group role." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateRole_Parms, request), Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest, METADATA_PARAMS(0, nullptr) }; // 3413932941
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateRole_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 464663101
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateRole_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventCreateRole_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "CreateRole", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::PlayFabGroupsAPI_eventCreateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::PlayFabGroupsAPI_eventCreateRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execCreateRole)
{
	P_GET_STRUCT(FGroupsCreateGroupRoleRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::CreateRole(Z_Param_request,FDelegateOnSuccessCreateRole(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function CreateRole

// Begin Class UPlayFabGroupsAPI Function DeleteGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics
{
	struct PlayFabGroupsAPI_eventDeleteGroup_Parms
	{
		FGroupsDeleteGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deletes a group and all roles, invitations, join requests, and blocks associated with it. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes a group and all roles, invitations, join requests, and blocks associated with it." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteGroup_Parms, request), Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest, METADATA_PARAMS(0, nullptr) }; // 1453772318
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1508913210
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DeleteGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::PlayFabGroupsAPI_eventDeleteGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::PlayFabGroupsAPI_eventDeleteGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execDeleteGroup)
{
	P_GET_STRUCT(FGroupsDeleteGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::DeleteGroup(Z_Param_request,FDelegateOnSuccessDeleteGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function DeleteGroup

// Begin Class UPlayFabGroupsAPI Function DeleteRole
struct Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics
{
	struct PlayFabGroupsAPI_eventDeleteRole_Parms
	{
		FGroupsDeleteRoleRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deletes an existing role in a group. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes an existing role in a group." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteRole_Parms, request), Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest, METADATA_PARAMS(0, nullptr) }; // 1485186806
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteRole_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3403987376
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteRole_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventDeleteRole_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "DeleteRole", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::PlayFabGroupsAPI_eventDeleteRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::PlayFabGroupsAPI_eventDeleteRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execDeleteRole)
{
	P_GET_STRUCT(FGroupsDeleteRoleRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::DeleteRole(Z_Param_request,FDelegateOnSuccessDeleteRole(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function DeleteRole

// Begin Class UPlayFabGroupsAPI Function GetGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics
{
	struct PlayFabGroupsAPI_eventGetGroup_Parms
	{
		FGroupsGetGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets information about a group and its roles */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets information about a group and its roles" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventGetGroup_Parms, request), Z_Construct_UScriptStruct_FGroupsGetGroupRequest, METADATA_PARAMS(0, nullptr) }; // 3487947439
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventGetGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 861789494
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventGetGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventGetGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventGetGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "GetGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::PlayFabGroupsAPI_eventGetGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::PlayFabGroupsAPI_eventGetGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execGetGroup)
{
	P_GET_STRUCT(FGroupsGetGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::GetGroup(Z_Param_request,FDelegateOnSuccessGetGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function GetGroup

// Begin Class UPlayFabGroupsAPI Function HelperAcceptGroupApplication
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics
{
	struct PlayFabGroupsAPI_eventHelperAcceptGroupApplication_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperAcceptGroupApplication_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperAcceptGroupApplication_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperAcceptGroupApplication_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperAcceptGroupApplication_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperAcceptGroupApplication", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::PlayFabGroupsAPI_eventHelperAcceptGroupApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::PlayFabGroupsAPI_eventHelperAcceptGroupApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperAcceptGroupApplication)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperAcceptGroupApplication(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperAcceptGroupApplication

// Begin Class UPlayFabGroupsAPI Function HelperAcceptGroupInvitation
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics
{
	struct PlayFabGroupsAPI_eventHelperAcceptGroupInvitation_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperAcceptGroupInvitation_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperAcceptGroupInvitation_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperAcceptGroupInvitation_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperAcceptGroupInvitation_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperAcceptGroupInvitation", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::PlayFabGroupsAPI_eventHelperAcceptGroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::PlayFabGroupsAPI_eventHelperAcceptGroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperAcceptGroupInvitation)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperAcceptGroupInvitation(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperAcceptGroupInvitation

// Begin Class UPlayFabGroupsAPI Function HelperAddMembers
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics
{
	struct PlayFabGroupsAPI_eventHelperAddMembers_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperAddMembers_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperAddMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperAddMembers_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperAddMembers_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperAddMembers", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::PlayFabGroupsAPI_eventHelperAddMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::PlayFabGroupsAPI_eventHelperAddMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperAddMembers)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperAddMembers(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperAddMembers

// Begin Class UPlayFabGroupsAPI Function HelperApplyToGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics
{
	struct PlayFabGroupsAPI_eventHelperApplyToGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperApplyToGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperApplyToGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperApplyToGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperApplyToGroup_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperApplyToGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::PlayFabGroupsAPI_eventHelperApplyToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::PlayFabGroupsAPI_eventHelperApplyToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperApplyToGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperApplyToGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperApplyToGroup

// Begin Class UPlayFabGroupsAPI Function HelperBlockEntity
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics
{
	struct PlayFabGroupsAPI_eventHelperBlockEntity_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperBlockEntity_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperBlockEntity_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperBlockEntity_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperBlockEntity_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperBlockEntity", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::PlayFabGroupsAPI_eventHelperBlockEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::PlayFabGroupsAPI_eventHelperBlockEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperBlockEntity)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperBlockEntity(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperBlockEntity

// Begin Class UPlayFabGroupsAPI Function HelperChangeMemberRole
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics
{
	struct PlayFabGroupsAPI_eventHelperChangeMemberRole_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperChangeMemberRole_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperChangeMemberRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperChangeMemberRole_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperChangeMemberRole_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperChangeMemberRole", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::PlayFabGroupsAPI_eventHelperChangeMemberRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::PlayFabGroupsAPI_eventHelperChangeMemberRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperChangeMemberRole)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperChangeMemberRole(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperChangeMemberRole

// Begin Class UPlayFabGroupsAPI Function HelperCreateGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics
{
	struct PlayFabGroupsAPI_eventHelperCreateGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperCreateGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperCreateGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperCreateGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperCreateGroup_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperCreateGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::PlayFabGroupsAPI_eventHelperCreateGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::PlayFabGroupsAPI_eventHelperCreateGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperCreateGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperCreateGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperCreateGroup

// Begin Class UPlayFabGroupsAPI Function HelperCreateRole
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics
{
	struct PlayFabGroupsAPI_eventHelperCreateRole_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperCreateRole_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperCreateRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperCreateRole_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperCreateRole_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperCreateRole", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::PlayFabGroupsAPI_eventHelperCreateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::PlayFabGroupsAPI_eventHelperCreateRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperCreateRole)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperCreateRole(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperCreateRole

// Begin Class UPlayFabGroupsAPI Function HelperDeleteGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics
{
	struct PlayFabGroupsAPI_eventHelperDeleteGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperDeleteGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperDeleteGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperDeleteGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperDeleteGroup_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperDeleteGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::PlayFabGroupsAPI_eventHelperDeleteGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::PlayFabGroupsAPI_eventHelperDeleteGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperDeleteGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperDeleteGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperDeleteGroup

// Begin Class UPlayFabGroupsAPI Function HelperDeleteRole
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics
{
	struct PlayFabGroupsAPI_eventHelperDeleteRole_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperDeleteRole_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperDeleteRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperDeleteRole_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperDeleteRole_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperDeleteRole", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::PlayFabGroupsAPI_eventHelperDeleteRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::PlayFabGroupsAPI_eventHelperDeleteRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperDeleteRole)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperDeleteRole(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperDeleteRole

// Begin Class UPlayFabGroupsAPI Function HelperGetGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics
{
	struct PlayFabGroupsAPI_eventHelperGetGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperGetGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperGetGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperGetGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperGetGroup_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperGetGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::PlayFabGroupsAPI_eventHelperGetGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::PlayFabGroupsAPI_eventHelperGetGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperGetGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperGetGroup

// Begin Class UPlayFabGroupsAPI Function HelperInviteToGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics
{
	struct PlayFabGroupsAPI_eventHelperInviteToGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperInviteToGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperInviteToGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperInviteToGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperInviteToGroup_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperInviteToGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::PlayFabGroupsAPI_eventHelperInviteToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::PlayFabGroupsAPI_eventHelperInviteToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperInviteToGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperInviteToGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperInviteToGroup

// Begin Class UPlayFabGroupsAPI Function HelperIsMember
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics
{
	struct PlayFabGroupsAPI_eventHelperIsMember_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperIsMember_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperIsMember_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperIsMember_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperIsMember_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperIsMember", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::PlayFabGroupsAPI_eventHelperIsMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::PlayFabGroupsAPI_eventHelperIsMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperIsMember)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperIsMember(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperIsMember

// Begin Class UPlayFabGroupsAPI Function HelperListGroupApplications
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics
{
	struct PlayFabGroupsAPI_eventHelperListGroupApplications_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListGroupApplications_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListGroupApplications_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperListGroupApplications_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperListGroupApplications_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperListGroupApplications", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::PlayFabGroupsAPI_eventHelperListGroupApplications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::PlayFabGroupsAPI_eventHelperListGroupApplications_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperListGroupApplications)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperListGroupApplications(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperListGroupApplications

// Begin Class UPlayFabGroupsAPI Function HelperListGroupBlocks
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics
{
	struct PlayFabGroupsAPI_eventHelperListGroupBlocks_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListGroupBlocks_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListGroupBlocks_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperListGroupBlocks_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperListGroupBlocks_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperListGroupBlocks", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::PlayFabGroupsAPI_eventHelperListGroupBlocks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::PlayFabGroupsAPI_eventHelperListGroupBlocks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperListGroupBlocks)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperListGroupBlocks(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperListGroupBlocks

// Begin Class UPlayFabGroupsAPI Function HelperListGroupInvitations
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics
{
	struct PlayFabGroupsAPI_eventHelperListGroupInvitations_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListGroupInvitations_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListGroupInvitations_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperListGroupInvitations_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperListGroupInvitations_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperListGroupInvitations", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::PlayFabGroupsAPI_eventHelperListGroupInvitations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::PlayFabGroupsAPI_eventHelperListGroupInvitations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperListGroupInvitations)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperListGroupInvitations(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperListGroupInvitations

// Begin Class UPlayFabGroupsAPI Function HelperListGroupMembers
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics
{
	struct PlayFabGroupsAPI_eventHelperListGroupMembers_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListGroupMembers_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListGroupMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperListGroupMembers_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperListGroupMembers_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperListGroupMembers", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::PlayFabGroupsAPI_eventHelperListGroupMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::PlayFabGroupsAPI_eventHelperListGroupMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperListGroupMembers)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperListGroupMembers(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperListGroupMembers

// Begin Class UPlayFabGroupsAPI Function HelperListMembership
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics
{
	struct PlayFabGroupsAPI_eventHelperListMembership_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListMembership_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListMembership_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperListMembership_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperListMembership_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperListMembership", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::PlayFabGroupsAPI_eventHelperListMembership_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::PlayFabGroupsAPI_eventHelperListMembership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperListMembership)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperListMembership(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperListMembership

// Begin Class UPlayFabGroupsAPI Function HelperListMembershipOpportunities
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics
{
	struct PlayFabGroupsAPI_eventHelperListMembershipOpportunities_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListMembershipOpportunities_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperListMembershipOpportunities_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperListMembershipOpportunities_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperListMembershipOpportunities_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperListMembershipOpportunities", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::PlayFabGroupsAPI_eventHelperListMembershipOpportunities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::PlayFabGroupsAPI_eventHelperListMembershipOpportunities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperListMembershipOpportunities)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperListMembershipOpportunities(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperListMembershipOpportunities

// Begin Class UPlayFabGroupsAPI Function HelperRemoveGroupApplication
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics
{
	struct PlayFabGroupsAPI_eventHelperRemoveGroupApplication_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperRemoveGroupApplication_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperRemoveGroupApplication_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperRemoveGroupApplication_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperRemoveGroupApplication_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperRemoveGroupApplication", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::PlayFabGroupsAPI_eventHelperRemoveGroupApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::PlayFabGroupsAPI_eventHelperRemoveGroupApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperRemoveGroupApplication)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperRemoveGroupApplication(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperRemoveGroupApplication

// Begin Class UPlayFabGroupsAPI Function HelperRemoveGroupInvitation
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics
{
	struct PlayFabGroupsAPI_eventHelperRemoveGroupInvitation_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperRemoveGroupInvitation_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperRemoveGroupInvitation_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperRemoveGroupInvitation_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperRemoveGroupInvitation_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperRemoveGroupInvitation", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::PlayFabGroupsAPI_eventHelperRemoveGroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::PlayFabGroupsAPI_eventHelperRemoveGroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperRemoveGroupInvitation)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperRemoveGroupInvitation(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperRemoveGroupInvitation

// Begin Class UPlayFabGroupsAPI Function HelperRemoveMembers
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics
{
	struct PlayFabGroupsAPI_eventHelperRemoveMembers_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperRemoveMembers_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperRemoveMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperRemoveMembers_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperRemoveMembers_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperRemoveMembers", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::PlayFabGroupsAPI_eventHelperRemoveMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::PlayFabGroupsAPI_eventHelperRemoveMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperRemoveMembers)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperRemoveMembers(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperRemoveMembers

// Begin Class UPlayFabGroupsAPI Function HelperUnblockEntity
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics
{
	struct PlayFabGroupsAPI_eventHelperUnblockEntity_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperUnblockEntity_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperUnblockEntity_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperUnblockEntity_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperUnblockEntity_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperUnblockEntity", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::PlayFabGroupsAPI_eventHelperUnblockEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::PlayFabGroupsAPI_eventHelperUnblockEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperUnblockEntity)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperUnblockEntity(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperUnblockEntity

// Begin Class UPlayFabGroupsAPI Function HelperUpdateGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics
{
	struct PlayFabGroupsAPI_eventHelperUpdateGroup_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperUpdateGroup_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperUpdateGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperUpdateGroup_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperUpdateGroup_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperUpdateGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::PlayFabGroupsAPI_eventHelperUpdateGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::PlayFabGroupsAPI_eventHelperUpdateGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperUpdateGroup)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperUpdateGroup(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperUpdateGroup

// Begin Class UPlayFabGroupsAPI Function HelperUpdateRole
struct Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics
{
	struct PlayFabGroupsAPI_eventHelperUpdateRole_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FOnPlayFabGroupsRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FOnPlayFabGroupsRequestCompleted" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperUpdateRole_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(0, nullptr) }; // 603195937
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventHelperUpdateRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::NewProp_successful_SetBit(void* Obj)
{
	((PlayFabGroupsAPI_eventHelperUpdateRole_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabGroupsAPI_eventHelperUpdateRole_Parms), &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "HelperUpdateRole", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::PlayFabGroupsAPI_eventHelperUpdateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::PlayFabGroupsAPI_eventHelperUpdateRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execHelperUpdateRole)
{
	P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperUpdateRole(Z_Param_response,Z_Param_customData,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function HelperUpdateRole

// Begin Class UPlayFabGroupsAPI Function InviteToGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics
{
	struct PlayFabGroupsAPI_eventInviteToGroup_Parms
	{
		FGroupsInviteToGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Invites a player to join a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invites a player to join a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventInviteToGroup_Parms, request), Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest, METADATA_PARAMS(0, nullptr) }; // 941844340
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventInviteToGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1831380749
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventInviteToGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventInviteToGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventInviteToGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "InviteToGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::PlayFabGroupsAPI_eventInviteToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::PlayFabGroupsAPI_eventInviteToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execInviteToGroup)
{
	P_GET_STRUCT(FGroupsInviteToGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::InviteToGroup(Z_Param_request,FDelegateOnSuccessInviteToGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function InviteToGroup

// Begin Class UPlayFabGroupsAPI Function IsMember
struct Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics
{
	struct PlayFabGroupsAPI_eventIsMember_Parms
	{
		FGroupsIsMemberRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks to see if an entity is a member of a group or role within the group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks to see if an entity is a member of a group or role within the group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventIsMember_Parms, request), Z_Construct_UScriptStruct_FGroupsIsMemberRequest, METADATA_PARAMS(0, nullptr) }; // 1757784108
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventIsMember_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1587733216
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventIsMember_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventIsMember_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventIsMember_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "IsMember", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::PlayFabGroupsAPI_eventIsMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::PlayFabGroupsAPI_eventIsMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execIsMember)
{
	P_GET_STRUCT(FGroupsIsMemberRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::IsMember(Z_Param_request,FDelegateOnSuccessIsMember(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function IsMember

// Begin Class UPlayFabGroupsAPI Function ListGroupApplications
struct Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics
{
	struct PlayFabGroupsAPI_eventListGroupApplications_Parms
	{
		FGroupsListGroupApplicationsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lists all outstanding requests to join a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lists all outstanding requests to join a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupApplications_Parms, request), Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest, METADATA_PARAMS(0, nullptr) }; // 963800612
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupApplications_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2143648135
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupApplications_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupApplications_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupApplications_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "ListGroupApplications", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::PlayFabGroupsAPI_eventListGroupApplications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::PlayFabGroupsAPI_eventListGroupApplications_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execListGroupApplications)
{
	P_GET_STRUCT(FGroupsListGroupApplicationsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::ListGroupApplications(Z_Param_request,FDelegateOnSuccessListGroupApplications(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function ListGroupApplications

// Begin Class UPlayFabGroupsAPI Function ListGroupBlocks
struct Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics
{
	struct PlayFabGroupsAPI_eventListGroupBlocks_Parms
	{
		FGroupsListGroupBlocksRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lists all entities blocked from joining a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lists all entities blocked from joining a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupBlocks_Parms, request), Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest, METADATA_PARAMS(0, nullptr) }; // 2822554614
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupBlocks_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 958826670
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupBlocks_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupBlocks_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupBlocks_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "ListGroupBlocks", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::PlayFabGroupsAPI_eventListGroupBlocks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::PlayFabGroupsAPI_eventListGroupBlocks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execListGroupBlocks)
{
	P_GET_STRUCT(FGroupsListGroupBlocksRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::ListGroupBlocks(Z_Param_request,FDelegateOnSuccessListGroupBlocks(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function ListGroupBlocks

// Begin Class UPlayFabGroupsAPI Function ListGroupInvitations
struct Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics
{
	struct PlayFabGroupsAPI_eventListGroupInvitations_Parms
	{
		FGroupsListGroupInvitationsRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lists all outstanding invitations for a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lists all outstanding invitations for a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupInvitations_Parms, request), Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest, METADATA_PARAMS(0, nullptr) }; // 387176148
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupInvitations_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1216901925
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupInvitations_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupInvitations_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupInvitations_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "ListGroupInvitations", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::PlayFabGroupsAPI_eventListGroupInvitations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::PlayFabGroupsAPI_eventListGroupInvitations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execListGroupInvitations)
{
	P_GET_STRUCT(FGroupsListGroupInvitationsRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::ListGroupInvitations(Z_Param_request,FDelegateOnSuccessListGroupInvitations(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function ListGroupInvitations

// Begin Class UPlayFabGroupsAPI Function ListGroupMembers
struct Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics
{
	struct PlayFabGroupsAPI_eventListGroupMembers_Parms
	{
		FGroupsListGroupMembersRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lists all members for a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lists all members for a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupMembers_Parms, request), Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest, METADATA_PARAMS(0, nullptr) }; // 2875481249
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupMembers_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1453825904
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupMembers_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListGroupMembers_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "ListGroupMembers", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::PlayFabGroupsAPI_eventListGroupMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::PlayFabGroupsAPI_eventListGroupMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execListGroupMembers)
{
	P_GET_STRUCT(FGroupsListGroupMembersRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::ListGroupMembers(Z_Param_request,FDelegateOnSuccessListGroupMembers(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function ListGroupMembers

// Begin Class UPlayFabGroupsAPI Function ListMembership
struct Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics
{
	struct PlayFabGroupsAPI_eventListMembership_Parms
	{
		FGroupsListMembershipRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lists all groups and roles for an entity */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lists all groups and roles for an entity" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembership_Parms, request), Z_Construct_UScriptStruct_FGroupsListMembershipRequest, METADATA_PARAMS(0, nullptr) }; // 4079258794
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembership_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 844661079
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembership_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembership_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembership_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "ListMembership", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::PlayFabGroupsAPI_eventListMembership_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::PlayFabGroupsAPI_eventListMembership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execListMembership)
{
	P_GET_STRUCT(FGroupsListMembershipRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::ListMembership(Z_Param_request,FDelegateOnSuccessListMembership(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function ListMembership

// Begin Class UPlayFabGroupsAPI Function ListMembershipOpportunities
struct Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics
{
	struct PlayFabGroupsAPI_eventListMembershipOpportunities_Parms
	{
		FGroupsListMembershipOpportunitiesRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lists all outstanding invitations and group applications for an entity */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lists all outstanding invitations and group applications for an entity" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembershipOpportunities_Parms, request), Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest, METADATA_PARAMS(0, nullptr) }; // 1306491825
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembershipOpportunities_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1633665620
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembershipOpportunities_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembershipOpportunities_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventListMembershipOpportunities_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "ListMembershipOpportunities", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::PlayFabGroupsAPI_eventListMembershipOpportunities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::PlayFabGroupsAPI_eventListMembershipOpportunities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execListMembershipOpportunities)
{
	P_GET_STRUCT(FGroupsListMembershipOpportunitiesRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::ListMembershipOpportunities(Z_Param_request,FDelegateOnSuccessListMembershipOpportunities(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function ListMembershipOpportunities

// Begin Class UPlayFabGroupsAPI Function RemoveGroupApplication
struct Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics
{
	struct PlayFabGroupsAPI_eventRemoveGroupApplication_Parms
	{
		FGroupsRemoveGroupApplicationRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes an application to join a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes an application to join a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupApplication_Parms, request), Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest, METADATA_PARAMS(0, nullptr) }; // 3692890738
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupApplication_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3712628992
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupApplication_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupApplication_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupApplication_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "RemoveGroupApplication", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::PlayFabGroupsAPI_eventRemoveGroupApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::PlayFabGroupsAPI_eventRemoveGroupApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execRemoveGroupApplication)
{
	P_GET_STRUCT(FGroupsRemoveGroupApplicationRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::RemoveGroupApplication(Z_Param_request,FDelegateOnSuccessRemoveGroupApplication(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function RemoveGroupApplication

// Begin Class UPlayFabGroupsAPI Function RemoveGroupInvitation
struct Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics
{
	struct PlayFabGroupsAPI_eventRemoveGroupInvitation_Parms
	{
		FGroupsRemoveGroupInvitationRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes an invitation join a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes an invitation join a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupInvitation_Parms, request), Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest, METADATA_PARAMS(0, nullptr) }; // 604354801
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupInvitation_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 22082254
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupInvitation_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupInvitation_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveGroupInvitation_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "RemoveGroupInvitation", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::PlayFabGroupsAPI_eventRemoveGroupInvitation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::PlayFabGroupsAPI_eventRemoveGroupInvitation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execRemoveGroupInvitation)
{
	P_GET_STRUCT(FGroupsRemoveGroupInvitationRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::RemoveGroupInvitation(Z_Param_request,FDelegateOnSuccessRemoveGroupInvitation(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function RemoveGroupInvitation

// Begin Class UPlayFabGroupsAPI Function RemoveMembers
struct Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics
{
	struct PlayFabGroupsAPI_eventRemoveMembers_Parms
	{
		FGroupsRemoveMembersRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes members from a group. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes members from a group." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveMembers_Parms, request), Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest, METADATA_PARAMS(0, nullptr) }; // 1752882254
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveMembers_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2210516412
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveMembers_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveMembers_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventRemoveMembers_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "RemoveMembers", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::PlayFabGroupsAPI_eventRemoveMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::PlayFabGroupsAPI_eventRemoveMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execRemoveMembers)
{
	P_GET_STRUCT(FGroupsRemoveMembersRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::RemoveMembers(Z_Param_request,FDelegateOnSuccessRemoveMembers(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function RemoveMembers

// Begin Class UPlayFabGroupsAPI Function UnblockEntity
struct Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics
{
	struct PlayFabGroupsAPI_eventUnblockEntity_Parms
	{
		FGroupsUnblockEntityRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unblocks a list of entities from joining a group */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unblocks a list of entities from joining a group" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUnblockEntity_Parms, request), Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest, METADATA_PARAMS(0, nullptr) }; // 848018884
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUnblockEntity_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2300507518
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUnblockEntity_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUnblockEntity_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUnblockEntity_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "UnblockEntity", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::PlayFabGroupsAPI_eventUnblockEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::PlayFabGroupsAPI_eventUnblockEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execUnblockEntity)
{
	P_GET_STRUCT(FGroupsUnblockEntityRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::UnblockEntity(Z_Param_request,FDelegateOnSuccessUnblockEntity(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function UnblockEntity

// Begin Class UPlayFabGroupsAPI Function UpdateGroup
struct Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics
{
	struct PlayFabGroupsAPI_eventUpdateGroup_Parms
	{
		FGroupsUpdateGroupRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates non-membership data about a group. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates non-membership data about a group." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateGroup_Parms, request), Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest, METADATA_PARAMS(0, nullptr) }; // 443026857
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateGroup_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 737847592
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateGroup_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateGroup_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateGroup_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "UpdateGroup", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::PlayFabGroupsAPI_eventUpdateGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::PlayFabGroupsAPI_eventUpdateGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execUpdateGroup)
{
	P_GET_STRUCT(FGroupsUpdateGroupRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::UpdateGroup(Z_Param_request,FDelegateOnSuccessUpdateGroup(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function UpdateGroup

// Begin Class UPlayFabGroupsAPI Function UpdateRole
struct Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics
{
	struct PlayFabGroupsAPI_eventUpdateRole_Parms
	{
		FGroupsUpdateGroupRoleRequest request;
		FScriptDelegate onSuccess;
		FScriptDelegate onFailure;
		UObject* customData;
		UPlayFabGroupsAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Groups | Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates metadata about a role. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates metadata about a role." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateRole_Parms, request), Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest, METADATA_PARAMS(0, nullptr) }; // 2137135961
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateRole_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2968768271
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateRole_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2205415130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateRole_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabGroupsAPI_eventUpdateRole_Parms, ReturnValue), Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_onSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_onFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_customData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsAPI, nullptr, "UpdateRole", nullptr, nullptr, Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::PlayFabGroupsAPI_eventUpdateRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::PlayFabGroupsAPI_eventUpdateRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabGroupsAPI::execUpdateRole)
{
	P_GET_STRUCT(FGroupsUpdateGroupRoleRequest,Z_Param_request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
	P_GET_OBJECT(UObject,Z_Param_customData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabGroupsAPI**)Z_Param__Result=UPlayFabGroupsAPI::UpdateRole(Z_Param_request,FDelegateOnSuccessUpdateRole(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
	P_NATIVE_END;
}
// End Class UPlayFabGroupsAPI Function UpdateRole

// Begin Class UPlayFabGroupsAPI
void UPlayFabGroupsAPI::StaticRegisterNativesUPlayFabGroupsAPI()
{
	UClass* Class = UPlayFabGroupsAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptGroupApplication", &UPlayFabGroupsAPI::execAcceptGroupApplication },
		{ "AcceptGroupInvitation", &UPlayFabGroupsAPI::execAcceptGroupInvitation },
		{ "AddMembers", &UPlayFabGroupsAPI::execAddMembers },
		{ "ApplyToGroup", &UPlayFabGroupsAPI::execApplyToGroup },
		{ "BlockEntity", &UPlayFabGroupsAPI::execBlockEntity },
		{ "ChangeMemberRole", &UPlayFabGroupsAPI::execChangeMemberRole },
		{ "CreateGroup", &UPlayFabGroupsAPI::execCreateGroup },
		{ "CreateRole", &UPlayFabGroupsAPI::execCreateRole },
		{ "DeleteGroup", &UPlayFabGroupsAPI::execDeleteGroup },
		{ "DeleteRole", &UPlayFabGroupsAPI::execDeleteRole },
		{ "GetGroup", &UPlayFabGroupsAPI::execGetGroup },
		{ "HelperAcceptGroupApplication", &UPlayFabGroupsAPI::execHelperAcceptGroupApplication },
		{ "HelperAcceptGroupInvitation", &UPlayFabGroupsAPI::execHelperAcceptGroupInvitation },
		{ "HelperAddMembers", &UPlayFabGroupsAPI::execHelperAddMembers },
		{ "HelperApplyToGroup", &UPlayFabGroupsAPI::execHelperApplyToGroup },
		{ "HelperBlockEntity", &UPlayFabGroupsAPI::execHelperBlockEntity },
		{ "HelperChangeMemberRole", &UPlayFabGroupsAPI::execHelperChangeMemberRole },
		{ "HelperCreateGroup", &UPlayFabGroupsAPI::execHelperCreateGroup },
		{ "HelperCreateRole", &UPlayFabGroupsAPI::execHelperCreateRole },
		{ "HelperDeleteGroup", &UPlayFabGroupsAPI::execHelperDeleteGroup },
		{ "HelperDeleteRole", &UPlayFabGroupsAPI::execHelperDeleteRole },
		{ "HelperGetGroup", &UPlayFabGroupsAPI::execHelperGetGroup },
		{ "HelperInviteToGroup", &UPlayFabGroupsAPI::execHelperInviteToGroup },
		{ "HelperIsMember", &UPlayFabGroupsAPI::execHelperIsMember },
		{ "HelperListGroupApplications", &UPlayFabGroupsAPI::execHelperListGroupApplications },
		{ "HelperListGroupBlocks", &UPlayFabGroupsAPI::execHelperListGroupBlocks },
		{ "HelperListGroupInvitations", &UPlayFabGroupsAPI::execHelperListGroupInvitations },
		{ "HelperListGroupMembers", &UPlayFabGroupsAPI::execHelperListGroupMembers },
		{ "HelperListMembership", &UPlayFabGroupsAPI::execHelperListMembership },
		{ "HelperListMembershipOpportunities", &UPlayFabGroupsAPI::execHelperListMembershipOpportunities },
		{ "HelperRemoveGroupApplication", &UPlayFabGroupsAPI::execHelperRemoveGroupApplication },
		{ "HelperRemoveGroupInvitation", &UPlayFabGroupsAPI::execHelperRemoveGroupInvitation },
		{ "HelperRemoveMembers", &UPlayFabGroupsAPI::execHelperRemoveMembers },
		{ "HelperUnblockEntity", &UPlayFabGroupsAPI::execHelperUnblockEntity },
		{ "HelperUpdateGroup", &UPlayFabGroupsAPI::execHelperUpdateGroup },
		{ "HelperUpdateRole", &UPlayFabGroupsAPI::execHelperUpdateRole },
		{ "InviteToGroup", &UPlayFabGroupsAPI::execInviteToGroup },
		{ "IsMember", &UPlayFabGroupsAPI::execIsMember },
		{ "ListGroupApplications", &UPlayFabGroupsAPI::execListGroupApplications },
		{ "ListGroupBlocks", &UPlayFabGroupsAPI::execListGroupBlocks },
		{ "ListGroupInvitations", &UPlayFabGroupsAPI::execListGroupInvitations },
		{ "ListGroupMembers", &UPlayFabGroupsAPI::execListGroupMembers },
		{ "ListMembership", &UPlayFabGroupsAPI::execListMembership },
		{ "ListMembershipOpportunities", &UPlayFabGroupsAPI::execListMembershipOpportunities },
		{ "RemoveGroupApplication", &UPlayFabGroupsAPI::execRemoveGroupApplication },
		{ "RemoveGroupInvitation", &UPlayFabGroupsAPI::execRemoveGroupInvitation },
		{ "RemoveMembers", &UPlayFabGroupsAPI::execRemoveMembers },
		{ "UnblockEntity", &UPlayFabGroupsAPI::execUnblockEntity },
		{ "UpdateGroup", &UPlayFabGroupsAPI::execUpdateGroup },
		{ "UpdateRole", &UPlayFabGroupsAPI::execUpdateRole },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabGroupsAPI);
UClass* Z_Construct_UClass_UPlayFabGroupsAPI_NoRegister()
{
	return UPlayFabGroupsAPI::StaticClass();
}
struct Z_Construct_UClass_UPlayFabGroupsAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabGroupsAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabGroupsAPI.h" },
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
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupApplication, "AcceptGroupApplication" }, // 1318451302
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_AcceptGroupInvitation, "AcceptGroupInvitation" }, // 370079995
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_AddMembers, "AddMembers" }, // 428585480
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_ApplyToGroup, "ApplyToGroup" }, // 1634867145
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_BlockEntity, "BlockEntity" }, // 1930525475
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_ChangeMemberRole, "ChangeMemberRole" }, // 1090413584
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_CreateGroup, "CreateGroup" }, // 2435904548
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_CreateRole, "CreateRole" }, // 2021705679
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 2205415130
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupApplication__DelegateSignature, "DelegateOnSuccessAcceptGroupApplication__DelegateSignature" }, // 751579818
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAcceptGroupInvitation__DelegateSignature, "DelegateOnSuccessAcceptGroupInvitation__DelegateSignature" }, // 3194129229
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessAddMembers__DelegateSignature, "DelegateOnSuccessAddMembers__DelegateSignature" }, // 317831740
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessApplyToGroup__DelegateSignature, "DelegateOnSuccessApplyToGroup__DelegateSignature" }, // 3862913246
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessBlockEntity__DelegateSignature, "DelegateOnSuccessBlockEntity__DelegateSignature" }, // 1831538901
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessChangeMemberRole__DelegateSignature, "DelegateOnSuccessChangeMemberRole__DelegateSignature" }, // 2367770863
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateGroup__DelegateSignature, "DelegateOnSuccessCreateGroup__DelegateSignature" }, // 148190946
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessCreateRole__DelegateSignature, "DelegateOnSuccessCreateRole__DelegateSignature" }, // 464663101
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteGroup__DelegateSignature, "DelegateOnSuccessDeleteGroup__DelegateSignature" }, // 1508913210
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessDeleteRole__DelegateSignature, "DelegateOnSuccessDeleteRole__DelegateSignature" }, // 3403987376
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessGetGroup__DelegateSignature, "DelegateOnSuccessGetGroup__DelegateSignature" }, // 861789494
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessInviteToGroup__DelegateSignature, "DelegateOnSuccessInviteToGroup__DelegateSignature" }, // 1831380749
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessIsMember__DelegateSignature, "DelegateOnSuccessIsMember__DelegateSignature" }, // 1587733216
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupApplications__DelegateSignature, "DelegateOnSuccessListGroupApplications__DelegateSignature" }, // 2143648135
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupBlocks__DelegateSignature, "DelegateOnSuccessListGroupBlocks__DelegateSignature" }, // 958826670
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupInvitations__DelegateSignature, "DelegateOnSuccessListGroupInvitations__DelegateSignature" }, // 1216901925
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListGroupMembers__DelegateSignature, "DelegateOnSuccessListGroupMembers__DelegateSignature" }, // 1453825904
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembership__DelegateSignature, "DelegateOnSuccessListMembership__DelegateSignature" }, // 844661079
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessListMembershipOpportunities__DelegateSignature, "DelegateOnSuccessListMembershipOpportunities__DelegateSignature" }, // 1633665620
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupApplication__DelegateSignature, "DelegateOnSuccessRemoveGroupApplication__DelegateSignature" }, // 3712628992
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveGroupInvitation__DelegateSignature, "DelegateOnSuccessRemoveGroupInvitation__DelegateSignature" }, // 22082254
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessRemoveMembers__DelegateSignature, "DelegateOnSuccessRemoveMembers__DelegateSignature" }, // 2210516412
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUnblockEntity__DelegateSignature, "DelegateOnSuccessUnblockEntity__DelegateSignature" }, // 2300507518
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateGroup__DelegateSignature, "DelegateOnSuccessUpdateGroup__DelegateSignature" }, // 737847592
		{ &Z_Construct_UDelegateFunction_UPlayFabGroupsAPI_DelegateOnSuccessUpdateRole__DelegateSignature, "DelegateOnSuccessUpdateRole__DelegateSignature" }, // 2968768271
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteGroup, "DeleteGroup" }, // 1989681352
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_DeleteRole, "DeleteRole" }, // 531846528
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_GetGroup, "GetGroup" }, // 4197998089
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupApplication, "HelperAcceptGroupApplication" }, // 2925155591
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAcceptGroupInvitation, "HelperAcceptGroupInvitation" }, // 2198324045
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperAddMembers, "HelperAddMembers" }, // 1379825570
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperApplyToGroup, "HelperApplyToGroup" }, // 3881841576
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperBlockEntity, "HelperBlockEntity" }, // 131783302
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperChangeMemberRole, "HelperChangeMemberRole" }, // 1572529402
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateGroup, "HelperCreateGroup" }, // 2975047365
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperCreateRole, "HelperCreateRole" }, // 929910244
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteGroup, "HelperDeleteGroup" }, // 2348410794
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperDeleteRole, "HelperDeleteRole" }, // 3897694273
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperGetGroup, "HelperGetGroup" }, // 2236583411
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperInviteToGroup, "HelperInviteToGroup" }, // 2416518351
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperIsMember, "HelperIsMember" }, // 1467847151
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupApplications, "HelperListGroupApplications" }, // 1177757464
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupBlocks, "HelperListGroupBlocks" }, // 1206691093
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupInvitations, "HelperListGroupInvitations" }, // 2216069868
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListGroupMembers, "HelperListGroupMembers" }, // 461036856
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembership, "HelperListMembership" }, // 2230085116
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperListMembershipOpportunities, "HelperListMembershipOpportunities" }, // 2588360199
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupApplication, "HelperRemoveGroupApplication" }, // 1602399432
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveGroupInvitation, "HelperRemoveGroupInvitation" }, // 3527722770
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperRemoveMembers, "HelperRemoveMembers" }, // 3683246325
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUnblockEntity, "HelperUnblockEntity" }, // 1636882634
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateGroup, "HelperUpdateGroup" }, // 2189087393
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_HelperUpdateRole, "HelperUpdateRole" }, // 935009371
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_InviteToGroup, "InviteToGroup" }, // 3456764931
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_IsMember, "IsMember" }, // 1851190244
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupApplications, "ListGroupApplications" }, // 188172157
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupBlocks, "ListGroupBlocks" }, // 2693123189
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupInvitations, "ListGroupInvitations" }, // 3435383636
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_ListGroupMembers, "ListGroupMembers" }, // 5311571
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembership, "ListMembership" }, // 4147535569
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_ListMembershipOpportunities, "ListMembershipOpportunities" }, // 1893315458
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupApplication, "RemoveGroupApplication" }, // 1313731635
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveGroupInvitation, "RemoveGroupInvitation" }, // 1061701860
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_RemoveMembers, "RemoveMembers" }, // 2121886157
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_UnblockEntity, "UnblockEntity" }, // 2581290795
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateGroup, "UpdateGroup" }, // 3064400770
		{ &Z_Construct_UFunction_UPlayFabGroupsAPI_UpdateRole, "UpdateRole" }, // 2931226416
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabGroupsAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabGroupsAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabGroupsAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabGroupsRequestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayFabResponse_MetaData), NewProp_OnPlayFabResponse_MetaData) }; // 666682713
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabGroupsAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabGroupsAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallAuthenticationContext_MetaData), NewProp_CallAuthenticationContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabGroupsAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabGroupsAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabGroupsAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabGroupsAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabGroupsAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabGroupsAPI_Statics::NewProp_OnPlayFabResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabGroupsAPI_Statics::NewProp_CallAuthenticationContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabGroupsAPI_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabGroupsAPI_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabGroupsAPI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayFabGroupsAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabGroupsAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabGroupsAPI_Statics::ClassParams = {
	&UPlayFabGroupsAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayFabGroupsAPI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabGroupsAPI_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabGroupsAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabGroupsAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabGroupsAPI()
{
	if (!Z_Registration_Info_UClass_UPlayFabGroupsAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabGroupsAPI.OuterSingleton, Z_Construct_UClass_UPlayFabGroupsAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabGroupsAPI.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabGroupsAPI>()
{
	return UPlayFabGroupsAPI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabGroupsAPI);
UPlayFabGroupsAPI::~UPlayFabGroupsAPI() {}
// End Class UPlayFabGroupsAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabGroupsAPI, UPlayFabGroupsAPI::StaticClass, TEXT("UPlayFabGroupsAPI"), &Z_Registration_Info_UClass_UPlayFabGroupsAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabGroupsAPI), 2951113923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_1335045462(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
