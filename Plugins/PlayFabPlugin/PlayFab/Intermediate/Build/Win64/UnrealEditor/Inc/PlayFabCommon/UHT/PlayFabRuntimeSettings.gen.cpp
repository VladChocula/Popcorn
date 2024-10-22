// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFabCommon/Public/PlayFabRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabRuntimeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabRuntimeSettings();
PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabRuntimeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayFabCommon();
// End Cross Module References

// Begin Class UPlayFabRuntimeSettings
void UPlayFabRuntimeSettings::StaticRegisterNativesUPlayFabRuntimeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabRuntimeSettings);
UClass* Z_Construct_UClass_UPlayFabRuntimeSettings_NoRegister()
{
	return UPlayFabRuntimeSettings::StaticClass();
}
struct Z_Construct_UClass_UPlayFabRuntimeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Implements the settings for the PlayFab plugin in the Unreal GUI\n* This ends up being more like \"build time constants\", as they can't be changed at runtime\n*/" },
#endif
		{ "IncludePath", "PlayFabRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the settings for the PlayFab plugin in the Unreal GUI\nThis ends up being more like \"build time constants\", as they can't be changed at runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionEnvironmentURL_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URL endpoint of the PlayFab production environment\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL endpoint of the PlayFab production environment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game Title ID\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Title ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperSecretKey_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Secret Key, Do not add this to the clients!\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Secret Key, Do not add this to the clients!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductionEnvironmentURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperSecretKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL = { "ProductionEnvironmentURL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabRuntimeSettings, ProductionEnvironmentURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionEnvironmentURL_MetaData), NewProp_ProductionEnvironmentURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabRuntimeSettings, TitleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleId_MetaData), NewProp_TitleId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey = { "DeveloperSecretKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayFabRuntimeSettings, DeveloperSecretKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeveloperSecretKey_MetaData), NewProp_DeveloperSecretKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayFabCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::ClassParams = {
	&UPlayFabRuntimeSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayFabRuntimeSettings()
{
	if (!Z_Registration_Info_UClass_UPlayFabRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabRuntimeSettings.OuterSingleton, Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayFabRuntimeSettings.OuterSingleton;
}
template<> PLAYFABCOMMON_API UClass* StaticClass<UPlayFabRuntimeSettings>()
{
	return UPlayFabRuntimeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabRuntimeSettings);
UPlayFabRuntimeSettings::~UPlayFabRuntimeSettings() {}
// End Class UPlayFabRuntimeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabRuntimeSettings, UPlayFabRuntimeSettings::StaticClass, TEXT("UPlayFabRuntimeSettings"), &Z_Registration_Info_UClass_UPlayFabRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabRuntimeSettings), 1310641534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_1652742440(TEXT("/Script/PlayFabCommon"),
	Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
