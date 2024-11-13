// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabMultiplayerModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FMultiplayerBuildAliasDetailsResponse;
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult;
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult;
struct FMultiplayerCancelMatchmakingTicketResult;
struct FMultiplayerCancelServerBackfillTicketResult;
struct FMultiplayerCreateBuildWithCustomContainerResponse;
struct FMultiplayerCreateBuildWithManagedContainerResponse;
struct FMultiplayerCreateBuildWithProcessBasedServerResponse;
struct FMultiplayerCreateLobbyResult;
struct FMultiplayerCreateMatchmakingTicketResult;
struct FMultiplayerCreateRemoteUserResponse;
struct FMultiplayerCreateServerBackfillTicketResult;
struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse;
struct FMultiplayerEmptyResponse;
struct FMultiplayerEnableMultiplayerServersForTitleResponse;
struct FMultiplayerFindFriendLobbiesResult;
struct FMultiplayerFindLobbiesResult;
struct FMultiplayerGetAssetDownloadUrlResponse;
struct FMultiplayerGetAssetUploadUrlResponse;
struct FMultiplayerGetBuildResponse;
struct FMultiplayerGetContainerRegistryCredentialsResponse;
struct FMultiplayerGetLobbyResult;
struct FMultiplayerGetMatchmakingTicketResult;
struct FMultiplayerGetMatchResult;
struct FMultiplayerGetMultiplayerServerDetailsResponse;
struct FMultiplayerGetMultiplayerServerLogsResponse;
struct FMultiplayerGetQueueStatisticsResult;
struct FMultiplayerGetRemoteLoginEndpointResponse;
struct FMultiplayerGetServerBackfillTicketResult;
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse;
struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse;
struct FMultiplayerGetTitleMultiplayerServersQuotasResponse;
struct FMultiplayerJoinLobbyAsServerResult;
struct FMultiplayerJoinLobbyResult;
struct FMultiplayerJoinMatchmakingTicketResult;
struct FMultiplayerListAssetSummariesResponse;
struct FMultiplayerListBuildAliasesResponse;
struct FMultiplayerListBuildSummariesResponse;
struct FMultiplayerListCertificateSummariesResponse;
struct FMultiplayerListContainerImagesResponse;
struct FMultiplayerListContainerImageTagsResponse;
struct FMultiplayerListMatchmakingTicketsForPlayerResult;
struct FMultiplayerListMultiplayerServersResponse;
struct FMultiplayerListPartyQosServersResponse;
struct FMultiplayerListQosServersForTitleResponse;
struct FMultiplayerListSecretSummariesResponse;
struct FMultiplayerListServerBackfillTicketsForPlayerResult;
struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse;
struct FMultiplayerListVirtualMachineSummariesResponse;
struct FMultiplayerLobbyEmptyResult;
struct FMultiplayerRequestMultiplayerServerResponse;
struct FMultiplayerRequestPartyServiceResponse;
struct FMultiplayerRolloverContainerRegistryCredentialsResponse;
struct FMultiplayerSubscribeToLobbyResourceResult;
#ifdef PLAYFAB_PlayFabMultiplayerModelDecoder_generated_h
#error "PlayFabMultiplayerModelDecoder.generated.h already included, missing '#pragma once' in PlayFabMultiplayerModelDecoder.h"
#endif
#define PLAYFAB_PlayFabMultiplayerModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeRolloverContainerRegistryCredentialsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRequestPartyServiceResponseResponse); \
	DECLARE_FUNCTION(execdecodeRequestMultiplayerServerResponseResponse); \
	DECLARE_FUNCTION(execdecodeListVirtualMachineSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListTitleMultiplayerServersQuotaChangesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListSecretSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListQosServersForTitleResponseResponse); \
	DECLARE_FUNCTION(execdecodeListPartyQosServersResponseResponse); \
	DECLARE_FUNCTION(execdecodeListContainerImageTagsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListContainerImagesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListCertificateSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListBuildSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListBuildAliasesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListAssetSummariesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMultiplayerServersResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleMultiplayerServersQuotasResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleMultiplayerServersQuotaChangeResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleEnabledForMultiplayerServersStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetRemoteLoginEndpointResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMultiplayerServerLogsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMultiplayerServerDetailsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetContainerRegistryCredentialsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetBuildResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetAssetUploadUrlResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetAssetDownloadUrlResponseResponse); \
	DECLARE_FUNCTION(execdecodeEnableMultiplayerServersForTitleResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateTitleMultiplayerServersQuotaChangeResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateRemoteUserResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithProcessBasedServerResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithManagedContainerResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateBuildWithCustomContainerResponseResponse); \
	DECLARE_FUNCTION(execdecodeBuildAliasDetailsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListServerBackfillTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeListMatchmakingTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeJoinMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetQueueStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeGetMatchResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelServerBackfillTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelMatchmakingTicketResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelAllServerBackfillTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeCancelAllMatchmakingTicketsForPlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeSubscribeToLobbyResourceResultResponse); \
	DECLARE_FUNCTION(execdecodeJoinLobbyAsServerResultResponse); \
	DECLARE_FUNCTION(execdecodeJoinLobbyResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLobbyResultResponse); \
	DECLARE_FUNCTION(execdecodeFindLobbiesResultResponse); \
	DECLARE_FUNCTION(execdecodeFindFriendLobbiesResultResponse); \
	DECLARE_FUNCTION(execdecodeLobbyEmptyResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateLobbyResultResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabMultiplayerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabMultiplayerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMultiplayerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMultiplayerModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMultiplayerModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabMultiplayerModelDecoder(UPlayFabMultiplayerModelDecoder&&); \
	UPlayFabMultiplayerModelDecoder(const UPlayFabMultiplayerModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMultiplayerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMultiplayerModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMultiplayerModelDecoder) \
	NO_API virtual ~UPlayFabMultiplayerModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabMultiplayerModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMultiplayerModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
