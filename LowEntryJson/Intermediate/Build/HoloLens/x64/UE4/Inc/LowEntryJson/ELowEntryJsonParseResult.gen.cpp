// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJson/Public/Enums/ELowEntryJsonParseResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryJsonParseResult() {}
// Cross Module References
	LOWENTRYJSON_API UEnum* Z_Construct_UEnum_LowEntryJson_ELowEntryJsonParseResult();
	UPackage* Z_Construct_UPackage__Script_LowEntryJson();
// End Cross Module References
	static UEnum* ELowEntryJsonParseResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryJson_ELowEntryJsonParseResult, Z_Construct_UPackage__Script_LowEntryJson(), TEXT("ELowEntryJsonParseResult"));
		}
		return Singleton;
	}
	template<> LOWENTRYJSON_API UEnum* StaticEnum<ELowEntryJsonParseResult>()
	{
		return ELowEntryJsonParseResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntryJsonParseResult(ELowEntryJsonParseResult_StaticEnum, TEXT("/Script/LowEntryJson"), TEXT("ELowEntryJsonParseResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryJson_ELowEntryJsonParseResult_Hash() { return 1371225832U; }
	UEnum* Z_Construct_UEnum_LowEntryJson_ELowEntryJsonParseResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryJson();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntryJsonParseResult"), 0, Get_Z_Construct_UEnum_LowEntryJson_ELowEntryJsonParseResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntryJsonParseResult::FoundObject", (int64)ELowEntryJsonParseResult::FoundObject },
				{ "ELowEntryJsonParseResult::FoundArray", (int64)ELowEntryJsonParseResult::FoundArray },
				{ "ELowEntryJsonParseResult::StringIsEmpty", (int64)ELowEntryJsonParseResult::StringIsEmpty },
				{ "ELowEntryJsonParseResult::UnableToParse", (int64)ELowEntryJsonParseResult::UnableToParse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FoundArray.Name", "ELowEntryJsonParseResult::FoundArray" },
				{ "FoundObject.Name", "ELowEntryJsonParseResult::FoundObject" },
				{ "ModuleRelativePath", "Public/Enums/ELowEntryJsonParseResult.h" },
				{ "StringIsEmpty.Name", "ELowEntryJsonParseResult::StringIsEmpty" },
				{ "UnableToParse.Name", "ELowEntryJsonParseResult::UnableToParse" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryJson,
				nullptr,
				"ELowEntryJsonParseResult",
				"ELowEntryJsonParseResult",
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
