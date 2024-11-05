// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabInsightsAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabInsightsAPI;
struct FInsightsInsightsEmptyRequest;
struct FInsightsInsightsGetDetailsResponse;
struct FInsightsInsightsGetLimitsResponse;
struct FInsightsInsightsGetOperationStatusRequest;
struct FInsightsInsightsGetOperationStatusResponse;
struct FInsightsInsightsGetPendingOperationsRequest;
struct FInsightsInsightsGetPendingOperationsResponse;
struct FInsightsInsightsOperationResponse;
struct FInsightsInsightsSetPerformanceRequest;
struct FInsightsInsightsSetStorageRetentionRequest;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabInsightsAPI_generated_h
#error "PlayFabInsightsAPI.generated.h already included, missing '#pragma once' in PlayFabInsightsAPI.h"
#endif
#define PLAYFAB_PlayFabInsightsAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabInsightsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabInsightsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_62_DELEGATE \
static void FDelegateOnSuccessGetDetails_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetDetails, FInsightsInsightsGetDetailsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_78_DELEGATE \
static void FDelegateOnSuccessGetLimits_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLimits, FInsightsInsightsGetLimitsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_94_DELEGATE \
static void FDelegateOnSuccessGetOperationStatus_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetOperationStatus, FInsightsInsightsGetOperationStatusResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_107_DELEGATE \
static void FDelegateOnSuccessGetPendingOperations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPendingOperations, FInsightsInsightsGetPendingOperationsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_120_DELEGATE \
static void FDelegateOnSuccessSetPerformance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPerformance, FInsightsInsightsOperationResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_133_DELEGATE \
static void FDelegateOnSuccessSetStorageRetention_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetStorageRetention, FInsightsInsightsOperationResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperSetStorageRetention); \
	DECLARE_FUNCTION(execSetStorageRetention); \
	DECLARE_FUNCTION(execHelperSetPerformance); \
	DECLARE_FUNCTION(execSetPerformance); \
	DECLARE_FUNCTION(execHelperGetPendingOperations); \
	DECLARE_FUNCTION(execGetPendingOperations); \
	DECLARE_FUNCTION(execHelperGetOperationStatus); \
	DECLARE_FUNCTION(execGetOperationStatus); \
	DECLARE_FUNCTION(execHelperGetLimits); \
	DECLARE_FUNCTION(execGetLimits); \
	DECLARE_FUNCTION(execHelperGetDetails); \
	DECLARE_FUNCTION(execGetDetails);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabInsightsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabInsightsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabInsightsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabInsightsAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabInsightsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabInsightsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabInsightsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabInsightsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabInsightsAPI(UPlayFabInsightsAPI&&); \
	UPlayFabInsightsAPI(const UPlayFabInsightsAPI&); \
public: \
	NO_API virtual ~UPlayFabInsightsAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabInsightsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
