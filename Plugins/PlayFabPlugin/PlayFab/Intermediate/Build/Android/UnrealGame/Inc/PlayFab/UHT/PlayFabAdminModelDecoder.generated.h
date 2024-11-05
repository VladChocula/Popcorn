// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabAdminModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FAdminAddLocalizedNewsResult;
struct FAdminAddNewsResult;
struct FAdminAddPlayerTagResult;
struct FAdminBanUsersResult;
struct FAdminBlankResult;
struct FAdminCheckLimitedEditionItemAvailabilityResult;
struct FAdminCreatePlayerSharedSecretResult;
struct FAdminCreatePlayerStatisticDefinitionResult;
struct FAdminCreateSegmentResponse;
struct FAdminCreateTaskResult;
struct FAdminDeleteMasterPlayerAccountResult;
struct FAdminDeleteMasterPlayerEventDataResult;
struct FAdminDeleteMembershipSubscriptionResult;
struct FAdminDeletePlayerResult;
struct FAdminDeletePlayerSharedSecretResult;
struct FAdminDeleteSegmentsResponse;
struct FAdminDeleteStoreResult;
struct FAdminDeleteTitleDataOverrideResult;
struct FAdminDeleteTitleResult;
struct FAdminEmptyResponse;
struct FAdminExportMasterPlayerDataResult;
struct FAdminExportPlayersInSegmentResult;
struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult;
struct FAdminGetAllSegmentsResult;
struct FAdminGetCatalogItemsResult;
struct FAdminGetCloudScriptRevisionResult;
struct FAdminGetCloudScriptTaskInstanceResult;
struct FAdminGetCloudScriptVersionsResult;
struct FAdminGetContentListResult;
struct FAdminGetContentUploadUrlResult;
struct FAdminGetDataReportResult;
struct FAdminGetPlayedTitleListResult;
struct FAdminGetPlayerIdFromAuthTokenResult;
struct FAdminGetPlayerProfileResult;
struct FAdminGetPlayerSegmentsResult;
struct FAdminGetPlayerSharedSecretsResult;
struct FAdminGetPlayersInSegmentExportResponse;
struct FAdminGetPlayersInSegmentResult;
struct FAdminGetPlayerStatisticDefinitionsResult;
struct FAdminGetPlayerStatisticVersionsResult;
struct FAdminGetPlayerTagsResult;
struct FAdminGetPolicyResponse;
struct FAdminGetPublisherDataResult;
struct FAdminGetRandomResultTablesResult;
struct FAdminGetSegmentsResponse;
struct FAdminGetStoreItemsResult;
struct FAdminGetTaskInstancesResult;
struct FAdminGetTasksResult;
struct FAdminGetTitleDataResult;
struct FAdminGetUserBansResult;
struct FAdminGetUserDataResult;
struct FAdminGetUserInventoryResult;
struct FAdminGrantItemsToUsersResult;
struct FAdminIncrementLimitedEditionItemAvailabilityResult;
struct FAdminIncrementPlayerStatisticVersionResult;
struct FAdminListOpenIdConnectionResponse;
struct FAdminListVirtualCurrencyTypesResult;
struct FAdminLookupUserAccountInfoResult;
struct FAdminModifyUserVirtualCurrencyResult;
struct FAdminRefundPurchaseResponse;
struct FAdminRemovePlayerTagResult;
struct FAdminResetCharacterStatisticsResult;
struct FAdminResetPasswordResult;
struct FAdminResetUserStatisticsResult;
struct FAdminResolvePurchaseDisputeResponse;
struct FAdminRevokeAllBansForUserResult;
struct FAdminRevokeBansResult;
struct FAdminRevokeInventoryItemsResult;
struct FAdminRevokeInventoryResult;
struct FAdminRunTaskResult;
struct FAdminSendAccountRecoveryEmailResult;
struct FAdminSetMembershipOverrideResult;
struct FAdminSetPlayerSecretResult;
struct FAdminSetPublishedRevisionResult;
struct FAdminSetPublisherDataResult;
struct FAdminSetTitleDataAndOverridesResult;
struct FAdminSetTitleDataResult;
struct FAdminSetupPushNotificationResult;
struct FAdminUpdateBansResult;
struct FAdminUpdateCatalogItemsResult;
struct FAdminUpdateCloudScriptResult;
struct FAdminUpdatePlayerSharedSecretResult;
struct FAdminUpdatePlayerStatisticDefinitionResult;
struct FAdminUpdatePolicyResponse;
struct FAdminUpdateRandomResultTablesResult;
struct FAdminUpdateSegmentResponse;
struct FAdminUpdateStoreItemsResult;
struct FAdminUpdateUserDataResult;
struct FAdminUpdateUserTitleDisplayNameResult;
#ifdef PLAYFAB_PlayFabAdminModelDecoder_generated_h
#error "PlayFabAdminModelDecoder.generated.h already included, missing '#pragma once' in PlayFabAdminModelDecoder.h"
#endif
#define PLAYFAB_PlayFabAdminModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeUpdateRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeSetupPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataAndOverridesResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeListVirtualCurrencyTypesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleDataOverrideResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteStoreResultResponse); \
	DECLARE_FUNCTION(execdecodeAddNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddLocalizedNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublishedRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeRunTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTasksResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTaskInstancesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentExportResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeExportPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeIncrementLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeCheckLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeResolvePurchaseDisputeResponseResponse); \
	DECLARE_FUNCTION(execdecodeResetUserStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeRefundPurchaseResponseResponse); \
	DECLARE_FUNCTION(execdecodeIncrementPlayerStatisticVersionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticDefinitionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetDataReportResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentUploadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentListResultResponse); \
	DECLARE_FUNCTION(execdecodeBlankResultResponse); \
	DECLARE_FUNCTION(execdecodeResetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeListOpenIdConnectionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSharedSecretsResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserTitleDisplayNameResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeSetMembershipOverrideResultResponse); \
	DECLARE_FUNCTION(execdecodeSendAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeResetPasswordResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeLookupUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerIdFromAuthTokenResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayedTitleListResultResponse); \
	DECLARE_FUNCTION(execdecodeExportMasterPlayerDataResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMembershipSubscriptionResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMasterPlayerEventDataResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMasterPlayerAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabAdminModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabAdminModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAdminModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAdminModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAdminModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabAdminModelDecoder(UPlayFabAdminModelDecoder&&); \
	UPlayFabAdminModelDecoder(const UPlayFabAdminModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAdminModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAdminModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAdminModelDecoder) \
	NO_API virtual ~UPlayFabAdminModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAdminModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
