// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabProfilesModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FProfilesGetEntityProfileResponse;
struct FProfilesGetEntityProfilesResponse;
struct FProfilesGetGlobalPolicyResponse;
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;
struct FProfilesGetTitlePlayersFromProviderIDsResponse;
struct FProfilesSetDisplayNameResponse;
struct FProfilesSetEntityProfilePolicyResponse;
struct FProfilesSetGlobalPolicyResponse;
struct FProfilesSetProfileLanguageResponse;
#ifdef PLAYFAB_PlayFabProfilesModelDecoder_generated_h
#error "PlayFabProfilesModelDecoder.generated.h already included, missing '#pragma once' in PlayFabProfilesModelDecoder.h"
#endif
#define PLAYFAB_PlayFabProfilesModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeSetEntityProfilePolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeSetProfileLanguageResponseResponse); \
	DECLARE_FUNCTION(execdecodeSetGlobalPolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeSetDisplayNameResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitlePlayersFromProviderIDsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityProfilesResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityProfileResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetGlobalPolicyResponseResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabProfilesModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabProfilesModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProfilesModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProfilesModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabProfilesModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabProfilesModelDecoder(UPlayFabProfilesModelDecoder&&); \
	UPlayFabProfilesModelDecoder(const UPlayFabProfilesModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProfilesModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProfilesModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabProfilesModelDecoder) \
	NO_API virtual ~UPlayFabProfilesModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabProfilesModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
