// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabJsonObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabJsonObject;
class UPlayFabJsonValue;
#ifdef PLAYFAB_PlayFabJsonObject_generated_h
#error "PlayFabJsonObject.generated.h already included, missing '#pragma once' in PlayFabJsonObject.h"
#endif
#define PLAYFAB_PlayFabJsonObject_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetObjectArrayField); \
	DECLARE_FUNCTION(execGetObjectArrayField); \
	DECLARE_FUNCTION(execSetBoolArrayField); \
	DECLARE_FUNCTION(execGetBoolArrayField); \
	DECLARE_FUNCTION(execSetStringArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execSetNumberArrayField); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execSetNumberField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execMergeJsonObject); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execSetFieldNull); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execGetField); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execDecodeJson); \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execConstructJsonObject);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabJsonObject(); \
	friend struct Z_Construct_UClass_UPlayFabJsonObject_Statics; \
public: \
	DECLARE_CLASS(UPlayFabJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabJsonObject)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabJsonObject(UPlayFabJsonObject&&); \
	UPlayFabJsonObject(const UPlayFabJsonObject&); \
public: \
	NO_API virtual ~UPlayFabJsonObject();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h_25_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h_28_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h_28_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
