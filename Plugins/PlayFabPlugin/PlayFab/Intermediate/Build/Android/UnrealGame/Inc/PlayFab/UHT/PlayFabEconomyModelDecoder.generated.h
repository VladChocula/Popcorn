// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabEconomyModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FEconomyAddInventoryItemsResponse;
struct FEconomyCreateDraftItemResponse;
struct FEconomyCreateUploadUrlsResponse;
struct FEconomyDeleteEntityItemReviewsResponse;
struct FEconomyDeleteInventoryCollectionResponse;
struct FEconomyDeleteInventoryItemsResponse;
struct FEconomyDeleteItemResponse;
struct FEconomyExecuteInventoryOperationsResponse;
struct FEconomyExecuteTransferOperationsResponse;
struct FEconomyGetCatalogConfigResponse;
struct FEconomyGetDraftItemResponse;
struct FEconomyGetDraftItemsResponse;
struct FEconomyGetEntityDraftItemsResponse;
struct FEconomyGetEntityItemReviewResponse;
struct FEconomyGetInventoryCollectionIdsResponse;
struct FEconomyGetInventoryItemsResponse;
struct FEconomyGetInventoryOperationStatusResponse;
struct FEconomyGetItemContainersResponse;
struct FEconomyGetItemModerationStateResponse;
struct FEconomyGetItemPublishStatusResponse;
struct FEconomyGetItemResponse;
struct FEconomyGetItemReviewsResponse;
struct FEconomyGetItemReviewSummaryResponse;
struct FEconomyGetItemsResponse;
struct FEconomyGetMicrosoftStoreAccessTokensResponse;
struct FEconomyGetTransactionHistoryResponse;
struct FEconomyPublishDraftItemResponse;
struct FEconomyPurchaseInventoryItemsResponse;
struct FEconomyRedeemAppleAppStoreInventoryItemsResponse;
struct FEconomyRedeemGooglePlayInventoryItemsResponse;
struct FEconomyRedeemMicrosoftStoreInventoryItemsResponse;
struct FEconomyRedeemNintendoEShopInventoryItemsResponse;
struct FEconomyRedeemPlayStationStoreInventoryItemsResponse;
struct FEconomyRedeemSteamInventoryItemsResponse;
struct FEconomyReportItemResponse;
struct FEconomyReportItemReviewResponse;
struct FEconomyReviewItemResponse;
struct FEconomySearchItemsResponse;
struct FEconomySetItemModerationStateResponse;
struct FEconomySubmitItemReviewVoteResponse;
struct FEconomySubtractInventoryItemsResponse;
struct FEconomyTakedownItemReviewsResponse;
struct FEconomyTransferInventoryItemsResponse;
struct FEconomyUpdateCatalogConfigResponse;
struct FEconomyUpdateDraftItemResponse;
struct FEconomyUpdateInventoryItemsResponse;
#ifdef PLAYFAB_PlayFabEconomyModelDecoder_generated_h
#error "PlayFabEconomyModelDecoder.generated.h already included, missing '#pragma once' in PlayFabEconomyModelDecoder.h"
#endif
#define PLAYFAB_PlayFabEconomyModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeUpdateInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeTransferInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeSubtractInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemSteamInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemPlayStationStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemNintendoEShopInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemGooglePlayInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemAppleAppStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodePurchaseInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTransactionHistoryResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMicrosoftStoreAccessTokensResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetInventoryOperationStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetInventoryCollectionIdsResponseResponse); \
	DECLARE_FUNCTION(execdecodeExecuteTransferOperationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeExecuteInventoryOperationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteInventoryCollectionResponseResponse); \
	DECLARE_FUNCTION(execdecodeAddInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCatalogConfigResponseResponse); \
	DECLARE_FUNCTION(execdecodeTakedownItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeSubmitItemReviewVoteResponseResponse); \
	DECLARE_FUNCTION(execdecodeSetItemModerationStateResponseResponse); \
	DECLARE_FUNCTION(execdecodeSearchItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeReviewItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeReportItemReviewResponseResponse); \
	DECLARE_FUNCTION(execdecodeReportItemResponseResponse); \
	DECLARE_FUNCTION(execdecodePublishDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemReviewSummaryResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemPublishStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemModerationStateResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemContainersResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityItemReviewResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityDraftItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetDraftItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogConfigResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteEntityItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateUploadUrlsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateDraftItemResponseResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabEconomyModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEconomyModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEconomyModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEconomyModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabEconomyModelDecoder(UPlayFabEconomyModelDecoder&&); \
	UPlayFabEconomyModelDecoder(const UPlayFabEconomyModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEconomyModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEconomyModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEconomyModelDecoder) \
	NO_API virtual ~UPlayFabEconomyModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabEconomyModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
