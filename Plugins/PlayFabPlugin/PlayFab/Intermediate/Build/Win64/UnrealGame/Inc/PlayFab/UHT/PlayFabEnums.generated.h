// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_PlayFabEnums_generated_h
#error "PlayFabEnums.generated.h already included, missing '#pragma once' in PlayFabEnums.h"
#endif
#define PLAYFAB_PlayFabEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_Popcorn_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEnums_h


#define FOREACH_ENUM_EAUTHTOKENTYPE(op) \
	op(EAuthTokenType::pfenum_Email) 

enum class EAuthTokenType : uint8;
template<> struct TIsUEnumClass<EAuthTokenType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EAuthTokenType>();

#define FOREACH_ENUM_ECHURNRISKLEVEL(op) \
	op(EChurnRiskLevel::pfenum_NoData) \
	op(EChurnRiskLevel::pfenum_LowRisk) \
	op(EChurnRiskLevel::pfenum_MediumRisk) \
	op(EChurnRiskLevel::pfenum_HighRisk) 

enum class EChurnRiskLevel : uint8;
template<> struct TIsUEnumClass<EChurnRiskLevel> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EChurnRiskLevel>();

#define FOREACH_ENUM_ECONDITIONALS(op) \
	op(EConditionals::pfenum_Any) \
	op(EConditionals::pfenum_True) \
	op(EConditionals::pfenum_False) 

enum class EConditionals : uint8;
template<> struct TIsUEnumClass<EConditionals> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EConditionals>();

#define FOREACH_ENUM_ECONTINENTCODE(op) \
	op(EContinentCode::pfenum_AF) \
	op(EContinentCode::pfenum_AN) \
	op(EContinentCode::pfenum_AS) \
	op(EContinentCode::pfenum_EU) \
	op(EContinentCode::pfenum_NA) \
	op(EContinentCode::pfenum_OC) \
	op(EContinentCode::pfenum_SA) \
	op(EContinentCode::pfenum_Unknown) 

enum class EContinentCode : uint8;
template<> struct TIsUEnumClass<EContinentCode> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EContinentCode>();

#define FOREACH_ENUM_ECOUNTRYCODE(op) \
	op(ECountryCode::pfenum_AF) \
	op(ECountryCode::pfenum_AX) \
	op(ECountryCode::pfenum_AL) \
	op(ECountryCode::pfenum_DZ) \
	op(ECountryCode::pfenum_AS) \
	op(ECountryCode::pfenum_AD) \
	op(ECountryCode::pfenum_AO) \
	op(ECountryCode::pfenum_AI) \
	op(ECountryCode::pfenum_AQ) \
	op(ECountryCode::pfenum_AG) \
	op(ECountryCode::pfenum_AR) \
	op(ECountryCode::pfenum_AM) \
	op(ECountryCode::pfenum_AW) \
	op(ECountryCode::pfenum_AU) \
	op(ECountryCode::pfenum_AT) \
	op(ECountryCode::pfenum_AZ) \
	op(ECountryCode::pfenum_BS) \
	op(ECountryCode::pfenum_BH) \
	op(ECountryCode::pfenum_BD) \
	op(ECountryCode::pfenum_BB) \
	op(ECountryCode::pfenum_BY) \
	op(ECountryCode::pfenum_BE) \
	op(ECountryCode::pfenum_BZ) \
	op(ECountryCode::pfenum_BJ) \
	op(ECountryCode::pfenum_BM) \
	op(ECountryCode::pfenum_BT) \
	op(ECountryCode::pfenum_BO) \
	op(ECountryCode::pfenum_BQ) \
	op(ECountryCode::pfenum_BA) \
	op(ECountryCode::pfenum_BW) \
	op(ECountryCode::pfenum_BV) \
	op(ECountryCode::pfenum_BR) \
	op(ECountryCode::pfenum_IO) \
	op(ECountryCode::pfenum_BN) \
	op(ECountryCode::pfenum_BG) \
	op(ECountryCode::pfenum_BF) \
	op(ECountryCode::pfenum_BI) \
	op(ECountryCode::pfenum_KH) \
	op(ECountryCode::pfenum_CM) \
	op(ECountryCode::pfenum_CA) \
	op(ECountryCode::pfenum_CV) \
	op(ECountryCode::pfenum_KY) \
	op(ECountryCode::pfenum_CF) \
	op(ECountryCode::pfenum_TD) \
	op(ECountryCode::pfenum_CL) \
	op(ECountryCode::pfenum_CN) \
	op(ECountryCode::pfenum_CX) \
	op(ECountryCode::pfenum_CC) \
	op(ECountryCode::pfenum_CO) \
	op(ECountryCode::pfenum_KM) \
	op(ECountryCode::pfenum_CG) \
	op(ECountryCode::pfenum_CD) \
	op(ECountryCode::pfenum_CK) \
	op(ECountryCode::pfenum_CR) \
	op(ECountryCode::pfenum_CI) \
	op(ECountryCode::pfenum_HR) \
	op(ECountryCode::pfenum_CU) \
	op(ECountryCode::pfenum_CW) \
	op(ECountryCode::pfenum_CY) \
	op(ECountryCode::pfenum_CZ) \
	op(ECountryCode::pfenum_DK) \
	op(ECountryCode::pfenum_DJ) \
	op(ECountryCode::pfenum_DM) \
	op(ECountryCode::pfenum_DO) \
	op(ECountryCode::pfenum_EC) \
	op(ECountryCode::pfenum_EG) \
	op(ECountryCode::pfenum_SV) \
	op(ECountryCode::pfenum_GQ) \
	op(ECountryCode::pfenum_ER) \
	op(ECountryCode::pfenum_EE) \
	op(ECountryCode::pfenum_ET) \
	op(ECountryCode::pfenum_FK) \
	op(ECountryCode::pfenum_FO) \
	op(ECountryCode::pfenum_FJ) \
	op(ECountryCode::pfenum_FI) \
	op(ECountryCode::pfenum_FR) \
	op(ECountryCode::pfenum_GF) \
	op(ECountryCode::pfenum_PF) \
	op(ECountryCode::pfenum_TF) \
	op(ECountryCode::pfenum_GA) \
	op(ECountryCode::pfenum_GM) \
	op(ECountryCode::pfenum_GE) \
	op(ECountryCode::pfenum_DE) \
	op(ECountryCode::pfenum_GH) \
	op(ECountryCode::pfenum_GI) \
	op(ECountryCode::pfenum_GR) \
	op(ECountryCode::pfenum_GL) \
	op(ECountryCode::pfenum_GD) \
	op(ECountryCode::pfenum_GP) \
	op(ECountryCode::pfenum_GU) \
	op(ECountryCode::pfenum_GT) \
	op(ECountryCode::pfenum_GG) \
	op(ECountryCode::pfenum_GN) \
	op(ECountryCode::pfenum_GW) \
	op(ECountryCode::pfenum_GY) \
	op(ECountryCode::pfenum_HT) \
	op(ECountryCode::pfenum_HM) \
	op(ECountryCode::pfenum_VA) \
	op(ECountryCode::pfenum_HN) \
	op(ECountryCode::pfenum_HK) \
	op(ECountryCode::pfenum_HU) \
	op(ECountryCode::pfenum_IS) \
	op(ECountryCode::pfenum_IN) \
	op(ECountryCode::pfenum_ID) \
	op(ECountryCode::pfenum_IR) \
	op(ECountryCode::pfenum_IQ) \
	op(ECountryCode::pfenum_IE) \
	op(ECountryCode::pfenum_IM) \
	op(ECountryCode::pfenum_IL) \
	op(ECountryCode::pfenum_IT) \
	op(ECountryCode::pfenum_JM) \
	op(ECountryCode::pfenum_JP) \
	op(ECountryCode::pfenum_JE) \
	op(ECountryCode::pfenum_JO) \
	op(ECountryCode::pfenum_KZ) \
	op(ECountryCode::pfenum_KE) \
	op(ECountryCode::pfenum_KI) \
	op(ECountryCode::pfenum_KP) \
	op(ECountryCode::pfenum_KR) \
	op(ECountryCode::pfenum_KW) \
	op(ECountryCode::pfenum_KG) \
	op(ECountryCode::pfenum_LA) \
	op(ECountryCode::pfenum_LV) \
	op(ECountryCode::pfenum_LB) \
	op(ECountryCode::pfenum_LS) \
	op(ECountryCode::pfenum_LR) \
	op(ECountryCode::pfenum_LY) \
	op(ECountryCode::pfenum_LI) \
	op(ECountryCode::pfenum_LT) \
	op(ECountryCode::pfenum_LU) \
	op(ECountryCode::pfenum_MO) \
	op(ECountryCode::pfenum_MK) \
	op(ECountryCode::pfenum_MG) \
	op(ECountryCode::pfenum_MW) \
	op(ECountryCode::pfenum_MY) \
	op(ECountryCode::pfenum_MV) \
	op(ECountryCode::pfenum_ML) \
	op(ECountryCode::pfenum_MT) \
	op(ECountryCode::pfenum_MH) \
	op(ECountryCode::pfenum_MQ) \
	op(ECountryCode::pfenum_MR) \
	op(ECountryCode::pfenum_MU) \
	op(ECountryCode::pfenum_YT) \
	op(ECountryCode::pfenum_MX) \
	op(ECountryCode::pfenum_FM) \
	op(ECountryCode::pfenum_MD) \
	op(ECountryCode::pfenum_MC) \
	op(ECountryCode::pfenum_MN) \
	op(ECountryCode::pfenum_ME) \
	op(ECountryCode::pfenum_MS) \
	op(ECountryCode::pfenum_MA) \
	op(ECountryCode::pfenum_MZ) \
	op(ECountryCode::pfenum_MM) \
	op(ECountryCode::pfenum_NA) \
	op(ECountryCode::pfenum_NR) \
	op(ECountryCode::pfenum_NP) \
	op(ECountryCode::pfenum_NL) \
	op(ECountryCode::pfenum_NC) \
	op(ECountryCode::pfenum_NZ) \
	op(ECountryCode::pfenum_NI) \
	op(ECountryCode::pfenum_NE) \
	op(ECountryCode::pfenum_NG) \
	op(ECountryCode::pfenum_NU) \
	op(ECountryCode::pfenum_NF) \
	op(ECountryCode::pfenum_MP) \
	op(ECountryCode::pfenum_NO) \
	op(ECountryCode::pfenum_OM) \
	op(ECountryCode::pfenum_PK) \
	op(ECountryCode::pfenum_PW) \
	op(ECountryCode::pfenum_PS) \
	op(ECountryCode::pfenum_PA) \
	op(ECountryCode::pfenum_PG) \
	op(ECountryCode::pfenum_PY) \
	op(ECountryCode::pfenum_PE) \
	op(ECountryCode::pfenum_PH) \
	op(ECountryCode::pfenum_PN) \
	op(ECountryCode::pfenum_PL) \
	op(ECountryCode::pfenum_PT) \
	op(ECountryCode::pfenum_PR) \
	op(ECountryCode::pfenum_QA) \
	op(ECountryCode::pfenum_RE) \
	op(ECountryCode::pfenum_RO) \
	op(ECountryCode::pfenum_RU) \
	op(ECountryCode::pfenum_RW) \
	op(ECountryCode::pfenum_BL) \
	op(ECountryCode::pfenum_SH) \
	op(ECountryCode::pfenum_KN) \
	op(ECountryCode::pfenum_LC) \
	op(ECountryCode::pfenum_MF) \
	op(ECountryCode::pfenum_PM) \
	op(ECountryCode::pfenum_VC) \
	op(ECountryCode::pfenum_WS) \
	op(ECountryCode::pfenum_SM) \
	op(ECountryCode::pfenum_ST) \
	op(ECountryCode::pfenum_SA) \
	op(ECountryCode::pfenum_SN) \
	op(ECountryCode::pfenum_RS) \
	op(ECountryCode::pfenum_SC) \
	op(ECountryCode::pfenum_SL) \
	op(ECountryCode::pfenum_SG) \
	op(ECountryCode::pfenum_SX) \
	op(ECountryCode::pfenum_SK) \
	op(ECountryCode::pfenum_SI) \
	op(ECountryCode::pfenum_SB) \
	op(ECountryCode::pfenum_SO) \
	op(ECountryCode::pfenum_ZA) \
	op(ECountryCode::pfenum_GS) \
	op(ECountryCode::pfenum_SS) \
	op(ECountryCode::pfenum_ES) \
	op(ECountryCode::pfenum_LK) \
	op(ECountryCode::pfenum_SD) \
	op(ECountryCode::pfenum_SR) \
	op(ECountryCode::pfenum_SJ) \
	op(ECountryCode::pfenum_SZ) \
	op(ECountryCode::pfenum_SE) \
	op(ECountryCode::pfenum_CH) \
	op(ECountryCode::pfenum_SY) \
	op(ECountryCode::pfenum_TW) \
	op(ECountryCode::pfenum_TJ) \
	op(ECountryCode::pfenum_TZ) \
	op(ECountryCode::pfenum_TH) \
	op(ECountryCode::pfenum_TL) \
	op(ECountryCode::pfenum_TG) \
	op(ECountryCode::pfenum_TK) \
	op(ECountryCode::pfenum_TO) \
	op(ECountryCode::pfenum_TT) \
	op(ECountryCode::pfenum_TN) \
	op(ECountryCode::pfenum_TR) \
	op(ECountryCode::pfenum_TM) \
	op(ECountryCode::pfenum_TC) \
	op(ECountryCode::pfenum_TV) \
	op(ECountryCode::pfenum_UG) \
	op(ECountryCode::pfenum_UA) \
	op(ECountryCode::pfenum_AE) \
	op(ECountryCode::pfenum_GB) \
	op(ECountryCode::pfenum_US) \
	op(ECountryCode::pfenum_UM) \
	op(ECountryCode::pfenum_UY) \
	op(ECountryCode::pfenum_UZ) \
	op(ECountryCode::pfenum_VU) \
	op(ECountryCode::pfenum_VE) \
	op(ECountryCode::pfenum_VN) \
	op(ECountryCode::pfenum_VG) \
	op(ECountryCode::pfenum_VI) \
	op(ECountryCode::pfenum_WF) \
	op(ECountryCode::pfenum_EH) \
	op(ECountryCode::pfenum_YE) \
	op(ECountryCode::pfenum_ZM) \
	op(ECountryCode::pfenum_ZW) \
	op(ECountryCode::pfenum_Unknown) 

enum class ECountryCode : uint8;
template<> struct TIsUEnumClass<ECountryCode> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ECountryCode>();

#define FOREACH_ENUM_ECURRENCY(op) \
	op(ECurrency::pfenum_AED) \
	op(ECurrency::pfenum_AFN) \
	op(ECurrency::pfenum_ALL) \
	op(ECurrency::pfenum_AMD) \
	op(ECurrency::pfenum_ANG) \
	op(ECurrency::pfenum_AOA) \
	op(ECurrency::pfenum_ARS) \
	op(ECurrency::pfenum_AUD) \
	op(ECurrency::pfenum_AWG) \
	op(ECurrency::pfenum_AZN) \
	op(ECurrency::pfenum_BAM) \
	op(ECurrency::pfenum_BBD) \
	op(ECurrency::pfenum_BDT) \
	op(ECurrency::pfenum_BGN) \
	op(ECurrency::pfenum_BHD) \
	op(ECurrency::pfenum_BIF) \
	op(ECurrency::pfenum_BMD) \
	op(ECurrency::pfenum_BND) \
	op(ECurrency::pfenum_BOB) \
	op(ECurrency::pfenum_BRL) \
	op(ECurrency::pfenum_BSD) \
	op(ECurrency::pfenum_BTN) \
	op(ECurrency::pfenum_BWP) \
	op(ECurrency::pfenum_BYR) \
	op(ECurrency::pfenum_BZD) \
	op(ECurrency::pfenum_CAD) \
	op(ECurrency::pfenum_CDF) \
	op(ECurrency::pfenum_CHF) \
	op(ECurrency::pfenum_CLP) \
	op(ECurrency::pfenum_CNY) \
	op(ECurrency::pfenum_COP) \
	op(ECurrency::pfenum_CRC) \
	op(ECurrency::pfenum_CUC) \
	op(ECurrency::pfenum_CUP) \
	op(ECurrency::pfenum_CVE) \
	op(ECurrency::pfenum_CZK) \
	op(ECurrency::pfenum_DJF) \
	op(ECurrency::pfenum_DKK) \
	op(ECurrency::pfenum_DOP) \
	op(ECurrency::pfenum_DZD) \
	op(ECurrency::pfenum_EGP) \
	op(ECurrency::pfenum_ERN) \
	op(ECurrency::pfenum_ETB) \
	op(ECurrency::pfenum_EUR) \
	op(ECurrency::pfenum_FJD) \
	op(ECurrency::pfenum_FKP) \
	op(ECurrency::pfenum_GBP) \
	op(ECurrency::pfenum_GEL) \
	op(ECurrency::pfenum_GGP) \
	op(ECurrency::pfenum_GHS) \
	op(ECurrency::pfenum_GIP) \
	op(ECurrency::pfenum_GMD) \
	op(ECurrency::pfenum_GNF) \
	op(ECurrency::pfenum_GTQ) \
	op(ECurrency::pfenum_GYD) \
	op(ECurrency::pfenum_HKD) \
	op(ECurrency::pfenum_HNL) \
	op(ECurrency::pfenum_HRK) \
	op(ECurrency::pfenum_HTG) \
	op(ECurrency::pfenum_HUF) \
	op(ECurrency::pfenum_IDR) \
	op(ECurrency::pfenum_ILS) \
	op(ECurrency::pfenum_IMP) \
	op(ECurrency::pfenum_INR) \
	op(ECurrency::pfenum_IQD) \
	op(ECurrency::pfenum_IRR) \
	op(ECurrency::pfenum_ISK) \
	op(ECurrency::pfenum_JEP) \
	op(ECurrency::pfenum_JMD) \
	op(ECurrency::pfenum_JOD) \
	op(ECurrency::pfenum_JPY) \
	op(ECurrency::pfenum_KES) \
	op(ECurrency::pfenum_KGS) \
	op(ECurrency::pfenum_KHR) \
	op(ECurrency::pfenum_KMF) \
	op(ECurrency::pfenum_KPW) \
	op(ECurrency::pfenum_KRW) \
	op(ECurrency::pfenum_KWD) \
	op(ECurrency::pfenum_KYD) \
	op(ECurrency::pfenum_KZT) \
	op(ECurrency::pfenum_LAK) \
	op(ECurrency::pfenum_LBP) \
	op(ECurrency::pfenum_LKR) \
	op(ECurrency::pfenum_LRD) \
	op(ECurrency::pfenum_LSL) \
	op(ECurrency::pfenum_LYD) \
	op(ECurrency::pfenum_MAD) \
	op(ECurrency::pfenum_MDL) \
	op(ECurrency::pfenum_MGA) \
	op(ECurrency::pfenum_MKD) \
	op(ECurrency::pfenum_MMK) \
	op(ECurrency::pfenum_MNT) \
	op(ECurrency::pfenum_MOP) \
	op(ECurrency::pfenum_MRO) \
	op(ECurrency::pfenum_MUR) \
	op(ECurrency::pfenum_MVR) \
	op(ECurrency::pfenum_MWK) \
	op(ECurrency::pfenum_MXN) \
	op(ECurrency::pfenum_MYR) \
	op(ECurrency::pfenum_MZN) \
	op(ECurrency::pfenum_NAD) \
	op(ECurrency::pfenum_NGN) \
	op(ECurrency::pfenum_NIO) \
	op(ECurrency::pfenum_NOK) \
	op(ECurrency::pfenum_NPR) \
	op(ECurrency::pfenum_NZD) \
	op(ECurrency::pfenum_OMR) \
	op(ECurrency::pfenum_PAB) \
	op(ECurrency::pfenum_PEN) \
	op(ECurrency::pfenum_PGK) \
	op(ECurrency::pfenum_PHP) \
	op(ECurrency::pfenum_PKR) \
	op(ECurrency::pfenum_PLN) \
	op(ECurrency::pfenum_PYG) \
	op(ECurrency::pfenum_QAR) \
	op(ECurrency::pfenum_RON) \
	op(ECurrency::pfenum_RSD) \
	op(ECurrency::pfenum_RUB) \
	op(ECurrency::pfenum_RWF) \
	op(ECurrency::pfenum_SAR) \
	op(ECurrency::pfenum_SBD) \
	op(ECurrency::pfenum_SCR) \
	op(ECurrency::pfenum_SDG) \
	op(ECurrency::pfenum_SEK) \
	op(ECurrency::pfenum_SGD) \
	op(ECurrency::pfenum_SHP) \
	op(ECurrency::pfenum_SLL) \
	op(ECurrency::pfenum_SOS) \
	op(ECurrency::pfenum_SPL) \
	op(ECurrency::pfenum_SRD) \
	op(ECurrency::pfenum_STD) \
	op(ECurrency::pfenum_SVC) \
	op(ECurrency::pfenum_SYP) \
	op(ECurrency::pfenum_SZL) \
	op(ECurrency::pfenum_THB) \
	op(ECurrency::pfenum_TJS) \
	op(ECurrency::pfenum_TMT) \
	op(ECurrency::pfenum_TND) \
	op(ECurrency::pfenum_TOP) \
	op(ECurrency::pfenum_TRY) \
	op(ECurrency::pfenum_TTD) \
	op(ECurrency::pfenum_TVD) \
	op(ECurrency::pfenum_TWD) \
	op(ECurrency::pfenum_TZS) \
	op(ECurrency::pfenum_UAH) \
	op(ECurrency::pfenum_UGX) \
	op(ECurrency::pfenum_USD) \
	op(ECurrency::pfenum_UYU) \
	op(ECurrency::pfenum_UZS) \
	op(ECurrency::pfenum_VEF) \
	op(ECurrency::pfenum_VND) \
	op(ECurrency::pfenum_VUV) \
	op(ECurrency::pfenum_WST) \
	op(ECurrency::pfenum_XAF) \
	op(ECurrency::pfenum_XCD) \
	op(ECurrency::pfenum_XDR) \
	op(ECurrency::pfenum_XOF) \
	op(ECurrency::pfenum_XPF) \
	op(ECurrency::pfenum_YER) \
	op(ECurrency::pfenum_ZAR) \
	op(ECurrency::pfenum_ZMW) \
	op(ECurrency::pfenum_ZWD) 

enum class ECurrency : uint8;
template<> struct TIsUEnumClass<ECurrency> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ECurrency>();

#define FOREACH_ENUM_EEFFECTTYPE(op) \
	op(EEffectType::pfenum_Allow) \
	op(EEffectType::pfenum_Deny) 

enum class EEffectType : uint8;
template<> struct TIsUEnumClass<EEffectType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EEffectType>();

#define FOREACH_ENUM_EEMAILVERIFICATIONSTATUS(op) \
	op(EEmailVerificationStatus::pfenum_Unverified) \
	op(EEmailVerificationStatus::pfenum_Pending) \
	op(EEmailVerificationStatus::pfenum_Confirmed) 

enum class EEmailVerificationStatus : uint8;
template<> struct TIsUEnumClass<EEmailVerificationStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EEmailVerificationStatus>();

#define FOREACH_ENUM_ELOGINIDENTITYPROVIDER(op) \
	op(ELoginIdentityProvider::pfenum_Unknown) \
	op(ELoginIdentityProvider::pfenum_PlayFab) \
	op(ELoginIdentityProvider::pfenum_Custom) \
	op(ELoginIdentityProvider::pfenum_GameCenter) \
	op(ELoginIdentityProvider::pfenum_GooglePlay) \
	op(ELoginIdentityProvider::pfenum_Steam) \
	op(ELoginIdentityProvider::pfenum_XBoxLive) \
	op(ELoginIdentityProvider::pfenum_PSN) \
	op(ELoginIdentityProvider::pfenum_Kongregate) \
	op(ELoginIdentityProvider::pfenum_Facebook) \
	op(ELoginIdentityProvider::pfenum_IOSDevice) \
	op(ELoginIdentityProvider::pfenum_AndroidDevice) \
	op(ELoginIdentityProvider::pfenum_Twitch) \
	op(ELoginIdentityProvider::pfenum_WindowsHello) \
	op(ELoginIdentityProvider::pfenum_GameServer) \
	op(ELoginIdentityProvider::pfenum_CustomServer) \
	op(ELoginIdentityProvider::pfenum_NintendoSwitch) \
	op(ELoginIdentityProvider::pfenum_FacebookInstantGames) \
	op(ELoginIdentityProvider::pfenum_OpenIdConnect) \
	op(ELoginIdentityProvider::pfenum_Apple) \
	op(ELoginIdentityProvider::pfenum_NintendoSwitchAccount) \
	op(ELoginIdentityProvider::pfenum_GooglePlayGames) \
	op(ELoginIdentityProvider::pfenum_XboxMobileStore) \
	op(ELoginIdentityProvider::pfenum_King) 

enum class ELoginIdentityProvider : uint8;
template<> struct TIsUEnumClass<ELoginIdentityProvider> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ELoginIdentityProvider>();

#define FOREACH_ENUM_EPUSHNOTIFICATIONPLATFORM(op) \
	op(EPushNotificationPlatform::pfenum_ApplePushNotificationService) \
	op(EPushNotificationPlatform::pfenum_GoogleCloudMessaging) 

enum class EPushNotificationPlatform : uint8;
template<> struct TIsUEnumClass<EPushNotificationPlatform> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EPushNotificationPlatform>();

#define FOREACH_ENUM_EPUSHSETUPPLATFORM(op) \
	op(EPushSetupPlatform::pfenum_GCM) \
	op(EPushSetupPlatform::pfenum_APNS) \
	op(EPushSetupPlatform::pfenum_APNS_SANDBOX) 

enum class EPushSetupPlatform : uint8;
template<> struct TIsUEnumClass<EPushSetupPlatform> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EPushSetupPlatform>();

#define FOREACH_ENUM_ERESOLUTIONOUTCOME(op) \
	op(EResolutionOutcome::pfenum_Revoke) \
	op(EResolutionOutcome::pfenum_Reinstate) \
	op(EResolutionOutcome::pfenum_Manual) 

enum class EResolutionOutcome : uint8;
template<> struct TIsUEnumClass<EResolutionOutcome> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EResolutionOutcome>();

#define FOREACH_ENUM_ERESULTTABLENODETYPE(op) \
	op(EResultTableNodeType::pfenum_ItemId) \
	op(EResultTableNodeType::pfenum_TableId) 

enum class EResultTableNodeType : uint8;
template<> struct TIsUEnumClass<EResultTableNodeType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EResultTableNodeType>();

#define FOREACH_ENUM_ESCHEDULEDTASKTYPE(op) \
	op(EScheduledTaskType::pfenum_CloudScript) \
	op(EScheduledTaskType::pfenum_ActionsOnPlayerSegment) \
	op(EScheduledTaskType::pfenum_CloudScriptAzureFunctions) \
	op(EScheduledTaskType::pfenum_InsightsScheduledScaling) 

enum class EScheduledTaskType : uint8;
template<> struct TIsUEnumClass<EScheduledTaskType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EScheduledTaskType>();

#define FOREACH_ENUM_ESEGMENTCOUNTRYCODE(op) \
	op(ESegmentCountryCode::pfenum_AF) \
	op(ESegmentCountryCode::pfenum_AX) \
	op(ESegmentCountryCode::pfenum_AL) \
	op(ESegmentCountryCode::pfenum_DZ) \
	op(ESegmentCountryCode::pfenum_AS) \
	op(ESegmentCountryCode::pfenum_AD) \
	op(ESegmentCountryCode::pfenum_AO) \
	op(ESegmentCountryCode::pfenum_AI) \
	op(ESegmentCountryCode::pfenum_AQ) \
	op(ESegmentCountryCode::pfenum_AG) \
	op(ESegmentCountryCode::pfenum_AR) \
	op(ESegmentCountryCode::pfenum_AM) \
	op(ESegmentCountryCode::pfenum_AW) \
	op(ESegmentCountryCode::pfenum_AU) \
	op(ESegmentCountryCode::pfenum_AT) \
	op(ESegmentCountryCode::pfenum_AZ) \
	op(ESegmentCountryCode::pfenum_BS) \
	op(ESegmentCountryCode::pfenum_BH) \
	op(ESegmentCountryCode::pfenum_BD) \
	op(ESegmentCountryCode::pfenum_BB) \
	op(ESegmentCountryCode::pfenum_BY) \
	op(ESegmentCountryCode::pfenum_BE) \
	op(ESegmentCountryCode::pfenum_BZ) \
	op(ESegmentCountryCode::pfenum_BJ) \
	op(ESegmentCountryCode::pfenum_BM) \
	op(ESegmentCountryCode::pfenum_BT) \
	op(ESegmentCountryCode::pfenum_BO) \
	op(ESegmentCountryCode::pfenum_BQ) \
	op(ESegmentCountryCode::pfenum_BA) \
	op(ESegmentCountryCode::pfenum_BW) \
	op(ESegmentCountryCode::pfenum_BV) \
	op(ESegmentCountryCode::pfenum_BR) \
	op(ESegmentCountryCode::pfenum_IO) \
	op(ESegmentCountryCode::pfenum_BN) \
	op(ESegmentCountryCode::pfenum_BG) \
	op(ESegmentCountryCode::pfenum_BF) \
	op(ESegmentCountryCode::pfenum_BI) \
	op(ESegmentCountryCode::pfenum_KH) \
	op(ESegmentCountryCode::pfenum_CM) \
	op(ESegmentCountryCode::pfenum_CA) \
	op(ESegmentCountryCode::pfenum_CV) \
	op(ESegmentCountryCode::pfenum_KY) \
	op(ESegmentCountryCode::pfenum_CF) \
	op(ESegmentCountryCode::pfenum_TD) \
	op(ESegmentCountryCode::pfenum_CL) \
	op(ESegmentCountryCode::pfenum_CN) \
	op(ESegmentCountryCode::pfenum_CX) \
	op(ESegmentCountryCode::pfenum_CC) \
	op(ESegmentCountryCode::pfenum_CO) \
	op(ESegmentCountryCode::pfenum_KM) \
	op(ESegmentCountryCode::pfenum_CG) \
	op(ESegmentCountryCode::pfenum_CD) \
	op(ESegmentCountryCode::pfenum_CK) \
	op(ESegmentCountryCode::pfenum_CR) \
	op(ESegmentCountryCode::pfenum_CI) \
	op(ESegmentCountryCode::pfenum_HR) \
	op(ESegmentCountryCode::pfenum_CU) \
	op(ESegmentCountryCode::pfenum_CW) \
	op(ESegmentCountryCode::pfenum_CY) \
	op(ESegmentCountryCode::pfenum_CZ) \
	op(ESegmentCountryCode::pfenum_DK) \
	op(ESegmentCountryCode::pfenum_DJ) \
	op(ESegmentCountryCode::pfenum_DM) \
	op(ESegmentCountryCode::pfenum_DO) \
	op(ESegmentCountryCode::pfenum_EC) \
	op(ESegmentCountryCode::pfenum_EG) \
	op(ESegmentCountryCode::pfenum_SV) \
	op(ESegmentCountryCode::pfenum_GQ) \
	op(ESegmentCountryCode::pfenum_ER) \
	op(ESegmentCountryCode::pfenum_EE) \
	op(ESegmentCountryCode::pfenum_ET) \
	op(ESegmentCountryCode::pfenum_FK) \
	op(ESegmentCountryCode::pfenum_FO) \
	op(ESegmentCountryCode::pfenum_FJ) \
	op(ESegmentCountryCode::pfenum_FI) \
	op(ESegmentCountryCode::pfenum_FR) \
	op(ESegmentCountryCode::pfenum_GF) \
	op(ESegmentCountryCode::pfenum_PF) \
	op(ESegmentCountryCode::pfenum_TF) \
	op(ESegmentCountryCode::pfenum_GA) \
	op(ESegmentCountryCode::pfenum_GM) \
	op(ESegmentCountryCode::pfenum_GE) \
	op(ESegmentCountryCode::pfenum_DE) \
	op(ESegmentCountryCode::pfenum_GH) \
	op(ESegmentCountryCode::pfenum_GI) \
	op(ESegmentCountryCode::pfenum_GR) \
	op(ESegmentCountryCode::pfenum_GL) \
	op(ESegmentCountryCode::pfenum_GD) \
	op(ESegmentCountryCode::pfenum_GP) \
	op(ESegmentCountryCode::pfenum_GU) \
	op(ESegmentCountryCode::pfenum_GT) \
	op(ESegmentCountryCode::pfenum_GG) \
	op(ESegmentCountryCode::pfenum_GN) \
	op(ESegmentCountryCode::pfenum_GW) \
	op(ESegmentCountryCode::pfenum_GY) \
	op(ESegmentCountryCode::pfenum_HT) \
	op(ESegmentCountryCode::pfenum_HM) \
	op(ESegmentCountryCode::pfenum_VA) \
	op(ESegmentCountryCode::pfenum_HN) \
	op(ESegmentCountryCode::pfenum_HK) \
	op(ESegmentCountryCode::pfenum_HU) \
	op(ESegmentCountryCode::pfenum_IS) \
	op(ESegmentCountryCode::pfenum_IN) \
	op(ESegmentCountryCode::pfenum_ID) \
	op(ESegmentCountryCode::pfenum_IR) \
	op(ESegmentCountryCode::pfenum_IQ) \
	op(ESegmentCountryCode::pfenum_IE) \
	op(ESegmentCountryCode::pfenum_IM) \
	op(ESegmentCountryCode::pfenum_IL) \
	op(ESegmentCountryCode::pfenum_IT) \
	op(ESegmentCountryCode::pfenum_JM) \
	op(ESegmentCountryCode::pfenum_JP) \
	op(ESegmentCountryCode::pfenum_JE) \
	op(ESegmentCountryCode::pfenum_JO) \
	op(ESegmentCountryCode::pfenum_KZ) \
	op(ESegmentCountryCode::pfenum_KE) \
	op(ESegmentCountryCode::pfenum_KI) \
	op(ESegmentCountryCode::pfenum_KP) \
	op(ESegmentCountryCode::pfenum_KR) \
	op(ESegmentCountryCode::pfenum_KW) \
	op(ESegmentCountryCode::pfenum_KG) \
	op(ESegmentCountryCode::pfenum_LA) \
	op(ESegmentCountryCode::pfenum_LV) \
	op(ESegmentCountryCode::pfenum_LB) \
	op(ESegmentCountryCode::pfenum_LS) \
	op(ESegmentCountryCode::pfenum_LR) \
	op(ESegmentCountryCode::pfenum_LY) \
	op(ESegmentCountryCode::pfenum_LI) \
	op(ESegmentCountryCode::pfenum_LT) \
	op(ESegmentCountryCode::pfenum_LU) \
	op(ESegmentCountryCode::pfenum_MO) \
	op(ESegmentCountryCode::pfenum_MK) \
	op(ESegmentCountryCode::pfenum_MG) \
	op(ESegmentCountryCode::pfenum_MW) \
	op(ESegmentCountryCode::pfenum_MY) \
	op(ESegmentCountryCode::pfenum_MV) \
	op(ESegmentCountryCode::pfenum_ML) \
	op(ESegmentCountryCode::pfenum_MT) \
	op(ESegmentCountryCode::pfenum_MH) \
	op(ESegmentCountryCode::pfenum_MQ) \
	op(ESegmentCountryCode::pfenum_MR) \
	op(ESegmentCountryCode::pfenum_MU) \
	op(ESegmentCountryCode::pfenum_YT) \
	op(ESegmentCountryCode::pfenum_MX) \
	op(ESegmentCountryCode::pfenum_FM) \
	op(ESegmentCountryCode::pfenum_MD) \
	op(ESegmentCountryCode::pfenum_MC) \
	op(ESegmentCountryCode::pfenum_MN) \
	op(ESegmentCountryCode::pfenum_ME) \
	op(ESegmentCountryCode::pfenum_MS) \
	op(ESegmentCountryCode::pfenum_MA) \
	op(ESegmentCountryCode::pfenum_MZ) \
	op(ESegmentCountryCode::pfenum_MM) \
	op(ESegmentCountryCode::pfenum_NA) \
	op(ESegmentCountryCode::pfenum_NR) \
	op(ESegmentCountryCode::pfenum_NP) \
	op(ESegmentCountryCode::pfenum_NL) \
	op(ESegmentCountryCode::pfenum_NC) \
	op(ESegmentCountryCode::pfenum_NZ) \
	op(ESegmentCountryCode::pfenum_NI) \
	op(ESegmentCountryCode::pfenum_NE) \
	op(ESegmentCountryCode::pfenum_NG) \
	op(ESegmentCountryCode::pfenum_NU) \
	op(ESegmentCountryCode::pfenum_NF) \
	op(ESegmentCountryCode::pfenum_MP) \
	op(ESegmentCountryCode::pfenum_NO) \
	op(ESegmentCountryCode::pfenum_OM) \
	op(ESegmentCountryCode::pfenum_PK) \
	op(ESegmentCountryCode::pfenum_PW) \
	op(ESegmentCountryCode::pfenum_PS) \
	op(ESegmentCountryCode::pfenum_PA) \
	op(ESegmentCountryCode::pfenum_PG) \
	op(ESegmentCountryCode::pfenum_PY) \
	op(ESegmentCountryCode::pfenum_PE) \
	op(ESegmentCountryCode::pfenum_PH) \
	op(ESegmentCountryCode::pfenum_PN) \
	op(ESegmentCountryCode::pfenum_PL) \
	op(ESegmentCountryCode::pfenum_PT) \
	op(ESegmentCountryCode::pfenum_PR) \
	op(ESegmentCountryCode::pfenum_QA) \
	op(ESegmentCountryCode::pfenum_RE) \
	op(ESegmentCountryCode::pfenum_RO) \
	op(ESegmentCountryCode::pfenum_RU) \
	op(ESegmentCountryCode::pfenum_RW) \
	op(ESegmentCountryCode::pfenum_BL) \
	op(ESegmentCountryCode::pfenum_SH) \
	op(ESegmentCountryCode::pfenum_KN) \
	op(ESegmentCountryCode::pfenum_LC) \
	op(ESegmentCountryCode::pfenum_MF) \
	op(ESegmentCountryCode::pfenum_PM) \
	op(ESegmentCountryCode::pfenum_VC) \
	op(ESegmentCountryCode::pfenum_WS) \
	op(ESegmentCountryCode::pfenum_SM) \
	op(ESegmentCountryCode::pfenum_ST) \
	op(ESegmentCountryCode::pfenum_SA) \
	op(ESegmentCountryCode::pfenum_SN) \
	op(ESegmentCountryCode::pfenum_RS) \
	op(ESegmentCountryCode::pfenum_SC) \
	op(ESegmentCountryCode::pfenum_SL) \
	op(ESegmentCountryCode::pfenum_SG) \
	op(ESegmentCountryCode::pfenum_SX) \
	op(ESegmentCountryCode::pfenum_SK) \
	op(ESegmentCountryCode::pfenum_SI) \
	op(ESegmentCountryCode::pfenum_SB) \
	op(ESegmentCountryCode::pfenum_SO) \
	op(ESegmentCountryCode::pfenum_ZA) \
	op(ESegmentCountryCode::pfenum_GS) \
	op(ESegmentCountryCode::pfenum_SS) \
	op(ESegmentCountryCode::pfenum_ES) \
	op(ESegmentCountryCode::pfenum_LK) \
	op(ESegmentCountryCode::pfenum_SD) \
	op(ESegmentCountryCode::pfenum_SR) \
	op(ESegmentCountryCode::pfenum_SJ) \
	op(ESegmentCountryCode::pfenum_SZ) \
	op(ESegmentCountryCode::pfenum_SE) \
	op(ESegmentCountryCode::pfenum_CH) \
	op(ESegmentCountryCode::pfenum_SY) \
	op(ESegmentCountryCode::pfenum_TW) \
	op(ESegmentCountryCode::pfenum_TJ) \
	op(ESegmentCountryCode::pfenum_TZ) \
	op(ESegmentCountryCode::pfenum_TH) \
	op(ESegmentCountryCode::pfenum_TL) \
	op(ESegmentCountryCode::pfenum_TG) \
	op(ESegmentCountryCode::pfenum_TK) \
	op(ESegmentCountryCode::pfenum_TO) \
	op(ESegmentCountryCode::pfenum_TT) \
	op(ESegmentCountryCode::pfenum_TN) \
	op(ESegmentCountryCode::pfenum_TR) \
	op(ESegmentCountryCode::pfenum_TM) \
	op(ESegmentCountryCode::pfenum_TC) \
	op(ESegmentCountryCode::pfenum_TV) \
	op(ESegmentCountryCode::pfenum_UG) \
	op(ESegmentCountryCode::pfenum_UA) \
	op(ESegmentCountryCode::pfenum_AE) \
	op(ESegmentCountryCode::pfenum_GB) \
	op(ESegmentCountryCode::pfenum_US) \
	op(ESegmentCountryCode::pfenum_UM) \
	op(ESegmentCountryCode::pfenum_UY) \
	op(ESegmentCountryCode::pfenum_UZ) \
	op(ESegmentCountryCode::pfenum_VU) \
	op(ESegmentCountryCode::pfenum_VE) \
	op(ESegmentCountryCode::pfenum_VN) \
	op(ESegmentCountryCode::pfenum_VG) \
	op(ESegmentCountryCode::pfenum_VI) \
	op(ESegmentCountryCode::pfenum_WF) \
	op(ESegmentCountryCode::pfenum_EH) \
	op(ESegmentCountryCode::pfenum_YE) \
	op(ESegmentCountryCode::pfenum_ZM) \
	op(ESegmentCountryCode::pfenum_ZW) 

enum class ESegmentCountryCode : uint8;
template<> struct TIsUEnumClass<ESegmentCountryCode> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ESegmentCountryCode>();

#define FOREACH_ENUM_ESEGMENTCURRENCY(op) \
	op(ESegmentCurrency::pfenum_AED) \
	op(ESegmentCurrency::pfenum_AFN) \
	op(ESegmentCurrency::pfenum_ALL) \
	op(ESegmentCurrency::pfenum_AMD) \
	op(ESegmentCurrency::pfenum_ANG) \
	op(ESegmentCurrency::pfenum_AOA) \
	op(ESegmentCurrency::pfenum_ARS) \
	op(ESegmentCurrency::pfenum_AUD) \
	op(ESegmentCurrency::pfenum_AWG) \
	op(ESegmentCurrency::pfenum_AZN) \
	op(ESegmentCurrency::pfenum_BAM) \
	op(ESegmentCurrency::pfenum_BBD) \
	op(ESegmentCurrency::pfenum_BDT) \
	op(ESegmentCurrency::pfenum_BGN) \
	op(ESegmentCurrency::pfenum_BHD) \
	op(ESegmentCurrency::pfenum_BIF) \
	op(ESegmentCurrency::pfenum_BMD) \
	op(ESegmentCurrency::pfenum_BND) \
	op(ESegmentCurrency::pfenum_BOB) \
	op(ESegmentCurrency::pfenum_BRL) \
	op(ESegmentCurrency::pfenum_BSD) \
	op(ESegmentCurrency::pfenum_BTN) \
	op(ESegmentCurrency::pfenum_BWP) \
	op(ESegmentCurrency::pfenum_BYR) \
	op(ESegmentCurrency::pfenum_BZD) \
	op(ESegmentCurrency::pfenum_CAD) \
	op(ESegmentCurrency::pfenum_CDF) \
	op(ESegmentCurrency::pfenum_CHF) \
	op(ESegmentCurrency::pfenum_CLP) \
	op(ESegmentCurrency::pfenum_CNY) \
	op(ESegmentCurrency::pfenum_COP) \
	op(ESegmentCurrency::pfenum_CRC) \
	op(ESegmentCurrency::pfenum_CUC) \
	op(ESegmentCurrency::pfenum_CUP) \
	op(ESegmentCurrency::pfenum_CVE) \
	op(ESegmentCurrency::pfenum_CZK) \
	op(ESegmentCurrency::pfenum_DJF) \
	op(ESegmentCurrency::pfenum_DKK) \
	op(ESegmentCurrency::pfenum_DOP) \
	op(ESegmentCurrency::pfenum_DZD) \
	op(ESegmentCurrency::pfenum_EGP) \
	op(ESegmentCurrency::pfenum_ERN) \
	op(ESegmentCurrency::pfenum_ETB) \
	op(ESegmentCurrency::pfenum_EUR) \
	op(ESegmentCurrency::pfenum_FJD) \
	op(ESegmentCurrency::pfenum_FKP) \
	op(ESegmentCurrency::pfenum_GBP) \
	op(ESegmentCurrency::pfenum_GEL) \
	op(ESegmentCurrency::pfenum_GGP) \
	op(ESegmentCurrency::pfenum_GHS) \
	op(ESegmentCurrency::pfenum_GIP) \
	op(ESegmentCurrency::pfenum_GMD) \
	op(ESegmentCurrency::pfenum_GNF) \
	op(ESegmentCurrency::pfenum_GTQ) \
	op(ESegmentCurrency::pfenum_GYD) \
	op(ESegmentCurrency::pfenum_HKD) \
	op(ESegmentCurrency::pfenum_HNL) \
	op(ESegmentCurrency::pfenum_HRK) \
	op(ESegmentCurrency::pfenum_HTG) \
	op(ESegmentCurrency::pfenum_HUF) \
	op(ESegmentCurrency::pfenum_IDR) \
	op(ESegmentCurrency::pfenum_ILS) \
	op(ESegmentCurrency::pfenum_IMP) \
	op(ESegmentCurrency::pfenum_INR) \
	op(ESegmentCurrency::pfenum_IQD) \
	op(ESegmentCurrency::pfenum_IRR) \
	op(ESegmentCurrency::pfenum_ISK) \
	op(ESegmentCurrency::pfenum_JEP) \
	op(ESegmentCurrency::pfenum_JMD) \
	op(ESegmentCurrency::pfenum_JOD) \
	op(ESegmentCurrency::pfenum_JPY) \
	op(ESegmentCurrency::pfenum_KES) \
	op(ESegmentCurrency::pfenum_KGS) \
	op(ESegmentCurrency::pfenum_KHR) \
	op(ESegmentCurrency::pfenum_KMF) \
	op(ESegmentCurrency::pfenum_KPW) \
	op(ESegmentCurrency::pfenum_KRW) \
	op(ESegmentCurrency::pfenum_KWD) \
	op(ESegmentCurrency::pfenum_KYD) \
	op(ESegmentCurrency::pfenum_KZT) \
	op(ESegmentCurrency::pfenum_LAK) \
	op(ESegmentCurrency::pfenum_LBP) \
	op(ESegmentCurrency::pfenum_LKR) \
	op(ESegmentCurrency::pfenum_LRD) \
	op(ESegmentCurrency::pfenum_LSL) \
	op(ESegmentCurrency::pfenum_LYD) \
	op(ESegmentCurrency::pfenum_MAD) \
	op(ESegmentCurrency::pfenum_MDL) \
	op(ESegmentCurrency::pfenum_MGA) \
	op(ESegmentCurrency::pfenum_MKD) \
	op(ESegmentCurrency::pfenum_MMK) \
	op(ESegmentCurrency::pfenum_MNT) \
	op(ESegmentCurrency::pfenum_MOP) \
	op(ESegmentCurrency::pfenum_MRO) \
	op(ESegmentCurrency::pfenum_MUR) \
	op(ESegmentCurrency::pfenum_MVR) \
	op(ESegmentCurrency::pfenum_MWK) \
	op(ESegmentCurrency::pfenum_MXN) \
	op(ESegmentCurrency::pfenum_MYR) \
	op(ESegmentCurrency::pfenum_MZN) \
	op(ESegmentCurrency::pfenum_NAD) \
	op(ESegmentCurrency::pfenum_NGN) \
	op(ESegmentCurrency::pfenum_NIO) \
	op(ESegmentCurrency::pfenum_NOK) \
	op(ESegmentCurrency::pfenum_NPR) \
	op(ESegmentCurrency::pfenum_NZD) \
	op(ESegmentCurrency::pfenum_OMR) \
	op(ESegmentCurrency::pfenum_PAB) \
	op(ESegmentCurrency::pfenum_PEN) \
	op(ESegmentCurrency::pfenum_PGK) \
	op(ESegmentCurrency::pfenum_PHP) \
	op(ESegmentCurrency::pfenum_PKR) \
	op(ESegmentCurrency::pfenum_PLN) \
	op(ESegmentCurrency::pfenum_PYG) \
	op(ESegmentCurrency::pfenum_QAR) \
	op(ESegmentCurrency::pfenum_RON) \
	op(ESegmentCurrency::pfenum_RSD) \
	op(ESegmentCurrency::pfenum_RUB) \
	op(ESegmentCurrency::pfenum_RWF) \
	op(ESegmentCurrency::pfenum_SAR) \
	op(ESegmentCurrency::pfenum_SBD) \
	op(ESegmentCurrency::pfenum_SCR) \
	op(ESegmentCurrency::pfenum_SDG) \
	op(ESegmentCurrency::pfenum_SEK) \
	op(ESegmentCurrency::pfenum_SGD) \
	op(ESegmentCurrency::pfenum_SHP) \
	op(ESegmentCurrency::pfenum_SLL) \
	op(ESegmentCurrency::pfenum_SOS) \
	op(ESegmentCurrency::pfenum_SPL) \
	op(ESegmentCurrency::pfenum_SRD) \
	op(ESegmentCurrency::pfenum_STD) \
	op(ESegmentCurrency::pfenum_SVC) \
	op(ESegmentCurrency::pfenum_SYP) \
	op(ESegmentCurrency::pfenum_SZL) \
	op(ESegmentCurrency::pfenum_THB) \
	op(ESegmentCurrency::pfenum_TJS) \
	op(ESegmentCurrency::pfenum_TMT) \
	op(ESegmentCurrency::pfenum_TND) \
	op(ESegmentCurrency::pfenum_TOP) \
	op(ESegmentCurrency::pfenum_TRY) \
	op(ESegmentCurrency::pfenum_TTD) \
	op(ESegmentCurrency::pfenum_TVD) \
	op(ESegmentCurrency::pfenum_TWD) \
	op(ESegmentCurrency::pfenum_TZS) \
	op(ESegmentCurrency::pfenum_UAH) \
	op(ESegmentCurrency::pfenum_UGX) \
	op(ESegmentCurrency::pfenum_USD) \
	op(ESegmentCurrency::pfenum_UYU) \
	op(ESegmentCurrency::pfenum_UZS) \
	op(ESegmentCurrency::pfenum_VEF) \
	op(ESegmentCurrency::pfenum_VND) \
	op(ESegmentCurrency::pfenum_VUV) \
	op(ESegmentCurrency::pfenum_WST) \
	op(ESegmentCurrency::pfenum_XAF) \
	op(ESegmentCurrency::pfenum_XCD) \
	op(ESegmentCurrency::pfenum_XDR) \
	op(ESegmentCurrency::pfenum_XOF) \
	op(ESegmentCurrency::pfenum_XPF) \
	op(ESegmentCurrency::pfenum_YER) \
	op(ESegmentCurrency::pfenum_ZAR) \
	op(ESegmentCurrency::pfenum_ZMW) \
	op(ESegmentCurrency::pfenum_ZWD) 

enum class ESegmentCurrency : uint8;
template<> struct TIsUEnumClass<ESegmentCurrency> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ESegmentCurrency>();

#define FOREACH_ENUM_ESEGMENTFILTERCOMPARISON(op) \
	op(ESegmentFilterComparison::pfenum_GreaterThan) \
	op(ESegmentFilterComparison::pfenum_LessThan) \
	op(ESegmentFilterComparison::pfenum_EqualTo) \
	op(ESegmentFilterComparison::pfenum_NotEqualTo) \
	op(ESegmentFilterComparison::pfenum_GreaterThanOrEqual) \
	op(ESegmentFilterComparison::pfenum_LessThanOrEqual) \
	op(ESegmentFilterComparison::pfenum_Exists) \
	op(ESegmentFilterComparison::pfenum_Contains) \
	op(ESegmentFilterComparison::pfenum_NotContains) 

enum class ESegmentFilterComparison : uint8;
template<> struct TIsUEnumClass<ESegmentFilterComparison> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ESegmentFilterComparison>();

#define FOREACH_ENUM_ESEGMENTLOGINIDENTITYPROVIDER(op) \
	op(ESegmentLoginIdentityProvider::pfenum_Unknown) \
	op(ESegmentLoginIdentityProvider::pfenum_PlayFab) \
	op(ESegmentLoginIdentityProvider::pfenum_Custom) \
	op(ESegmentLoginIdentityProvider::pfenum_GameCenter) \
	op(ESegmentLoginIdentityProvider::pfenum_GooglePlay) \
	op(ESegmentLoginIdentityProvider::pfenum_Steam) \
	op(ESegmentLoginIdentityProvider::pfenum_XBoxLive) \
	op(ESegmentLoginIdentityProvider::pfenum_PSN) \
	op(ESegmentLoginIdentityProvider::pfenum_Kongregate) \
	op(ESegmentLoginIdentityProvider::pfenum_Facebook) \
	op(ESegmentLoginIdentityProvider::pfenum_IOSDevice) \
	op(ESegmentLoginIdentityProvider::pfenum_AndroidDevice) \
	op(ESegmentLoginIdentityProvider::pfenum_Twitch) \
	op(ESegmentLoginIdentityProvider::pfenum_WindowsHello) \
	op(ESegmentLoginIdentityProvider::pfenum_GameServer) \
	op(ESegmentLoginIdentityProvider::pfenum_CustomServer) \
	op(ESegmentLoginIdentityProvider::pfenum_NintendoSwitch) \
	op(ESegmentLoginIdentityProvider::pfenum_FacebookInstantGames) \
	op(ESegmentLoginIdentityProvider::pfenum_OpenIdConnect) \
	op(ESegmentLoginIdentityProvider::pfenum_Apple) \
	op(ESegmentLoginIdentityProvider::pfenum_NintendoSwitchAccount) \
	op(ESegmentLoginIdentityProvider::pfenum_GooglePlayGames) 

enum class ESegmentLoginIdentityProvider : uint8;
template<> struct TIsUEnumClass<ESegmentLoginIdentityProvider> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ESegmentLoginIdentityProvider>();

#define FOREACH_ENUM_ESEGMENTPUSHNOTIFICATIONDEVICEPLATFORM(op) \
	op(ESegmentPushNotificationDevicePlatform::pfenum_ApplePushNotificationService) \
	op(ESegmentPushNotificationDevicePlatform::pfenum_GoogleCloudMessaging) 

enum class ESegmentPushNotificationDevicePlatform : uint8;
template<> struct TIsUEnumClass<ESegmentPushNotificationDevicePlatform> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ESegmentPushNotificationDevicePlatform>();

#define FOREACH_ENUM_EPFSOURCETYPE(op) \
	op(EPfSourceType::pfenum_Admin) \
	op(EPfSourceType::pfenum_BackEnd) \
	op(EPfSourceType::pfenum_GameClient) \
	op(EPfSourceType::pfenum_GameServer) \
	op(EPfSourceType::pfenum_Partner) \
	op(EPfSourceType::pfenum_Custom) \
	op(EPfSourceType::pfenum_API) 

enum class EPfSourceType : uint8;
template<> struct TIsUEnumClass<EPfSourceType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EPfSourceType>();

#define FOREACH_ENUM_ESTATISTICAGGREGATIONMETHOD(op) \
	op(EStatisticAggregationMethod::pfenum_Last) \
	op(EStatisticAggregationMethod::pfenum_Min) \
	op(EStatisticAggregationMethod::pfenum_Max) \
	op(EStatisticAggregationMethod::pfenum_Sum) 

enum class EStatisticAggregationMethod : uint8;
template<> struct TIsUEnumClass<EStatisticAggregationMethod> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EStatisticAggregationMethod>();

#define FOREACH_ENUM_ESTATISTICRESETINTERVALOPTION(op) \
	op(EStatisticResetIntervalOption::pfenum_Never) \
	op(EStatisticResetIntervalOption::pfenum_Hour) \
	op(EStatisticResetIntervalOption::pfenum_Day) \
	op(EStatisticResetIntervalOption::pfenum_Week) \
	op(EStatisticResetIntervalOption::pfenum_Month) 

enum class EStatisticResetIntervalOption : uint8;
template<> struct TIsUEnumClass<EStatisticResetIntervalOption> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EStatisticResetIntervalOption>();

#define FOREACH_ENUM_ESTATISTICVERSIONARCHIVALSTATUS(op) \
	op(EStatisticVersionArchivalStatus::pfenum_NotScheduled) \
	op(EStatisticVersionArchivalStatus::pfenum_Scheduled) \
	op(EStatisticVersionArchivalStatus::pfenum_Queued) \
	op(EStatisticVersionArchivalStatus::pfenum_InProgress) \
	op(EStatisticVersionArchivalStatus::pfenum_Complete) 

enum class EStatisticVersionArchivalStatus : uint8;
template<> struct TIsUEnumClass<EStatisticVersionArchivalStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EStatisticVersionArchivalStatus>();

#define FOREACH_ENUM_ESTATISTICVERSIONSTATUS(op) \
	op(EStatisticVersionStatus::pfenum_Active) \
	op(EStatisticVersionStatus::pfenum_SnapshotPending) \
	op(EStatisticVersionStatus::pfenum_Snapshot) \
	op(EStatisticVersionStatus::pfenum_ArchivalPending) \
	op(EStatisticVersionStatus::pfenum_Archived) 

enum class EStatisticVersionStatus : uint8;
template<> struct TIsUEnumClass<EStatisticVersionStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EStatisticVersionStatus>();

#define FOREACH_ENUM_ESUBSCRIPTIONPROVIDERSTATUS(op) \
	op(ESubscriptionProviderStatus::pfenum_NoError) \
	op(ESubscriptionProviderStatus::pfenum_Cancelled) \
	op(ESubscriptionProviderStatus::pfenum_UnknownError) \
	op(ESubscriptionProviderStatus::pfenum_BillingError) \
	op(ESubscriptionProviderStatus::pfenum_ProductUnavailable) \
	op(ESubscriptionProviderStatus::pfenum_CustomerDidNotAcceptPriceChange) \
	op(ESubscriptionProviderStatus::pfenum_FreeTrial) \
	op(ESubscriptionProviderStatus::pfenum_PaymentPending) 

enum class ESubscriptionProviderStatus : uint8;
template<> struct TIsUEnumClass<ESubscriptionProviderStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ESubscriptionProviderStatus>();

#define FOREACH_ENUM_ETASKINSTANCESTATUS(op) \
	op(ETaskInstanceStatus::pfenum_Succeeded) \
	op(ETaskInstanceStatus::pfenum_Starting) \
	op(ETaskInstanceStatus::pfenum_InProgress) \
	op(ETaskInstanceStatus::pfenum_Failed) \
	op(ETaskInstanceStatus::pfenum_Aborted) \
	op(ETaskInstanceStatus::pfenum_Stalled) 

enum class ETaskInstanceStatus : uint8;
template<> struct TIsUEnumClass<ETaskInstanceStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ETaskInstanceStatus>();

#define FOREACH_ENUM_ETITLEACTIVATIONSTATUS(op) \
	op(ETitleActivationStatus::pfenum_None) \
	op(ETitleActivationStatus::pfenum_ActivatedTitleKey) \
	op(ETitleActivationStatus::pfenum_PendingSteam) \
	op(ETitleActivationStatus::pfenum_ActivatedSteam) \
	op(ETitleActivationStatus::pfenum_RevokedSteam) 

enum class ETitleActivationStatus : uint8;
template<> struct TIsUEnumClass<ETitleActivationStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ETitleActivationStatus>();

#define FOREACH_ENUM_EUSERDATAPERMISSION(op) \
	op(EUserDataPermission::pfenum_Private) \
	op(EUserDataPermission::pfenum_Public) 

enum class EUserDataPermission : uint8;
template<> struct TIsUEnumClass<EUserDataPermission> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EUserDataPermission>();

#define FOREACH_ENUM_EUSERFAMILYTYPE(op) \
	op(EUserFamilyType::pfenum_None) \
	op(EUserFamilyType::pfenum_Xbox) \
	op(EUserFamilyType::pfenum_Steam) 

enum class EUserFamilyType : uint8;
template<> struct TIsUEnumClass<EUserFamilyType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EUserFamilyType>();

#define FOREACH_ENUM_EUSERORIGINATION(op) \
	op(EUserOrigination::pfenum_Organic) \
	op(EUserOrigination::pfenum_Steam) \
	op(EUserOrigination::pfenum_Google) \
	op(EUserOrigination::pfenum_Amazon) \
	op(EUserOrigination::pfenum_Facebook) \
	op(EUserOrigination::pfenum_Kongregate) \
	op(EUserOrigination::pfenum_GamersFirst) \
	op(EUserOrigination::pfenum_Unknown) \
	op(EUserOrigination::pfenum_IOS) \
	op(EUserOrigination::pfenum_LoadTest) \
	op(EUserOrigination::pfenum_Android) \
	op(EUserOrigination::pfenum_PSN) \
	op(EUserOrigination::pfenum_GameCenter) \
	op(EUserOrigination::pfenum_CustomId) \
	op(EUserOrigination::pfenum_XboxLive) \
	op(EUserOrigination::pfenum_Parse) \
	op(EUserOrigination::pfenum_Twitch) \
	op(EUserOrigination::pfenum_ServerCustomId) \
	op(EUserOrigination::pfenum_NintendoSwitchDeviceId) \
	op(EUserOrigination::pfenum_FacebookInstantGamesId) \
	op(EUserOrigination::pfenum_OpenIdConnect) \
	op(EUserOrigination::pfenum_Apple) \
	op(EUserOrigination::pfenum_NintendoSwitchAccount) \
	op(EUserOrigination::pfenum_GooglePlayGames) \
	op(EUserOrigination::pfenum_XboxMobileStore) \
	op(EUserOrigination::pfenum_King) 

enum class EUserOrigination : uint8;
template<> struct TIsUEnumClass<EUserOrigination> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EUserOrigination>();

#define FOREACH_ENUM_EADACTIVITY(op) \
	op(EAdActivity::pfenum_Opened) \
	op(EAdActivity::pfenum_Closed) \
	op(EAdActivity::pfenum_Start) \
	op(EAdActivity::pfenum_End) 

enum class EAdActivity : uint8;
template<> struct TIsUEnumClass<EAdActivity> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EAdActivity>();

#define FOREACH_ENUM_ECLOUDSCRIPTREVISIONOPTION(op) \
	op(ECloudScriptRevisionOption::pfenum_Live) \
	op(ECloudScriptRevisionOption::pfenum_Latest) \
	op(ECloudScriptRevisionOption::pfenum_Specific) 

enum class ECloudScriptRevisionOption : uint8;
template<> struct TIsUEnumClass<ECloudScriptRevisionOption> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ECloudScriptRevisionOption>();

#define FOREACH_ENUM_EEXTERNALFRIENDSOURCES(op) \
	op(EExternalFriendSources::pfenum_None) \
	op(EExternalFriendSources::pfenum_Steam) \
	op(EExternalFriendSources::pfenum_Facebook) \
	op(EExternalFriendSources::pfenum_Xbox) \
	op(EExternalFriendSources::pfenum_Psn) \
	op(EExternalFriendSources::pfenum_All) 

enum class EExternalFriendSources : uint8;
template<> struct TIsUEnumClass<EExternalFriendSources> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EExternalFriendSources>();

#define FOREACH_ENUM_ETRADESTATUS(op) \
	op(ETradeStatus::pfenum_Invalid) \
	op(ETradeStatus::pfenum_Opening) \
	op(ETradeStatus::pfenum_Open) \
	op(ETradeStatus::pfenum_Accepting) \
	op(ETradeStatus::pfenum_Accepted) \
	op(ETradeStatus::pfenum_Filled) \
	op(ETradeStatus::pfenum_Cancelled) 

enum class ETradeStatus : uint8;
template<> struct TIsUEnumClass<ETradeStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ETradeStatus>();

#define FOREACH_ENUM_ETRANSACTIONSTATUS(op) \
	op(ETransactionStatus::pfenum_CreateCart) \
	op(ETransactionStatus::pfenum_Init) \
	op(ETransactionStatus::pfenum_Approved) \
	op(ETransactionStatus::pfenum_Succeeded) \
	op(ETransactionStatus::pfenum_FailedByProvider) \
	op(ETransactionStatus::pfenum_DisputePending) \
	op(ETransactionStatus::pfenum_RefundPending) \
	op(ETransactionStatus::pfenum_Refunded) \
	op(ETransactionStatus::pfenum_RefundFailed) \
	op(ETransactionStatus::pfenum_ChargedBack) \
	op(ETransactionStatus::pfenum_FailedByUber) \
	op(ETransactionStatus::pfenum_FailedByPlayFab) \
	op(ETransactionStatus::pfenum_Revoked) \
	op(ETransactionStatus::pfenum_TradePending) \
	op(ETransactionStatus::pfenum_Traded) \
	op(ETransactionStatus::pfenum_Upgraded) \
	op(ETransactionStatus::pfenum_StackPending) \
	op(ETransactionStatus::pfenum_Stacked) \
	op(ETransactionStatus::pfenum_Other) \
	op(ETransactionStatus::pfenum_Failed) 

enum class ETransactionStatus : uint8;
template<> struct TIsUEnumClass<ETransactionStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ETransactionStatus>();

#define FOREACH_ENUM_EIDENTIFIEDDEVICETYPE(op) \
	op(EIdentifiedDeviceType::pfenum_Unknown) \
	op(EIdentifiedDeviceType::pfenum_XboxOne) \
	op(EIdentifiedDeviceType::pfenum_Scarlett) \
	op(EIdentifiedDeviceType::pfenum_WindowsOneCore) \
	op(EIdentifiedDeviceType::pfenum_WindowsOneCoreMobile) \
	op(EIdentifiedDeviceType::pfenum_Win32) \
	op(EIdentifiedDeviceType::pfenum_android) \
	op(EIdentifiedDeviceType::pfenum_iOS) \
	op(EIdentifiedDeviceType::pfenum_PlayStation) \
	op(EIdentifiedDeviceType::pfenum_Nintendo) 

enum class EIdentifiedDeviceType : uint8;
template<> struct TIsUEnumClass<EIdentifiedDeviceType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EIdentifiedDeviceType>();

#define FOREACH_ENUM_EPFTRIGGERTYPE(op) \
	op(EPfTriggerType::pfenum_HTTP) \
	op(EPfTriggerType::pfenum_Queue) \
	op(EPfTriggerType::pfenum_EventHub) 

enum class EPfTriggerType : uint8;
template<> struct TIsUEnumClass<EPfTriggerType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EPfTriggerType>();

#define FOREACH_ENUM_EOPERATIONTYPES(op) \
	op(EOperationTypes::pfenum_Created) \
	op(EOperationTypes::pfenum_Updated) \
	op(EOperationTypes::pfenum_Deleted) \
	op(EOperationTypes::pfenum_None) 

enum class EOperationTypes : uint8;
template<> struct TIsUEnumClass<EOperationTypes> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EOperationTypes>();

#define FOREACH_ENUM_ECONCERNCATEGORY(op) \
	op(EConcernCategory::pfenum_None) \
	op(EConcernCategory::pfenum_OffensiveContent) \
	op(EConcernCategory::pfenum_ChildExploitation) \
	op(EConcernCategory::pfenum_MalwareOrVirus) \
	op(EConcernCategory::pfenum_PrivacyConcerns) \
	op(EConcernCategory::pfenum_MisleadingApp) \
	op(EConcernCategory::pfenum_PoorPerformance) \
	op(EConcernCategory::pfenum_ReviewResponse) \
	op(EConcernCategory::pfenum_SpamAdvertising) \
	op(EConcernCategory::pfenum_Profanity) 

enum class EConcernCategory : uint8;
template<> struct TIsUEnumClass<EConcernCategory> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EConcernCategory>();

#define FOREACH_ENUM_EDISPLAYPROPERTYTYPE(op) \
	op(EDisplayPropertyType::pfenum_None) \
	op(EDisplayPropertyType::pfenum_QueryDateTime) \
	op(EDisplayPropertyType::pfenum_QueryDouble) \
	op(EDisplayPropertyType::pfenum_QueryString) \
	op(EDisplayPropertyType::pfenum_SearchString) 

enum class EDisplayPropertyType : uint8;
template<> struct TIsUEnumClass<EDisplayPropertyType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EDisplayPropertyType>();

#define FOREACH_ENUM_EHELPFULNESSVOTE(op) \
	op(EHelpfulnessVote::pfenum_None) \
	op(EHelpfulnessVote::pfenum_UnHelpful) \
	op(EHelpfulnessVote::pfenum_Helpful) 

enum class EHelpfulnessVote : uint8;
template<> struct TIsUEnumClass<EHelpfulnessVote> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EHelpfulnessVote>();

#define FOREACH_ENUM_EMODERATIONSTATUS(op) \
	op(EModerationStatus::pfenum_Unknown) \
	op(EModerationStatus::pfenum_AwaitingModeration) \
	op(EModerationStatus::pfenum_Approved) \
	op(EModerationStatus::pfenum_Rejected) 

enum class EModerationStatus : uint8;
template<> struct TIsUEnumClass<EModerationStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EModerationStatus>();

#define FOREACH_ENUM_EPUBLISHRESULT(op) \
	op(EPublishResult::pfenum_Unknown) \
	op(EPublishResult::pfenum_Pending) \
	op(EPublishResult::pfenum_Succeeded) \
	op(EPublishResult::pfenum_Failed) \
	op(EPublishResult::pfenum_Canceled) 

enum class EPublishResult : uint8;
template<> struct TIsUEnumClass<EPublishResult> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EPublishResult>();

#define FOREACH_ENUM_EANALYSISTASKSTATE(op) \
	op(EAnalysisTaskState::pfenum_Waiting) \
	op(EAnalysisTaskState::pfenum_ReadyForSubmission) \
	op(EAnalysisTaskState::pfenum_SubmittingToPipeline) \
	op(EAnalysisTaskState::pfenum_Running) \
	op(EAnalysisTaskState::pfenum_Completed) \
	op(EAnalysisTaskState::pfenum_Failed) \
	op(EAnalysisTaskState::pfenum_Canceled) 

enum class EAnalysisTaskState : uint8;
template<> struct TIsUEnumClass<EAnalysisTaskState> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EAnalysisTaskState>();

#define FOREACH_ENUM_EEXPERIMENTSTATE(op) \
	op(EExperimentState::pfenum_New) \
	op(EExperimentState::pfenum_Started) \
	op(EExperimentState::pfenum_Stopped) \
	op(EExperimentState::pfenum_Deleted) 

enum class EExperimentState : uint8;
template<> struct TIsUEnumClass<EExperimentState> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EExperimentState>();

#define FOREACH_ENUM_EEXPERIMENTTYPE(op) \
	op(EExperimentType::pfenum_Active) \
	op(EExperimentType::pfenum_Snapshot) 

enum class EExperimentType : uint8;
template<> struct TIsUEnumClass<EExperimentType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EExperimentType>();

#define FOREACH_ENUM_ELEADERBOARDSORTDIRECTION(op) \
	op(ELeaderboardSortDirection::pfenum_Descending) \
	op(ELeaderboardSortDirection::pfenum_Ascending) 

enum class ELeaderboardSortDirection : uint8;
template<> struct TIsUEnumClass<ELeaderboardSortDirection> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ELeaderboardSortDirection>();

#define FOREACH_ENUM_ERESETINTERVAL(op) \
	op(EResetInterval::pfenum_Manual) \
	op(EResetInterval::pfenum_Hour) \
	op(EResetInterval::pfenum_Day) \
	op(EResetInterval::pfenum_Week) \
	op(EResetInterval::pfenum_Month) 

enum class EResetInterval : uint8;
template<> struct TIsUEnumClass<EResetInterval> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EResetInterval>();

#define FOREACH_ENUM_EACCESSPOLICY(op) \
	op(EAccessPolicy::pfenum_Public) \
	op(EAccessPolicy::pfenum_Friends) \
	op(EAccessPolicy::pfenum_Private) 

enum class EAccessPolicy : uint8;
template<> struct TIsUEnumClass<EAccessPolicy> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EAccessPolicy>();

#define FOREACH_ENUM_EAZUREREGION(op) \
	op(EAzureRegion::pfenum_AustraliaEast) \
	op(EAzureRegion::pfenum_AustraliaSoutheast) \
	op(EAzureRegion::pfenum_BrazilSouth) \
	op(EAzureRegion::pfenum_CentralUs) \
	op(EAzureRegion::pfenum_EastAsia) \
	op(EAzureRegion::pfenum_EastUs) \
	op(EAzureRegion::pfenum_EastUs2) \
	op(EAzureRegion::pfenum_JapanEast) \
	op(EAzureRegion::pfenum_JapanWest) \
	op(EAzureRegion::pfenum_NorthCentralUs) \
	op(EAzureRegion::pfenum_NorthEurope) \
	op(EAzureRegion::pfenum_SouthCentralUs) \
	op(EAzureRegion::pfenum_SoutheastAsia) \
	op(EAzureRegion::pfenum_WestEurope) \
	op(EAzureRegion::pfenum_WestUs) \
	op(EAzureRegion::pfenum_SouthAfricaNorth) \
	op(EAzureRegion::pfenum_WestCentralUs) \
	op(EAzureRegion::pfenum_KoreaCentral) \
	op(EAzureRegion::pfenum_FranceCentral) \
	op(EAzureRegion::pfenum_WestUs2) \
	op(EAzureRegion::pfenum_CentralIndia) \
	op(EAzureRegion::pfenum_UaeNorth) \
	op(EAzureRegion::pfenum_UkSouth) \
	op(EAzureRegion::pfenum_SwedenCentral) 

enum class EAzureRegion : uint8;
template<> struct TIsUEnumClass<EAzureRegion> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EAzureRegion>();

#define FOREACH_ENUM_EAZUREVMFAMILY(op) \
	op(EAzureVmFamily::pfenum_A) \
	op(EAzureVmFamily::pfenum_Av2) \
	op(EAzureVmFamily::pfenum_Dv2) \
	op(EAzureVmFamily::pfenum_Dv3) \
	op(EAzureVmFamily::pfenum_F) \
	op(EAzureVmFamily::pfenum_Fsv2) \
	op(EAzureVmFamily::pfenum_Dasv4) \
	op(EAzureVmFamily::pfenum_Dav4) \
	op(EAzureVmFamily::pfenum_Dadsv5) \
	op(EAzureVmFamily::pfenum_Eav4) \
	op(EAzureVmFamily::pfenum_Easv4) \
	op(EAzureVmFamily::pfenum_Ev4) \
	op(EAzureVmFamily::pfenum_Esv4) \
	op(EAzureVmFamily::pfenum_Dsv3) \
	op(EAzureVmFamily::pfenum_Dsv2) \
	op(EAzureVmFamily::pfenum_NCasT4_v3) \
	op(EAzureVmFamily::pfenum_Ddv4) \
	op(EAzureVmFamily::pfenum_Ddsv4) \
	op(EAzureVmFamily::pfenum_HBv3) \
	op(EAzureVmFamily::pfenum_Ddv5) \
	op(EAzureVmFamily::pfenum_Ddsv5) 

enum class EAzureVmFamily : uint8;
template<> struct TIsUEnumClass<EAzureVmFamily> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EAzureVmFamily>();

#define FOREACH_ENUM_EAZUREVMSIZE(op) \
	op(EAzureVmSize::pfenum_Standard_A1) \
	op(EAzureVmSize::pfenum_Standard_A2) \
	op(EAzureVmSize::pfenum_Standard_A3) \
	op(EAzureVmSize::pfenum_Standard_A4) \
	op(EAzureVmSize::pfenum_Standard_A1_v2) \
	op(EAzureVmSize::pfenum_Standard_A2_v2) \
	op(EAzureVmSize::pfenum_Standard_A4_v2) \
	op(EAzureVmSize::pfenum_Standard_A8_v2) \
	op(EAzureVmSize::pfenum_Standard_D1_v2) \
	op(EAzureVmSize::pfenum_Standard_D2_v2) \
	op(EAzureVmSize::pfenum_Standard_D3_v2) \
	op(EAzureVmSize::pfenum_Standard_D4_v2) \
	op(EAzureVmSize::pfenum_Standard_D5_v2) \
	op(EAzureVmSize::pfenum_Standard_D2_v3) \
	op(EAzureVmSize::pfenum_Standard_D4_v3) \
	op(EAzureVmSize::pfenum_Standard_D8_v3) \
	op(EAzureVmSize::pfenum_Standard_D16_v3) \
	op(EAzureVmSize::pfenum_Standard_F1) \
	op(EAzureVmSize::pfenum_Standard_F2) \
	op(EAzureVmSize::pfenum_Standard_F4) \
	op(EAzureVmSize::pfenum_Standard_F8) \
	op(EAzureVmSize::pfenum_Standard_F16) \
	op(EAzureVmSize::pfenum_Standard_F2s_v2) \
	op(EAzureVmSize::pfenum_Standard_F4s_v2) \
	op(EAzureVmSize::pfenum_Standard_F8s_v2) \
	op(EAzureVmSize::pfenum_Standard_F16s_v2) \
	op(EAzureVmSize::pfenum_Standard_D2as_v4) \
	op(EAzureVmSize::pfenum_Standard_D4as_v4) \
	op(EAzureVmSize::pfenum_Standard_D8as_v4) \
	op(EAzureVmSize::pfenum_Standard_D16as_v4) \
	op(EAzureVmSize::pfenum_Standard_D2a_v4) \
	op(EAzureVmSize::pfenum_Standard_D4a_v4) \
	op(EAzureVmSize::pfenum_Standard_D8a_v4) \
	op(EAzureVmSize::pfenum_Standard_D16a_v4) \
	op(EAzureVmSize::pfenum_Standard_D2ads_v5) \
	op(EAzureVmSize::pfenum_Standard_D4ads_v5) \
	op(EAzureVmSize::pfenum_Standard_D8ads_v5) \
	op(EAzureVmSize::pfenum_Standard_D16ads_v5) \
	op(EAzureVmSize::pfenum_Standard_E2a_v4) \
	op(EAzureVmSize::pfenum_Standard_E4a_v4) \
	op(EAzureVmSize::pfenum_Standard_E8a_v4) \
	op(EAzureVmSize::pfenum_Standard_E16a_v4) \
	op(EAzureVmSize::pfenum_Standard_E2as_v4) \
	op(EAzureVmSize::pfenum_Standard_E4as_v4) \
	op(EAzureVmSize::pfenum_Standard_E8as_v4) \
	op(EAzureVmSize::pfenum_Standard_E16as_v4) \
	op(EAzureVmSize::pfenum_Standard_D2s_v3) \
	op(EAzureVmSize::pfenum_Standard_D4s_v3) \
	op(EAzureVmSize::pfenum_Standard_D8s_v3) \
	op(EAzureVmSize::pfenum_Standard_D16s_v3) \
	op(EAzureVmSize::pfenum_Standard_DS1_v2) \
	op(EAzureVmSize::pfenum_Standard_DS2_v2) \
	op(EAzureVmSize::pfenum_Standard_DS3_v2) \
	op(EAzureVmSize::pfenum_Standard_DS4_v2) \
	op(EAzureVmSize::pfenum_Standard_DS5_v2) \
	op(EAzureVmSize::pfenum_Standard_NC4as_T4_v3) \
	op(EAzureVmSize::pfenum_Standard_D2d_v4) \
	op(EAzureVmSize::pfenum_Standard_D4d_v4) \
	op(EAzureVmSize::pfenum_Standard_D8d_v4) \
	op(EAzureVmSize::pfenum_Standard_D16d_v4) \
	op(EAzureVmSize::pfenum_Standard_D2ds_v4) \
	op(EAzureVmSize::pfenum_Standard_D4ds_v4) \
	op(EAzureVmSize::pfenum_Standard_D8ds_v4) \
	op(EAzureVmSize::pfenum_Standard_D16ds_v4) \
	op(EAzureVmSize::pfenum_Standard_HB120_16rs_v3) \
	op(EAzureVmSize::pfenum_Standard_HB120_32rs_v3) \
	op(EAzureVmSize::pfenum_Standard_HB120_64rs_v3) \
	op(EAzureVmSize::pfenum_Standard_HB120_96rs_v3) \
	op(EAzureVmSize::pfenum_Standard_HB120rs_v3) \
	op(EAzureVmSize::pfenum_Standard_D2d_v5) \
	op(EAzureVmSize::pfenum_Standard_D4d_v5) \
	op(EAzureVmSize::pfenum_Standard_D8d_v5) \
	op(EAzureVmSize::pfenum_Standard_D16d_v5) \
	op(EAzureVmSize::pfenum_Standard_D32d_v5) \
	op(EAzureVmSize::pfenum_Standard_D2ds_v5) \
	op(EAzureVmSize::pfenum_Standard_D4ds_v5) \
	op(EAzureVmSize::pfenum_Standard_D8ds_v5) \
	op(EAzureVmSize::pfenum_Standard_D16ds_v5) \
	op(EAzureVmSize::pfenum_Standard_D32ds_v5) 

enum class EAzureVmSize : uint8;
template<> struct TIsUEnumClass<EAzureVmSize> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EAzureVmSize>();

#define FOREACH_ENUM_ECANCELLATIONREASON(op) \
	op(ECancellationReason::pfenum_Requested) \
	op(ECancellationReason::pfenum_Internal) \
	op(ECancellationReason::pfenum_Timeout) 

enum class ECancellationReason : uint8;
template<> struct TIsUEnumClass<ECancellationReason> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ECancellationReason>();

#define FOREACH_ENUM_ECONTAINERFLAVOR(op) \
	op(EContainerFlavor::pfenum_ManagedWindowsServerCore) \
	op(EContainerFlavor::pfenum_CustomLinux) \
	op(EContainerFlavor::pfenum_ManagedWindowsServerCorePreview) \
	op(EContainerFlavor::pfenum_Invalid) 

enum class EContainerFlavor : uint8;
template<> struct TIsUEnumClass<EContainerFlavor> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EContainerFlavor>();

#define FOREACH_ENUM_EDIRECTPEERCONNECTIVITYOPTIONS(op) \
	op(EDirectPeerConnectivityOptions::pfenum_None) \
	op(EDirectPeerConnectivityOptions::pfenum_SamePlatformType) \
	op(EDirectPeerConnectivityOptions::pfenum_DifferentPlatformType) \
	op(EDirectPeerConnectivityOptions::pfenum_AnyPlatformType) \
	op(EDirectPeerConnectivityOptions::pfenum_SameEntityLoginProvider) \
	op(EDirectPeerConnectivityOptions::pfenum_DifferentEntityLoginProvider) \
	op(EDirectPeerConnectivityOptions::pfenum_AnyEntityLoginProvider) \
	op(EDirectPeerConnectivityOptions::pfenum_AnyPlatformTypeAndEntityLoginProvider) \
	op(EDirectPeerConnectivityOptions::pfenum_OnlyServers) 

enum class EDirectPeerConnectivityOptions : uint8;
template<> struct TIsUEnumClass<EDirectPeerConnectivityOptions> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EDirectPeerConnectivityOptions>();

#define FOREACH_ENUM_EMEMBERSHIPLOCK(op) \
	op(EMembershipLock::pfenum_Unlocked) \
	op(EMembershipLock::pfenum_Locked) 

enum class EMembershipLock : uint8;
template<> struct TIsUEnumClass<EMembershipLock> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EMembershipLock>();

#define FOREACH_ENUM_EOSPLATFORM(op) \
	op(EOsPlatform::pfenum_Windows) \
	op(EOsPlatform::pfenum_Linux) 

enum class EOsPlatform : uint8;
template<> struct TIsUEnumClass<EOsPlatform> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EOsPlatform>();

#define FOREACH_ENUM_EOWNERMIGRATIONPOLICY(op) \
	op(EOwnerMigrationPolicy::pfenum_None) \
	op(EOwnerMigrationPolicy::pfenum_Automatic) \
	op(EOwnerMigrationPolicy::pfenum_Manual) \
	op(EOwnerMigrationPolicy::pfenum_Server) 

enum class EOwnerMigrationPolicy : uint8;
template<> struct TIsUEnumClass<EOwnerMigrationPolicy> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EOwnerMigrationPolicy>();

#define FOREACH_ENUM_EPARTYINVITATIONREVOCABILITY(op) \
	op(EPartyInvitationRevocability::pfenum_Creator) \
	op(EPartyInvitationRevocability::pfenum_Anyone) 

enum class EPartyInvitationRevocability : uint8;
template<> struct TIsUEnumClass<EPartyInvitationRevocability> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EPartyInvitationRevocability>();

#define FOREACH_ENUM_EPROTOCOLTYPE(op) \
	op(EProtocolType::pfenum_TCP) \
	op(EProtocolType::pfenum_UDP) 

enum class EProtocolType : uint8;
template<> struct TIsUEnumClass<EProtocolType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EProtocolType>();

#define FOREACH_ENUM_EROUTINGTYPE(op) \
	op(ERoutingType::pfenum_Microsoft) \
	op(ERoutingType::pfenum_Internet) 

enum class ERoutingType : uint8;
template<> struct TIsUEnumClass<ERoutingType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ERoutingType>();

#define FOREACH_ENUM_ESERVERTYPE(op) \
	op(EServerType::pfenum_Container) \
	op(EServerType::pfenum_Process) 

enum class EServerType : uint8;
template<> struct TIsUEnumClass<EServerType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<EServerType>();

#define FOREACH_ENUM_ESUBSCRIPTIONTYPE(op) \
	op(ESubscriptionType::pfenum_LobbyChange) \
	op(ESubscriptionType::pfenum_LobbyInvite) 

enum class ESubscriptionType : uint8;
template<> struct TIsUEnumClass<ESubscriptionType> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ESubscriptionType>();

#define FOREACH_ENUM_ETITLEMULTIPLAYERSERVERENABLEDSTATUS(op) \
	op(ETitleMultiplayerServerEnabledStatus::pfenum_Initializing) \
	op(ETitleMultiplayerServerEnabledStatus::pfenum_Enabled) \
	op(ETitleMultiplayerServerEnabledStatus::pfenum_Disabled) 

enum class ETitleMultiplayerServerEnabledStatus : uint8;
template<> struct TIsUEnumClass<ETitleMultiplayerServerEnabledStatus> { enum { Value = true }; };
template<> PLAYFAB_API UEnum* StaticEnum<ETitleMultiplayerServerEnabledStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
