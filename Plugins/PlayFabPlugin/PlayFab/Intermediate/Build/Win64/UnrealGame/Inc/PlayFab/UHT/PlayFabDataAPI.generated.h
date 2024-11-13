// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabDataAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabDataAPI;
struct FDataAbortFileUploadsRequest;
struct FDataAbortFileUploadsResponse;
struct FDataDeleteFilesRequest;
struct FDataDeleteFilesResponse;
struct FDataFinalizeFileUploadsRequest;
struct FDataFinalizeFileUploadsResponse;
struct FDataGetFilesRequest;
struct FDataGetFilesResponse;
struct FDataGetObjectsRequest;
struct FDataGetObjectsResponse;
struct FDataInitiateFileUploadsRequest;
struct FDataInitiateFileUploadsResponse;
struct FDataSetObjectsRequest;
struct FDataSetObjectsResponse;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabDataAPI_generated_h
#error "PlayFabDataAPI.generated.h already included, missing '#pragma once' in PlayFabDataAPI.h"
#endif
#define PLAYFAB_PlayFabDataAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabDataRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabDataRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_62_DELEGATE \
static void FDelegateOnSuccessAbortFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAbortFileUploads, FDataAbortFileUploadsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_75_DELEGATE \
static void FDelegateOnSuccessDeleteFiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteFiles, FDataDeleteFilesResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_88_DELEGATE \
static void FDelegateOnSuccessFinalizeFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessFinalizeFileUploads, FDataFinalizeFileUploadsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_101_DELEGATE \
static void FDelegateOnSuccessGetFiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFiles, FDataGetFilesResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_114_DELEGATE \
static void FDelegateOnSuccessInitiateFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessInitiateFileUploads, FDataInitiateFileUploadsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_131_DELEGATE \
static void FDelegateOnSuccessGetObjects_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetObjects, FDataGetObjectsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_144_DELEGATE \
static void FDelegateOnSuccessSetObjects_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetObjects, FDataSetObjectsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperSetObjects); \
	DECLARE_FUNCTION(execSetObjects); \
	DECLARE_FUNCTION(execHelperGetObjects); \
	DECLARE_FUNCTION(execGetObjects); \
	DECLARE_FUNCTION(execHelperInitiateFileUploads); \
	DECLARE_FUNCTION(execInitiateFileUploads); \
	DECLARE_FUNCTION(execHelperGetFiles); \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execHelperFinalizeFileUploads); \
	DECLARE_FUNCTION(execFinalizeFileUploads); \
	DECLARE_FUNCTION(execHelperDeleteFiles); \
	DECLARE_FUNCTION(execDeleteFiles); \
	DECLARE_FUNCTION(execHelperAbortFileUploads); \
	DECLARE_FUNCTION(execAbortFileUploads);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabDataAPI(); \
	friend struct Z_Construct_UClass_UPlayFabDataAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabDataAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabDataAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabDataAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabDataAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabDataAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabDataAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabDataAPI(UPlayFabDataAPI&&); \
	UPlayFabDataAPI(const UPlayFabDataAPI&); \
public: \
	NO_API virtual ~UPlayFabDataAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabDataAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
