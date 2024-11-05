// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabAddonAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabAddonAPI;
struct FAddonCreateOrUpdateAppleRequest;
struct FAddonCreateOrUpdateAppleResponse;
struct FAddonCreateOrUpdateFacebookInstantGamesRequest;
struct FAddonCreateOrUpdateFacebookInstantGamesResponse;
struct FAddonCreateOrUpdateFacebookRequest;
struct FAddonCreateOrUpdateFacebookResponse;
struct FAddonCreateOrUpdateGoogleRequest;
struct FAddonCreateOrUpdateGoogleResponse;
struct FAddonCreateOrUpdateKongregateRequest;
struct FAddonCreateOrUpdateKongregateResponse;
struct FAddonCreateOrUpdateNintendoRequest;
struct FAddonCreateOrUpdateNintendoResponse;
struct FAddonCreateOrUpdatePSNRequest;
struct FAddonCreateOrUpdatePSNResponse;
struct FAddonCreateOrUpdateSteamRequest;
struct FAddonCreateOrUpdateSteamResponse;
struct FAddonCreateOrUpdateTwitchRequest;
struct FAddonCreateOrUpdateTwitchResponse;
struct FAddonDeleteAppleRequest;
struct FAddonDeleteAppleResponse;
struct FAddonDeleteFacebookInstantGamesRequest;
struct FAddonDeleteFacebookInstantGamesResponse;
struct FAddonDeleteFacebookRequest;
struct FAddonDeleteFacebookResponse;
struct FAddonDeleteGoogleRequest;
struct FAddonDeleteGoogleResponse;
struct FAddonDeleteKongregateRequest;
struct FAddonDeleteKongregateResponse;
struct FAddonDeleteNintendoRequest;
struct FAddonDeleteNintendoResponse;
struct FAddonDeletePSNRequest;
struct FAddonDeletePSNResponse;
struct FAddonDeleteSteamRequest;
struct FAddonDeleteSteamResponse;
struct FAddonDeleteTwitchRequest;
struct FAddonDeleteTwitchResponse;
struct FAddonGetAppleRequest;
struct FAddonGetAppleResponse;
struct FAddonGetFacebookInstantGamesRequest;
struct FAddonGetFacebookInstantGamesResponse;
struct FAddonGetFacebookRequest;
struct FAddonGetFacebookResponse;
struct FAddonGetGoogleRequest;
struct FAddonGetGoogleResponse;
struct FAddonGetKongregateRequest;
struct FAddonGetKongregateResponse;
struct FAddonGetNintendoRequest;
struct FAddonGetNintendoResponse;
struct FAddonGetPSNRequest;
struct FAddonGetPSNResponse;
struct FAddonGetSteamRequest;
struct FAddonGetSteamResponse;
struct FAddonGetTwitchRequest;
struct FAddonGetTwitchResponse;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabAddonAPI_generated_h
#error "PlayFabAddonAPI.generated.h already included, missing '#pragma once' in PlayFabAddonAPI.h"
#endif
#define PLAYFAB_PlayFabAddonAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabAddonRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabAddonRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_62_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdateApple_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdateApple, FAddonCreateOrUpdateAppleResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_75_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdateFacebook_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdateFacebook, FAddonCreateOrUpdateFacebookResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_88_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdateFacebookInstantGames_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdateFacebookInstantGames, FAddonCreateOrUpdateFacebookInstantGamesResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_101_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdateGoogle_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdateGoogle, FAddonCreateOrUpdateGoogleResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_114_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdateKongregate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdateKongregate, FAddonCreateOrUpdateKongregateResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_127_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdateNintendo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdateNintendo, FAddonCreateOrUpdateNintendoResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_140_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdatePSN_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdatePSN, FAddonCreateOrUpdatePSNResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_153_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdateSteam_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdateSteam, FAddonCreateOrUpdateSteamResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_166_DELEGATE \
static void FDelegateOnSuccessCreateOrUpdateTwitch_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateOrUpdateTwitch, FAddonCreateOrUpdateTwitchResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_179_DELEGATE \
static void FDelegateOnSuccessDeleteApple_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteApple, FAddonDeleteAppleResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_192_DELEGATE \
static void FDelegateOnSuccessDeleteFacebook_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteFacebook, FAddonDeleteFacebookResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_205_DELEGATE \
static void FDelegateOnSuccessDeleteFacebookInstantGames_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteFacebookInstantGames, FAddonDeleteFacebookInstantGamesResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_218_DELEGATE \
static void FDelegateOnSuccessDeleteGoogle_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteGoogle, FAddonDeleteGoogleResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_231_DELEGATE \
static void FDelegateOnSuccessDeleteKongregate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteKongregate, FAddonDeleteKongregateResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_244_DELEGATE \
static void FDelegateOnSuccessDeleteNintendo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteNintendo, FAddonDeleteNintendoResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_257_DELEGATE \
static void FDelegateOnSuccessDeletePSN_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeletePSN, FAddonDeletePSNResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_270_DELEGATE \
static void FDelegateOnSuccessDeleteSteam_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteSteam, FAddonDeleteSteamResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_283_DELEGATE \
static void FDelegateOnSuccessDeleteTwitch_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteTwitch, FAddonDeleteTwitchResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_296_DELEGATE \
static void FDelegateOnSuccessGetApple_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetApple, FAddonGetAppleResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_309_DELEGATE \
static void FDelegateOnSuccessGetFacebook_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFacebook, FAddonGetFacebookResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_322_DELEGATE \
static void FDelegateOnSuccessGetFacebookInstantGames_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFacebookInstantGames, FAddonGetFacebookInstantGamesResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_335_DELEGATE \
static void FDelegateOnSuccessGetGoogle_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGoogle, FAddonGetGoogleResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_348_DELEGATE \
static void FDelegateOnSuccessGetKongregate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetKongregate, FAddonGetKongregateResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_361_DELEGATE \
static void FDelegateOnSuccessGetNintendo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetNintendo, FAddonGetNintendoResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_374_DELEGATE \
static void FDelegateOnSuccessGetPSN_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPSN, FAddonGetPSNResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_387_DELEGATE \
static void FDelegateOnSuccessGetSteam_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetSteam, FAddonGetSteamResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_400_DELEGATE \
static void FDelegateOnSuccessGetTwitch_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTwitch, FAddonGetTwitchResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperGetTwitch); \
	DECLARE_FUNCTION(execGetTwitch); \
	DECLARE_FUNCTION(execHelperGetSteam); \
	DECLARE_FUNCTION(execGetSteam); \
	DECLARE_FUNCTION(execHelperGetPSN); \
	DECLARE_FUNCTION(execGetPSN); \
	DECLARE_FUNCTION(execHelperGetNintendo); \
	DECLARE_FUNCTION(execGetNintendo); \
	DECLARE_FUNCTION(execHelperGetKongregate); \
	DECLARE_FUNCTION(execGetKongregate); \
	DECLARE_FUNCTION(execHelperGetGoogle); \
	DECLARE_FUNCTION(execGetGoogle); \
	DECLARE_FUNCTION(execHelperGetFacebookInstantGames); \
	DECLARE_FUNCTION(execGetFacebookInstantGames); \
	DECLARE_FUNCTION(execHelperGetFacebook); \
	DECLARE_FUNCTION(execGetFacebook); \
	DECLARE_FUNCTION(execHelperGetApple); \
	DECLARE_FUNCTION(execGetApple); \
	DECLARE_FUNCTION(execHelperDeleteTwitch); \
	DECLARE_FUNCTION(execDeleteTwitch); \
	DECLARE_FUNCTION(execHelperDeleteSteam); \
	DECLARE_FUNCTION(execDeleteSteam); \
	DECLARE_FUNCTION(execHelperDeletePSN); \
	DECLARE_FUNCTION(execDeletePSN); \
	DECLARE_FUNCTION(execHelperDeleteNintendo); \
	DECLARE_FUNCTION(execDeleteNintendo); \
	DECLARE_FUNCTION(execHelperDeleteKongregate); \
	DECLARE_FUNCTION(execDeleteKongregate); \
	DECLARE_FUNCTION(execHelperDeleteGoogle); \
	DECLARE_FUNCTION(execDeleteGoogle); \
	DECLARE_FUNCTION(execHelperDeleteFacebookInstantGames); \
	DECLARE_FUNCTION(execDeleteFacebookInstantGames); \
	DECLARE_FUNCTION(execHelperDeleteFacebook); \
	DECLARE_FUNCTION(execDeleteFacebook); \
	DECLARE_FUNCTION(execHelperDeleteApple); \
	DECLARE_FUNCTION(execDeleteApple); \
	DECLARE_FUNCTION(execHelperCreateOrUpdateTwitch); \
	DECLARE_FUNCTION(execCreateOrUpdateTwitch); \
	DECLARE_FUNCTION(execHelperCreateOrUpdateSteam); \
	DECLARE_FUNCTION(execCreateOrUpdateSteam); \
	DECLARE_FUNCTION(execHelperCreateOrUpdatePSN); \
	DECLARE_FUNCTION(execCreateOrUpdatePSN); \
	DECLARE_FUNCTION(execHelperCreateOrUpdateNintendo); \
	DECLARE_FUNCTION(execCreateOrUpdateNintendo); \
	DECLARE_FUNCTION(execHelperCreateOrUpdateKongregate); \
	DECLARE_FUNCTION(execCreateOrUpdateKongregate); \
	DECLARE_FUNCTION(execHelperCreateOrUpdateGoogle); \
	DECLARE_FUNCTION(execCreateOrUpdateGoogle); \
	DECLARE_FUNCTION(execHelperCreateOrUpdateFacebookInstantGames); \
	DECLARE_FUNCTION(execCreateOrUpdateFacebookInstantGames); \
	DECLARE_FUNCTION(execHelperCreateOrUpdateFacebook); \
	DECLARE_FUNCTION(execCreateOrUpdateFacebook); \
	DECLARE_FUNCTION(execHelperCreateOrUpdateApple); \
	DECLARE_FUNCTION(execCreateOrUpdateApple);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabAddonAPI(); \
	friend struct Z_Construct_UClass_UPlayFabAddonAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAddonAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAddonAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAddonAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAddonAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAddonAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAddonAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabAddonAPI(UPlayFabAddonAPI&&); \
	UPlayFabAddonAPI(const UPlayFabAddonAPI&); \
public: \
	NO_API virtual ~UPlayFabAddonAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAddonAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
