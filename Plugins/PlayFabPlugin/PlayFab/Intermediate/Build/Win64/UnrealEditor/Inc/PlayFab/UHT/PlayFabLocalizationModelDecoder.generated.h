// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabLocalizationModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FLocalizationGetLanguageListResponse;
#ifdef PLAYFAB_PlayFabLocalizationModelDecoder_generated_h
#error "PlayFabLocalizationModelDecoder.generated.h already included, missing '#pragma once' in PlayFabLocalizationModelDecoder.h"
#endif
#define PLAYFAB_PlayFabLocalizationModelDecoder_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execdecodeGetLanguageListResponseResponse);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabLocalizationModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabLocalizationModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabLocalizationModelDecoder)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabLocalizationModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabLocalizationModelDecoder(UPlayFabLocalizationModelDecoder&&); \
	UPlayFabLocalizationModelDecoder(const UPlayFabLocalizationModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabLocalizationModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabLocalizationModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabLocalizationModelDecoder) \
	NO_API virtual ~UPlayFabLocalizationModelDecoder();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_23_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabLocalizationModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
