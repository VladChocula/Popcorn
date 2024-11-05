// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabBaseModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabBaseModel() {}

// Begin Cross Module References
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin ScriptStruct FPlayFabError
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayFabError;
class UScriptStruct* FPlayFabError::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabError.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayFabError.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabError, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabError"));
	}
	return Z_Registration_Info_UScriptStruct_PlayFabError.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabError>()
{
	return FPlayFabError::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayFabError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasError_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is there an error */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is there an error" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the error code recieved from playfab. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the error code recieved from playfab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorName_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the error name recieved from playfab. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the error name recieved from playfab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the error message recieved from playfab. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the error message recieved from playfab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDetails_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the error details recieved from playfab. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the error details recieved from playfab." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_hasError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabError>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_SetBit(void* Obj)
{
	((FPlayFabError*)Obj)->hasError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError = { "hasError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayFabError), &Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasError_MetaData), NewProp_hasError_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabError, ErrorCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorCode_MetaData), NewProp_ErrorCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName = { "ErrorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabError, ErrorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorName_MetaData), NewProp_ErrorName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabError, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails = { "ErrorDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabError, ErrorDetails), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorDetails_MetaData), NewProp_ErrorDetails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabError_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	nullptr,
	&NewStructOps,
	"PlayFabError",
	Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers),
	sizeof(FPlayFabError),
	alignof(FPlayFabError),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabError.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayFabError.InnerSingleton, Z_Construct_UScriptStruct_FPlayFabError_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayFabError.InnerSingleton;
}
// End ScriptStruct FPlayFabError

// Begin ScriptStruct FPlayFabBaseModel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayFabBaseModel;
class UScriptStruct* FPlayFabBaseModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabBaseModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayFabBaseModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabBaseModel, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabBaseModel"));
	}
	return Z_Registration_Info_UScriptStruct_PlayFabBaseModel.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabBaseModel>()
{
	return FPlayFabBaseModel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_responseError_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the error USTRUCT recieved from playfab. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the error USTRUCT recieved from playfab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_responseData_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the full JSON recieved from playfab. */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the full JSON recieved from playfab." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_responseError;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_responseData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabBaseModel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError = { "responseError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabBaseModel, responseError), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_responseError_MetaData), NewProp_responseError_MetaData) }; // 1109941606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayFabBaseModel, responseData), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_responseData_MetaData), NewProp_responseData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	nullptr,
	&NewStructOps,
	"PlayFabBaseModel",
	Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers),
	sizeof(FPlayFabBaseModel),
	alignof(FPlayFabBaseModel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabBaseModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayFabBaseModel.InnerSingleton, Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayFabBaseModel.InnerSingleton;
}
// End ScriptStruct FPlayFabBaseModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayFabError::StaticStruct, Z_Construct_UScriptStruct_FPlayFabError_Statics::NewStructOps, TEXT("PlayFabError"), &Z_Registration_Info_UScriptStruct_PlayFabError, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayFabError), 1109941606U) },
		{ FPlayFabBaseModel::StaticStruct, Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewStructOps, TEXT("PlayFabBaseModel"), &Z_Registration_Info_UScriptStruct_PlayFabBaseModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayFabBaseModel), 603195937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_2983674273(TEXT("/Script/PlayFab"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
