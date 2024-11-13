// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabJsonValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabJsonObject;
class UPlayFabJsonValue;
#ifdef PLAYFAB_PlayFabJsonValue_generated_h
#error "PlayFabJsonValue.generated.h already included, missing '#pragma once' in PlayFabJsonValue.h"
#endif
#define PLAYFAB_PlayFabJsonValue_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_44_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsNumber); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetTypeString); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabJsonValue(); \
	friend struct Z_Construct_UClass_UPlayFabJsonValue_Statics; \
public: \
	DECLARE_CLASS(UPlayFabJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabJsonValue)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabJsonValue(UPlayFabJsonValue&&); \
	UPlayFabJsonValue(const UPlayFabJsonValue&); \
public: \
	NO_API virtual ~UPlayFabJsonValue();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_41_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_44_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_44_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabJsonValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h


#define FOREACH_ENUM_EPFJSON(op) \
	op(EPFJson::None) \
	op(EPFJson::Null) \
	op(EPFJson::String) \
	op(EPFJson::Number) \
	op(EPFJson::Boolean) \
	op(EPFJson::Array) \
	op(EPFJson::Object) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
