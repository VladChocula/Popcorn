// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabDataModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FDataAbortFileUploadsResponse;
struct FDataDeleteFilesResponse;
struct FDataFinalizeFileUploadsResponse;
struct FDataGetFilesResponse;
struct FDataGetObjectsResponse;
struct FDataInitiateFileUploadsResponse;
struct FDataSetObjectsResponse;
#ifdef PLAYFAB_PlayFabDataModelDecoder_generated_h
#error "PlayFabDataModelDecoder.generated.h already included, missing '#pragma once' in PlayFabDataModelDecoder.h"
#endif
#define PLAYFAB_PlayFabDataModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeSetObjectsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetObjectsResponseResponse); \
	DECLARE_FUNCTION(execdecodeInitiateFileUploadsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetFilesResponseResponse); \
	DECLARE_FUNCTION(execdecodeFinalizeFileUploadsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteFilesResponseResponse); \
	DECLARE_FUNCTION(execdecodeAbortFileUploadsResponseResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabDataModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabDataModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabDataModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabDataModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabDataModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabDataModelDecoder(UPlayFabDataModelDecoder&&); \
	UPlayFabDataModelDecoder(const UPlayFabDataModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabDataModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabDataModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabDataModelDecoder) \
	NO_API virtual ~UPlayFabDataModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabDataModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
