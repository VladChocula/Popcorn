// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabProgressionModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FProgressionDeleteStatisticsResponse;
struct FProgressionEmptyResponse;
struct FProgressionGetEntityLeaderboardResponse;
struct FProgressionGetLeaderboardDefinitionResponse;
struct FProgressionGetStatisticDefinitionResponse;
struct FProgressionGetStatisticsForEntitiesResponse;
struct FProgressionGetStatisticsResponse;
struct FProgressionIncrementLeaderboardVersionResponse;
struct FProgressionIncrementStatisticVersionResponse;
struct FProgressionListLeaderboardDefinitionsResponse;
struct FProgressionListStatisticDefinitionsResponse;
struct FProgressionUpdateStatisticsResponse;
#ifdef PLAYFAB_PlayFabProgressionModelDecoder_generated_h
#error "PlayFabProgressionModelDecoder.generated.h already included, missing '#pragma once' in PlayFabProgressionModelDecoder.h"
#endif
#define PLAYFAB_PlayFabProgressionModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeUpdateStatisticsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListStatisticDefinitionsResponseResponse); \
	DECLARE_FUNCTION(execdecodeIncrementStatisticVersionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetStatisticsForEntitiesResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetStatisticsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetStatisticDefinitionResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteStatisticsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListLeaderboardDefinitionsResponseResponse); \
	DECLARE_FUNCTION(execdecodeIncrementLeaderboardVersionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetLeaderboardDefinitionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityLeaderboardResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabProgressionModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabProgressionModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProgressionModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProgressionModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabProgressionModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabProgressionModelDecoder(UPlayFabProgressionModelDecoder&&); \
	UPlayFabProgressionModelDecoder(const UPlayFabProgressionModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProgressionModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProgressionModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabProgressionModelDecoder) \
	NO_API virtual ~UPlayFabProgressionModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabProgressionModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProgressionModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
