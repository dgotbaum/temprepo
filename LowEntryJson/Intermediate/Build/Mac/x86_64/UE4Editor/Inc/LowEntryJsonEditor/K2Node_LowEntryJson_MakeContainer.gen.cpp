// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJsonEditor/Public/Classes/K2Node_LowEntryJson_MakeContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntryJson_MakeContainer() {}
// Cross Module References
	LOWENTRYJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_NoRegister();
	LOWENTRYJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_LowEntryJsonEditor();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
// End Cross Module References
	void UK2Node_LowEntryJson_MakeContainer::StaticRegisterNativesUK2Node_LowEntryJson_MakeContainer()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_NoRegister()
	{
		return UK2Node_LowEntryJson_MakeContainer::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryJsonEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntryJson_MakeContainer.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntryJson_MakeContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::NewProp_NumInputs_MetaData[] = {
		{ "Comment", "/** The number of input pins to generate for this node */" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntryJson_MakeContainer.h" },
		{ "ToolTip", "The number of input pins to generate for this node" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_LowEntryJson_MakeContainer, NumInputs), METADATA_PARAMS(Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::NewProp_NumInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::NewProp_NumInputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::NewProp_NumInputs,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_LowEntryJson_MakeContainer, IK2Node_AddPinInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntryJson_MakeContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::ClassParams = {
		&UK2Node_LowEntryJson_MakeContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_LowEntryJson_MakeContainer, 2795761617);
	template<> LOWENTRYJSONEDITOR_API UClass* StaticClass<UK2Node_LowEntryJson_MakeContainer>()
	{
		return UK2Node_LowEntryJson_MakeContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_LowEntryJson_MakeContainer(Z_Construct_UClass_UK2Node_LowEntryJson_MakeContainer, &UK2Node_LowEntryJson_MakeContainer::StaticClass, TEXT("/Script/LowEntryJsonEditor"), TEXT("UK2Node_LowEntryJson_MakeContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LowEntryJson_MakeContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
