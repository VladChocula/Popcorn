// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabExperimentationModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FExperimentationCreateExclusionGroupResult;
struct FExperimentationCreateExperimentResult;
struct FExperimentationEmptyResponse;
struct FExperimentationGetExclusionGroupsResult;
struct FExperimentationGetExclusionGroupTrafficResult;
struct FExperimentationGetExperimentsResult;
struct FExperimentationGetLatestScorecardResult;
struct FExperimentationGetTreatmentAssignmentResult;
#ifdef PLAYFAB_PlayFabExperimentationModelDecoder_generated_h
#error "PlayFabExperimentationModelDecoder.generated.h already included, missing '#pragma once' in PlayFabExperimentationModelDecoder.h"
#endif
#define PLAYFAB_PlayFabExperimentationModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeGetTreatmentAssignmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetLatestScorecardResultResponse); \
	DECLARE_FUNCTION(execdecodeGetExperimentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetExclusionGroupTrafficResultResponse); \
	DECLARE_FUNCTION(execdecodeGetExclusionGroupsResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateExperimentResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateExclusionGroupResultResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabExperimentationModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabExperimentationModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabExperimentationModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabExperimentationModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabExperimentationModelDecoder(UPlayFabExperimentationModelDecoder&&); \
	UPlayFabExperimentationModelDecoder(const UPlayFabExperimentationModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabExperimentationModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabExperimentationModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabExperimentationModelDecoder) \
	NO_API virtual ~UPlayFabExperimentationModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabExperimentationModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
