// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabAuthenticationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationModels() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType();
PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ELoginIdentityProvider();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationDeleteRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FAuthenticationAuthenticateCustomIdRequest
static_assert(std::is_polymorphic<FAuthenticationAuthenticateCustomIdRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAuthenticationAuthenticateCustomIdRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdRequest;
class UScriptStruct* FAuthenticationAuthenticateCustomIdRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationAuthenticateCustomIdRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationAuthenticateCustomIdRequest>()
{
	return FAuthenticationAuthenticateCustomIdRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create or return a game_server entity token. Caller must be a title entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create or return a game_server entity token. Caller must be a title entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomId_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The customId used to create and retrieve game_server entity tokens. This is unique at the title level. CustomId must be\n     * between 32 and 100 characters.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The customId used to create and retrieve game_server entity tokens. This is unique at the title level. CustomId must be\nbetween 32 and 100 characters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationAuthenticateCustomIdRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomId = { "CustomId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationAuthenticateCustomIdRequest, CustomId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomId_MetaData), NewProp_CustomId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationAuthenticateCustomIdRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"AuthenticationAuthenticateCustomIdRequest",
	Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::PropPointers),
	sizeof(FAuthenticationAuthenticateCustomIdRequest),
	alignof(FAuthenticationAuthenticateCustomIdRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdRequest.InnerSingleton, Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdRequest.InnerSingleton;
}
// End ScriptStruct FAuthenticationAuthenticateCustomIdRequest

// Begin ScriptStruct FAuthenticationAuthenticateCustomIdResult
static_assert(std::is_polymorphic<FAuthenticationAuthenticateCustomIdResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationAuthenticateCustomIdResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdResult;
class UScriptStruct* FAuthenticationAuthenticateCustomIdResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationAuthenticateCustomIdResult"));
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationAuthenticateCustomIdResult>()
{
	return FAuthenticationAuthenticateCustomIdResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The token generated used to set X-EntityToken for game_server calls. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The token generated used to set X-EntityToken for game_server calls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewlyCreated_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if the account was newly created on this authentication. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the account was newly created on this authentication." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityToken;
	static void NewProp_NewlyCreated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewlyCreated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationAuthenticateCustomIdResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationAuthenticateCustomIdResult, EntityToken), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityToken_MetaData), NewProp_EntityToken_MetaData) };
void Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated_SetBit(void* Obj)
{
	((FAuthenticationAuthenticateCustomIdResult*)Obj)->NewlyCreated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated = { "NewlyCreated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAuthenticationAuthenticateCustomIdResult), &Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewlyCreated_MetaData), NewProp_NewlyCreated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_EntityToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"AuthenticationAuthenticateCustomIdResult",
	Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::PropPointers),
	sizeof(FAuthenticationAuthenticateCustomIdResult),
	alignof(FAuthenticationAuthenticateCustomIdResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdResult.InnerSingleton, Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdResult.InnerSingleton;
}
// End ScriptStruct FAuthenticationAuthenticateCustomIdResult

// Begin ScriptStruct FAuthenticationDeleteRequest
static_assert(std::is_polymorphic<FAuthenticationDeleteRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAuthenticationDeleteRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthenticationDeleteRequest;
class UScriptStruct* FAuthenticationDeleteRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationDeleteRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthenticationDeleteRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationDeleteRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationDeleteRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationDeleteRequest>()
{
	return FAuthenticationDeleteRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Delete a game_server entity. The caller can be the game_server entity attempting to delete itself. Or a title entity\n * attempting to delete game_server entities for this title.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete a game_server entity. The caller can be the game_server entity attempting to delete itself. Or a title entity\nattempting to delete game_server entities for this title." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The game_server entity to be removed. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The game_server entity to be removed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationDeleteRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationDeleteRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationDeleteRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"AuthenticationDeleteRequest",
	Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::PropPointers),
	sizeof(FAuthenticationDeleteRequest),
	alignof(FAuthenticationDeleteRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationDeleteRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationDeleteRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthenticationDeleteRequest.InnerSingleton, Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationDeleteRequest.InnerSingleton;
}
// End ScriptStruct FAuthenticationDeleteRequest

// Begin ScriptStruct FAuthenticationEmptyResponse
static_assert(std::is_polymorphic<FAuthenticationEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthenticationEmptyResponse;
class UScriptStruct* FAuthenticationEmptyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationEmptyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthenticationEmptyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationEmptyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationEmptyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationEmptyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationEmptyResponse>()
{
	return FAuthenticationEmptyResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationEmptyResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"AuthenticationEmptyResponse",
	nullptr,
	0,
	sizeof(FAuthenticationEmptyResponse),
	alignof(FAuthenticationEmptyResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationEmptyResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationEmptyResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthenticationEmptyResponse.InnerSingleton, Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationEmptyResponse.InnerSingleton;
}
// End ScriptStruct FAuthenticationEmptyResponse

// Begin ScriptStruct FAuthenticationGetEntityTokenRequest
static_assert(std::is_polymorphic<FAuthenticationGetEntityTokenRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAuthenticationGetEntityTokenRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenRequest;
class UScriptStruct* FAuthenticationGetEntityTokenRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationGetEntityTokenRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationGetEntityTokenRequest>()
{
	return FAuthenticationGetEntityTokenRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This API must be called with X-SecretKey, X-Authentication or X-EntityToken headers. An optional EntityKey may be\n * included to attempt to set the resulting EntityToken to a specific entity, however the entity must be a relation of the\n * caller, such as the master_player_account of a character. If sending X-EntityToken the account will be marked as freshly\n * logged in and will issue a new token. If using X-Authentication or X-EntityToken the header must still be valid and\n * cannot be expired or revoked.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This API must be called with X-SecretKey, X-Authentication or X-EntityToken headers. An optional EntityKey may be\nincluded to attempt to set the resulting EntityToken to a specific entity, however the entity must be a relation of the\ncaller, such as the master_player_account of a character. If sending X-EntityToken the account will be marked as freshly\nlogged in and will issue a new token. If using X-Authentication or X-EntityToken the header must still be valid and\ncannot be expired or revoked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationGetEntityTokenRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"AuthenticationGetEntityTokenRequest",
	Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::PropPointers),
	sizeof(FAuthenticationGetEntityTokenRequest),
	alignof(FAuthenticationGetEntityTokenRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenRequest.InnerSingleton, Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenRequest.InnerSingleton;
}
// End ScriptStruct FAuthenticationGetEntityTokenRequest

// Begin ScriptStruct FAuthenticationGetEntityTokenResponse
static_assert(std::is_polymorphic<FAuthenticationGetEntityTokenResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationGetEntityTokenResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenResponse;
class UScriptStruct* FAuthenticationGetEntityTokenResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationGetEntityTokenResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationGetEntityTokenResponse>()
{
	return FAuthenticationGetEntityTokenResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The token used to set X-EntityToken for all entity based API calls. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The token used to set X-EntityToken for all entity based API calls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenExpiration_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The time the token will expire, if it is an expiring token, in UTC. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time the token will expire, if it is an expiring token, in UTC." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TokenExpiration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationGetEntityTokenResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, EntityToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityToken_MetaData), NewProp_EntityToken_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration = { "TokenExpiration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, TokenExpiration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenExpiration_MetaData), NewProp_TokenExpiration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"AuthenticationGetEntityTokenResponse",
	Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers),
	sizeof(FAuthenticationGetEntityTokenResponse),
	alignof(FAuthenticationGetEntityTokenResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenResponse.InnerSingleton, Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenResponse.InnerSingleton;
}
// End ScriptStruct FAuthenticationGetEntityTokenResponse

// Begin ScriptStruct FAuthenticationValidateEntityTokenRequest
static_assert(std::is_polymorphic<FAuthenticationValidateEntityTokenRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAuthenticationValidateEntityTokenRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenRequest;
class UScriptStruct* FAuthenticationValidateEntityTokenRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationValidateEntityTokenRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationValidateEntityTokenRequest>()
{
	return FAuthenticationValidateEntityTokenRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given an entity token, validates that it hasn't expired or been revoked and will return details of the owner. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given an entity token, validates that it hasn't expired or been revoked and will return details of the owner." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Client EntityToken */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client EntityToken" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationValidateEntityTokenRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenRequest, EntityToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityToken_MetaData), NewProp_EntityToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_EntityToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"AuthenticationValidateEntityTokenRequest",
	Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::PropPointers),
	sizeof(FAuthenticationValidateEntityTokenRequest),
	alignof(FAuthenticationValidateEntityTokenRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenRequest.InnerSingleton, Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenRequest.InnerSingleton;
}
// End ScriptStruct FAuthenticationValidateEntityTokenRequest

// Begin ScriptStruct FAuthenticationValidateEntityTokenResponse
static_assert(std::is_polymorphic<FAuthenticationValidateEntityTokenResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationValidateEntityTokenResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenResponse;
class UScriptStruct* FAuthenticationValidateEntityTokenResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationValidateEntityTokenResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationValidateEntityTokenResponse>()
{
	return FAuthenticationValidateEntityTokenResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdentifiedDeviceType_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The authenticated device for this entity, for the given login */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The authenticated device for this entity, for the given login" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdentityProvider_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The identity provider for this entity, for the given login */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The identity provider for this entity, for the given login" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdentityProviderIssuedId_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ID issued by the identity provider, e.g. a XUID on Xbox Live */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID issued by the identity provider, e.g. a XUID on Xbox Live" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lineage_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The lineage of this profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The lineage of this profile." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IdentifiedDeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IdentifiedDeviceType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IdentityProvider_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IdentityProvider;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IdentityProviderIssuedId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Lineage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationValidateEntityTokenResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType = { "IdentifiedDeviceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, IdentifiedDeviceType), Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdentifiedDeviceType_MetaData), NewProp_IdentifiedDeviceType_MetaData) }; // 1998917319
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider = { "IdentityProvider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, IdentityProvider), Z_Construct_UEnum_PlayFab_ELoginIdentityProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdentityProvider_MetaData), NewProp_IdentityProvider_MetaData) }; // 1453359727
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProviderIssuedId = { "IdentityProviderIssuedId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, IdentityProviderIssuedId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdentityProviderIssuedId_MetaData), NewProp_IdentityProviderIssuedId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage = { "Lineage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, Lineage), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lineage_MetaData), NewProp_Lineage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProviderIssuedId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"AuthenticationValidateEntityTokenResponse",
	Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers),
	sizeof(FAuthenticationValidateEntityTokenResponse),
	alignof(FAuthenticationValidateEntityTokenResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenResponse.InnerSingleton, Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenResponse.InnerSingleton;
}
// End ScriptStruct FAuthenticationValidateEntityTokenResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAuthenticationAuthenticateCustomIdRequest::StaticStruct, Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewStructOps, TEXT("AuthenticationAuthenticateCustomIdRequest"), &Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthenticationAuthenticateCustomIdRequest), 3696493147U) },
		{ FAuthenticationAuthenticateCustomIdResult::StaticStruct, Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewStructOps, TEXT("AuthenticationAuthenticateCustomIdResult"), &Z_Registration_Info_UScriptStruct_AuthenticationAuthenticateCustomIdResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthenticationAuthenticateCustomIdResult), 2949370139U) },
		{ FAuthenticationDeleteRequest::StaticStruct, Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewStructOps, TEXT("AuthenticationDeleteRequest"), &Z_Registration_Info_UScriptStruct_AuthenticationDeleteRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthenticationDeleteRequest), 115688545U) },
		{ FAuthenticationEmptyResponse::StaticStruct, Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::NewStructOps, TEXT("AuthenticationEmptyResponse"), &Z_Registration_Info_UScriptStruct_AuthenticationEmptyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthenticationEmptyResponse), 1159445068U) },
		{ FAuthenticationGetEntityTokenRequest::StaticStruct, Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewStructOps, TEXT("AuthenticationGetEntityTokenRequest"), &Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthenticationGetEntityTokenRequest), 1415847939U) },
		{ FAuthenticationGetEntityTokenResponse::StaticStruct, Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewStructOps, TEXT("AuthenticationGetEntityTokenResponse"), &Z_Registration_Info_UScriptStruct_AuthenticationGetEntityTokenResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthenticationGetEntityTokenResponse), 826951564U) },
		{ FAuthenticationValidateEntityTokenRequest::StaticStruct, Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewStructOps, TEXT("AuthenticationValidateEntityTokenRequest"), &Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthenticationValidateEntityTokenRequest), 2739691828U) },
		{ FAuthenticationValidateEntityTokenResponse::StaticStruct, Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewStructOps, TEXT("AuthenticationValidateEntityTokenResponse"), &Z_Registration_Info_UScriptStruct_AuthenticationValidateEntityTokenResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthenticationValidateEntityTokenResponse), 1512695750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModels_h_739553181(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
