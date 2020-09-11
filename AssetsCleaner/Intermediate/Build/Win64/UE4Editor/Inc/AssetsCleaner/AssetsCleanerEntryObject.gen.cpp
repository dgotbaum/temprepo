// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetsCleaner/Public/AssetsCleanerEntryObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetsCleanerEntryObject() {}
// Cross Module References
	ASSETSCLEANER_API UClass* Z_Construct_UClass_UAssetsCleanerEntryObject_NoRegister();
	ASSETSCLEANER_API UClass* Z_Construct_UClass_UAssetsCleanerEntryObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetsCleaner();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
// End Cross Module References
	void UAssetsCleanerEntryObject::StaticRegisterNativesUAssetsCleanerEntryObject()
	{
	}
	UClass* Z_Construct_UClass_UAssetsCleanerEntryObject_NoRegister()
	{
		return UAssetsCleanerEntryObject::StaticClass();
	}
	struct Z_Construct_UClass_UAssetsCleanerEntryObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiskSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiskSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetsCleaner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssetsCleanerEntryObject.h" },
		{ "ModuleRelativePath", "Public/AssetsCleanerEntryObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_DiskSize_MetaData[] = {
		{ "Category", "Size" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/AssetsCleanerEntryObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_DiskSize = { "DiskSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetsCleanerEntryObject, DiskSize), METADATA_PARAMS(Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_DiskSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_DiskSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_CustomAssetData_MetaData[] = {
		{ "Category", "AssetData" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/AssetsCleanerEntryObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_CustomAssetData = { "CustomAssetData", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetsCleanerEntryObject, CustomAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_CustomAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_CustomAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_DiskSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::NewProp_CustomAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetsCleanerEntryObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::ClassParams = {
		&UAssetsCleanerEntryObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetsCleanerEntryObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetsCleanerEntryObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetsCleanerEntryObject, 4036818752);
	template<> ASSETSCLEANER_API UClass* StaticClass<UAssetsCleanerEntryObject>()
	{
		return UAssetsCleanerEntryObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetsCleanerEntryObject(Z_Construct_UClass_UAssetsCleanerEntryObject, &UAssetsCleanerEntryObject::StaticClass, TEXT("/Script/AssetsCleaner"), TEXT("UAssetsCleanerEntryObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetsCleanerEntryObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
