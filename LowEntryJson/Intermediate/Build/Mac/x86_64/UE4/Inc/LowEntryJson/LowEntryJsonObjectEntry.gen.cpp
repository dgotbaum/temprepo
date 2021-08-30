// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJson/Public/Classes/LowEntryJsonObjectEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryJsonObjectEntry() {}
// Cross Module References
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonObjectEntry_NoRegister();
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonObjectEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LowEntryJson();
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonValue_NoRegister();
// End Cross Module References
	void ULowEntryJsonObjectEntry::StaticRegisterNativesULowEntryJsonObjectEntry()
	{
	}
	UClass* Z_Construct_UClass_ULowEntryJsonObjectEntry_NoRegister()
	{
		return ULowEntryJsonObjectEntry::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryJson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryJsonObjectEntry.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonObjectEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonObjectEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryJsonObjectEntry, Key), METADATA_PARAMS(Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonObjectEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryJsonObjectEntry, Value), Z_Construct_UClass_ULowEntryJsonValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryJsonObjectEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::ClassParams = {
		&ULowEntryJsonObjectEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryJsonObjectEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryJsonObjectEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryJsonObjectEntry, 1499152744);
	template<> LOWENTRYJSON_API UClass* StaticClass<ULowEntryJsonObjectEntry>()
	{
		return ULowEntryJsonObjectEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryJsonObjectEntry(Z_Construct_UClass_ULowEntryJsonObjectEntry, &ULowEntryJsonObjectEntry::StaticClass, TEXT("/Script/LowEntryJson"), TEXT("ULowEntryJsonObjectEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryJsonObjectEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
