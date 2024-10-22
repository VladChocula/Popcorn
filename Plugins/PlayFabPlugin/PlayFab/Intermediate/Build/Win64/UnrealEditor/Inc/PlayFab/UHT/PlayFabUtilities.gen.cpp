// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabUtilities() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabUtilities();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabUtilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabUtilities Function getErrorText
struct Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics
{
	struct PlayFabUtilities_eventgetErrorText_Parms
	{
		int32 code;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Errors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the error code text given the error code */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the error code text given the error code" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_code;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventgetErrorText_Parms, code), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventgetErrorText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "getErrorText", nullptr, nullptr, Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PlayFabUtilities_eventgetErrorText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PlayFabUtilities_eventgetErrorText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabUtilities_getErrorText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabUtilities::execgetErrorText)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_code);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPlayFabUtilities::getErrorText(Z_Param_code);
	P_NATIVE_END;
}
// End Class UPlayFabUtilities Function getErrorText

// Begin Class UPlayFabUtilities Function getPhotonAppId
struct Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics
{
	struct PlayFabUtilities_eventgetPhotonAppId_Parms
	{
		bool Realtime;
		bool Chat;
		bool Turnbased;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Photon | Authentication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the requested photon application id. */" },
#endif
		{ "CPP_Default_Chat", "false" },
		{ "CPP_Default_Realtime", "false" },
		{ "CPP_Default_Turnbased", "false" },
		{ "ModuleRelativePath", "Classes/PlayFabUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the requested photon application id." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Realtime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Realtime;
	static void NewProp_Chat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chat;
	static void NewProp_Turnbased_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Turnbased;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime_SetBit(void* Obj)
{
	((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Realtime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime = { "Realtime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat_SetBit(void* Obj)
{
	((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Chat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat = { "Chat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased_SetBit(void* Obj)
{
	((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Turnbased = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased = { "Turnbased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventgetPhotonAppId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "getPhotonAppId", nullptr, nullptr, Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PlayFabUtilities_eventgetPhotonAppId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PlayFabUtilities_eventgetPhotonAppId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabUtilities::execgetPhotonAppId)
{
	P_GET_UBOOL(Z_Param_Realtime);
	P_GET_UBOOL(Z_Param_Chat);
	P_GET_UBOOL(Z_Param_Turnbased);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPlayFabUtilities::getPhotonAppId(Z_Param_Realtime,Z_Param_Chat,Z_Param_Turnbased);
	P_NATIVE_END;
}
// End Class UPlayFabUtilities Function getPhotonAppId

// Begin Class UPlayFabUtilities Function setPlayFabSettings
struct Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics
{
	struct PlayFabUtilities_eventsetPlayFabSettings_Parms
	{
		FString GameTitleId;
		FString PlayFabSecretApiKey;
		FString ProductionUrl;
		FString PhotonRealtimeAppId;
		FString PhotonTurnbasedAppId;
		FString PhotonChatAppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setup the PlayFab settings used throughout the plugin. */" },
#endif
		{ "CPP_Default_PhotonChatAppId", "" },
		{ "CPP_Default_PhotonRealtimeAppId", "" },
		{ "CPP_Default_PhotonTurnbasedAppId", "" },
		{ "CPP_Default_PlayFabSecretApiKey", "" },
		{ "CPP_Default_ProductionUrl", "" },
		{ "ModuleRelativePath", "Classes/PlayFabUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setup the PlayFab settings used throughout the plugin." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameTitleId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabSecretApiKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductionUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PhotonRealtimeAppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PhotonTurnbasedAppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PhotonChatAppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId = { "GameTitleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, GameTitleId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey = { "PlayFabSecretApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PlayFabSecretApiKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl = { "ProductionUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, ProductionUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId = { "PhotonRealtimeAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonRealtimeAppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId = { "PhotonTurnbasedAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonTurnbasedAppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId = { "PhotonChatAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonChatAppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "setPlayFabSettings", nullptr, nullptr, Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PlayFabUtilities_eventsetPlayFabSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PlayFabUtilities_eventsetPlayFabSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabUtilities::execsetPlayFabSettings)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameTitleId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayFabSecretApiKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_ProductionUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_PhotonRealtimeAppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PhotonTurnbasedAppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PhotonChatAppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlayFabUtilities::setPlayFabSettings(Z_Param_GameTitleId,Z_Param_PlayFabSecretApiKey,Z_Param_ProductionUrl,Z_Param_PhotonRealtimeAppId,Z_Param_PhotonTurnbasedAppId,Z_Param_PhotonChatAppId);
	P_NATIVE_END;
}
// End Class UPlayFabUtilities Function setPlayFabSettings

// Begin Class UPlayFabUtilities
void UPlayFabUtilities::StaticRegisterNativesUPlayFabUtilities()
{
	UClass* Class = UPlayFabUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "getErrorText", &UPlayFabUtilities::execgetErrorText },
		{ "getPhotonAppId", &UPlayFabUtilities::execgetPhotonAppId },
		{ "setPlayFabSettings", &UPlayFabUtilities::execsetPlayFabSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabUtilities);
UClass* Z_Construct_UClass_UPlayFabUtilities_NoRegister()
{
	return UPlayFabUtilities::StaticClass();
}
struct Z_Construct_UClass_UPlayFabUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabUtilities.h" },
		{ "ModuleRelativePath", "Classes/PlayFabUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabUtilities_getErrorText, "getErrorText" }, // 3671733097
		{ &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId, "getPhotonAppId" }, // 4211225183
		{ &Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings, "setPlayFabSettings" }, // 2632079006
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabUtilities_Statics::ClassParams = {
	&UPlayFabUtilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabUtilities()
{
	if (!Z_Registration_Info_UClass_UPlayFabUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabUtilities.OuterSingleton, Z_Construct_UClass_UPlayFabUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabUtilities.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabUtilities>()
{
	return UPlayFabUtilities::StaticClass();
}
UPlayFabUtilities::UPlayFabUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabUtilities);
UPlayFabUtilities::~UPlayFabUtilities() {}
// End Class UPlayFabUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabUtilities, UPlayFabUtilities::StaticClass, TEXT("UPlayFabUtilities"), &Z_Registration_Info_UClass_UPlayFabUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabUtilities), 1405539477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_3836070770(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
