// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabLeaderboardsModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FLeaderboardsDeleteStatisticsResponse;
struct FLeaderboardsEmptyResponse;
struct FLeaderboardsGetEntityLeaderboardResponse;
struct FLeaderboardsGetLeaderboardDefinitionResponse;
struct FLeaderboardsGetStatisticDefinitionResponse;
struct FLeaderboardsGetStatisticDefinitionsResponse;
struct FLeaderboardsGetStatisticsForEntitiesResponse;
struct FLeaderboardsGetStatisticsResponse;
struct FLeaderboardsIncrementLeaderboardVersionResponse;
struct FLeaderboardsIncrementStatisticVersionResponse;
struct FLeaderboardsListLeaderboardDefinitionsResponse;
struct FLeaderboardsListStatisticDefinitionsResponse;
struct FLeaderboardsUpdateStatisticsResponse;
#ifdef PLAYFAB_PlayFabLeaderboardsModelDecoder_generated_h
#error "PlayFabLeaderboardsModelDecoder.generated.h already included, missing '#pragma once' in PlayFabLeaderboardsModelDecoder.h"
#endif
#define PLAYFAB_PlayFabLeaderboardsModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeUpdateStatisticsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListStatisticDefinitionsResponseResponse); \
	DECLARE_FUNCTION(execdecodeIncrementStatisticVersionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetStatisticsForEntitiesResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetStatisticsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetStatisticDefinitionsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetStatisticDefinitionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityLeaderboardResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteStatisticsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListLeaderboardDefinitionsResponseResponse); \
	DECLARE_FUNCTION(execdecodeIncrementLeaderboardVersionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardDefinitionResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabLeaderboardsModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabLeaderboardsModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabLeaderboardsModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabLeaderboardsModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabLeaderboardsModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabLeaderboardsModelDecoder(UPlayFabLeaderboardsModelDecoder&&); \
	UPlayFabLeaderboardsModelDecoder(const UPlayFabLeaderboardsModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabLeaderboardsModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabLeaderboardsModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabLeaderboardsModelDecoder) \
	NO_API virtual ~UPlayFabLeaderboardsModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabLeaderboardsModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLeaderboardsModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
