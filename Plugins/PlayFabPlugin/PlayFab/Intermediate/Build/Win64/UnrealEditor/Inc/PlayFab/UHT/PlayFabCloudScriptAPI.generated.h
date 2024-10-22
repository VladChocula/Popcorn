// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabCloudScriptAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabCloudScriptAPI;
struct FCloudScriptEmptyResult;
struct FCloudScriptExecuteCloudScriptResult;
struct FCloudScriptExecuteEntityCloudScriptRequest;
struct FCloudScriptExecuteFunctionRequest;
struct FCloudScriptExecuteFunctionResult;
struct FCloudScriptGetFunctionRequest;
struct FCloudScriptGetFunctionResult;
struct FCloudScriptListEventHubFunctionsResult;
struct FCloudScriptListFunctionsRequest;
struct FCloudScriptListFunctionsResult;
struct FCloudScriptListHttpFunctionsResult;
struct FCloudScriptListQueuedFunctionsResult;
struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest;
struct FCloudScriptPostFunctionResultForFunctionExecutionRequest;
struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest;
struct FCloudScriptPostFunctionResultForScheduledTaskRequest;
struct FCloudScriptRegisterEventHubFunctionRequest;
struct FCloudScriptRegisterHttpFunctionRequest;
struct FCloudScriptRegisterQueuedFunctionRequest;
struct FCloudScriptUnregisterFunctionRequest;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabCloudScriptAPI_generated_h
#error "PlayFabCloudScriptAPI.generated.h already included, missing '#pragma once' in PlayFabCloudScriptAPI.h"
#endif
#define PLAYFAB_PlayFabCloudScriptAPI_generated_h

#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabCloudScriptRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabCloudScriptRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_62_DELEGATE \
static void FDelegateOnSuccessExecuteEntityCloudScript_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteEntityCloudScript, FCloudScriptExecuteCloudScriptResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_78_DELEGATE \
static void FDelegateOnSuccessExecuteFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteFunction, FCloudScriptExecuteFunctionResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_94_DELEGATE \
static void FDelegateOnSuccessGetFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFunction, FCloudScriptGetFunctionResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_107_DELEGATE \
static void FDelegateOnSuccessListEventHubFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListEventHubFunctions, FCloudScriptListEventHubFunctionsResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_120_DELEGATE \
static void FDelegateOnSuccessListFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListFunctions, FCloudScriptListFunctionsResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_133_DELEGATE \
static void FDelegateOnSuccessListHttpFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListHttpFunctions, FCloudScriptListHttpFunctionsResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_146_DELEGATE \
static void FDelegateOnSuccessListQueuedFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListQueuedFunctions, FCloudScriptListQueuedFunctionsResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_159_DELEGATE \
static void FDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForEntityTriggeredAction, FCloudScriptEmptyResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_172_DELEGATE \
static void FDelegateOnSuccessPostFunctionResultForFunctionExecution_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForFunctionExecution, FCloudScriptEmptyResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_185_DELEGATE \
static void FDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction, FCloudScriptEmptyResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_198_DELEGATE \
static void FDelegateOnSuccessPostFunctionResultForScheduledTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForScheduledTask, FCloudScriptEmptyResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_211_DELEGATE \
static void FDelegateOnSuccessRegisterEventHubFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterEventHubFunction, FCloudScriptEmptyResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_224_DELEGATE \
static void FDelegateOnSuccessRegisterHttpFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterHttpFunction, FCloudScriptEmptyResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_237_DELEGATE \
static void FDelegateOnSuccessRegisterQueuedFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterQueuedFunction, FCloudScriptEmptyResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_250_DELEGATE \
static void FDelegateOnSuccessUnregisterFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnregisterFunction, FCloudScriptEmptyResult result, UObject* customData);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHelperUnregisterFunction); \
	DECLARE_FUNCTION(execUnregisterFunction); \
	DECLARE_FUNCTION(execHelperRegisterQueuedFunction); \
	DECLARE_FUNCTION(execRegisterQueuedFunction); \
	DECLARE_FUNCTION(execHelperRegisterHttpFunction); \
	DECLARE_FUNCTION(execRegisterHttpFunction); \
	DECLARE_FUNCTION(execHelperRegisterEventHubFunction); \
	DECLARE_FUNCTION(execRegisterEventHubFunction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execHelperListQueuedFunctions); \
	DECLARE_FUNCTION(execListQueuedFunctions); \
	DECLARE_FUNCTION(execHelperListHttpFunctions); \
	DECLARE_FUNCTION(execListHttpFunctions); \
	DECLARE_FUNCTION(execHelperListFunctions); \
	DECLARE_FUNCTION(execListFunctions); \
	DECLARE_FUNCTION(execHelperListEventHubFunctions); \
	DECLARE_FUNCTION(execListEventHubFunctions); \
	DECLARE_FUNCTION(execHelperGetFunction); \
	DECLARE_FUNCTION(execGetFunction); \
	DECLARE_FUNCTION(execHelperExecuteFunction); \
	DECLARE_FUNCTION(execExecuteFunction); \
	DECLARE_FUNCTION(execHelperExecuteEntityCloudScript); \
	DECLARE_FUNCTION(execExecuteEntityCloudScript);


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabCloudScriptAPI(); \
	friend struct Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabCloudScriptAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabCloudScriptAPI)


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabCloudScriptAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabCloudScriptAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabCloudScriptAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabCloudScriptAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayFabCloudScriptAPI(UPlayFabCloudScriptAPI&&); \
	UPlayFabCloudScriptAPI(const UPlayFabCloudScriptAPI&); \
public: \
	NO_API virtual ~UPlayFabCloudScriptAPI();


#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_26_PROLOG
#define FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_RPC_WRAPPERS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_INCLASS \
	FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabCloudScriptAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
