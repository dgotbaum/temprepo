// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJsonEditor/Public/Classes/K2Node_LowEntry_CreateJsonObjectPureUnsafe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_CreateJsonObjectPureUnsafe() {}
// Cross Module References
	LOWENTRYJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_NoRegister();
	LOWENTRYJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe();
	LOWENTRYJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntryJson_MakeCustomArray();
	UPackage* Z_Construct_UPackage__Script_LowEntryJsonEditor();
// End Cross Module References
	void UK2Node_LowEntry_CreateJsonObjectPureUnsafe::StaticRegisterNativesUK2Node_LowEntry_CreateJsonObjectPureUnsafe()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_NoRegister()
	{
		return UK2Node_LowEntry_CreateJsonObjectPureUnsafe::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_LowEntryJson_MakeCustomArray,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryJsonEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_CreateJsonObjectPureUnsafe.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_CreateJsonObjectPureUnsafe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_CreateJsonObjectPureUnsafe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_Statics::ClassParams = {
		&UK2Node_LowEntry_CreateJsonObjectPureUnsafe::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_LowEntry_CreateJsonObjectPureUnsafe, 2207920751);
	template<> LOWENTRYJSONEDITOR_API UClass* StaticClass<UK2Node_LowEntry_CreateJsonObjectPureUnsafe>()
	{
		return UK2Node_LowEntry_CreateJsonObjectPureUnsafe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe(Z_Construct_UClass_UK2Node_LowEntry_CreateJsonObjectPureUnsafe, &UK2Node_LowEntry_CreateJsonObjectPureUnsafe::StaticClass, TEXT("/Script/LowEntryJsonEditor"), TEXT("UK2Node_LowEntry_CreateJsonObjectPureUnsafe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LowEntry_CreateJsonObjectPureUnsafe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
