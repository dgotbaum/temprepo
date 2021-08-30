// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJson/Public/Classes/LowEntryJsonObjectIterator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryJsonObjectIterator() {}
// Cross Module References
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonObjectIterator_NoRegister();
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonObjectIterator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LowEntryJson();
// End Cross Module References
	void ULowEntryJsonObjectIterator::StaticRegisterNativesULowEntryJsonObjectIterator()
	{
	}
	UClass* Z_Construct_UClass_ULowEntryJsonObjectIterator_NoRegister()
	{
		return ULowEntryJsonObjectIterator::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryJson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryJsonObjectIterator.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonObjectIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::NewProp_Keys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonObjectIterator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryJsonObjectIterator, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::NewProp_Keys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryJsonObjectIterator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::ClassParams = {
		&ULowEntryJsonObjectIterator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryJsonObjectIterator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryJsonObjectIterator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryJsonObjectIterator, 1090028571);
	template<> LOWENTRYJSON_API UClass* StaticClass<ULowEntryJsonObjectIterator>()
	{
		return ULowEntryJsonObjectIterator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryJsonObjectIterator(Z_Construct_UClass_ULowEntryJsonObjectIterator, &ULowEntryJsonObjectIterator::StaticClass, TEXT("/Script/LowEntryJson"), TEXT("ULowEntryJsonObjectIterator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryJsonObjectIterator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
