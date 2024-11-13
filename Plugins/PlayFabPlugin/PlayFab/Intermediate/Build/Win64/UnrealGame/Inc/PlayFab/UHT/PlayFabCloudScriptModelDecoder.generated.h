// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabCloudScriptModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FCloudScriptEmptyResult;
struct FCloudScriptExecuteCloudScriptResult;
struct FCloudScriptExecuteFunctionResult;
struct FCloudScriptGetFunctionResult;
struct FCloudScriptListEventHubFunctionsResult;
struct FCloudScriptListFunctionsResult;
struct FCloudScriptListHttpFunctionsResult;
struct FCloudScriptListQueuedFunctionsResult;
#ifdef PLAYFAB_PlayFabCloudScriptModelDecoder_generated_h
#error "PlayFabCloudScriptModelDecoder.generated.h already included, missing '#pragma once' in PlayFabCloudScriptModelDecoder.h"
#endif
#define PLAYFAB_PlayFabCloudScriptModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeEmptyResultResponse); \
	DECLARE_FUNCTION(execdecodeListQueuedFunctionsResultResponse); \
	DECLARE_FUNCTION(execdecodeListHttpFunctionsResultResponse); \
	DECLARE_FUNCTION(execdecodeListFunctionsResultResponse); \
	DECLARE_FUNCTION(execdecodeListEventHubFunctionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetFunctionResultResponse); \
	DECLARE_FUNCTION(execdecodeExecuteFunctionResultResponse); \
	DECLARE_FUNCTION(execdecodeExecuteCloudScriptResultResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabCloudScriptModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabCloudScriptModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabCloudScriptModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabCloudScriptModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabCloudScriptModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabCloudScriptModelDecoder(UPlayFabCloudScriptModelDecoder&&); \
	UPlayFabCloudScriptModelDecoder(const UPlayFabCloudScriptModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabCloudScriptModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabCloudScriptModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabCloudScriptModelDecoder) \
	NO_API virtual ~UPlayFabCloudScriptModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabCloudScriptModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
