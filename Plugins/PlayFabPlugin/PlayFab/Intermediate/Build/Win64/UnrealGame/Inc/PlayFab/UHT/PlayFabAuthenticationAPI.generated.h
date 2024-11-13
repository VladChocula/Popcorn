// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabAuthenticationAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabAuthenticationAPI;
struct FAuthenticationAuthenticateCustomIdRequest;
struct FAuthenticationAuthenticateCustomIdResult;
struct FAuthenticationDeleteRequest;
struct FAuthenticationEmptyResponse;
struct FAuthenticationGetEntityTokenRequest;
struct FAuthenticationGetEntityTokenResponse;
struct FAuthenticationValidateEntityTokenRequest;
struct FAuthenticationValidateEntityTokenResponse;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabAuthenticationAPI_generated_h
#error "PlayFabAuthenticationAPI.generated.h already included, missing '#pragma once' in PlayFabAuthenticationAPI.h"
#endif
#define PLAYFAB_PlayFabAuthenticationAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabAuthenticationRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabAuthenticationRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_62_DELEGATE \
static void FDelegateOnSuccessAuthenticateGameServerWithCustomId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAuthenticateGameServerWithCustomId, FAuthenticationAuthenticateCustomIdResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_75_DELEGATE \
static void FDelegateOnSuccessDelete_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDelete, FAuthenticationEmptyResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_88_DELEGATE \
static void FDelegateOnSuccessGetEntityToken_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetEntityToken, FAuthenticationGetEntityTokenResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_104_DELEGATE \
static void FDelegateOnSuccessValidateEntityToken_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessValidateEntityToken, FAuthenticationValidateEntityTokenResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperValidateEntityToken); \
	DECLARE_FUNCTION(execValidateEntityToken); \
	DECLARE_FUNCTION(execHelperGetEntityToken); \
	DECLARE_FUNCTION(execGetEntityToken); \
	DECLARE_FUNCTION(execHelperDelete); \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execHelperAuthenticateGameServerWithCustomId); \
	DECLARE_FUNCTION(execAuthenticateGameServerWithCustomId);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabAuthenticationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAuthenticationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAuthenticationAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAuthenticationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAuthenticationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAuthenticationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAuthenticationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabAuthenticationAPI(UPlayFabAuthenticationAPI&&); \
	UPlayFabAuthenticationAPI(const UPlayFabAuthenticationAPI&); \
public: \
	NO_API virtual ~UPlayFabAuthenticationAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAuthenticationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
