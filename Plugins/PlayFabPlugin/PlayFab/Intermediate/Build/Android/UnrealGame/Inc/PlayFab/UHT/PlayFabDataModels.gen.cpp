// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabDataModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabDataModels() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsRequest();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FDataAbortFileUploadsRequest
static_assert(std::is_polymorphic<FDataAbortFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataAbortFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest;
class UScriptStruct* FDataAbortFileUploadsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataAbortFileUploadsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataAbortFileUploadsRequest>()
{
	return FDataAbortFileUploadsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Aborts the pending upload of the requested files. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aborts the pending upload of the requested files." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Names of the files to have their pending uploads aborted. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Names of the files to have their pending uploads aborted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataAbortFileUploadsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataAbortFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataAbortFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataAbortFileUploadsRequest, FileNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileNames_MetaData), NewProp_FileNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataAbortFileUploadsRequest, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"DataAbortFileUploadsRequest",
	Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers),
	sizeof(FDataAbortFileUploadsRequest),
	alignof(FDataAbortFileUploadsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.InnerSingleton;
}
// End ScriptStruct FDataAbortFileUploadsRequest

// Begin ScriptStruct FDataAbortFileUploadsResponse
static_assert(std::is_polymorphic<FDataAbortFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataAbortFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse;
class UScriptStruct* FDataAbortFileUploadsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataAbortFileUploadsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataAbortFileUploadsResponse>()
{
	return FDataAbortFileUploadsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataAbortFileUploadsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataAbortFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataAbortFileUploadsResponse, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"DataAbortFileUploadsResponse",
	Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers),
	sizeof(FDataAbortFileUploadsResponse),
	alignof(FDataAbortFileUploadsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.InnerSingleton;
}
// End ScriptStruct FDataAbortFileUploadsResponse

// Begin ScriptStruct FDataDeleteFilesRequest
static_assert(std::is_polymorphic<FDataDeleteFilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataDeleteFilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest;
class UScriptStruct* FDataDeleteFilesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDeleteFilesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataDeleteFilesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataDeleteFilesRequest>()
{
	return FDataDeleteFilesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deletes the requested files from the entity's profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes the requested files from the entity's profile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Names of the files to be deleted. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Names of the files to be deleted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDeleteFilesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataDeleteFilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataDeleteFilesRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataDeleteFilesRequest, FileNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileNames_MetaData), NewProp_FileNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataDeleteFilesRequest, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"DataDeleteFilesRequest",
	Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers),
	sizeof(FDataDeleteFilesRequest),
	alignof(FDataDeleteFilesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.InnerSingleton;
}
// End ScriptStruct FDataDeleteFilesRequest

// Begin ScriptStruct FDataDeleteFilesResponse
static_assert(std::is_polymorphic<FDataDeleteFilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataDeleteFilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse;
class UScriptStruct* FDataDeleteFilesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDeleteFilesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataDeleteFilesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataDeleteFilesResponse>()
{
	return FDataDeleteFilesResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDeleteFilesResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataDeleteFilesResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataDeleteFilesResponse, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"DataDeleteFilesResponse",
	Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers),
	sizeof(FDataDeleteFilesResponse),
	alignof(FDataDeleteFilesResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse()
{
	if (!Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.InnerSingleton;
}
// End ScriptStruct FDataDeleteFilesResponse

// Begin ScriptStruct FDataFinalizeFileUploadsRequest
static_assert(std::is_polymorphic<FDataFinalizeFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataFinalizeFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest;
class UScriptStruct* FDataFinalizeFileUploadsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataFinalizeFileUploadsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataFinalizeFileUploadsRequest>()
{
	return FDataFinalizeFileUploadsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Finalizes the upload of the requested files. Verifies that the files have been successfully uploaded and moves the file\n * pointers from pending to live.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finalizes the upload of the requested files. Verifies that the files have been successfully uploaded and moves the file\npointers from pending to live." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Names of the files to be finalized. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.' */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Names of the files to be finalized. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFinalizeFileUploadsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, FileNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileNames_MetaData), NewProp_FileNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"DataFinalizeFileUploadsRequest",
	Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers),
	sizeof(FDataFinalizeFileUploadsRequest),
	alignof(FDataFinalizeFileUploadsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.InnerSingleton;
}
// End ScriptStruct FDataFinalizeFileUploadsRequest

// Begin ScriptStruct FDataFinalizeFileUploadsResponse
static_assert(std::is_polymorphic<FDataFinalizeFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataFinalizeFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse;
class UScriptStruct* FDataFinalizeFileUploadsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataFinalizeFileUploadsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataFinalizeFileUploadsResponse>()
{
	return FDataFinalizeFileUploadsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of metadata for the entity's files */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of metadata for the entity's files" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFinalizeFileUploadsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, Metadata), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"DataFinalizeFileUploadsResponse",
	Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers),
	sizeof(FDataFinalizeFileUploadsResponse),
	alignof(FDataFinalizeFileUploadsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.InnerSingleton;
}
// End ScriptStruct FDataFinalizeFileUploadsResponse

// Begin ScriptStruct FDataGetFilesRequest
static_assert(std::is_polymorphic<FDataGetFilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataGetFilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataGetFilesRequest;
class UScriptStruct* FDataGetFilesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetFilesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataGetFilesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetFilesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetFilesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataGetFilesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetFilesRequest>()
{
	return FDataGetFilesRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Returns URLs that may be used to download the files for a profile for a limited length of time. Only returns files that\n * have been successfully uploaded, files that are still pending will either return the old value, if it exists, or\n * nothing.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns URLs that may be used to download the files for a profile for a limited length of time. Only returns files that\nhave been successfully uploaded, files that are still pending will either return the old value, if it exists, or\nnothing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetFilesRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetFilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetFilesRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"DataGetFilesRequest",
	Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers),
	sizeof(FDataGetFilesRequest),
	alignof(FDataGetFilesRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesRequest()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetFilesRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataGetFilesRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataGetFilesRequest.InnerSingleton;
}
// End ScriptStruct FDataGetFilesRequest

// Begin ScriptStruct FDataGetFilesResponse
static_assert(std::is_polymorphic<FDataGetFilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataGetFilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataGetFilesResponse;
class UScriptStruct* FDataGetFilesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetFilesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataGetFilesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetFilesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetFilesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataGetFilesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetFilesResponse>()
{
	return FDataGetFilesResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of metadata for the entity's files */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of metadata for the entity's files" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetFilesResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetFilesResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetFilesResponse, Metadata), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetFilesResponse, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"DataGetFilesResponse",
	Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers),
	sizeof(FDataGetFilesResponse),
	alignof(FDataGetFilesResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetFilesResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataGetFilesResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataGetFilesResponse.InnerSingleton;
}
// End ScriptStruct FDataGetFilesResponse

// Begin ScriptStruct FDataInitiateFileUploadsRequest
static_assert(std::is_polymorphic<FDataInitiateFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataInitiateFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest;
class UScriptStruct* FDataInitiateFileUploadsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataInitiateFileUploadsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataInitiateFileUploadsRequest>()
{
	return FDataInitiateFileUploadsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Returns URLs that may be used to upload the files for a profile 5 minutes. After using the upload calls\n * FinalizeFileUploads must be called to move the file status from pending to live.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns URLs that may be used to upload the files for a profile 5 minutes. After using the upload calls\nFinalizeFileUploads must be called to move the file status from pending to live." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Names of the files to be set. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.' */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Names of the files to be set. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataInitiateFileUploadsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, FileNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileNames_MetaData), NewProp_FileNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"DataInitiateFileUploadsRequest",
	Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers),
	sizeof(FDataInitiateFileUploadsRequest),
	alignof(FDataInitiateFileUploadsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.InnerSingleton;
}
// End ScriptStruct FDataInitiateFileUploadsRequest

// Begin ScriptStruct FDataInitiateFileUploadsResponse
static_assert(std::is_polymorphic<FDataInitiateFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataInitiateFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse;
class UScriptStruct* FDataInitiateFileUploadsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataInitiateFileUploadsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataInitiateFileUploadsResponse>()
{
	return FDataInitiateFileUploadsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UploadDetails_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of file names and upload urls */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of file names and upload urls" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UploadDetails_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UploadDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataInitiateFileUploadsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_Inner = { "UploadDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails = { "UploadDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, UploadDetails), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UploadDetails_MetaData), NewProp_UploadDetails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"DataInitiateFileUploadsResponse",
	Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers),
	sizeof(FDataInitiateFileUploadsResponse),
	alignof(FDataInitiateFileUploadsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.InnerSingleton;
}
// End ScriptStruct FDataInitiateFileUploadsResponse

// Begin ScriptStruct FDataGetObjectsRequest
static_assert(std::is_polymorphic<FDataGetObjectsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataGetObjectsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataGetObjectsRequest;
class UScriptStruct* FDataGetObjectsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetObjectsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetObjectsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetObjectsRequest>()
{
	return FDataGetObjectsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets JSON objects from an entity profile and returns it. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets JSON objects from an entity profile and returns it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscapeObject_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether the object will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON\n     * object.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the object will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON\nobject." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static void NewProp_EscapeObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EscapeObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetObjectsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetObjectsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetObjectsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
void Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_SetBit(void* Obj)
{
	((FDataGetObjectsRequest*)Obj)->EscapeObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject = { "EscapeObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataGetObjectsRequest), &Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscapeObject_MetaData), NewProp_EscapeObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"DataGetObjectsRequest",
	Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers),
	sizeof(FDataGetObjectsRequest),
	alignof(FDataGetObjectsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.InnerSingleton;
}
// End ScriptStruct FDataGetObjectsRequest

// Begin ScriptStruct FDataGetObjectsResponse
static_assert(std::is_polymorphic<FDataGetObjectsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataGetObjectsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataGetObjectsResponse;
class UScriptStruct* FDataGetObjectsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetObjectsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetObjectsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetObjectsResponse>()
{
	return FDataGetObjectsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity id and type. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity id and type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Requested objects that the calling entity has access to */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requested objects that the calling entity has access to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetObjectsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetObjectsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetObjectsResponse, Objects), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataGetObjectsResponse, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"DataGetObjectsResponse",
	Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers),
	sizeof(FDataGetObjectsResponse),
	alignof(FDataGetObjectsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.InnerSingleton;
}
// End ScriptStruct FDataGetObjectsResponse

// Begin ScriptStruct FDataSetObjectsRequest
static_assert(std::is_polymorphic<FDataSetObjectsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataSetObjectsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataSetObjectsRequest;
class UScriptStruct* FDataSetObjectsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataSetObjectsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataSetObjectsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataSetObjectsRequest>()
{
	return FDataSetObjectsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Sets JSON objects on the requested entity profile. May include a version number to be used to perform optimistic\n * concurrency operations during update. If the current version differs from the version in the request the request will be\n * ignored. If no version is set on the request then the value will always be updated if the values differ. Using the\n * version value does not guarantee a write though, ConcurrentEditError may still occur if multiple clients are attempting\n * to update the same profile.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets JSON objects on the requested entity profile. May include a version number to be used to perform optimistic\nconcurrency operations during update. If the current version differs from the version in the request the request will be\nignored. If no version is set on the request then the value will always be updated if the values differ. Using the\nversion value does not guarantee a write though, ConcurrentEditError may still occur if multiple clients are attempting\nto update the same profile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The entity to perform this action on. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The entity to perform this action on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from\n     * GetProfile API, you can ensure that the object set will only be performed if the profile has not been updated by any\n     * other clients since the version you last loaded.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from\nGetProfile API, you can ensure that the object set will only be performed if the profile has not been updated by any\nother clients since the version you last loaded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collection of objects to set on the profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of objects to set on the profile." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedProfileVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataSetObjectsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataSetObjectsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTags_MetaData), NewProp_CustomTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataSetObjectsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entity_MetaData), NewProp_Entity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion = { "ExpectedProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataSetObjectsRequest, ExpectedProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedProfileVersion_MetaData), NewProp_ExpectedProfileVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataSetObjectsRequest, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabRequestCommon,
	&NewStructOps,
	"DataSetObjectsRequest",
	Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers),
	sizeof(FDataSetObjectsRequest),
	alignof(FDataSetObjectsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.InnerSingleton;
}
// End ScriptStruct FDataSetObjectsRequest

// Begin ScriptStruct FDataSetObjectsResponse
static_assert(std::is_polymorphic<FDataSetObjectsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataSetObjectsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataSetObjectsResponse;
class UScriptStruct* FDataSetObjectsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataSetObjectsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataSetObjectsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataSetObjectsResponse>()
{
	return FDataSetObjectsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New version of the entity profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New version of the entity profile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetResults_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New version of the entity profile. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New version of the entity profile." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SetResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataSetObjectsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataSetObjectsResponse, ProfileVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileVersion_MetaData), NewProp_ProfileVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_Inner = { "SetResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults = { "SetResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataSetObjectsResponse, SetResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetResults_MetaData), NewProp_SetResults_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	Z_Construct_UScriptStruct_FPlayFabResultCommon,
	&NewStructOps,
	"DataSetObjectsResponse",
	Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers),
	sizeof(FDataSetObjectsResponse),
	alignof(FDataSetObjectsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.InnerSingleton;
}
// End ScriptStruct FDataSetObjectsResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataAbortFileUploadsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewStructOps, TEXT("DataAbortFileUploadsRequest"), &Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataAbortFileUploadsRequest), 2285251543U) },
		{ FDataAbortFileUploadsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewStructOps, TEXT("DataAbortFileUploadsResponse"), &Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataAbortFileUploadsResponse), 3885273744U) },
		{ FDataDeleteFilesRequest::StaticStruct, Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewStructOps, TEXT("DataDeleteFilesRequest"), &Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataDeleteFilesRequest), 879182786U) },
		{ FDataDeleteFilesResponse::StaticStruct, Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewStructOps, TEXT("DataDeleteFilesResponse"), &Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataDeleteFilesResponse), 1160852229U) },
		{ FDataFinalizeFileUploadsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewStructOps, TEXT("DataFinalizeFileUploadsRequest"), &Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataFinalizeFileUploadsRequest), 2046699750U) },
		{ FDataFinalizeFileUploadsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewStructOps, TEXT("DataFinalizeFileUploadsResponse"), &Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataFinalizeFileUploadsResponse), 4104921823U) },
		{ FDataGetFilesRequest::StaticStruct, Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewStructOps, TEXT("DataGetFilesRequest"), &Z_Registration_Info_UScriptStruct_DataGetFilesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataGetFilesRequest), 1447021151U) },
		{ FDataGetFilesResponse::StaticStruct, Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewStructOps, TEXT("DataGetFilesResponse"), &Z_Registration_Info_UScriptStruct_DataGetFilesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataGetFilesResponse), 3345500513U) },
		{ FDataInitiateFileUploadsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewStructOps, TEXT("DataInitiateFileUploadsRequest"), &Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataInitiateFileUploadsRequest), 2216434630U) },
		{ FDataInitiateFileUploadsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewStructOps, TEXT("DataInitiateFileUploadsResponse"), &Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataInitiateFileUploadsResponse), 2460767787U) },
		{ FDataGetObjectsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewStructOps, TEXT("DataGetObjectsRequest"), &Z_Registration_Info_UScriptStruct_DataGetObjectsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataGetObjectsRequest), 1762583076U) },
		{ FDataGetObjectsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewStructOps, TEXT("DataGetObjectsResponse"), &Z_Registration_Info_UScriptStruct_DataGetObjectsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataGetObjectsResponse), 2462402023U) },
		{ FDataSetObjectsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewStructOps, TEXT("DataSetObjectsRequest"), &Z_Registration_Info_UScriptStruct_DataSetObjectsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataSetObjectsRequest), 3630474167U) },
		{ FDataSetObjectsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewStructOps, TEXT("DataSetObjectsResponse"), &Z_Registration_Info_UScriptStruct_DataSetObjectsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataSetObjectsResponse), 76317692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_1172324232(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
