// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabGroupsAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabGroupsAPI;
struct FGroupsAcceptGroupApplicationRequest;
struct FGroupsAcceptGroupInvitationRequest;
struct FGroupsAddMembersRequest;
struct FGroupsApplyToGroupRequest;
struct FGroupsApplyToGroupResponse;
struct FGroupsBlockEntityRequest;
struct FGroupsChangeMemberRoleRequest;
struct FGroupsCreateGroupRequest;
struct FGroupsCreateGroupResponse;
struct FGroupsCreateGroupRoleRequest;
struct FGroupsCreateGroupRoleResponse;
struct FGroupsDeleteGroupRequest;
struct FGroupsDeleteRoleRequest;
struct FGroupsEmptyResponse;
struct FGroupsGetGroupRequest;
struct FGroupsGetGroupResponse;
struct FGroupsInviteToGroupRequest;
struct FGroupsInviteToGroupResponse;
struct FGroupsIsMemberRequest;
struct FGroupsIsMemberResponse;
struct FGroupsListGroupApplicationsRequest;
struct FGroupsListGroupApplicationsResponse;
struct FGroupsListGroupBlocksRequest;
struct FGroupsListGroupBlocksResponse;
struct FGroupsListGroupInvitationsRequest;
struct FGroupsListGroupInvitationsResponse;
struct FGroupsListGroupMembersRequest;
struct FGroupsListGroupMembersResponse;
struct FGroupsListMembershipOpportunitiesRequest;
struct FGroupsListMembershipOpportunitiesResponse;
struct FGroupsListMembershipRequest;
struct FGroupsListMembershipResponse;
struct FGroupsRemoveGroupApplicationRequest;
struct FGroupsRemoveGroupInvitationRequest;
struct FGroupsRemoveMembersRequest;
struct FGroupsUnblockEntityRequest;
struct FGroupsUpdateGroupRequest;
struct FGroupsUpdateGroupResponse;
struct FGroupsUpdateGroupRoleRequest;
struct FGroupsUpdateGroupRoleResponse;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabGroupsAPI_generated_h
#error "PlayFabGroupsAPI.generated.h already included, missing '#pragma once' in PlayFabGroupsAPI.h"
#endif
#define PLAYFAB_PlayFabGroupsAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabGroupsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabGroupsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_62_DELEGATE \
static void FDelegateOnSuccessAcceptGroupApplication_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAcceptGroupApplication, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_75_DELEGATE \
static void FDelegateOnSuccessAcceptGroupInvitation_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAcceptGroupInvitation, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_88_DELEGATE \
static void FDelegateOnSuccessAddMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddMembers, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_101_DELEGATE \
static void FDelegateOnSuccessApplyToGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessApplyToGroup, FGroupsApplyToGroupResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_114_DELEGATE \
static void FDelegateOnSuccessBlockEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessBlockEntity, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_127_DELEGATE \
static void FDelegateOnSuccessChangeMemberRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessChangeMemberRole, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_140_DELEGATE \
static void FDelegateOnSuccessCreateGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateGroup, FGroupsCreateGroupResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_153_DELEGATE \
static void FDelegateOnSuccessCreateRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateRole, FGroupsCreateGroupRoleResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_166_DELEGATE \
static void FDelegateOnSuccessDeleteGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteGroup, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_179_DELEGATE \
static void FDelegateOnSuccessDeleteRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteRole, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_192_DELEGATE \
static void FDelegateOnSuccessGetGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGroup, FGroupsGetGroupResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_205_DELEGATE \
static void FDelegateOnSuccessInviteToGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessInviteToGroup, FGroupsInviteToGroupResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_218_DELEGATE \
static void FDelegateOnSuccessIsMember_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessIsMember, FGroupsIsMemberResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_231_DELEGATE \
static void FDelegateOnSuccessListGroupApplications_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupApplications, FGroupsListGroupApplicationsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_244_DELEGATE \
static void FDelegateOnSuccessListGroupBlocks_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupBlocks, FGroupsListGroupBlocksResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_257_DELEGATE \
static void FDelegateOnSuccessListGroupInvitations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupInvitations, FGroupsListGroupInvitationsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_270_DELEGATE \
static void FDelegateOnSuccessListGroupMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupMembers, FGroupsListGroupMembersResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_283_DELEGATE \
static void FDelegateOnSuccessListMembership_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMembership, FGroupsListMembershipResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_296_DELEGATE \
static void FDelegateOnSuccessListMembershipOpportunities_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMembershipOpportunities, FGroupsListMembershipOpportunitiesResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_309_DELEGATE \
static void FDelegateOnSuccessRemoveGroupApplication_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGroupApplication, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_322_DELEGATE \
static void FDelegateOnSuccessRemoveGroupInvitation_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGroupInvitation, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_335_DELEGATE \
static void FDelegateOnSuccessRemoveMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveMembers, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_348_DELEGATE \
static void FDelegateOnSuccessUnblockEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnblockEntity, FGroupsEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_361_DELEGATE \
static void FDelegateOnSuccessUpdateGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateGroup, FGroupsUpdateGroupResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_374_DELEGATE \
static void FDelegateOnSuccessUpdateRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateRole, FGroupsUpdateGroupRoleResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperUpdateRole); \
	DECLARE_FUNCTION(execUpdateRole); \
	DECLARE_FUNCTION(execHelperUpdateGroup); \
	DECLARE_FUNCTION(execUpdateGroup); \
	DECLARE_FUNCTION(execHelperUnblockEntity); \
	DECLARE_FUNCTION(execUnblockEntity); \
	DECLARE_FUNCTION(execHelperRemoveMembers); \
	DECLARE_FUNCTION(execRemoveMembers); \
	DECLARE_FUNCTION(execHelperRemoveGroupInvitation); \
	DECLARE_FUNCTION(execRemoveGroupInvitation); \
	DECLARE_FUNCTION(execHelperRemoveGroupApplication); \
	DECLARE_FUNCTION(execRemoveGroupApplication); \
	DECLARE_FUNCTION(execHelperListMembershipOpportunities); \
	DECLARE_FUNCTION(execListMembershipOpportunities); \
	DECLARE_FUNCTION(execHelperListMembership); \
	DECLARE_FUNCTION(execListMembership); \
	DECLARE_FUNCTION(execHelperListGroupMembers); \
	DECLARE_FUNCTION(execListGroupMembers); \
	DECLARE_FUNCTION(execHelperListGroupInvitations); \
	DECLARE_FUNCTION(execListGroupInvitations); \
	DECLARE_FUNCTION(execHelperListGroupBlocks); \
	DECLARE_FUNCTION(execListGroupBlocks); \
	DECLARE_FUNCTION(execHelperListGroupApplications); \
	DECLARE_FUNCTION(execListGroupApplications); \
	DECLARE_FUNCTION(execHelperIsMember); \
	DECLARE_FUNCTION(execIsMember); \
	DECLARE_FUNCTION(execHelperInviteToGroup); \
	DECLARE_FUNCTION(execInviteToGroup); \
	DECLARE_FUNCTION(execHelperGetGroup); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execHelperDeleteRole); \
	DECLARE_FUNCTION(execDeleteRole); \
	DECLARE_FUNCTION(execHelperDeleteGroup); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execHelperCreateRole); \
	DECLARE_FUNCTION(execCreateRole); \
	DECLARE_FUNCTION(execHelperCreateGroup); \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execHelperChangeMemberRole); \
	DECLARE_FUNCTION(execChangeMemberRole); \
	DECLARE_FUNCTION(execHelperBlockEntity); \
	DECLARE_FUNCTION(execBlockEntity); \
	DECLARE_FUNCTION(execHelperApplyToGroup); \
	DECLARE_FUNCTION(execApplyToGroup); \
	DECLARE_FUNCTION(execHelperAddMembers); \
	DECLARE_FUNCTION(execAddMembers); \
	DECLARE_FUNCTION(execHelperAcceptGroupInvitation); \
	DECLARE_FUNCTION(execAcceptGroupInvitation); \
	DECLARE_FUNCTION(execHelperAcceptGroupApplication); \
	DECLARE_FUNCTION(execAcceptGroupApplication);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabGroupsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabGroupsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabGroupsAPI(UPlayFabGroupsAPI&&); \
	UPlayFabGroupsAPI(const UPlayFabGroupsAPI&); \
public: \
	NO_API virtual ~UPlayFabGroupsAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabGroupsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
