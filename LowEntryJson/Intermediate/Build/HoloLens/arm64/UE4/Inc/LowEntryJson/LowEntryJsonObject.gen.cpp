// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJson/Public/Classes/LowEntryJsonObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryJsonObject() {}
// Cross Module References
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonObject_NoRegister();
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LowEntryJson();
// End Cross Module References
	void ULowEntryJsonObject::StaticRegisterNativesULowEntryJsonObject()
	{
	}
	UClass* Z_Construct_UClass_ULowEntryJsonObject_NoRegister()
	{
		return ULowEntryJsonObject::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryJsonObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryJsonObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryJson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryJsonObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryJsonObject.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryJsonObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryJsonObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryJsonObject_Statics::ClassParams = {
		&ULowEntryJsonObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryJsonObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryJsonObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryJsonObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryJsonObject, 3749870136);
	template<> LOWENTRYJSON_API UClass* StaticClass<ULowEntryJsonObject>()
	{
		return ULowEntryJsonObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryJsonObject(Z_Construct_UClass_ULowEntryJsonObject, &ULowEntryJsonObject::StaticClass, TEXT("/Script/LowEntryJson"), TEXT("ULowEntryJsonObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryJsonObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
