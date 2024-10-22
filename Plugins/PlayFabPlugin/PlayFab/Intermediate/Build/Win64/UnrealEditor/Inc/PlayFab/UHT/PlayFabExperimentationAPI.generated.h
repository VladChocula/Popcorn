// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabExperimentationAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabExperimentationAPI;
struct FExperimentationCreateExclusionGroupRequest;
struct FExperimentationCreateExclusionGroupResult;
struct FExperimentationCreateExperimentRequest;
struct FExperimentationCreateExperimentResult;
struct FExperimentationDeleteExclusionGroupRequest;
struct FExperimentationDeleteExperimentRequest;
struct FExperimentationEmptyResponse;
struct FExperimentationGetExclusionGroupsRequest;
struct FExperimentationGetExclusionGroupsResult;
struct FExperimentationGetExclusionGroupTrafficRequest;
struct FExperimentationGetExclusionGroupTrafficResult;
struct FExperimentationGetExperimentsRequest;
struct FExperimentationGetExperimentsResult;
struct FExperimentationGetLatestScorecardRequest;
struct FExperimentationGetLatestScorecardResult;
struct FExperimentationGetTreatmentAssignmentRequest;
struct FExperimentationGetTreatmentAssignmentResult;
struct FExperimentationStartExperimentRequest;
struct FExperimentationStopExperimentRequest;
struct FExperimentationUpdateExclusionGroupRequest;
struct FExperimentationUpdateExperimentRequest;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabExperimentationAPI_generated_h
#error "PlayFabExperimentationAPI.generated.h already included, missing '#pragma once' in PlayFabExperimentationAPI.h"
#endif
#define PLAYFAB_PlayFabExperimentationAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabExperimentationRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabExperimentationRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_62_DELEGATE \
static void FDelegateOnSuccessCreateExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateExclusionGroup, FExperimentationCreateExclusionGroupResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_75_DELEGATE \
static void FDelegateOnSuccessCreateExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateExperiment, FExperimentationCreateExperimentResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_88_DELEGATE \
static void FDelegateOnSuccessDeleteExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteExclusionGroup, FExperimentationEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_101_DELEGATE \
static void FDelegateOnSuccessDeleteExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteExperiment, FExperimentationEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_114_DELEGATE \
static void FDelegateOnSuccessGetExclusionGroups_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExclusionGroups, FExperimentationGetExclusionGroupsResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_127_DELEGATE \
static void FDelegateOnSuccessGetExclusionGroupTraffic_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExclusionGroupTraffic, FExperimentationGetExclusionGroupTrafficResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_140_DELEGATE \
static void FDelegateOnSuccessGetExperiments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExperiments, FExperimentationGetExperimentsResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_153_DELEGATE \
static void FDelegateOnSuccessGetLatestScorecard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLatestScorecard, FExperimentationGetLatestScorecardResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_166_DELEGATE \
static void FDelegateOnSuccessGetTreatmentAssignment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTreatmentAssignment, FExperimentationGetTreatmentAssignmentResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_179_DELEGATE \
static void FDelegateOnSuccessStartExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStartExperiment, FExperimentationEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_192_DELEGATE \
static void FDelegateOnSuccessStopExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStopExperiment, FExperimentationEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_205_DELEGATE \
static void FDelegateOnSuccessUpdateExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateExclusionGroup, FExperimentationEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_218_DELEGATE \
static void FDelegateOnSuccessUpdateExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateExperiment, FExperimentationEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperUpdateExperiment); \
	DECLARE_FUNCTION(execUpdateExperiment); \
	DECLARE_FUNCTION(execHelperUpdateExclusionGroup); \
	DECLARE_FUNCTION(execUpdateExclusionGroup); \
	DECLARE_FUNCTION(execHelperStopExperiment); \
	DECLARE_FUNCTION(execStopExperiment); \
	DECLARE_FUNCTION(execHelperStartExperiment); \
	DECLARE_FUNCTION(execStartExperiment); \
	DECLARE_FUNCTION(execHelperGetTreatmentAssignment); \
	DECLARE_FUNCTION(execGetTreatmentAssignment); \
	DECLARE_FUNCTION(execHelperGetLatestScorecard); \
	DECLARE_FUNCTION(execGetLatestScorecard); \
	DECLARE_FUNCTION(execHelperGetExperiments); \
	DECLARE_FUNCTION(execGetExperiments); \
	DECLARE_FUNCTION(execHelperGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execHelperGetExclusionGroups); \
	DECLARE_FUNCTION(execGetExclusionGroups); \
	DECLARE_FUNCTION(execHelperDeleteExperiment); \
	DECLARE_FUNCTION(execDeleteExperiment); \
	DECLARE_FUNCTION(execHelperDeleteExclusionGroup); \
	DECLARE_FUNCTION(execDeleteExclusionGroup); \
	DECLARE_FUNCTION(execHelperCreateExperiment); \
	DECLARE_FUNCTION(execCreateExperiment); \
	DECLARE_FUNCTION(execHelperCreateExclusionGroup); \
	DECLARE_FUNCTION(execCreateExclusionGroup);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabExperimentationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabExperimentationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabExperimentationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabExperimentationAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabExperimentationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabExperimentationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabExperimentationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabExperimentationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabExperimentationAPI(UPlayFabExperimentationAPI&&); \
	UPlayFabExperimentationAPI(const UPlayFabExperimentationAPI&); \
public: \
	NO_API virtual ~UPlayFabExperimentationAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabExperimentationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
