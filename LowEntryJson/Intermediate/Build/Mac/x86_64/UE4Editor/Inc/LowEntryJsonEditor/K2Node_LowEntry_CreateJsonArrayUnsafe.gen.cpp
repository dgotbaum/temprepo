// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJsonEditor/Public/Classes/K2Node_LowEntry_CreateJsonArrayUnsafe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_CreateJsonArrayUnsafe() {}
// Cross Module References
	LOWENTRYJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_NoRegister();
	LOWENTRYJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe();
	LOWENTRYJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntryJson_MakeCustomArray();
	UPackage* Z_Construct_UPackage__Script_LowEntryJsonEditor();
// End Cross Module References
	void UK2Node_LowEntry_CreateJsonArrayUnsafe::StaticRegisterNativesUK2Node_LowEntry_CreateJsonArrayUnsafe()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_NoRegister()
	{
		return UK2Node_LowEntry_CreateJsonArrayUnsafe::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_LowEntryJson_MakeCustomArray,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryJsonEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_CreateJsonArrayUnsafe.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_CreateJsonArrayUnsafe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_CreateJsonArrayUnsafe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_Statics::ClassParams = {
		&UK2Node_LowEntry_CreateJsonArrayUnsafe::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_LowEntry_CreateJsonArrayUnsafe, 863476096);
	template<> LOWENTRYJSONEDITOR_API UClass* StaticClass<UK2Node_LowEntry_CreateJsonArrayUnsafe>()
	{
		return UK2Node_LowEntry_CreateJsonArrayUnsafe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe(Z_Construct_UClass_UK2Node_LowEntry_CreateJsonArrayUnsafe, &UK2Node_LowEntry_CreateJsonArrayUnsafe::StaticClass, TEXT("/Script/LowEntryJsonEditor"), TEXT("UK2Node_LowEntry_CreateJsonArrayUnsafe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LowEntry_CreateJsonArrayUnsafe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
