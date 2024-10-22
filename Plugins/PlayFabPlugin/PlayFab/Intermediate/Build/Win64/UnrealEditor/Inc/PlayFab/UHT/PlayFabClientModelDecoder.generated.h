// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabClientModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FClientAcceptTradeResponse;
struct FClientAddFriendResult;
struct FClientAddGenericIDResult;
struct FClientAddOrUpdateContactEmailResult;
struct FClientAddSharedGroupMembersResult;
struct FClientAddUsernamePasswordResult;
struct FClientAndroidDevicePushNotificationRegistrationResult;
struct FClientAttributeInstallResult;
struct FClientCancelTradeResponse;
struct FClientConfirmPurchaseResult;
struct FClientConsumeItemResult;
struct FClientConsumeMicrosoftStoreEntitlementsResponse;
struct FClientConsumePS5EntitlementsResult;
struct FClientConsumePSNEntitlementsResult;
struct FClientConsumeXboxEntitlementsResult;
struct FClientCreateSharedGroupResult;
struct FClientEmptyResponse;
struct FClientEmptyResult;
struct FClientExecuteCloudScriptResult;
struct FClientGetAccountInfoResult;
struct FClientGetAdPlacementsResult;
struct FClientGetCatalogItemsResult;
struct FClientGetCharacterDataResult;
struct FClientGetCharacterInventoryResult;
struct FClientGetCharacterLeaderboardResult;
struct FClientGetCharacterStatisticsResult;
struct FClientGetContentDownloadUrlResult;
struct FClientGetFriendLeaderboardAroundPlayerResult;
struct FClientGetFriendsListResult;
struct FClientGetLeaderboardAroundCharacterResult;
struct FClientGetLeaderboardAroundPlayerResult;
struct FClientGetLeaderboardForUsersCharactersResult;
struct FClientGetLeaderboardResult;
struct FClientGetPaymentTokenResult;
struct FClientGetPhotonAuthenticationTokenResult;
struct FClientGetPlayerCombinedInfoResult;
struct FClientGetPlayerProfileResult;
struct FClientGetPlayerSegmentsResult;
struct FClientGetPlayerStatisticsResult;
struct FClientGetPlayerStatisticVersionsResult;
struct FClientGetPlayerTagsResult;
struct FClientGetPlayerTradesResponse;
struct FClientGetPlayFabIDsFromFacebookIDsResult;
struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult;
struct FClientGetPlayFabIDsFromGameCenterIDsResult;
struct FClientGetPlayFabIDsFromGenericIDsResult;
struct FClientGetPlayFabIDsFromGoogleIDsResult;
struct FClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsResult;
struct FClientGetPlayFabIDsFromKongregateIDsResult;
struct FClientGetPlayFabIDsFromNintendoServiceAccountIdsResult;
struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;
struct FClientGetPlayFabIDsFromPSNAccountIDsResult;
struct FClientGetPlayFabIDsFromPSNOnlineIDsResult;
struct FClientGetPlayFabIDsFromSteamIDsResult;
struct FClientGetPlayFabIDsFromTwitchIDsResult;
struct FClientGetPlayFabIDsFromXboxLiveIDsResult;
struct FClientGetPublisherDataResult;
struct FClientGetPurchaseResult;
struct FClientGetSharedGroupDataResult;
struct FClientGetStoreItemsResult;
struct FClientGetTimeResult;
struct FClientGetTitleDataResult;
struct FClientGetTitleNewsResult;
struct FClientGetTitlePublicKeyResult;
struct FClientGetTradeStatusResponse;
struct FClientGetUserDataResult;
struct FClientGetUserInventoryResult;
struct FClientGrantCharacterToUserResult;
struct FClientLinkAndroidDeviceIDResult;
struct FClientLinkCustomIDResult;
struct FClientLinkFacebookAccountResult;
struct FClientLinkFacebookInstantGamesIdResult;
struct FClientLinkGameCenterAccountResult;
struct FClientLinkGoogleAccountResult;
struct FClientLinkGooglePlayGamesServicesAccountResult;
struct FClientLinkIOSDeviceIDResult;
struct FClientLinkKongregateAccountResult;
struct FClientLinkNintendoSwitchDeviceIdResult;
struct FClientLinkPSNAccountResult;
struct FClientLinkSteamAccountResult;
struct FClientLinkTwitchAccountResult;
struct FClientLinkXboxAccountResult;
struct FClientListUsersCharactersResult;
struct FClientLoginResult;
struct FClientModifyUserVirtualCurrencyResult;
struct FClientOpenTradeResponse;
struct FClientPayForPurchaseResult;
struct FClientPurchaseItemResult;
struct FClientRedeemCouponResult;
struct FClientRegisterForIOSPushNotificationResult;
struct FClientRegisterPlayFabUserResult;
struct FClientRemoveContactEmailResult;
struct FClientRemoveFriendResult;
struct FClientRemoveGenericIDResult;
struct FClientRemoveSharedGroupMembersResult;
struct FClientReportAdActivityResult;
struct FClientReportPlayerClientResult;
struct FClientRestoreIOSPurchasesResult;
struct FClientRewardAdActivityResult;
struct FClientSendAccountRecoveryEmailResult;
struct FClientSetFriendTagsResult;
struct FClientSetPlayerSecretResult;
struct FClientStartPurchaseResult;
struct FClientUnlinkAndroidDeviceIDResult;
struct FClientUnlinkCustomIDResult;
struct FClientUnlinkFacebookAccountResult;
struct FClientUnlinkFacebookInstantGamesIdResult;
struct FClientUnlinkGameCenterAccountResult;
struct FClientUnlinkGoogleAccountResult;
struct FClientUnlinkGooglePlayGamesServicesAccountResult;
struct FClientUnlinkIOSDeviceIDResult;
struct FClientUnlinkKongregateAccountResult;
struct FClientUnlinkNintendoSwitchDeviceIdResult;
struct FClientUnlinkPSNAccountResult;
struct FClientUnlinkSteamAccountResult;
struct FClientUnlinkTwitchAccountResult;
struct FClientUnlinkXboxAccountResult;
struct FClientUnlockContainerItemResult;
struct FClientUpdateCharacterDataResult;
struct FClientUpdateCharacterStatisticsResult;
struct FClientUpdatePlayerStatisticsResult;
struct FClientUpdateSharedGroupDataResult;
struct FClientUpdateUserDataResult;
struct FClientUpdateUserTitleDisplayNameResult;
struct FClientValidateAmazonReceiptResult;
struct FClientValidateGooglePlayPurchaseResult;
struct FClientValidateIOSReceiptResult;
struct FClientValidateWindowsReceiptResult;
struct FClientWriteEventResponse;
#ifdef PLAYFAB_PlayFabClientModelDecoder_generated_h
#error "PlayFabClientModelDecoder.generated.h already included, missing '#pragma once' in PlayFabClientModelDecoder.h"
#endif
#define PLAYFAB_PlayFabClientModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeOpenTradeResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTradeStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTradesResponseResponse); \
	DECLARE_FUNCTION(execdecodeCancelTradeResponseResponse); \
	DECLARE_FUNCTION(execdecodeAcceptTradeResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTimeResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetSharedGroupDataResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateSharedGroupResultResponse); \
	DECLARE_FUNCTION(execdecodeAddSharedGroupMembersResultResponse); \
	DECLARE_FUNCTION(execdecodeExecuteCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlockContainerItemResultResponse); \
	DECLARE_FUNCTION(execdecodeStartPurchaseResultResponse); \
	DECLARE_FUNCTION(execdecodeRedeemCouponResultResponse); \
	DECLARE_FUNCTION(execdecodePurchaseItemResultResponse); \
	DECLARE_FUNCTION(execdecodePayForPurchaseResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPurchaseResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPaymentTokenResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumeItemResultResponse); \
	DECLARE_FUNCTION(execdecodeConfirmPurchaseResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeGetFriendLeaderboardAroundPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeValidateWindowsReceiptResultResponse); \
	DECLARE_FUNCTION(execdecodeValidateIOSReceiptResultResponse); \
	DECLARE_FUNCTION(execdecodeValidateGooglePlayPurchaseResultResponse); \
	DECLARE_FUNCTION(execdecodeValidateAmazonReceiptResultResponse); \
	DECLARE_FUNCTION(execdecodeRestoreIOSPurchasesResultResponse); \
	DECLARE_FUNCTION(execdecodeRegisterForIOSPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumeXboxEntitlementsResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumePSNEntitlementsResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumePS5EntitlementsResultResponse); \
	DECLARE_FUNCTION(execdecodeConsumeMicrosoftStoreEntitlementsResponseResponse); \
	DECLARE_FUNCTION(execdecodeAndroidDevicePushNotificationRegistrationResultResponse); \
	DECLARE_FUNCTION(execdecodeSetFriendTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveFriendResultResponse); \
	DECLARE_FUNCTION(execdecodeGetFriendsListResultResponse); \
	DECLARE_FUNCTION(execdecodeAddFriendResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentDownloadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantCharacterToUserResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardForUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardAroundCharacterResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterLeaderboardResultResponse); \
	DECLARE_FUNCTION(execdecodeListUsersCharactersResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCharacterDataResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeRegisterPlayFabUserResultResponse); \
	DECLARE_FUNCTION(execdecodeLoginResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitlePublicKeyResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPhotonAuthenticationTokenResultResponse); \
	DECLARE_FUNCTION(execdecodeWriteEventResponseResponse); \
	DECLARE_FUNCTION(execdecodeRewardAdActivityResultResponse); \
	DECLARE_FUNCTION(execdecodeReportAdActivityResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAdPlacementsResultResponse); \
	DECLARE_FUNCTION(execdecodeAttributeInstallResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserTitleDisplayNameResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkTwitchAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkSteamAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkNintendoSwitchDeviceIdResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkKongregateAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkIOSDeviceIDResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkGooglePlayGamesServicesAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkGoogleAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkGameCenterAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkFacebookInstantGamesIdResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkFacebookAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkCustomIDResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUnlinkAndroidDeviceIDResultResponse); \
	DECLARE_FUNCTION(execdecodeSendAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeReportPlayerClientResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveGenericIDResultResponse); \
	DECLARE_FUNCTION(execdecodeRemoveContactEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkXboxAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkTwitchAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkSteamAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkPSNAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkNintendoSwitchDeviceIdResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkKongregateAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkIOSDeviceIDResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkGooglePlayGamesServicesAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkGoogleAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkGameCenterAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkFacebookInstantGamesIdResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkFacebookAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkCustomIDResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResultResponse); \
	DECLARE_FUNCTION(execdecodeLinkAndroidDeviceIDResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromXboxLiveIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromTwitchIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromSteamIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromPSNOnlineIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromPSNAccountIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromNintendoServiceAccountIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromKongregateIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromGooglePlayGamesPlayerIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromGoogleIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromGenericIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromGameCenterIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayFabIDsFromFacebookIDsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerCombinedInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeAddUsernamePasswordResultResponse); \
	DECLARE_FUNCTION(execdecodeAddOrUpdateContactEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeAddGenericIDResultResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabClientModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabClientModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabClientModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabClientModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabClientModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabClientModelDecoder(UPlayFabClientModelDecoder&&); \
	UPlayFabClientModelDecoder(const UPlayFabClientModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabClientModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabClientModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabClientModelDecoder) \
	NO_API virtual ~UPlayFabClientModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabClientModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabClientModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
