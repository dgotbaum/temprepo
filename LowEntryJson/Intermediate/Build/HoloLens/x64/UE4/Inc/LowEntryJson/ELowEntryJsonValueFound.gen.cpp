// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJson/Public/Enums/ELowEntryJsonValueFound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryJsonValueFound() {}
// Cross Module References
	LOWENTRYJSON_API UEnum* Z_Construct_UEnum_LowEntryJson_ELowEntryJsonValueFound();
	UPackage* Z_Construct_UPackage__Script_LowEntryJson();
// End Cross Module References
	static UEnum* ELowEntryJsonValueFound_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryJson_ELowEntryJsonValueFound, Z_Construct_UPackage__Script_LowEntryJson(), TEXT("ELowEntryJsonValueFound"));
		}
		return Singleton;
	}
	template<> LOWENTRYJSON_API UEnum* StaticEnum<ELowEntryJsonValueFound>()
	{
		return ELowEntryJsonValueFound_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntryJsonValueFound(ELowEntryJsonValueFound_StaticEnum, TEXT("/Script/LowEntryJson"), TEXT("ELowEntryJsonValueFound"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryJson_ELowEntryJsonValueFound_Hash() { return 3115235861U; }
	UEnum* Z_Construct_UEnum_LowEntryJson_ELowEntryJsonValueFound()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryJson();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntryJsonValueFound"), 0, Get_Z_Construct_UEnum_LowEntryJson_ELowEntryJsonValueFound_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntryJsonValueFound::Found", (int64)ELowEntryJsonValueFound::Found },
				{ "ELowEntryJsonValueFound::NotFound", (int64)ELowEntryJsonValueFound::NotFound },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Found.Name", "ELowEntryJsonValueFound::Found" },
				{ "ModuleRelativePath", "Public/Enums/ELowEntryJsonValueFound.h" },
				{ "NotFound.Name", "ELowEntryJsonValueFound::NotFound" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryJson,
				nullptr,
				"ELowEntryJsonValueFound",
				"ELowEntryJsonValueFound",
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
