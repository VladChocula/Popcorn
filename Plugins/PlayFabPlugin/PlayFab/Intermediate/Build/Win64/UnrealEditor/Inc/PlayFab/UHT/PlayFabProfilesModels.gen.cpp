// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabProfilesModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabProfilesModels() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FProfilesGetGlobalPolicyRequest
static_assert(std::is_polymorphic<FProfilesGetGlobalPolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetGlobalPolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest;
class UScriptStruct* FProfilesGetGlobalPolicyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetGlobalPolicyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetGlobalPolicyRequest>()
{
	return FProfilesGetGlobalPolicyRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Retrieves the title access policy that is used before the profile's policy is inspected during a request. If never\n * customized this will return the default starter policy built by PlayFab.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the title access policy that is used before the profile's policy is inspected during a request. If never\ncustomized this will return the default starter policy built by PlayFab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetGlobalPolicyRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetGlobalPolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetGlobalPolicyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesGetGlobalPolicyRequest",
	Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers),
	sizeof(FProfilesGetGlobalPolicyRequest),
	alignof(FProfilesGetGlobalPolicyRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.InnerSingleton;
}
// End ScriptStruct FProfilesGetGlobalPolicyRequest

// Begin ScriptStruct FProfilesGetGlobalPolicyResponse
static_assert(std::is_polymorphic<FProfilesGetGlobalPolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetGlobalPolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse;
class UScriptStruct* FProfilesGetGlobalPolicyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetGlobalPolicyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetGlobalPolicyResponse>()
{
	return FProfilesGetGlobalPolicyResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The permissions that govern access to all entities under this title or namespace. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The permissions that govern access to all entities under this title or namespace." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetGlobalPolicyResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetGlobalPolicyResponse, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permissions_MetaData), NewProp_Permissions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesGetGlobalPolicyResponse",
	Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers),
	sizeof(FProfilesGetGlobalPolicyResponse),
	alignof(FProfilesGetGlobalPolicyResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.InnerSingleton;
}
// End ScriptStruct FProfilesGetGlobalPolicyResponse

// Begin ScriptStruct FProfilesGetEntityProfileRequest
static_assert(std::is_polymorphic<FProfilesGetEntityProfileRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetEntityProfileRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest;
class UScriptStruct* FProfilesGetEntityProfileRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfileRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfileRequest>()
{
	return FProfilesGetEntityProfileRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Given an entity type and entity identifier will retrieve the profile from the entity store. If the profile being\n * retrieved is the caller's, then the read operation is consistent, if not it is an inconsistent read. An inconsistent\n * read means that we do not guarantee all committed writes have occurred before reading the profile, allowing for a stale\n * read. If consistency is important the Version Number on the result can be used to compare which version of the profile\n * any reader has.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given an entity type and entity identifier will retrieve the profile from the entity store. If the profile being\nretrieved is the caller's, then the read operation is consistent, if not it is an inconsistent read. An inconsistent\nread means that we do not guarantee all committed writes have occurred before reading the profile, allowing for a stale\nread. If consistency is important the Version Number on the result can be used to compare which version of the profile\nany reader has." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsObject_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\n     * JSON string.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\nJSON string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static void NewProp_DataAsObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DataAsObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfileRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetEntityProfileRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
void Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_SetBit(void* Obj)
{
	((FProfilesGetEntityProfileRequest*)Obj)->DataAsObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject = { "DataAsObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProfilesGetEntityProfileRequest), &Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsObject_MetaData), NewProp_DataAsObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetEntityProfileRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesGetEntityProfileRequest",
	Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers),
	sizeof(FProfilesGetEntityProfileRequest),
	alignof(FProfilesGetEntityProfileRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.InnerSingleton;
}
// End ScriptStruct FProfilesGetEntityProfileRequest

// Begin ScriptStruct FProfilesGetEntityProfileResponse
static_assert(std::is_polymorphic<FProfilesGetEntityProfileResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetEntityProfileResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse;
class UScriptStruct* FProfilesGetEntityProfileResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfileResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfileResponse>()
{
	return FProfilesGetEntityProfileResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entity profile */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entity profile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Profile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfileResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetEntityProfileResponse, Profile), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Profile_MetaData), NewProp_Profile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesGetEntityProfileResponse",
	Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers),
	sizeof(FProfilesGetEntityProfileResponse),
	alignof(FProfilesGetEntityProfileResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.InnerSingleton;
}
// End ScriptStruct FProfilesGetEntityProfileResponse

// Begin ScriptStruct FProfilesGetEntityProfilesRequest
static_assert(std::is_polymorphic<FProfilesGetEntityProfilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetEntityProfilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest;
class UScriptStruct* FProfilesGetEntityProfilesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfilesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfilesRequest>()
{
	return FProfilesGetEntityProfilesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Given a set of entity types and entity identifiers will retrieve all readable profiles properties for the caller.\n * Profiles that the caller is not allowed to read will silently not be included in the results.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a set of entity types and entity identifiers will retrieve all readable profiles properties for the caller.\nProfiles that the caller is not allowed to read will silently not be included in the results." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsObject_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\n     * JSON string.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\nJSON string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entity keys of the profiles to load. Must be between 1 and 25 */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entity keys of the profiles to load. Must be between 1 and 25" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static void NewProp_DataAsObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DataAsObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfilesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetEntityProfilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
void Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_SetBit(void* Obj)
{
	((FProfilesGetEntityProfilesRequest*)Obj)->DataAsObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject = { "DataAsObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProfilesGetEntityProfilesRequest), &Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsObject_MetaData), NewProp_DataAsObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetEntityProfilesRequest, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entities_MetaData), NewProp_Entities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesGetEntityProfilesRequest",
	Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers),
	sizeof(FProfilesGetEntityProfilesRequest),
	alignof(FProfilesGetEntityProfilesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.InnerSingleton;
}
// End ScriptStruct FProfilesGetEntityProfilesRequest

// Begin ScriptStruct FProfilesGetEntityProfilesResponse
static_assert(std::is_polymorphic<FProfilesGetEntityProfilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetEntityProfilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse;
class UScriptStruct* FProfilesGetEntityProfilesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfilesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfilesResponse>()
{
	return FProfilesGetEntityProfilesResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entity profiles */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entity profiles" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Profiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfilesResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetEntityProfilesResponse, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Profiles_MetaData), NewProp_Profiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesGetEntityProfilesResponse",
	Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers),
	sizeof(FProfilesGetEntityProfilesResponse),
	alignof(FProfilesGetEntityProfilesResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.InnerSingleton;
}
// End ScriptStruct FProfilesGetEntityProfilesResponse

// Begin ScriptStruct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;
class UScriptStruct* FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>()
{
	return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given a master player account id (PlayFab ID), returns all title player accounts associated with it. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a master player account id (PlayFab ID), returns all title player accounts associated with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterPlayerAccountIds_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Master player account ids. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master player account ids." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterPlayerAccountIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds = { "MasterPlayerAccountIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, MasterPlayerAccountIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterPlayerAccountIds_MetaData), NewProp_MasterPlayerAccountIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest",
	Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers),
	sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest),
	alignof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.InnerSingleton;
}
// End ScriptStruct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest

// Begin ScriptStruct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;
class UScriptStruct* FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>()
{
	return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional id of title to get players from, required if calling using a master_player_account. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional id of title to get players from, required if calling using a master_player_account." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccounts_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dictionary of master player ids mapped to title player entity keys and id pairs */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dictionary of master player ids mapped to title player entity keys and id pairs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitlePlayerAccounts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, TitleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleId_MetaData), NewProp_TitleId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts = { "TitlePlayerAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, TitlePlayerAccounts), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitlePlayerAccounts_MetaData), NewProp_TitlePlayerAccounts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse",
	Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers),
	sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse),
	alignof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.InnerSingleton;
}
// End ScriptStruct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse

// Begin ScriptStruct FProfilesGetTitlePlayersFromProviderIDsResponse
static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromProviderIDsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetTitlePlayersFromProviderIDsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse;
class UScriptStruct* FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromProviderIDsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromProviderIDsResponse>()
{
	return FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccounts_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Dictionary of provider identifiers mapped to title_player_account lineage. Missing lineage indicates the player either\n     * doesn't exist or doesn't play the requested title.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dictionary of provider identifiers mapped to title_player_account lineage. Missing lineage indicates the player either\ndoesn't exist or doesn't play the requested title." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitlePlayerAccounts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromProviderIDsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts = { "TitlePlayerAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromProviderIDsResponse, TitlePlayerAccounts), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitlePlayerAccounts_MetaData), NewProp_TitlePlayerAccounts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesGetTitlePlayersFromProviderIDsResponse",
	Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers),
	sizeof(FProfilesGetTitlePlayersFromProviderIDsResponse),
	alignof(FProfilesGetTitlePlayersFromProviderIDsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.InnerSingleton;
}
// End ScriptStruct FProfilesGetTitlePlayersFromProviderIDsResponse

// Begin ScriptStruct FProfilesGetTitlePlayersFromXboxLiveIDsRequest
static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetTitlePlayersFromXboxLiveIDsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest;
class UScriptStruct* FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromXboxLiveIDsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>()
{
	return FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given a collection of Xbox IDs (XUIDs), returns all title player accounts. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a collection of Xbox IDs (XUIDs), returns all title player accounts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sandbox_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Xbox Sandbox the players had on their Xbox tokens. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Xbox Sandbox the players had on their Xbox tokens." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XboxLiveIds_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of Xbox Live XUIDs */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Xbox Live XUIDs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sandbox;
	static const UECodeGen_Private::FStrPropertyParams NewProp_XboxLiveIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox = { "Sandbox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, Sandbox), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sandbox_MetaData), NewProp_Sandbox_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds = { "XboxLiveIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, XboxLiveIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XboxLiveIds_MetaData), NewProp_XboxLiveIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesGetTitlePlayersFromXboxLiveIDsRequest",
	Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers),
	sizeof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest),
	alignof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.InnerSingleton;
}
// End ScriptStruct FProfilesGetTitlePlayersFromXboxLiveIDsRequest

// Begin ScriptStruct FProfilesSetDisplayNameRequest
static_assert(std::is_polymorphic<FProfilesSetDisplayNameRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetDisplayNameRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameRequest;
class UScriptStruct* FProfilesSetDisplayNameRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetDisplayNameRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetDisplayNameRequest>()
{
	return FProfilesSetDisplayNameRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Given an entity profile, will update its display name to the one passed in if the profile's version is equal to the\n * specified value\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given an entity profile, will update its display name to the one passed in if the profile's version is equal to the\nspecified value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The new value to be set on Entity Profile's display name */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The new value to be set on Entity Profile's display name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedVersion_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The expected version of a profile to perform this update on */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expected version of a profile to perform this update on" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetDisplayNameRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetDisplayNameRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetDisplayNameRequest, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetDisplayNameRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewProp_ExpectedVersion = { "ExpectedVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetDisplayNameRequest, ExpectedVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedVersion_MetaData), NewProp_ExpectedVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewProp_ExpectedVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesSetDisplayNameRequest",
	Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::PropPointers),
	sizeof(FProfilesSetDisplayNameRequest),
	alignof(FProfilesSetDisplayNameRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameRequest.InnerSingleton;
}
// End ScriptStruct FProfilesSetDisplayNameRequest

// Begin ScriptStruct FProfilesSetDisplayNameResponse
static_assert(std::is_polymorphic<FProfilesSetDisplayNameResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetDisplayNameResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameResponse;
class UScriptStruct* FProfilesSetDisplayNameResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetDisplayNameResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetDisplayNameResponse>()
{
	return FProfilesSetDisplayNameResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationResult_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of operation that occured on the profile's display name */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of operation that occured on the profile's display name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The updated version of the profile after the display name update */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The updated version of the profile after the display name update" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperationResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetDisplayNameResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::NewProp_OperationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::NewProp_OperationResult = { "OperationResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetDisplayNameResponse, OperationResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationResult_MetaData), NewProp_OperationResult_MetaData) }; // 2147554322
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetDisplayNameResponse, VersionNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionNumber_MetaData), NewProp_VersionNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::NewProp_OperationResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::NewProp_OperationResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::NewProp_VersionNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesSetDisplayNameResponse",
	Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::PropPointers),
	sizeof(FProfilesSetDisplayNameResponse),
	alignof(FProfilesSetDisplayNameResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameResponse.InnerSingleton;
}
// End ScriptStruct FProfilesSetDisplayNameResponse

// Begin ScriptStruct FProfilesSetGlobalPolicyRequest
static_assert(std::is_polymorphic<FProfilesSetGlobalPolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetGlobalPolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest;
class UScriptStruct* FProfilesSetGlobalPolicyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetGlobalPolicyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetGlobalPolicyRequest>()
{
	return FProfilesSetGlobalPolicyRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Updates the title access policy that is used before the profile's policy is inspected during a request. Policies are\n * compiled and cached for several minutes so an update here may not be reflected in behavior for a short time.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the title access policy that is used before the profile's policy is inspected during a request. Policies are\ncompiled and cached for several minutes so an update here may not be reflected in behavior for a short time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The permissions that govern access to all entities under this title or namespace. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The permissions that govern access to all entities under this title or namespace." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetGlobalPolicyRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetGlobalPolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetGlobalPolicyRequest, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permissions_MetaData), NewProp_Permissions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesSetGlobalPolicyRequest",
	Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers),
	sizeof(FProfilesSetGlobalPolicyRequest),
	alignof(FProfilesSetGlobalPolicyRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.InnerSingleton;
}
// End ScriptStruct FProfilesSetGlobalPolicyRequest

// Begin ScriptStruct FProfilesSetGlobalPolicyResponse
static_assert(std::is_polymorphic<FProfilesSetGlobalPolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetGlobalPolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse;
class UScriptStruct* FProfilesSetGlobalPolicyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetGlobalPolicyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetGlobalPolicyResponse>()
{
	return FProfilesSetGlobalPolicyResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetGlobalPolicyResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesSetGlobalPolicyResponse",
	nullptr,
	0,
	sizeof(FProfilesSetGlobalPolicyResponse),
	alignof(FProfilesSetGlobalPolicyResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.InnerSingleton;
}
// End ScriptStruct FProfilesSetGlobalPolicyResponse

// Begin ScriptStruct FProfilesSetProfileLanguageRequest
static_assert(std::is_polymorphic<FProfilesSetProfileLanguageRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetProfileLanguageRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest;
class UScriptStruct* FProfilesSetProfileLanguageRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetProfileLanguageRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetProfileLanguageRequest>()
{
	return FProfilesSetProfileLanguageRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Given an entity profile, will update its language to the one passed in if the profile's version is equal to the one\n * passed in.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given an entity profile, will update its language to the one passed in if the profile's version is equal to the one\npassed in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedVersion_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The expected version of a profile to perform this update on */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expected version of a profile to perform this update on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The language to set on the given entity. Deletes the profile's language if passed in a null string. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The language to set on the given entity. Deletes the profile's language if passed in a null string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetProfileLanguageRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion = { "ExpectedVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, ExpectedVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedVersion_MetaData), NewProp_ExpectedVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesSetProfileLanguageRequest",
	Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers),
	sizeof(FProfilesSetProfileLanguageRequest),
	alignof(FProfilesSetProfileLanguageRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.InnerSingleton;
}
// End ScriptStruct FProfilesSetProfileLanguageRequest

// Begin ScriptStruct FProfilesSetProfileLanguageResponse
static_assert(std::is_polymorphic<FProfilesSetProfileLanguageResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetProfileLanguageResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse;
class UScriptStruct* FProfilesSetProfileLanguageResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetProfileLanguageResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetProfileLanguageResponse>()
{
	return FProfilesSetProfileLanguageResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationResult_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of operation that occured on the profile's language */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of operation that occured on the profile's language" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The updated version of the profile after the language update */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The updated version of the profile after the language update" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperationResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetProfileLanguageResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult = { "OperationResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageResponse, OperationResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationResult_MetaData), NewProp_OperationResult_MetaData) }; // 2147554322
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageResponse, VersionNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionNumber_MetaData), NewProp_VersionNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesSetProfileLanguageResponse",
	Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers),
	sizeof(FProfilesSetProfileLanguageResponse),
	alignof(FProfilesSetProfileLanguageResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.InnerSingleton;
}
// End ScriptStruct FProfilesSetProfileLanguageResponse

// Begin ScriptStruct FProfilesSetEntityProfilePolicyRequest
static_assert(std::is_polymorphic<FProfilesSetEntityProfilePolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetEntityProfilePolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest;
class UScriptStruct* FProfilesSetEntityProfilePolicyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetEntityProfilePolicyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetEntityProfilePolicyRequest>()
{
	return FProfilesSetEntityProfilePolicyRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This will set the access policy statements on the given entity profile. This is not additive, any existing statements\n * will be replaced with the statements in this request.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will set the access policy statements on the given entity profile. This is not additive, any existing statements\nwill be replaced with the statements in this request." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statements_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The statements to include in the access policy. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The statements to include in the access policy." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Statements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetEntityProfilePolicyRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_Inner = { "Statements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements = { "Statements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, Statements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statements_MetaData), NewProp_Statements_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"ProfilesSetEntityProfilePolicyRequest",
	Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers),
	sizeof(FProfilesSetEntityProfilePolicyRequest),
	alignof(FProfilesSetEntityProfilePolicyRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.InnerSingleton;
}
// End ScriptStruct FProfilesSetEntityProfilePolicyRequest

// Begin ScriptStruct FProfilesSetEntityProfilePolicyResponse
static_assert(std::is_polymorphic<FProfilesSetEntityProfilePolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetEntityProfilePolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse;
class UScriptStruct* FProfilesSetEntityProfilePolicyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetEntityProfilePolicyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetEntityProfilePolicyResponse>()
{
	return FProfilesSetEntityProfilePolicyResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The permissions that govern access to this entity profile and its properties. Only includes permissions set on this\n     * profile, not global statements from titles and namespaces.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The permissions that govern access to this entity profile and its properties. Only includes permissions set on this\nprofile, not global statements from titles and namespaces." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetEntityProfilePolicyResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyResponse, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permissions_MetaData), NewProp_Permissions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"ProfilesSetEntityProfilePolicyResponse",
	Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers),
	sizeof(FProfilesSetEntityProfilePolicyResponse),
	alignof(FProfilesSetEntityProfilePolicyResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.InnerSingleton;
}
// End ScriptStruct FProfilesSetEntityProfilePolicyResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProfilesGetGlobalPolicyRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewStructOps, TEXT("ProfilesGetGlobalPolicyRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetGlobalPolicyRequest), 1239441390U) },
		{ FProfilesGetGlobalPolicyResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewStructOps, TEXT("ProfilesGetGlobalPolicyResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetGlobalPolicyResponse), 1258580056U) },
		{ FProfilesGetEntityProfileRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewStructOps, TEXT("ProfilesGetEntityProfileRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetEntityProfileRequest), 758037071U) },
		{ FProfilesGetEntityProfileResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewStructOps, TEXT("ProfilesGetEntityProfileResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetEntityProfileResponse), 2616782149U) },
		{ FProfilesGetEntityProfilesRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewStructOps, TEXT("ProfilesGetEntityProfilesRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetEntityProfilesRequest), 1709402076U) },
		{ FProfilesGetEntityProfilesResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewStructOps, TEXT("ProfilesGetEntityProfilesResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetEntityProfilesResponse), 663064908U) },
		{ FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewStructOps, TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest), 3205038725U) },
		{ FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewStructOps, TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse), 1184417503U) },
		{ FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewStructOps, TEXT("ProfilesGetTitlePlayersFromProviderIDsResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetTitlePlayersFromProviderIDsResponse), 3542589631U) },
		{ FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewStructOps, TEXT("ProfilesGetTitlePlayersFromXboxLiveIDsRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest), 737056107U) },
		{ FProfilesSetDisplayNameRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetDisplayNameRequest_Statics::NewStructOps, TEXT("ProfilesSetDisplayNameRequest"), &Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetDisplayNameRequest), 263650656U) },
		{ FProfilesSetDisplayNameResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetDisplayNameResponse_Statics::NewStructOps, TEXT("ProfilesSetDisplayNameResponse"), &Z_Registration_Info_UScriptStruct_ProfilesSetDisplayNameResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetDisplayNameResponse), 1880665604U) },
		{ FProfilesSetGlobalPolicyRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewStructOps, TEXT("ProfilesSetGlobalPolicyRequest"), &Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetGlobalPolicyRequest), 2938748157U) },
		{ FProfilesSetGlobalPolicyResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::NewStructOps, TEXT("ProfilesSetGlobalPolicyResponse"), &Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetGlobalPolicyResponse), 3953088412U) },
		{ FProfilesSetProfileLanguageRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewStructOps, TEXT("ProfilesSetProfileLanguageRequest"), &Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetProfileLanguageRequest), 1780863361U) },
		{ FProfilesSetProfileLanguageResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewStructOps, TEXT("ProfilesSetProfileLanguageResponse"), &Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetProfileLanguageResponse), 14804134U) },
		{ FProfilesSetEntityProfilePolicyRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewStructOps, TEXT("ProfilesSetEntityProfilePolicyRequest"), &Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetEntityProfilePolicyRequest), 1287465519U) },
		{ FProfilesSetEntityProfilePolicyResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewStructOps, TEXT("ProfilesSetEntityProfilePolicyResponse"), &Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetEntityProfilePolicyResponse), 1779242298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_2699394144(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
