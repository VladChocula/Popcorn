// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabLocalizationModelDecoder.h"
#include "PlayFab/Classes/PlayFabLocalizationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLocalizationModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabLocalizationModelDecoder Function decodeGetLanguageListResponseResponse
struct Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics
{
	struct PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FLocalizationGetLanguageListResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Localization | Localization Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetLanguageListResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetLanguageListResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, METADATA_PARAMS(0, nullptr) }; // 2532679549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationModelDecoder, nullptr, "decodeGetLanguageListResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabLocalizationModelDecoder::execdecodeGetLanguageListResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLocalizationGetLanguageListResponse*)Z_Param__Result=UPlayFabLocalizationModelDecoder::decodeGetLanguageListResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabLocalizationModelDecoder Function decodeGetLanguageListResponseResponse

// Begin Class UPlayFabLocalizationModelDecoder
void UPlayFabLocalizationModelDecoder::StaticRegisterNativesUPlayFabLocalizationModelDecoder()
{
	UClass* Class = UPlayFabLocalizationModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeGetLanguageListResponseResponse", &UPlayFabLocalizationModelDecoder::execdecodeGetLanguageListResponseResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabLocalizationModelDecoder);
UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder_NoRegister()
{
	return UPlayFabLocalizationModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabLocalizationModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse, "decodeGetLanguageListResponseResponse" }, // 3885269642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabLocalizationModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::ClassParams = {
	&UPlayFabLocalizationModelDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabLocalizationModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabLocalizationModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabLocalizationModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabLocalizationModelDecoder>()
{
	return UPlayFabLocalizationModelDecoder::StaticClass();
}
UPlayFabLocalizationModelDecoder::UPlayFabLocalizationModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabLocalizationModelDecoder);
UPlayFabLocalizationModelDecoder::~UPlayFabLocalizationModelDecoder() {}
// End Class UPlayFabLocalizationModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabLocalizationModelDecoder, UPlayFabLocalizationModelDecoder::StaticClass, TEXT("UPlayFabLocalizationModelDecoder"), &Z_Registration_Info_UClass_UPlayFabLocalizationModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabLocalizationModelDecoder), 4035545123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_787277779(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
