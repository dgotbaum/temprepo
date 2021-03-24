// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJson/Public/Enums/ELowEntryJsonType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryJsonType() {}
// Cross Module References
	LOWENTRYJSON_API UEnum* Z_Construct_UEnum_LowEntryJson_ELowEntryJsonType();
	UPackage* Z_Construct_UPackage__Script_LowEntryJson();
// End Cross Module References
	static UEnum* ELowEntryJsonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryJson_ELowEntryJsonType, Z_Construct_UPackage__Script_LowEntryJson(), TEXT("ELowEntryJsonType"));
		}
		return Singleton;
	}
	template<> LOWENTRYJSON_API UEnum* StaticEnum<ELowEntryJsonType>()
	{
		return ELowEntryJsonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntryJsonType(ELowEntryJsonType_StaticEnum, TEXT("/Script/LowEntryJson"), TEXT("ELowEntryJsonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryJson_ELowEntryJsonType_Hash() { return 4198162669U; }
	UEnum* Z_Construct_UEnum_LowEntryJson_ELowEntryJsonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryJson();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntryJsonType"), 0, Get_Z_Construct_UEnum_LowEntryJson_ELowEntryJsonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntryJsonType::None", (int64)ELowEntryJsonType::None },
				{ "ELowEntryJsonType::Null", (int64)ELowEntryJsonType::Null },
				{ "ELowEntryJsonType::String", (int64)ELowEntryJsonType::String },
				{ "ELowEntryJsonType::Float", (int64)ELowEntryJsonType::Float },
				{ "ELowEntryJsonType::IntegerOrFloat", (int64)ELowEntryJsonType::IntegerOrFloat },
				{ "ELowEntryJsonType::ByteOrIntegerOrFloat", (int64)ELowEntryJsonType::ByteOrIntegerOrFloat },
				{ "ELowEntryJsonType::Boolean", (int64)ELowEntryJsonType::Boolean },
				{ "ELowEntryJsonType::JsonObject", (int64)ELowEntryJsonType::JsonObject },
				{ "ELowEntryJsonType::JsonArray", (int64)ELowEntryJsonType::JsonArray },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "ELowEntryJsonType::Boolean" },
				{ "ByteOrIntegerOrFloat.Name", "ELowEntryJsonType::ByteOrIntegerOrFloat" },
				{ "Float.Name", "ELowEntryJsonType::Float" },
				{ "IntegerOrFloat.Name", "ELowEntryJsonType::IntegerOrFloat" },
				{ "JsonArray.Name", "ELowEntryJsonType::JsonArray" },
				{ "JsonObject.Name", "ELowEntryJsonType::JsonObject" },
				{ "ModuleRelativePath", "Public/Enums/ELowEntryJsonType.h" },
				{ "None.Name", "ELowEntryJsonType::None" },
				{ "Null.Name", "ELowEntryJsonType::Null" },
				{ "String.Name", "ELowEntryJsonType::String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryJson,
				nullptr,
				"ELowEntryJsonType",
				"ELowEntryJsonType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
