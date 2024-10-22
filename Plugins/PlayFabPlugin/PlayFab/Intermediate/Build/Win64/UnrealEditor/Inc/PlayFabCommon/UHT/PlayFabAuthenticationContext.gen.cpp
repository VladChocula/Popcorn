// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFabCommon/Public/PlayFabAuthenticationContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFabCommon();
// End Cross Module References

// Begin Class UPlayFabAuthenticationContext Function ClientAdminSecurityCheck
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "ClientAdminSecurityCheck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execClientAdminSecurityCheck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientAdminSecurityCheck();
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function ClientAdminSecurityCheck

// Begin Class UPlayFabAuthenticationContext Function ForgetAllCredentials
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reset all fields\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all fields" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "ForgetAllCredentials", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execForgetAllCredentials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForgetAllCredentials();
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function ForgetAllCredentials

// Begin Class UPlayFabAuthenticationContext Function GetClientSessionTicket
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics
{
	struct PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the client session ticket that is used as an authentication token in many PlayFab API methods.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the client session ticket that is used as an authentication token in many PlayFab API methods." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetClientSessionTicket", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetClientSessionTicket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetClientSessionTicket();
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function GetClientSessionTicket

// Begin Class UPlayFabAuthenticationContext Function GetDeveloperSecretKey
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics
{
	struct PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the developer secret key. These keys can be used in server environments.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the developer secret key. These keys can be used in server environments." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetDeveloperSecretKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetDeveloperSecretKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDeveloperSecretKey();
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function GetDeveloperSecretKey

// Begin Class UPlayFabAuthenticationContext Function GetEntityToken
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics
{
	struct PlayFabAuthenticationContext_eventGetEntityToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the user's entity token. Entity tokens are required by all Entity API methods.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the user's entity token. Entity tokens are required by all Entity API methods." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetEntityToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetEntityToken", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PlayFabAuthenticationContext_eventGetEntityToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PlayFabAuthenticationContext_eventGetEntityToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetEntityToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetEntityToken();
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function GetEntityToken

// Begin Class UPlayFabAuthenticationContext Function GetPlayFabId
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics
{
	struct PlayFabAuthenticationContext_eventGetPlayFabId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the player's unique PlayFabId.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the player's unique PlayFabId." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetPlayFabId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetPlayFabId", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PlayFabAuthenticationContext_eventGetPlayFabId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PlayFabAuthenticationContext_eventGetPlayFabId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetPlayFabId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPlayFabId();
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function GetPlayFabId

// Begin Class UPlayFabAuthenticationContext Function SetClientSessionTicket
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics
{
	struct PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms
	{
		FString InTicket;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the client session ticket that is used as an authentication token in many PlayFab API methods.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the client session ticket that is used as an authentication token in many PlayFab API methods." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTicket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket = { "InTicket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms, InTicket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetClientSessionTicket", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetClientSessionTicket)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InTicket);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClientSessionTicket(Z_Param_InTicket);
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function SetClientSessionTicket

// Begin Class UPlayFabAuthenticationContext Function SetDeveloperSecretKey
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics
{
	struct PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms
	{
		FString InKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the developer secret key. These keys can be used in server environments.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the developer secret key. These keys can be used in server environments." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms, InKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetDeveloperSecretKey", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetDeveloperSecretKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeveloperSecretKey(Z_Param_InKey);
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function SetDeveloperSecretKey

// Begin Class UPlayFabAuthenticationContext Function SetEntityToken
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics
{
	struct PlayFabAuthenticationContext_eventSetEntityToken_Parms
	{
		FString InToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the user's entity token. Entity tokens are required by all Entity API methods.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the user's entity token. Entity tokens are required by all Entity API methods." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken = { "InToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetEntityToken_Parms, InToken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetEntityToken", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PlayFabAuthenticationContext_eventSetEntityToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PlayFabAuthenticationContext_eventSetEntityToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetEntityToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEntityToken(Z_Param_InToken);
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function SetEntityToken

// Begin Class UPlayFabAuthenticationContext Function SetPlayFabId
struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics
{
	struct PlayFabAuthenticationContext_eventSetPlayFabId_Parms
	{
		FString InKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the player's unique PlayFabId.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the player's unique PlayFabId." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetPlayFabId_Parms, InKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetPlayFabId", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PlayFabAuthenticationContext_eventSetPlayFabId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PlayFabAuthenticationContext_eventSetPlayFabId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetPlayFabId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayFabId(Z_Param_InKey);
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationContext Function SetPlayFabId

// Begin Class UPlayFabAuthenticationContext
void UPlayFabAuthenticationContext::StaticRegisterNativesUPlayFabAuthenticationContext()
{
	UClass* Class = UPlayFabAuthenticationContext::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientAdminSecurityCheck", &UPlayFabAuthenticationContext::execClientAdminSecurityCheck },
		{ "ForgetAllCredentials", &UPlayFabAuthenticationContext::execForgetAllCredentials },
		{ "GetClientSessionTicket", &UPlayFabAuthenticationContext::execGetClientSessionTicket },
		{ "GetDeveloperSecretKey", &UPlayFabAuthenticationContext::execGetDeveloperSecretKey },
		{ "GetEntityToken", &UPlayFabAuthenticationContext::execGetEntityToken },
		{ "GetPlayFabId", &UPlayFabAuthenticationContext::execGetPlayFabId },
		{ "SetClientSessionTicket", &UPlayFabAuthenticationContext::execSetClientSessionTicket },
		{ "SetDeveloperSecretKey", &UPlayFabAuthenticationContext::execSetDeveloperSecretKey },
		{ "SetEntityToken", &UPlayFabAuthenticationContext::execSetEntityToken },
		{ "SetPlayFabId", &UPlayFabAuthenticationContext::execSetPlayFabId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabAuthenticationContext);
UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister()
{
	return UPlayFabAuthenticationContext::StaticClass();
}
struct Z_Construct_UClass_UPlayFabAuthenticationContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Container for PlayFab authentication credentials data.\n*/" },
#endif
		{ "IncludePath", "PlayFabAuthenticationContext.h" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container for PlayFab authentication credentials data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientSessionTicket_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Client session ticket that is used as an authentication token in many PlayFab API methods.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client session ticket that is used as an authentication token in many PlayFab API methods." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// User's entity token. Entity tokens are required by all Entity API methods.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User's entity token. Entity tokens are required by all Entity API methods." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperSecretKey_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Developer secret key. These keys can be used in server environments.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Developer secret key. These keys can be used in server environments." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The player's unique PlayFabId.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player's unique PlayFabId." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSessionTicket;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperSecretKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck, "ClientAdminSecurityCheck" }, // 34906120
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials, "ForgetAllCredentials" }, // 885224135
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket, "GetClientSessionTicket" }, // 1047162636
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey, "GetDeveloperSecretKey" }, // 749373318
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken, "GetEntityToken" }, // 2793657680
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId, "GetPlayFabId" }, // 3278655096
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket, "SetClientSessionTicket" }, // 1614410724
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey, "SetDeveloperSecretKey" }, // 2908315683
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken, "SetEntityToken" }, // 1424209971
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId, "SetPlayFabId" }, // 2991063455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAuthenticationContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket = { "ClientSessionTicket", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabAuthenticationContext, ClientSessionTicket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientSessionTicket_MetaData), NewProp_ClientSessionTicket_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabAuthenticationContext, EntityToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityToken_MetaData), NewProp_EntityToken_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey = { "DeveloperSecretKey", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabAuthenticationContext, DeveloperSecretKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeveloperSecretKey_MetaData), NewProp_DeveloperSecretKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabAuthenticationContext, PlayFabId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayFabId_MetaData), NewProp_PlayFabId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFabCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::ClassParams = {
	&UPlayFabAuthenticationContext::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabAuthenticationContext()
{
	if (!Z_Registration_Info_UClass_UPlayFabAuthenticationContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabAuthenticationContext.OuterSingleton, Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabAuthenticationContext.OuterSingleton;
}
template<> PLAYFABCOMMON_API UClass* StaticClass<UPlayFabAuthenticationContext>()
{
	return UPlayFabAuthenticationContext::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAuthenticationContext);
UPlayFabAuthenticationContext::~UPlayFabAuthenticationContext() {}
// End Class UPlayFabAuthenticationContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabAuthenticationContext, UPlayFabAuthenticationContext::StaticClass, TEXT("UPlayFabAuthenticationContext"), &Z_Registration_Info_UClass_UPlayFabAuthenticationContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabAuthenticationContext), 943956912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_3080237034(TEXT("/Script/PlayFabCommon"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
