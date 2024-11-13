// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabAuthenticationModelDecoder.h"
#include "PlayFab/Classes/PlayFabAuthenticationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationModelDecoder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationEmptyResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse();
PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Class UPlayFabAuthenticationModelDecoder Function decodeAuthenticateCustomIdResultResponse
struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics
{
	struct PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAuthenticationAuthenticateCustomIdResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the AuthenticateCustomIdResult response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the AuthenticateCustomIdResult response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult, METADATA_PARAMS(0, nullptr) }; // 2949370139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeAuthenticateCustomIdResultResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeAuthenticateCustomIdResultResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAuthenticationAuthenticateCustomIdResult*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeAuthenticateCustomIdResultResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationModelDecoder Function decodeAuthenticateCustomIdResultResponse

// Begin Class UPlayFabAuthenticationModelDecoder Function decodeEmptyResponseResponse
struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics
{
	struct PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAuthenticationEmptyResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the EmptyResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the EmptyResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationEmptyResponse, METADATA_PARAMS(0, nullptr) }; // 1159445068
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeEmptyResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeEmptyResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAuthenticationEmptyResponse*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeEmptyResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationModelDecoder Function decodeEmptyResponseResponse

// Begin Class UPlayFabAuthenticationModelDecoder Function decodeGetEntityTokenResponseResponse
struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics
{
	struct PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAuthenticationGetEntityTokenResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the GetEntityTokenResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the GetEntityTokenResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse, METADATA_PARAMS(0, nullptr) }; // 826951564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeGetEntityTokenResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeGetEntityTokenResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAuthenticationGetEntityTokenResponse*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeGetEntityTokenResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationModelDecoder Function decodeGetEntityTokenResponseResponse

// Begin Class UPlayFabAuthenticationModelDecoder Function decodeValidateEntityTokenResponseResponse
struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics
{
	struct PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms
	{
		UPlayFabJsonObject* response;
		FAuthenticationValidateEntityTokenResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the ValidateEntityTokenResponse response object*/" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the ValidateEntityTokenResponse response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse, METADATA_PARAMS(0, nullptr) }; // 1512695750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeValidateEntityTokenResponseResponse", nullptr, nullptr, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeValidateEntityTokenResponseResponse)
{
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAuthenticationValidateEntityTokenResponse*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeValidateEntityTokenResponseResponse(Z_Param_response);
	P_NATIVE_END;
}
// End Class UPlayFabAuthenticationModelDecoder Function decodeValidateEntityTokenResponseResponse

// Begin Class UPlayFabAuthenticationModelDecoder
void UPlayFabAuthenticationModelDecoder::StaticRegisterNativesUPlayFabAuthenticationModelDecoder()
{
	UClass* Class = UPlayFabAuthenticationModelDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decodeAuthenticateCustomIdResultResponse", &UPlayFabAuthenticationModelDecoder::execdecodeAuthenticateCustomIdResultResponse },
		{ "decodeEmptyResponseResponse", &UPlayFabAuthenticationModelDecoder::execdecodeEmptyResponseResponse },
		{ "decodeGetEntityTokenResponseResponse", &UPlayFabAuthenticationModelDecoder::execdecodeGetEntityTokenResponseResponse },
		{ "decodeValidateEntityTokenResponseResponse", &UPlayFabAuthenticationModelDecoder::execdecodeValidateEntityTokenResponseResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabAuthenticationModelDecoder);
UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_NoRegister()
{
	return UPlayFabAuthenticationModelDecoder::StaticClass();
}
struct Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabAuthenticationModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse, "decodeAuthenticateCustomIdResultResponse" }, // 1438606637
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse, "decodeEmptyResponseResponse" }, // 231981090
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse, "decodeGetEntityTokenResponseResponse" }, // 2343853644
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse, "decodeValidateEntityTokenResponseResponse" }, // 4110909723
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAuthenticationModelDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::ClassParams = {
	&UPlayFabAuthenticationModelDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder()
{
	if (!Z_Registration_Info_UClass_UPlayFabAuthenticationModelDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabAuthenticationModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabAuthenticationModelDecoder.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabAuthenticationModelDecoder>()
{
	return UPlayFabAuthenticationModelDecoder::StaticClass();
}
UPlayFabAuthenticationModelDecoder::UPlayFabAuthenticationModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAuthenticationModelDecoder);
UPlayFabAuthenticationModelDecoder::~UPlayFabAuthenticationModelDecoder() {}
// End Class UPlayFabAuthenticationModelDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, UPlayFabAuthenticationModelDecoder::StaticClass, TEXT("UPlayFabAuthenticationModelDecoder"), &Z_Registration_Info_UClass_UPlayFabAuthenticationModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabAuthenticationModelDecoder), 376797408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_4107805345(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
