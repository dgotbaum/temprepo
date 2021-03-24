// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryHttpRequest/Public/Enums/ELowEntryHttpRequestSuccess.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryHttpRequestSuccess() {}
// Cross Module References
	LOWENTRYHTTPREQUEST_API UEnum* Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestSuccess();
	UPackage* Z_Construct_UPackage__Script_LowEntryHttpRequest();
// End Cross Module References
	static UEnum* ELowEntryHttpRequestSuccess_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestSuccess, Z_Construct_UPackage__Script_LowEntryHttpRequest(), TEXT("ELowEntryHttpRequestSuccess"));
		}
		return Singleton;
	}
	template<> LOWENTRYHTTPREQUEST_API UEnum* StaticEnum<ELowEntryHttpRequestSuccess>()
	{
		return ELowEntryHttpRequestSuccess_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntryHttpRequestSuccess(ELowEntryHttpRequestSuccess_StaticEnum, TEXT("/Script/LowEntryHttpRequest"), TEXT("ELowEntryHttpRequestSuccess"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestSuccess_Hash() { return 1036769262U; }
	UEnum* Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestSuccess()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryHttpRequest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntryHttpRequestSuccess"), 0, Get_Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestSuccess_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntryHttpRequestSuccess::Success", (int64)ELowEntryHttpRequestSuccess::Success },
				{ "ELowEntryHttpRequestSuccess::Failed", (int64)ELowEntryHttpRequestSuccess::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.Name", "ELowEntryHttpRequestSuccess::Failed" },
				{ "ModuleRelativePath", "Public/Enums/ELowEntryHttpRequestSuccess.h" },
				{ "Success.Name", "ELowEntryHttpRequestSuccess::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryHttpRequest,
				nullptr,
				"ELowEntryHttpRequestSuccess",
				"ELowEntryHttpRequestSuccess",
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
