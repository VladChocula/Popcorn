// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabEventsAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabEventsAPI;
struct FEventsCreateTelemetryKeyRequest;
struct FEventsCreateTelemetryKeyResponse;
struct FEventsDeleteTelemetryKeyRequest;
struct FEventsDeleteTelemetryKeyResponse;
struct FEventsGetTelemetryKeyRequest;
struct FEventsGetTelemetryKeyResponse;
struct FEventsListTelemetryKeysRequest;
struct FEventsListTelemetryKeysResponse;
struct FEventsSetTelemetryKeyActiveRequest;
struct FEventsSetTelemetryKeyActiveResponse;
struct FEventsWriteEventsRequest;
struct FEventsWriteEventsResponse;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabEventsAPI_generated_h
#error "PlayFabEventsAPI.generated.h already included, missing '#pragma once' in PlayFabEventsAPI.h"
#endif
#define PLAYFAB_PlayFabEventsAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabEventsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabEventsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_66_DELEGATE \
static void FDelegateOnSuccessCreateTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateTelemetryKey, FEventsCreateTelemetryKeyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_80_DELEGATE \
static void FDelegateOnSuccessDeleteTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteTelemetryKey, FEventsDeleteTelemetryKeyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_94_DELEGATE \
static void FDelegateOnSuccessGetTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTelemetryKey, FEventsGetTelemetryKeyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_108_DELEGATE \
static void FDelegateOnSuccessListTelemetryKeys_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListTelemetryKeys, FEventsListTelemetryKeysResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_122_DELEGATE \
static void FDelegateOnSuccessSetTelemetryKeyActive_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTelemetryKeyActive, FEventsSetTelemetryKeyActiveResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_136_DELEGATE \
static void FDelegateOnSuccessWriteEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteEvents, FEventsWriteEventsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_150_DELEGATE \
static void FDelegateOnSuccessWriteTelemetryEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteTelemetryEvents, FEventsWriteEventsResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperWriteTelemetryEvents); \
	DECLARE_FUNCTION(execWriteTelemetryEventsWithTelemetryKey); \
	DECLARE_FUNCTION(execWriteTelemetryEvents); \
	DECLARE_FUNCTION(execHelperWriteEvents); \
	DECLARE_FUNCTION(execWriteEvents); \
	DECLARE_FUNCTION(execHelperSetTelemetryKeyActive); \
	DECLARE_FUNCTION(execSetTelemetryKeyActive); \
	DECLARE_FUNCTION(execHelperListTelemetryKeys); \
	DECLARE_FUNCTION(execListTelemetryKeys); \
	DECLARE_FUNCTION(execHelperGetTelemetryKey); \
	DECLARE_FUNCTION(execGetTelemetryKey); \
	DECLARE_FUNCTION(execHelperDeleteTelemetryKey); \
	DECLARE_FUNCTION(execDeleteTelemetryKey); \
	DECLARE_FUNCTION(execHelperCreateTelemetryKey); \
	DECLARE_FUNCTION(execCreateTelemetryKey);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabEventsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEventsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEventsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEventsAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEventsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEventsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEventsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEventsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabEventsAPI(UPlayFabEventsAPI&&); \
	UPlayFabEventsAPI(const UPlayFabEventsAPI&); \
public: \
	NO_API virtual ~UPlayFabEventsAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabEventsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
