// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistSizeCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistSizeCache() {}
// Cross Module References
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBAPackageData();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBAGraphData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBACacheData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FBAPackageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTASSIST_API uint32 Get_Z_Construct_UScriptStruct_FBAPackageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBAPackageData, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BAPackageData"), sizeof(FBAPackageData), Get_Z_Construct_UScriptStruct_FBAPackageData_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBAPackageData>()
{
	return FBAPackageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBAPackageData(FBAPackageData::StaticStruct, TEXT("/Script/BlueprintAssist"), TEXT("BAPackageData"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintAssist_StaticRegisterNativesFBAPackageData
{
	FScriptStruct_BlueprintAssist_StaticRegisterNativesFBAPackageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BAPackageData")),new UScriptStruct::TCppStructOps<FBAPackageData>);
	}
} ScriptStruct_BlueprintAssist_StaticRegisterNativesFBAPackageData;
	struct Z_Construct_UScriptStruct_FBAPackageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PackageCache;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageCache_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackageCache_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAPackageData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSizeCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBAPackageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBAPackageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSizeCache.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache = { "PackageCache", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAPackageData, PackageCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache_Key_KeyProp = { "PackageCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache_ValueProp = { "PackageCache", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBAGraphData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_PackageCache_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBAPackageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BAPackageData",
		sizeof(FBAPackageData),
		alignof(FBAPackageData),
		Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBAPackageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBAPackageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBAPackageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BAPackageData"), sizeof(FBAPackageData), Get_Z_Construct_UScriptStruct_FBAPackageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBAPackageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBAPackageData_Hash() { return 985952611U; }
class UScriptStruct* FBAGraphData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTASSIST_API uint32 Get_Z_Construct_UScriptStruct_FBAGraphData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBAGraphData, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BAGraphData"), sizeof(FBAGraphData), Get_Z_Construct_UScriptStruct_FBAGraphData_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBAGraphData>()
{
	return FBAGraphData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBAGraphData(FBAGraphData::StaticStruct, TEXT("/Script/BlueprintAssist"), TEXT("BAGraphData"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintAssist_StaticRegisterNativesFBAGraphData
{
	FScriptStruct_BlueprintAssist_StaticRegisterNativesFBAGraphData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BAGraphData")),new UScriptStruct::TCppStructOps<FBAGraphData>);
	}
} ScriptStruct_BlueprintAssist_StaticRegisterNativesFBAGraphData;
	struct Z_Construct_UScriptStruct_FBAGraphData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GraphCache;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphCache_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphCache_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAGraphData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSizeCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBAGraphData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBAGraphData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSizeCache.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache = { "GraphCache", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAGraphData, GraphCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache_Key_KeyProp = { "GraphCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache_ValueProp = { "GraphCache", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBACacheData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_GraphCache_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBAGraphData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BAGraphData",
		sizeof(FBAGraphData),
		alignof(FBAGraphData),
		Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBAGraphData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBAGraphData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBAGraphData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BAGraphData"), sizeof(FBAGraphData), Get_Z_Construct_UScriptStruct_FBAGraphData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBAGraphData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBAGraphData_Hash() { return 48622305U; }
class UScriptStruct* FBACacheData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTASSIST_API uint32 Get_Z_Construct_UScriptStruct_FBACacheData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBACacheData, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BACacheData"), sizeof(FBACacheData), Get_Z_Construct_UScriptStruct_FBACacheData_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBACacheData>()
{
	return FBACacheData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBACacheData(FBACacheData::StaticStruct, TEXT("/Script/BlueprintAssist"), TEXT("BACacheData"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintAssist_StaticRegisterNativesFBACacheData
{
	FScriptStruct_BlueprintAssist_StaticRegisterNativesFBACacheData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BACacheData")),new UScriptStruct::TCppStructOps<FBACacheData>);
	}
} ScriptStruct_BlueprintAssist_StaticRegisterNativesFBACacheData;
	struct Z_Construct_UScriptStruct_FBACacheData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedPins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedPins_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedPins_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedNodes_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedNodes_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBACacheData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSizeCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBACacheData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBACacheData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSizeCache.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins = { "CachedPins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBACacheData, CachedPins), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins_Key_KeyProp = { "CachedPins_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins_ValueProp = { "CachedPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSizeCache.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes = { "CachedNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBACacheData, CachedNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes_Key_KeyProp = { "CachedNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes_ValueProp = { "CachedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedPins_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CachedNodes_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBACacheData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BACacheData",
		sizeof(FBACacheData),
		alignof(FBACacheData),
		Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBACacheData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBACacheData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBACacheData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BACacheData"), sizeof(FBACacheData), Get_Z_Construct_UScriptStruct_FBACacheData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBACacheData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBACacheData_Hash() { return 3238090035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
