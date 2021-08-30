// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJson/Public/Enums/ELowEntryJsonTypeFound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryJsonTypeFound() {}
// Cross Module References
	LOWENTRYJSON_API UEnum* Z_Construct_UEnum_LowEntryJson_ELowEntryJsonTypeFound();
	UPackage* Z_Construct_UPackage__Script_LowEntryJson();
// End Cross Module References
	static UEnum* ELowEntryJsonTypeFound_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryJson_ELowEntryJsonTypeFound, Z_Construct_UPackage__Script_LowEntryJson(), TEXT("ELowEntryJsonTypeFound"));
		}
		return Singleton;
	}
	template<> LOWENTRYJSON_API UEnum* StaticEnum<ELowEntryJsonTypeFound>()
	{
		return ELowEntryJsonTypeFound_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntryJsonTypeFound(ELowEntryJsonTypeFound_StaticEnum, TEXT("/Script/LowEntryJson"), TEXT("ELowEntryJsonTypeFound"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryJson_ELowEntryJsonTypeFound_Hash() { return 894625800U; }
	UEnum* Z_Construct_UEnum_LowEntryJson_ELowEntryJsonTypeFound()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryJson();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntryJsonTypeFound"), 0, Get_Z_Construct_UEnum_LowEntryJson_ELowEntryJsonTypeFound_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntryJsonTypeFound::Success", (int64)ELowEntryJsonTypeFound::Success },
				{ "ELowEntryJsonTypeFound::WrongType", (int64)ELowEntryJsonTypeFound::WrongType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Enums/ELowEntryJsonTypeFound.h" },
				{ "Success.Name", "ELowEntryJsonTypeFound::Success" },
				{ "WrongType.Name", "ELowEntryJsonTypeFound::WrongType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryJson,
				nullptr,
				"ELowEntryJsonTypeFound",
				"ELowEntryJsonTypeFound",
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
