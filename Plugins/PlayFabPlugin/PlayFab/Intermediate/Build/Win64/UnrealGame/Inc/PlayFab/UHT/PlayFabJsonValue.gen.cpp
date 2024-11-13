// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabJsonValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabJsonValue() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonValue();
PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonValue_NoRegister();
PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPFJson();
UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

// Begin Enum EPFJson
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPFJson;
static UEnum* EPFJson_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPFJson.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPFJson.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPFJson, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EPFJson"));
	}
	return Z_Registration_Info_UEnum_EPFJson.OuterSingleton;
}
template<> PLAYFAB_API UEnum* StaticEnum<EPFJson::Type>()
{
	return EPFJson_StaticEnum();
}
struct Z_Construct_UEnum_PlayFab_EPFJson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Array.Name", "EPFJson::Array" },
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "EPFJson::Boolean" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents all the types a Json Value can be.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
		{ "None.Name", "EPFJson::None" },
		{ "Null.Name", "EPFJson::Null" },
		{ "Number.Name", "EPFJson::Number" },
		{ "Object.Name", "EPFJson::Object" },
		{ "String.Name", "EPFJson::String" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents all the types a Json Value can be." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPFJson::None", (int64)EPFJson::None },
		{ "EPFJson::Null", (int64)EPFJson::Null },
		{ "EPFJson::String", (int64)EPFJson::String },
		{ "EPFJson::Number", (int64)EPFJson::Number },
		{ "EPFJson::Boolean", (int64)EPFJson::Boolean },
		{ "EPFJson::Array", (int64)EPFJson::Array },
		{ "EPFJson::Object", (int64)EPFJson::Object },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayFab_EPFJson_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
	nullptr,
	"EPFJson",
	"EPFJson::Type",
	Z_Construct_UEnum_PlayFab_EPFJson_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayFab_EPFJson_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayFab_EPFJson_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayFab_EPFJson_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayFab_EPFJson()
{
	if (!Z_Registration_Info_UEnum_EPFJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPFJson.InnerSingleton, Z_Construct_UEnum_PlayFab_EPFJson_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPFJson.InnerSingleton;
}
// End Enum EPFJson

// Begin Class UPlayFabJsonValue Function AsArray
struct Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics
{
	struct PlayFabJsonValue_eventAsArray_Parms
	{
		TArray<UPlayFabJsonValue*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as an array, throwing an error if this is not an Json Array */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsArray", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PlayFabJsonValue_eventAsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::PlayFabJsonValue_eventAsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execAsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UPlayFabJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function AsArray

// Begin Class UPlayFabJsonValue Function AsBool
struct Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics
{
	struct PlayFabJsonValue_eventAsBool_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a boolean, throwing an error if this is not an Json Bool */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayFabJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsBool", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PlayFabJsonValue_eventAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::PlayFabJsonValue_eventAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execAsBool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AsBool();
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function AsBool

// Begin Class UPlayFabJsonValue Function AsNumber
struct Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics
{
	struct PlayFabJsonValue_eventAsNumber_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a double, throwing an error if this is not an Json Number\n     * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsNumber", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PlayFabJsonValue_eventAsNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::PlayFabJsonValue_eventAsNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execAsNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->AsNumber();
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function AsNumber

// Begin Class UPlayFabJsonValue Function AsObject
struct Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics
{
	struct PlayFabJsonValue_eventAsObject_Parms
	{
		UPlayFabJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as an object, throwing an error if this is not an Json Object */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsObject", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PlayFabJsonValue_eventAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::PlayFabJsonValue_eventAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execAsObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabJsonObject**)Z_Param__Result=P_THIS->AsObject();
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function AsObject

// Begin Class UPlayFabJsonValue Function AsString
struct Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics
{
	struct PlayFabJsonValue_eventAsString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a number, throwing an error if this is not an Json String */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a number, throwing an error if this is not an Json String" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "AsString", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PlayFabJsonValue_eventAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::PlayFabJsonValue_eventAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_AsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_AsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execAsString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->AsString();
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function AsString

// Begin Class UPlayFabJsonValue Function ConstructJsonValueArray
struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics
{
	struct PlayFabJsonValue_eventConstructJsonValueArray_Parms
	{
		UObject* WorldContextObject;
		TArray<UPlayFabJsonValue*> InArray;
		UPlayFabJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Array value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Array Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Array value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueArray_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueArray", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PlayFabJsonValue_eventConstructJsonValueArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::PlayFabJsonValue_eventConstructJsonValueArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueArray)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(UPlayFabJsonValue*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueArray(Z_Param_WorldContextObject,Z_Param_Out_InArray);
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function ConstructJsonValueArray

// Begin Class UPlayFabJsonValue Function ConstructJsonValueBool
struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics
{
	struct PlayFabJsonValue_eventConstructJsonValueBool_Parms
	{
		UObject* WorldContextObject;
		bool InValue;
		UPlayFabJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Bool value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Bool Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Bool value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueBool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((PlayFabJsonValue_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabJsonValue_eventConstructJsonValueBool_Parms), &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueBool", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PlayFabJsonValue_eventConstructJsonValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::PlayFabJsonValue_eventConstructJsonValueBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueBool)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueBool(Z_Param_WorldContextObject,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function ConstructJsonValueBool

// Begin Class UPlayFabJsonValue Function ConstructJsonValueNumber
struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics
{
	struct PlayFabJsonValue_eventConstructJsonValueNumber_Parms
	{
		UObject* WorldContextObject;
		float Number;
		UPlayFabJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Number value\n    * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Number Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Number value\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueNumber_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueNumber", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PlayFabJsonValue_eventConstructJsonValueNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::PlayFabJsonValue_eventConstructJsonValueNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueNumber)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueNumber(Z_Param_WorldContextObject,Z_Param_Number);
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function ConstructJsonValueNumber

// Begin Class UPlayFabJsonValue Function ConstructJsonValueObject
struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics
{
	struct PlayFabJsonValue_eventConstructJsonValueObject_Parms
	{
		UObject* WorldContextObject;
		UPlayFabJsonObject* JsonObject;
		UPlayFabJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Object value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Object Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Object value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueObject", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PlayFabJsonValue_eventConstructJsonValueObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::PlayFabJsonValue_eventConstructJsonValueObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UPlayFabJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueObject(Z_Param_WorldContextObject,Z_Param_JsonObject);
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function ConstructJsonValueObject

// Begin Class UPlayFabJsonValue Function ConstructJsonValueString
struct Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics
{
	struct PlayFabJsonValue_eventConstructJsonValueString_Parms
	{
		UObject* WorldContextObject;
		FString StringValue;
		UPlayFabJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json String value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json String Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json String value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UPlayFabJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "ConstructJsonValueString", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PlayFabJsonValue_eventConstructJsonValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::PlayFabJsonValue_eventConstructJsonValueString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execConstructJsonValueString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayFabJsonValue**)Z_Param__Result=UPlayFabJsonValue::ConstructJsonValueString(Z_Param_WorldContextObject,Z_Param_StringValue);
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function ConstructJsonValueString

// Begin Class UPlayFabJsonValue Function GetType
struct Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics
{
	struct PlayFabJsonValue_eventGetType_Parms
	{
		TEnumAsByte<EPFJson::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get type of Json value (Enum) */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get type of Json value (Enum)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_PlayFab_EPFJson, METADATA_PARAMS(0, nullptr) }; // 2872740008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PlayFabJsonValue_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::PlayFabJsonValue_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPFJson::Type>*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function GetType

// Begin Class UPlayFabJsonValue Function GetTypeString
struct Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics
{
	struct PlayFabJsonValue_eventGetTypeString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get type of Json value (String) */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get type of Json value (String)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayFabJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "GetTypeString", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PlayFabJsonValue_eventGetTypeString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::PlayFabJsonValue_eventGetTypeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execGetTypeString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTypeString();
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function GetTypeString

// Begin Class UPlayFabJsonValue Function IsNull
struct Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics
{
	struct PlayFabJsonValue_eventIsNull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this value is a 'null' */" },
#endif
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this value is a 'null'" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayFabJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayFabJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabJsonValue, nullptr, "IsNull", nullptr, nullptr, Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PlayFabJsonValue_eventIsNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::PlayFabJsonValue_eventIsNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayFabJsonValue_IsNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabJsonValue_IsNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayFabJsonValue::execIsNull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNull();
	P_NATIVE_END;
}
// End Class UPlayFabJsonValue Function IsNull

// Begin Class UPlayFabJsonValue
void UPlayFabJsonValue::StaticRegisterNativesUPlayFabJsonValue()
{
	UClass* Class = UPlayFabJsonValue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsArray", &UPlayFabJsonValue::execAsArray },
		{ "AsBool", &UPlayFabJsonValue::execAsBool },
		{ "AsNumber", &UPlayFabJsonValue::execAsNumber },
		{ "AsObject", &UPlayFabJsonValue::execAsObject },
		{ "AsString", &UPlayFabJsonValue::execAsString },
		{ "ConstructJsonValueArray", &UPlayFabJsonValue::execConstructJsonValueArray },
		{ "ConstructJsonValueBool", &UPlayFabJsonValue::execConstructJsonValueBool },
		{ "ConstructJsonValueNumber", &UPlayFabJsonValue::execConstructJsonValueNumber },
		{ "ConstructJsonValueObject", &UPlayFabJsonValue::execConstructJsonValueObject },
		{ "ConstructJsonValueString", &UPlayFabJsonValue::execConstructJsonValueString },
		{ "GetType", &UPlayFabJsonValue::execGetType },
		{ "GetTypeString", &UPlayFabJsonValue::execGetTypeString },
		{ "IsNull", &UPlayFabJsonValue::execIsNull },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabJsonValue);
UClass* Z_Construct_UClass_UPlayFabJsonValue_NoRegister()
{
	return UPlayFabJsonValue::StaticClass();
}
struct Z_Construct_UClass_UPlayFabJsonValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprintable FJsonValue wrapper\n */" },
#endif
		{ "IncludePath", "PlayFabJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable FJsonValue wrapper" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsArray, "AsArray" }, // 3638341520
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsBool, "AsBool" }, // 1003513915
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsNumber, "AsNumber" }, // 4054010796
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsObject, "AsObject" }, // 1001942861
		{ &Z_Construct_UFunction_UPlayFabJsonValue_AsString, "AsString" }, // 3346255199
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 1981572731
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 1526391681
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 3947116834
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 3568640889
		{ &Z_Construct_UFunction_UPlayFabJsonValue_ConstructJsonValueString, "ConstructJsonValueString" }, // 2818477753
		{ &Z_Construct_UFunction_UPlayFabJsonValue_GetType, "GetType" }, // 2043456249
		{ &Z_Construct_UFunction_UPlayFabJsonValue_GetTypeString, "GetTypeString" }, // 2253688973
		{ &Z_Construct_UFunction_UPlayFabJsonValue_IsNull, "IsNull" }, // 552928815
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabJsonValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayFabJsonValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabJsonValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabJsonValue_Statics::ClassParams = {
	&UPlayFabJsonValue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabJsonValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabJsonValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabJsonValue()
{
	if (!Z_Registration_Info_UClass_UPlayFabJsonValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabJsonValue.OuterSingleton, Z_Construct_UClass_UPlayFabJsonValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabJsonValue.OuterSingleton;
}
template<> PLAYFAB_API UClass* StaticClass<UPlayFabJsonValue>()
{
	return UPlayFabJsonValue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabJsonValue);
UPlayFabJsonValue::~UPlayFabJsonValue() {}
// End Class UPlayFabJsonValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPFJson_StaticEnum, TEXT("EPFJson"), &Z_Registration_Info_UEnum_EPFJson, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2872740008U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabJsonValue, UPlayFabJsonValue::StaticClass, TEXT("UPlayFabJsonValue"), &Z_Registration_Info_UClass_UPlayFabJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabJsonValue), 805052031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_3478952484(TEXT("/Script/PlayFab"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabJsonValue_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
