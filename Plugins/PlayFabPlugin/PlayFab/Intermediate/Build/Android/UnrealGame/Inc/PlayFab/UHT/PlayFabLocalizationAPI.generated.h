// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabLocalizationAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabLocalizationAPI;
struct FLocalizationGetLanguageListRequest;
struct FLocalizationGetLanguageListResponse;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabLocalizationAPI_generated_h
#error "PlayFabLocalizationAPI.generated.h already included, missing '#pragma once' in PlayFabLocalizationAPI.h"
#endif
#define PLAYFAB_PlayFabLocalizationAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabLocalizationRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabLocalizationRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_62_DELEGATE \
static void FDelegateOnSuccessGetLanguageList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLanguageList, FLocalizationGetLanguageListResponse result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperGetLanguageList); \
	DECLARE_FUNCTION(execGetLanguageList);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabLocalizationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabLocalizationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabLocalizationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabLocalizationAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabLocalizationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabLocalizationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabLocalizationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabLocalizationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabLocalizationAPI(UPlayFabLocalizationAPI&&); \
	UPlayFabLocalizationAPI(const UPlayFabLocalizationAPI&); \
public: \
	NO_API virtual ~UPlayFabLocalizationAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabLocalizationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
