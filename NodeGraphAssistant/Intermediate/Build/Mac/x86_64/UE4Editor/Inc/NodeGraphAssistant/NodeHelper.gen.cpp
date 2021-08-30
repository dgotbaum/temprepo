// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Private/NodeHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeHelper() {}
// Cross Module References
	NODEGRAPHASSISTANT_API UEnum* Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection();
	UPackage* Z_Construct_UPackage__Script_NodeGraphAssistant();
// End Cross Module References
	static UEnum* EAlignDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection, Z_Construct_UPackage__Script_NodeGraphAssistant(), TEXT("EAlignDirection"));
		}
		return Singleton;
	}
	template<> NODEGRAPHASSISTANT_API UEnum* StaticEnum<EAlignDirection>()
	{
		return EAlignDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAlignDirection(EAlignDirection_StaticEnum, TEXT("/Script/NodeGraphAssistant"), TEXT("EAlignDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Hash() { return 376000244U; }
	UEnum* Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NodeGraphAssistant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAlignDirection"), 0, Get_Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AD_InputDirection", (int64)AD_InputDirection },
				{ "AD_OutputDirection", (int64)AD_OutputDirection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AD_InputDirection.Name", "AD_InputDirection" },
				{ "AD_OutputDirection.Name", "AD_OutputDirection" },
				{ "ModuleRelativePath", "Private/NodeHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NodeGraphAssistant,
				nullptr,
				"EAlignDirection",
				"EAlignDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
