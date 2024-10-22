// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabEventsModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FEventsCreateTelemetryKeyResponse;
struct FEventsDeleteTelemetryKeyResponse;
struct FEventsGetTelemetryKeyResponse;
struct FEventsListTelemetryKeysResponse;
struct FEventsSetTelemetryKeyActiveResponse;
struct FEventsWriteEventsResponse;
#ifdef PLAYFAB_PlayFabEventsModelDecoder_generated_h
#error "PlayFabEventsModelDecoder.generated.h already included, missing '#pragma once' in PlayFabEventsModelDecoder.h"
#endif
#define PLAYFAB_PlayFabEventsModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeWriteEventsResponseResponse); \
	DECLARE_FUNCTION(execdecodeSetTelemetryKeyActiveResponseResponse); \
	DECLARE_FUNCTION(execdecodeListTelemetryKeysResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTelemetryKeyResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTelemetryKeyResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateTelemetryKeyResponseResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabEventsModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEventsModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEventsModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEventsModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabEventsModelDecoder(UPlayFabEventsModelDecoder&&); \
	UPlayFabEventsModelDecoder(const UPlayFabEventsModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEventsModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEventsModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEventsModelDecoder) \
	NO_API virtual ~UPlayFabEventsModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabEventsModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
