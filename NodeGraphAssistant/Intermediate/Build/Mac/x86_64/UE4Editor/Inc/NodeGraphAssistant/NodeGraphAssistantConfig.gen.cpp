// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Private/NodeGraphAssistantConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeGraphAssistantConfig() {}
// Cross Module References
	NODEGRAPHASSISTANT_API UEnum* Z_Construct_UEnum_NodeGraphAssistant_EAutoConnectModifier();
	UPackage* Z_Construct_UPackage__Script_NodeGraphAssistant();
	NODEGRAPHASSISTANT_API UEnum* Z_Construct_UEnum_NodeGraphAssistant_ECutOffMouseButton();
	NODEGRAPHASSISTANT_API UClass* Z_Construct_UClass_UNodeGraphAssistantConfig_NoRegister();
	NODEGRAPHASSISTANT_API UClass* Z_Construct_UClass_UNodeGraphAssistantConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* EAutoConnectModifier_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NodeGraphAssistant_EAutoConnectModifier, Z_Construct_UPackage__Script_NodeGraphAssistant(), TEXT("EAutoConnectModifier"));
		}
		return Singleton;
	}
	template<> NODEGRAPHASSISTANT_API UEnum* StaticEnum<EAutoConnectModifier>()
	{
		return EAutoConnectModifier_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoConnectModifier(EAutoConnectModifier_StaticEnum, TEXT("/Script/NodeGraphAssistant"), TEXT("EAutoConnectModifier"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NodeGraphAssistant_EAutoConnectModifier_Hash() { return 1107589311U; }
	UEnum* Z_Construct_UEnum_NodeGraphAssistant_EAutoConnectModifier()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NodeGraphAssistant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoConnectModifier"), 0, Get_Z_Construct_UEnum_NodeGraphAssistant_EAutoConnectModifier_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoConnectModifier::Alt", (int64)EAutoConnectModifier::Alt },
				{ "EAutoConnectModifier::None", (int64)EAutoConnectModifier::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alt.DisplayName", "Alt" },
				{ "Alt.Name", "EAutoConnectModifier::Alt" },
				{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EAutoConnectModifier::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NodeGraphAssistant,
				nullptr,
				"EAutoConnectModifier",
				"EAutoConnectModifier",
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
	static UEnum* ECutOffMouseButton_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NodeGraphAssistant_ECutOffMouseButton, Z_Construct_UPackage__Script_NodeGraphAssistant(), TEXT("ECutOffMouseButton"));
		}
		return Singleton;
	}
	template<> NODEGRAPHASSISTANT_API UEnum* StaticEnum<ECutOffMouseButton>()
	{
		return ECutOffMouseButton_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECutOffMouseButton(ECutOffMouseButton_StaticEnum, TEXT("/Script/NodeGraphAssistant"), TEXT("ECutOffMouseButton"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NodeGraphAssistant_ECutOffMouseButton_Hash() { return 1133554800U; }
	UEnum* Z_Construct_UEnum_NodeGraphAssistant_ECutOffMouseButton()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NodeGraphAssistant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECutOffMouseButton"), 0, Get_Z_Construct_UEnum_NodeGraphAssistant_ECutOffMouseButton_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECutOffMouseButton::Middle", (int64)ECutOffMouseButton::Middle },
				{ "ECutOffMouseButton::Left", (int64)ECutOffMouseButton::Left },
				{ "ECutOffMouseButton::None", (int64)ECutOffMouseButton::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Left.DisplayName", "Left" },
				{ "Left.Name", "ECutOffMouseButton::Left" },
				{ "Middle.DisplayName", "Middle" },
				{ "Middle.Name", "ECutOffMouseButton::Middle" },
				{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
				{ "None.DisplayName", "Disabled" },
				{ "None.Name", "ECutOffMouseButton::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NodeGraphAssistant,
				nullptr,
				"ECutOffMouseButton",
				"ECutOffMouseButton",
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
	void UNodeGraphAssistantConfig::StaticRegisterNativesUNodeGraphAssistantConfig()
	{
	}
	UClass* Z_Construct_UClass_UNodeGraphAssistantConfig_NoRegister()
	{
		return UNodeGraphAssistantConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNodeGraphAssistantConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableLeftClickMultiConnect_MetaData[];
#endif
		static void NewProp_EnableLeftClickMultiConnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableLeftClickMultiConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableLazyConnect_MetaData[];
#endif
		static void NewProp_EnableLazyConnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableLazyConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCutoffWire_MetaData[];
#endif
		static void NewProp_EnableCutoffWire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCutoffWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSelectStream_MetaData[];
#endif
		static void NewProp_EnableSelectStream_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSelectStream;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCreateNodeOnWire_MetaData[];
#endif
		static void NewProp_EnableCreateNodeOnWire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCreateNodeOnWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAutoConnect_MetaData[];
#endif
		static void NewProp_EnableAutoConnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAutoConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableShakeNodeOffWire_MetaData[];
#endif
		static void NewProp_EnableShakeNodeOffWire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableShakeNodeOffWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableInsertNodeOnWire_MetaData[];
#endif
		static void NewProp_EnableInsertNodeOnWire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableInsertNodeOnWire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DragCutOffWireMouseButton_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCutOffWireMouseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DragCutOffWireMouseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodesRearrangeSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodesRearrangeSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodesRearrangeSpacingAIGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodesRearrangeSpacingAIGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodesRearrangeSpacingRelaxFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NodesRearrangeSpacingRelaxFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateNodeOnlyOnSelectedWire_MetaData[];
#endif
		static void NewProp_CreateNodeOnlyOnSelectedWire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNodeOnlyOnSelectedWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BypassNodeAnyway_MetaData[];
#endif
		static void NewProp_BypassNodeAnyway_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BypassNodeAnyway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeNodeOffWireTimeWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeNodeOffWireTimeWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoConnectRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoConnectRadius;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoConnectModifier_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoConnectModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoConnectModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BypassAndCopyNodes_MetaData[];
#endif
		static void NewProp_BypassAndCopyNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BypassAndCopyNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolBarButton_MetaData[];
#endif
		static void NewProp_ToolBarButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToolBarButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideAutoConnectPreviewWireColor_MetaData[];
#endif
		static void NewProp_OverrideAutoConnectPreviewWireColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideAutoConnectPreviewWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoConnectPreviewWireColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoConnectPreviewWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertNodeShowDeletedWireAsRed_MetaData[];
#endif
		static void NewProp_InsertNodeShowDeletedWireAsRed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InsertNodeShowDeletedWireAsRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideToolTipWhenDraggingNode_MetaData[];
#endif
		static void NewProp_HideToolTipWhenDraggingNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideToolTipWhenDraggingNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialGraphPinColor_MetaData[];
#endif
		static void NewProp_OverrideMaterialGraphPinColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideMaterialGraphPinColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float1PinWireColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Float1PinWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float2PinWireColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Float2PinWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float3PinWireColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Float3PinWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float4PinWireColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Float4PinWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolPinWireColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolPinWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePinWireColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexturePinWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributesPinWireColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialAttributesPinWireColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireStyleStraight_MetaData[];
#endif
		static void NewProp_WireStyleStraight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WireStyleStraight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NodeGraphAssistant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NodeGraphAssistantConfig.h" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect_MetaData[] = {
		{ "Category", "Features" },
		{ "Comment", "/** Keep connection wire alive after making pin connection.*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "Keep connection wire alive after making pin connection." },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->EnableLeftClickMultiConnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect = { "EnableLeftClickMultiConnect", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect_MetaData[] = {
		{ "Category", "Features" },
		{ "Comment", "/** When dragging a wire over a node,wire automatically align to closest connectible pin*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "When dragging a wire over a node,wire automatically align to closest connectible pin" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->EnableLazyConnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect = { "EnableLazyConnect", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire_MetaData[] = {
		{ "Category", "Features" },
		{ "Comment", "/** Drag mouse to cut off wire along its way. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "Drag mouse to cut off wire along its way." },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->EnableCutoffWire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire = { "EnableCutoffWire", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream_MetaData[] = {
		{ "Category", "Features" },
		{ "Comment", "/** Select nodes that are connected to middle mouse double clicked node.*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "Select nodes that are connected to middle mouse double clicked node." },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->EnableSelectStream = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream = { "EnableSelectStream", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire_MetaData[] = {
		{ "Category", "Features" },
		{ "Comment", "/** Right click on wire to insert new node*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "Right click on wire to insert new node" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->EnableCreateNodeOnWire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire = { "EnableCreateNodeOnWire", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect_MetaData[] = {
		{ "Category", "Features" },
		{ "Comment", "/** When dragging a node, auto display surrounding connectible pin,release mouse to make connection*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "When dragging a node, auto display surrounding connectible pin,release mouse to make connection" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->EnableAutoConnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect = { "EnableAutoConnect", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire_MetaData[] = {
		{ "Category", "Features" },
		{ "Comment", "/**  Quickly swing node 3 times to break node off wire.*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "Quickly swing node 3 times to break node off wire." },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->EnableShakeNodeOffWire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire = { "EnableShakeNodeOffWire", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire_MetaData[] = {
		{ "Category", "Features" },
		{ "Comment", "/** Drag and insert node on wire*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "Drag and insert node on wire" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->EnableInsertNodeOnWire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire = { "EnableInsertNodeOnWire", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When moving mouse with alt and this mouse button down will cut off wires under cursor, not affect alt+left click cut off wire feature. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "When moving mouse with alt and this mouse button down will cut off wires under cursor, not affect alt+left click cut off wire feature." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton = { "DragCutOffWireMouseButton", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, DragCutOffWireMouseButton), Z_Construct_UEnum_NodeGraphAssistant_ECutOffMouseButton, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacing_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How much distance between two nodes next to each other after rearranging nodes. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "How much distance between two nodes next to each other after rearranging nodes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacing = { "NodesRearrangeSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, NodesRearrangeSpacing), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingAIGraph_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How much distance between two nodes next to each other after rearranging nodes,for behavior tree graph and EQS graph. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "How much distance between two nodes next to each other after rearranging nodes,for behavior tree graph and EQS graph." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingAIGraph = { "NodesRearrangeSpacingAIGraph", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, NodesRearrangeSpacingAIGraph), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingAIGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingAIGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingRelaxFactor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset node a little if this node is connected to a lot wires so wires can be seen more clearly. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "Offset node a little if this node is connected to a lot wires so wires can be seen more clearly." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingRelaxFactor = { "NodesRearrangeSpacingRelaxFactor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, NodesRearrangeSpacingRelaxFactor), METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingRelaxFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingRelaxFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** if checked,when wire under mouse is not selected(just been clicked) when add new node, new node wont get inserted into wire. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "if checked,when wire under mouse is not selected(just been clicked) when add new node, new node wont get inserted into wire." },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->CreateNodeOnlyOnSelectedWire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire = { "CreateNodeOnlyOnSelectedWire", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** remove node even if can not fully bypass node's all pins. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "remove node even if can not fully bypass node's all pins." },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->BypassNodeAnyway = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway = { "BypassNodeAnyway", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ShakeNodeOffWireTimeWindow_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** if you swing a node 3 times in this time period,will break off this node from wire.*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "if you swing a node 3 times in this time period,will break off this node from wire." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ShakeNodeOffWireTimeWindow = { "ShakeNodeOffWireTimeWindow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, ShakeNodeOffWireTimeWindow), METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ShakeNodeOffWireTimeWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ShakeNodeOffWireTimeWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** remove node even if can not fully bypass node's all pins. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "remove node even if can not fully bypass node's all pins." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectRadius = { "AutoConnectRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, AutoConnectRadius), METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectRadius_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** when dragging a node and this button down will enable auto connect */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "when dragging a node and this button down will enable auto connect" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier = { "AutoConnectModifier", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, AutoConnectModifier), Z_Construct_UEnum_NodeGraphAssistant_EAutoConnectModifier, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** copy nodes to clipboard after successful bypass. */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "copy nodes to clipboard after successful bypass." },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->BypassAndCopyNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes = { "BypassAndCopyNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** show button in toolbar,need to restart editor */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "show button in toolbar,need to restart editor" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->ToolBarButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton = { "ToolBarButton", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**should override auto connect preview wire color */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "should override auto connect preview wire color" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->OverrideAutoConnectPreviewWireColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor = { "OverrideAutoConnectPreviewWireColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectPreviewWireColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectPreviewWireColor = { "AutoConnectPreviewWireColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, AutoConnectPreviewWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectPreviewWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectPreviewWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When dragging node can be inserted into hovered wire,mark hovered wire as red */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", "When dragging node can be inserted into hovered wire,mark hovered wire as red" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->InsertNodeShowDeletedWireAsRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed = { "InsertNodeShowDeletedWireAsRed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode_MetaData[] = {
		{ "Category", "Other" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->HideToolTipWhenDraggingNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode = { "HideToolTipWhenDraggingNode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->OverrideMaterialGraphPinColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor = { "OverrideMaterialGraphPinColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float1PinWireColor_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float1PinWireColor = { "Float1PinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, Float1PinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float1PinWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float1PinWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float2PinWireColor_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float2PinWireColor = { "Float2PinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, Float2PinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float2PinWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float2PinWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float3PinWireColor_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float3PinWireColor = { "Float3PinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, Float3PinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float3PinWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float3PinWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float4PinWireColor_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float4PinWireColor = { "Float4PinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, Float4PinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float4PinWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float4PinWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BoolPinWireColor_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BoolPinWireColor = { "BoolPinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, BoolPinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BoolPinWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BoolPinWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_TexturePinWireColor_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_TexturePinWireColor = { "TexturePinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, TexturePinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_TexturePinWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_TexturePinWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_MaterialAttributesPinWireColor_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_MaterialAttributesPinWireColor = { "MaterialAttributesPinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, MaterialAttributesPinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_MaterialAttributesPinWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_MaterialAttributesPinWireColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
		{ "ModuleRelativePath", "Private/NodeGraphAssistantConfig.h" },
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
	};
#endif
	void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight_SetBit(void* Obj)
	{
		((UNodeGraphAssistantConfig*)Obj)->WireStyleStraight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight = { "WireStyleStraight", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingAIGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingRelaxFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ShakeNodeOffWireTimeWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectPreviewWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float1PinWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float2PinWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float3PinWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float4PinWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BoolPinWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_TexturePinWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_MaterialAttributesPinWireColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNodeGraphAssistantConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::ClassParams = {
		&UNodeGraphAssistantConfig::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeGraphAssistantConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNodeGraphAssistantConfig, 2591695789);
	template<> NODEGRAPHASSISTANT_API UClass* StaticClass<UNodeGraphAssistantConfig>()
	{
		return UNodeGraphAssistantConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNodeGraphAssistantConfig(Z_Construct_UClass_UNodeGraphAssistantConfig, &UNodeGraphAssistantConfig::StaticClass, TEXT("/Script/NodeGraphAssistant"), TEXT("UNodeGraphAssistantConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeGraphAssistantConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
