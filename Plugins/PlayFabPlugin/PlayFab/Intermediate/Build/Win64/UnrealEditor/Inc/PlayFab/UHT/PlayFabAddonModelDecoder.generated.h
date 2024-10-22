// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabAddonModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FAddonCreateOrUpdateAppleResponse;
struct FAddonCreateOrUpdateFacebookInstantGamesResponse;
struct FAddonCreateOrUpdateFacebookResponse;
struct FAddonCreateOrUpdateGoogleResponse;
struct FAddonCreateOrUpdateKongregateResponse;
struct FAddonCreateOrUpdateNintendoResponse;
struct FAddonCreateOrUpdatePSNResponse;
struct FAddonCreateOrUpdateSteamResponse;
struct FAddonCreateOrUpdateTwitchResponse;
struct FAddonDeleteAppleResponse;
struct FAddonDeleteFacebookInstantGamesResponse;
struct FAddonDeleteFacebookResponse;
struct FAddonDeleteGoogleResponse;
struct FAddonDeleteKongregateResponse;
struct FAddonDeleteNintendoResponse;
struct FAddonDeletePSNResponse;
struct FAddonDeleteSteamResponse;
struct FAddonDeleteTwitchResponse;
struct FAddonGetAppleResponse;
struct FAddonGetFacebookInstantGamesResponse;
struct FAddonGetFacebookResponse;
struct FAddonGetGoogleResponse;
struct FAddonGetKongregateResponse;
struct FAddonGetNintendoResponse;
struct FAddonGetPSNResponse;
struct FAddonGetSteamResponse;
struct FAddonGetTwitchResponse;
#ifdef PLAYFAB_PlayFabAddonModelDecoder_generated_h
#error "PlayFabAddonModelDecoder.generated.h already included, missing '#pragma once' in PlayFabAddonModelDecoder.h"
#endif
#define PLAYFAB_PlayFabAddonModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeGetTwitchResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetSteamResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPSNResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetNintendoResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetKongregateResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetGoogleResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetFacebookInstantGamesResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetFacebookResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetAppleResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTwitchResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteSteamResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeletePSNResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteNintendoResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteKongregateResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteGoogleResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteFacebookInstantGamesResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteFacebookResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteAppleResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdateTwitchResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdateSteamResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdatePSNResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdateNintendoResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdateKongregateResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdateGoogleResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdateFacebookInstantGamesResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdateFacebookResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateOrUpdateAppleResponseResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabAddonModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabAddonModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAddonModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAddonModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAddonModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabAddonModelDecoder(UPlayFabAddonModelDecoder&&); \
	UPlayFabAddonModelDecoder(const UPlayFabAddonModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAddonModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAddonModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAddonModelDecoder) \
	NO_API virtual ~UPlayFabAddonModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAddonModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAddonModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
