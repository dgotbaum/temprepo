// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistSettings() {}
// Cross Module References
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoInsertComment();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAGraphType();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle();
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBAFormatterSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_NoRegister();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* EBAFormatAllStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAFormatAllStyle"));
		}
		return Singleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFormatAllStyle>()
	{
		return EBAFormatAllStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBAFormatAllStyle(EBAFormatAllStyle_StaticEnum, TEXT("/Script/BlueprintAssist"), TEXT("EBAFormatAllStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Hash() { return 2599034038U; }
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBAFormatAllStyle"), 0, Get_Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BAFormatAll_Simple", (int64)BAFormatAll_Simple },
				{ "BAFormatAll_Smart", (int64)BAFormatAll_Smart },
				{ "BAFormatAll_NodeType", (int64)BAFormatAll_NodeType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BAFormatAll_NodeType.DisplayName", "Node Type (columns by node type)" },
				{ "BAFormatAll_NodeType.Name", "BAFormatAll_NodeType" },
				{ "BAFormatAll_Simple.DisplayName", "Simple (single column)" },
				{ "BAFormatAll_Simple.Name", "BAFormatAll_Simple" },
				{ "BAFormatAll_Smart.DisplayName", "Smart (create columns from node position)" },
				{ "BAFormatAll_Smart.Name", "BAFormatAll_Smart" },
				{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
				nullptr,
				"EBAFormatAllStyle",
				"EBAFormatAllStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBAAutoFormatting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAAutoFormatting"));
		}
		return Singleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAAutoFormatting>()
	{
		return EBAAutoFormatting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBAAutoFormatting(EBAAutoFormatting_StaticEnum, TEXT("/Script/BlueprintAssist"), TEXT("EBAAutoFormatting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Hash() { return 3841791350U; }
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBAAutoFormatting"), 0, Get_Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BAAutoFormat_Never", (int64)BAAutoFormat_Never },
				{ "BAAutoFormat_FormatAllConnected", (int64)BAAutoFormat_FormatAllConnected },
				{ "BAAutoFormat_FormatSingleConnected", (int64)BAAutoFormat_FormatSingleConnected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BAAutoFormat_FormatAllConnected.DisplayName", "Format all connected nodes" },
				{ "BAAutoFormat_FormatAllConnected.Name", "BAAutoFormat_FormatAllConnected" },
				{ "BAAutoFormat_FormatSingleConnected.DisplayName", "Format relative to a connected node" },
				{ "BAAutoFormat_FormatSingleConnected.Name", "BAAutoFormat_FormatSingleConnected" },
				{ "BAAutoFormat_Never.DisplayName", "Never" },
				{ "BAAutoFormat_Never.Name", "BAAutoFormat_Never" },
				{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
				nullptr,
				"EBAAutoFormatting",
				"EBAAutoFormatting",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBAAutoInsertComment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAAutoInsertComment, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAAutoInsertComment"));
		}
		return Singleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAAutoInsertComment>()
	{
		return EBAAutoInsertComment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBAAutoInsertComment(EBAAutoInsertComment_StaticEnum, TEXT("/Script/BlueprintAssist"), TEXT("EBAAutoInsertComment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintAssist_EBAAutoInsertComment_Hash() { return 2880405111U; }
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoInsertComment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBAAutoInsertComment"), 0, Get_Z_Construct_UEnum_BlueprintAssist_EBAAutoInsertComment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BAAutoInsertComment_Never", (int64)BAAutoInsertComment_Never },
				{ "BAAutoInsertComment_Always", (int64)BAAutoInsertComment_Always },
				{ "BAAutoInsertComment_Surrounded", (int64)BAAutoInsertComment_Surrounded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BAAutoInsertComment_Always.DisplayName", "Always" },
				{ "BAAutoInsertComment_Always.Name", "BAAutoInsertComment_Always" },
				{ "BAAutoInsertComment_Never.DisplayName", "Never" },
				{ "BAAutoInsertComment_Never.Name", "BAAutoInsertComment_Never" },
				{ "BAAutoInsertComment_Surrounded.DisplayName", "Surrounded" },
				{ "BAAutoInsertComment_Surrounded.Name", "BAAutoInsertComment_Surrounded" },
				{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
				nullptr,
				"EBAAutoInsertComment",
				"EBAAutoInsertComment",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBAWiringStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAWiringStyle"));
		}
		return Singleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAWiringStyle>()
	{
		return EBAWiringStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBAWiringStyle(EBAWiringStyle_StaticEnum, TEXT("/Script/BlueprintAssist"), TEXT("EBAWiringStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Hash() { return 4074283741U; }
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBAWiringStyle"), 0, Get_Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BAWiringStyle_AlwaysMerge", (int64)BAWiringStyle_AlwaysMerge },
				{ "BAWiringStyle_MergeWhenNear", (int64)BAWiringStyle_MergeWhenNear },
				{ "BAWiringStyle_SingleWire", (int64)BAWiringStyle_SingleWire },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BAWiringStyle_AlwaysMerge.DisplayName", "Always Merge" },
				{ "BAWiringStyle_AlwaysMerge.Name", "BAWiringStyle_AlwaysMerge" },
				{ "BAWiringStyle_MergeWhenNear.DisplayName", "Merge When Near" },
				{ "BAWiringStyle_MergeWhenNear.Name", "BAWiringStyle_MergeWhenNear" },
				{ "BAWiringStyle_SingleWire.DisplayName", "Single Wire" },
				{ "BAWiringStyle_SingleWire.Name", "BAWiringStyle_SingleWire" },
				{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
				nullptr,
				"EBAWiringStyle",
				"EBAWiringStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBAGraphType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAGraphType, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAGraphType"));
		}
		return Singleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAGraphType>()
	{
		return EBAGraphType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBAGraphType(EBAGraphType_StaticEnum, TEXT("/Script/BlueprintAssist"), TEXT("EBAGraphType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintAssist_EBAGraphType_Hash() { return 1514676092U; }
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAGraphType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBAGraphType"), 0, Get_Z_Construct_UEnum_BlueprintAssist_EBAGraphType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BAGraphType_Unknown", (int64)BAGraphType_Unknown },
				{ "BAGraphType_Blueprint", (int64)BAGraphType_Blueprint },
				{ "BAGraphType_SoundCue", (int64)BAGraphType_SoundCue },
				{ "BAGraphType_BehaviorTree", (int64)BAGraphType_BehaviorTree },
				{ "BAGraphType_MaterialGraph", (int64)BAGraphType_MaterialGraph },
				{ "BAGraphType_NiagaraGraph", (int64)BAGraphType_NiagaraGraph },
				{ "BAGraphType_AnimGraph", (int64)BAGraphType_AnimGraph },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BAGraphType_AnimGraph.DisplayName", "Anim Graph" },
				{ "BAGraphType_AnimGraph.Name", "BAGraphType_AnimGraph" },
				{ "BAGraphType_BehaviorTree.DisplayName", "Behavior Tree" },
				{ "BAGraphType_BehaviorTree.Name", "BAGraphType_BehaviorTree" },
				{ "BAGraphType_Blueprint.DisplayName", "Blueprint" },
				{ "BAGraphType_Blueprint.Name", "BAGraphType_Blueprint" },
				{ "BAGraphType_MaterialGraph.DisplayName", "Material Graph" },
				{ "BAGraphType_MaterialGraph.Name", "BAGraphType_MaterialGraph" },
				{ "BAGraphType_NiagaraGraph.DisplayName", "Niagara Graph" },
				{ "BAGraphType_NiagaraGraph.Name", "BAGraphType_NiagaraGraph" },
				{ "BAGraphType_SoundCue.DisplayName", "Sound Cue" },
				{ "BAGraphType_SoundCue.Name", "BAGraphType_SoundCue" },
				{ "BAGraphType_Unknown.DisplayName", "Unknown" },
				{ "BAGraphType_Unknown.Name", "BAGraphType_Unknown" },
				{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
				nullptr,
				"EBAGraphType",
				"EBAGraphType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBAParameterFormattingStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAParameterFormattingStyle"));
		}
		return Singleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAParameterFormattingStyle>()
	{
		return EBAParameterFormattingStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBAParameterFormattingStyle(EBAParameterFormattingStyle_StaticEnum, TEXT("/Script/BlueprintAssist"), TEXT("EBAParameterFormattingStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Hash() { return 1323748017U; }
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBAParameterFormattingStyle"), 0, Get_Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BAParameterFormatting_Helixing", (int64)BAParameterFormatting_Helixing },
				{ "BAParameterFormatting_LeftSide", (int64)BAParameterFormatting_LeftSide },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BAParameterFormatting_Helixing.DisplayName", "Helixing" },
				{ "BAParameterFormatting_Helixing.Name", "BAParameterFormatting_Helixing" },
				{ "BAParameterFormatting_LeftSide.DisplayName", "Left-side" },
				{ "BAParameterFormatting_LeftSide.Name", "BAParameterFormatting_LeftSide" },
				{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
				nullptr,
				"EBAParameterFormattingStyle",
				"EBAParameterFormattingStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBANodeFormattingStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBANodeFormattingStyle"));
		}
		return Singleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBANodeFormattingStyle>()
	{
		return EBANodeFormattingStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBANodeFormattingStyle(EBANodeFormattingStyle_StaticEnum, TEXT("/Script/BlueprintAssist"), TEXT("EBANodeFormattingStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Hash() { return 576384602U; }
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBANodeFormattingStyle"), 0, Get_Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BANodeFormatting_Expanded", (int64)BANodeFormatting_Expanded },
				{ "BANodeFormatting_Compact", (int64)BANodeFormatting_Compact },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BANodeFormatting_Compact.DisplayName", "Compact" },
				{ "BANodeFormatting_Compact.Name", "BANodeFormatting_Compact" },
				{ "BANodeFormatting_Expanded.DisplayName", "Expanded" },
				{ "BANodeFormatting_Expanded.Name", "BANodeFormatting_Expanded" },
				{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
				nullptr,
				"EBANodeFormattingStyle",
				"EBANodeFormattingStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBAFormatterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTASSIST_API uint32 Get_Z_Construct_UScriptStruct_FBAFormatterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBAFormatterSettings, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BAFormatterSettings"), sizeof(FBAFormatterSettings), Get_Z_Construct_UScriptStruct_FBAFormatterSettings_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBAFormatterSettings>()
{
	return FBAFormatterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBAFormatterSettings(FBAFormatterSettings::StaticStruct, TEXT("/Script/BlueprintAssist"), TEXT("BAFormatterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintAssist_StaticRegisterNativesFBAFormatterSettings
{
	FScriptStruct_BlueprintAssist_StaticRegisterNativesFBAFormatterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BAFormatterSettings")),new UScriptStruct::TCppStructOps<FBAFormatterSettings>);
	}
} ScriptStruct_BlueprintAssist_StaticRegisterNativesFBAFormatterSettings;
	struct Z_Construct_UScriptStruct_FBAFormatterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoFormatting_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoFormatting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBAFormatterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Auto formatting method */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Auto formatting method" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting = { "AutoFormatting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAFormatterSettings, AutoFormatting), Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Padding used when formatting nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Padding used when formatting nodes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAFormatterSettings, Padding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BAFormatterSettings",
		sizeof(FBAFormatterSettings),
		alignof(FBAFormatterSettings),
		Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBAFormatterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBAFormatterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintAssist();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BAFormatterSettings"), sizeof(FBAFormatterSettings), Get_Z_Construct_UScriptStruct_FBAFormatterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBAFormatterSettings_Hash() { return 151460443U; }
	void UBASettings::StaticRegisterNativesUBASettings()
	{
	}
	UClass* Z_Construct_UClass_UBASettings_NoRegister()
	{
		return UBASettings::StaticClass();
	}
	struct Z_Construct_UClass_UBASettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bCustomDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultTooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultVariableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultExposeToCinematics_MetaData[];
#endif
		static void NewProp_bDefaultExposeToCinematics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultExposeToCinematics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultPrivate_MetaData[];
#endif
		static void NewProp_bDefaultPrivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultPrivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultExposeOnSpawn_MetaData[];
#endif
		static void NewProp_bDefaultExposeOnSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultExposeOnSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultBlueprintReadOnly_MetaData[];
#endif
		static void NewProp_bDefaultBlueprintReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultBlueprintReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultInstanceEditable_MetaData[];
#endif
		static void NewProp_bDefaultInstanceEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultInstanceEditable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredNumPendingSizeForNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RequiredNumPendingSizeForNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCachingNodeSizeNotification_MetaData[];
#endif
		static void NewProp_bEnableCachingNodeSizeNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCachingNodeSizeNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentNodePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentNodePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddKnotNodesToComments_MetaData[];
#endif
		static void NewProp_bAddKnotNodesToComments_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddKnotNodesToComments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryToHandleCommentNodes_MetaData[];
#endif
		static void NewProp_bTryToHandleCommentNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryToHandleCommentNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoInsertComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoInsertComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAccountForCommentsWhenFormatting_MetaData[];
#endif
		static void NewProp_bAccountForCommentsWhenFormatting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccountForCommentsWhenFormatting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationGraphFormatterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationGraphFormatterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraGraphFormatterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NiagaraGraphFormatterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialGraphFormatterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialGraphFormatterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCueGraphFormatterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundCueGraphFormatterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeFormatterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BehaviorTreeFormatterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnotNodeDistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnotNodeDistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintKnotTrackSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlueprintKnotTrackSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterVerticalPinSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterVerticalPinSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalPinSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalPinSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRequiredBranches_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumRequiredBranches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterBranches_MetaData[];
#endif
		static void NewProp_bCenterBranches_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterBranches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatDelegatesAsExecutionPins_MetaData[];
#endif
		static void NewProp_bTreatDelegatesAsExecutionPins_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatDelegatesAsExecutionPins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintParameterPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintParameterPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintFormatterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintFormatterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFormatAll_MetaData[];
#endif
		static void NewProp_bAlwaysFormatAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFormatAll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPositionEventNodes_MetaData[];
#endif
		static void NewProp_bAutoPositionEventNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPositionEventNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatAllPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FormatAllPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatAllStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FormatAllStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCommentBubbleWidth_MetaData[];
#endif
		static void NewProp_bUseCommentBubbleWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCommentBubbleWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpandParametersByHeight_MetaData[];
#endif
		static void NewProp_bExpandParametersByHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpandParametersByHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpandNodesByHeight_MetaData[];
#endif
		static void NewProp_bExpandNodesByHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpandNodesByHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateKnotNodes_MetaData[];
#endif
		static void NewProp_bCreateKnotNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateKnotNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCacheSizeWhenRequired_MetaData[];
#endif
		static void NewProp_bCacheSizeWhenRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCacheSizeWhenRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleNodeMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SingleNodeMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelixingHeightMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HelixingHeightMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitHelixingHeight_MetaData[];
#endif
		static void NewProp_bLimitHelixingHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitHelixingHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseKnotNodePool_MetaData[];
#endif
		static void NewProp_bUseKnotNodePool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseKnotNodePool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFasterFormatting_MetaData[];
#endif
		static void NewProp_bEnableFasterFormatting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFasterFormatting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterWiringStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParameterWiringStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionWiringStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExecutionWiringStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParameterStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormattingStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FormattingStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraRootNodeTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraRootNodeTypes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExtraRootNodeTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBlueprintFormattingForTheseGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UseBlueprintFormattingForTheseGraphs;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UseBlueprintFormattingForTheseGraphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisabledGraphs;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisabledGraphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveBlueprintAssistCacheToFile_MetaData[];
#endif
		static void NewProp_bSaveBlueprintAssistCacheToFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveBlueprintAssistCacheToFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSlowButAccurateSizeCaching_MetaData[];
#endif
		static void NewProp_bSlowButAccurateSizeCaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSlowButAccurateSizeCaching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftCameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShiftCameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBetterWiringForNewNodes_MetaData[];
#endif
		static void NewProp_bBetterWiringForNewNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBetterWiringForNewNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetAllCommentBubblePinned_MetaData[];
#endif
		static void NewProp_bSetAllCommentBubblePinned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetAllCommentBubblePinned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinTextHighlightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinTextHighlightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinHighlightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinHighlightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddToolbarWidget_MetaData[];
#endif
		static void NewProp_bAddToolbarWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToolbarWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBASettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistSettings.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bCustomDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Ignore this (setting for custom debugging) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Ignore this (setting for custom debugging)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bCustomDebug = { "bCustomDebug", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, bCustomDebug), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bCustomDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bCustomDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultCategory_MetaData[] = {
		{ "Category", "Create Variable Defaults" },
		{ "Comment", "/* Variable default Category */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Category" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultCategory = { "DefaultCategory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultCategory), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultTooltip_MetaData[] = {
		{ "Category", "Create Variable Defaults" },
		{ "Comment", "/* Variable default Tooltip */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Tooltip" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultTooltip = { "DefaultTooltip", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultTooltip), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultTooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName_MetaData[] = {
		{ "Category", "Create Variable Defaults" },
		{ "Comment", "/* Variable default name */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName = { "DefaultVariableName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultVariableName), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeToCinematics_MetaData[] = {
		{ "Category", "Create Variable Defaults" },
		{ "Comment", "/* Variable default Expose to Cinematics */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Expose to Cinematics" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeToCinematics_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultExposeToCinematics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeToCinematics = { "bDefaultExposeToCinematics", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeToCinematics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeToCinematics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeToCinematics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultPrivate_MetaData[] = {
		{ "Category", "Create Variable Defaults" },
		{ "Comment", "/* Variable default Private */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Private" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultPrivate_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultPrivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultPrivate = { "bDefaultPrivate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultPrivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultPrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultPrivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeOnSpawn_MetaData[] = {
		{ "Category", "Create Variable Defaults" },
		{ "Comment", "/* Variable default Expose on Spawn */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Expose on Spawn" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeOnSpawn_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultExposeOnSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeOnSpawn = { "bDefaultExposeOnSpawn", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeOnSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultBlueprintReadOnly_MetaData[] = {
		{ "Category", "Create Variable Defaults" },
		{ "Comment", "/* Variable default Blueprint Read Only */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Blueprint Read Only" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultBlueprintReadOnly_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultBlueprintReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultBlueprintReadOnly = { "bDefaultBlueprintReadOnly", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultBlueprintReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultBlueprintReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultBlueprintReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultInstanceEditable_MetaData[] = {
		{ "Category", "Create Variable Defaults" },
		{ "Comment", "/* Variable default Instance Editable */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Instance Editable" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultInstanceEditable_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultInstanceEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultInstanceEditable = { "bDefaultInstanceEditable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultInstanceEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultInstanceEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultInstanceEditable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNumPendingSizeForNotification_MetaData[] = {
		{ "Category", "Notifications" },
		{ "Comment", "/* Number of pending caching nodes required to show notification */" },
		{ "EditCondition", "bEnableCachingNodeSizeNotification" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Number of pending caching nodes required to show notification" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNumPendingSizeForNotification = { "RequiredNumPendingSizeForNotification", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, RequiredNumPendingSizeForNotification), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNumPendingSizeForNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNumPendingSizeForNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableCachingNodeSizeNotification_MetaData[] = {
		{ "Category", "Notifications" },
		{ "Comment", "/* Whether to show a notification while the graph is caching node sizes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Whether to show a notification while the graph is caching node sizes" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableCachingNodeSizeNotification_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bEnableCachingNodeSizeNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableCachingNodeSizeNotification = { "bEnableCachingNodeSizeNotification", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableCachingNodeSizeNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableCachingNodeSizeNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableCachingNodeSizeNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding_MetaData[] = {
		{ "Category", "CommentSettings" },
		{ "Comment", "/* Padding around the comment box. Make sure this is the same as in the AutoSizeComments setting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Padding around the comment box. Make sure this is the same as in the AutoSizeComments setting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding = { "CommentNodePadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, CommentNodePadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_MetaData[] = {
		{ "Category", "CommentSettings" },
		{ "Comment", "/* Add knot nodes to comments after formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add knot nodes to comments after formatting" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAddKnotNodesToComments = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments = { "bAddKnotNodesToComments", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bTryToHandleCommentNodes_MetaData[] = {
		{ "Category", "CommentSettings" },
		{ "Comment", "/* Updates comment nodes when formatting, recommended to use this along with the AutoSizeComments plugin */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Updates comment nodes when formatting, recommended to use this along with the AutoSizeComments plugin" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bTryToHandleCommentNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bTryToHandleCommentNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bTryToHandleCommentNodes = { "bTryToHandleCommentNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bTryToHandleCommentNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bTryToHandleCommentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bTryToHandleCommentNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_AutoInsertComment_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Automatically insert nodes into comment boxes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Automatically insert nodes into comment boxes" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_AutoInsertComment = { "AutoInsertComment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, AutoInsertComment), Z_Construct_UEnum_BlueprintAssist_EBAAutoInsertComment, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_AutoInsertComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_AutoInsertComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAccountForCommentsWhenFormatting_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Account for containing comments when formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Account for containing comments when formatting" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAccountForCommentsWhenFormatting_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAccountForCommentsWhenFormatting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAccountForCommentsWhenFormatting = { "bAccountForCommentsWhenFormatting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAccountForCommentsWhenFormatting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAccountForCommentsWhenFormatting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAccountForCommentsWhenFormatting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_AnimationGraphFormatterSettings_MetaData[] = {
		{ "Category", "AnimationGraphFormatter" },
		{ "Comment", "////////////////////////////////////////////////////////////\n// Animation Graph formatting\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Animation Graph formatting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_AnimationGraphFormatterSettings = { "AnimationGraphFormatterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, AnimationGraphFormatterSettings), Z_Construct_UScriptStruct_FBAFormatterSettings, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_AnimationGraphFormatterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_AnimationGraphFormatterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_NiagaraGraphFormatterSettings_MetaData[] = {
		{ "Category", "NiagaraGraphFormatter" },
		{ "Comment", "////////////////////////////////////////////////////////////\n// Niagara Graph formatting\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Niagara Graph formatting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_NiagaraGraphFormatterSettings = { "NiagaraGraphFormatterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, NiagaraGraphFormatterSettings), Z_Construct_UScriptStruct_FBAFormatterSettings, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_NiagaraGraphFormatterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_NiagaraGraphFormatterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_MaterialGraphFormatterSettings_MetaData[] = {
		{ "Category", "MaterialGraphFormatter" },
		{ "Comment", "////////////////////////////////////////////////////////////\n// Material graph formatting\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Material graph formatting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_MaterialGraphFormatterSettings = { "MaterialGraphFormatterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, MaterialGraphFormatterSettings), Z_Construct_UScriptStruct_FBAFormatterSettings, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_MaterialGraphFormatterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_MaterialGraphFormatterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_SoundCueGraphFormatterSettings_MetaData[] = {
		{ "Category", "SoundCueGraphFormatter" },
		{ "Comment", "////////////////////////////////////////////////////////////\n// Sound cue graph formatting\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Sound cue graph formatting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_SoundCueGraphFormatterSettings = { "SoundCueGraphFormatterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, SoundCueGraphFormatterSettings), Z_Construct_UScriptStruct_FBAFormatterSettings, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_SoundCueGraphFormatterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_SoundCueGraphFormatterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_BehaviorTreeFormatterSettings_MetaData[] = {
		{ "Category", "BehaviorTreeFormatter" },
		{ "Comment", "////////////////////////////////////////////////////////////\n// Behavior tree formatting\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Behavior tree formatting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BehaviorTreeFormatterSettings = { "BehaviorTreeFormatterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, BehaviorTreeFormatterSettings), Z_Construct_UScriptStruct_FBAFormatterSettings, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_BehaviorTreeFormatterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_BehaviorTreeFormatterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* The width between pins required for a knot node to be created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "The width between pins required for a knot node to be created" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold = { "KnotNodeDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, KnotNodeDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Spacing used between wire tracks */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Spacing used between wire tracks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing = { "BlueprintKnotTrackSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, BlueprintKnotTrackSpacing), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Vertical spacing from the last linked pin for parameters */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Vertical spacing from the last linked pin for parameters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing = { "ParameterVerticalPinSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ParameterVerticalPinSpacing), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Vertical spacing from the last linked pin */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Vertical spacing from the last linked pin" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing = { "VerticalPinSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, VerticalPinSpacing), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Only center branches if we have this (or more) number of branches */" },
		{ "EditCondition", "bCenterBranches" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Only center branches if we have this (or more) number of branches" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches = { "NumRequiredBranches", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, NumRequiredBranches), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Center node execution branches (Default: center nodes with 3 or more branches) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Center node execution branches (Default: center nodes with 3 or more branches)" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bCenterBranches = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches = { "bCenterBranches", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* When formatting treat delegate pins as execution pins, recommended to turn this option off and use the 'CreateEvent' node */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "When formatting treat delegate pins as execution pins, recommended to turn this option off and use the 'CreateEvent' node" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bTreatDelegatesAsExecutionPins = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins = { "bTreatDelegatesAsExecutionPins", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Padding used between parameter nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Padding used between parameter nodes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding = { "BlueprintParameterPadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, BlueprintParameterPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "////////////////////////////////////////////////////////////\n// Blueprint formatting\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Blueprint formatting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings = { "BlueprintFormatterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, BlueprintFormatterSettings), Z_Construct_UScriptStruct_FBAFormatterSettings, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* Call the format all function when ANY new node is added to the graph. Useful for when the 'UseColumnsForFormatAll' setting is on. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Call the format all function when ANY new node is added to the graph. Useful for when the 'UseColumnsForFormatAll' setting is on." },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAlwaysFormatAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll = { "bAlwaysFormatAll", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* Call the format all function when a new event node is added to the graph */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Call the format all function when a new event node is added to the graph" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAutoPositionEventNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes = { "bAutoPositionEventNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* x values defines padding between columns, y value defines horizontal padding between node trees */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "x values defines padding between columns, y value defines horizontal padding between node trees" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding = { "FormatAllPadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, FormatAllPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* Determines how nodes are positioned into columns when running formatting all nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how nodes are positioned into columns when running formatting all nodes" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle = { "FormatAllStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, FormatAllStyle), Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bUseCommentBubbleWidth_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Use comment bubble width when calculating the size of nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Use comment bubble width when calculating the size of nodes" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bUseCommentBubbleWidth_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bUseCommentBubbleWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bUseCommentBubbleWidth = { "bUseCommentBubbleWidth", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bUseCommentBubbleWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bUseCommentBubbleWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bUseCommentBubbleWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Add spacing to parameter nodes which have many connections, fixing hard to read wires */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add spacing to parameter nodes which have many connections, fixing hard to read wires" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bExpandParametersByHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight = { "bExpandParametersByHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Add spacing to nodes which have many connections, fixing hard to read wires */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add spacing to nodes which have many connections, fixing hard to read wires" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bExpandNodesByHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight = { "bExpandNodesByHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Create knot nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Create knot nodes" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bCreateKnotNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes = { "bCreateKnotNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bCacheSizeWhenRequired_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Cache nodes only when you require their size. Use this if you have extremely large graphs. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Cache nodes only when you require their size. Use this if you have extremely large graphs." },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bCacheSizeWhenRequired_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bCacheSizeWhenRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bCacheSizeWhenRequired = { "bCacheSizeWhenRequired", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bCacheSizeWhenRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bCacheSizeWhenRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bCacheSizeWhenRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Helixing is disabled if a single node is taller than this value */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Helixing is disabled if a single node is taller than this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight = { "SingleNodeMaxHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, SingleNodeMaxHeight), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Helixing is disabled if the total height of the parameter nodes is larger than this value */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Helixing is disabled if the total height of the parameter nodes is larger than this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax = { "HelixingHeightMax", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, HelixingHeightMax), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Whether to use HelixingHeightMax and SingleNodeMaxHeight */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Whether to use HelixingHeightMax and SingleNodeMaxHeight" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bLimitHelixingHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight = { "bLimitHelixingHeight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Reuse knot nodes instead of creating new ones every time */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Reuse knot nodes instead of creating new ones every time" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bUseKnotNodePool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool = { "bUseKnotNodePool", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Faster formatting will only format chains of nodes have been moved or had connections changed. Greatly increases speed of the format all command. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Faster formatting will only format chains of nodes have been moved or had connections changed. Greatly increases speed of the format all command." },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bEnableFasterFormatting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting = { "bEnableFasterFormatting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Determines how parameter wires are created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how parameter wires are created" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle = { "ParameterWiringStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ParameterWiringStyle), Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Determines how execution wires are created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how execution wires are created" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle = { "ExecutionWiringStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ExecutionWiringStyle), Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Determines how parameters are positioned */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how parameters are positioned" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle = { "ParameterStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ParameterStyle), Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Determines how execution nodes are positioned */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how execution nodes are positioned" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle = { "FormattingStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, FormattingStyle), Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ExtraRootNodeTypes_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Add custom node types (besides blueprint event nodes) that you want to format when using the FormatAll command */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add custom node types (besides blueprint event nodes) that you want to format when using the FormatAll command" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ExtraRootNodeTypes = { "ExtraRootNodeTypes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ExtraRootNodeTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ExtraRootNodeTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ExtraRootNodeTypes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ExtraRootNodeTypes_Inner = { "ExtraRootNodeTypes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Blueprint formatting will be used for these types of graphs (you can see the type of a graph with the PrintGraphInfo command, default: unbound) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Blueprint formatting will be used for these types of graphs (you can see the type of a graph with the PrintGraphInfo command, default: unbound)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs = { "UseBlueprintFormattingForTheseGraphs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, UseBlueprintFormattingForTheseGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_Inner = { "UseBlueprintFormattingForTheseGraphs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DisabledGraphs_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* List of disabled graph types */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "List of disabled graph types" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DisabledGraphs = { "DisabledGraphs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DisabledGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DisabledGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DisabledGraphs_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DisabledGraphs_Inner = { "DisabledGraphs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_BlueprintAssist_EBAGraphType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Save the node size cache to a file (located in the the plugin folder) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Save the node size cache to a file (located in the the plugin folder)" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bSaveBlueprintAssistCacheToFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile = { "bSaveBlueprintAssistCacheToFile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Enable more slower but more accurate node size caching */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Enable more slower but more accurate node size caching" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bSlowButAccurateSizeCaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching = { "bSlowButAccurateSizeCaching", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Distance the viewport moves when running the Shift Camera command. Scaled by zoom distance. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Distance the viewport moves when running the Shift Camera command. Scaled by zoom distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance = { "ShiftCameraDistance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ShiftCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Improves the default wiring behavior for new nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Improves the default wiring behavior for new nodes" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bBetterWiringForNewNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes = { "bBetterWiringForNewNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bSetAllCommentBubblePinned_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Sets the 'Comment Bubble Pinned' bool for all nodes on the graph */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Sets the 'Comment Bubble Pinned' bool for all nodes on the graph" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bSetAllCommentBubblePinned_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bSetAllCommentBubblePinned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bSetAllCommentBubblePinned = { "bSetAllCommentBubblePinned", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bSetAllCommentBubblePinned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bSetAllCommentBubblePinned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bSetAllCommentBubblePinned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_PinTextHighlightColor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Highlight the text for the currently selected pin with this color */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Highlight the text for the currently selected pin with this color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_PinTextHighlightColor = { "PinTextHighlightColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, PinTextHighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_PinTextHighlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_PinTextHighlightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_PinHighlightColor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Highlight the currently selected pin with this color */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Highlight the currently selected pin with this color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_PinHighlightColor = { "PinHighlightColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, PinHighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_PinHighlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_PinHighlightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Add the BlueprintAssist widget to the toolbar */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add the BlueprintAssist widget to the toolbar" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAddToolbarWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget = { "bAddToolbarWidget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBASettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bCustomDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultTooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeToCinematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultPrivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultExposeOnSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultBlueprintReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultInstanceEditable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNumPendingSizeForNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableCachingNodeSizeNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bTryToHandleCommentNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_AutoInsertComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAccountForCommentsWhenFormatting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_AnimationGraphFormatterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_NiagaraGraphFormatterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_MaterialGraphFormatterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_SoundCueGraphFormatterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BehaviorTreeFormatterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bUseCommentBubbleWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bCacheSizeWhenRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ExtraRootNodeTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ExtraRootNodeTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DisabledGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DisabledGraphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bSetAllCommentBubblePinned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_PinTextHighlightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_PinHighlightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBASettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBASettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBASettings_Statics::ClassParams = {
		&UBASettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBASettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBASettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBASettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBASettings, 3582117703);
	template<> BLUEPRINTASSIST_API UClass* StaticClass<UBASettings>()
	{
		return UBASettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBASettings(Z_Construct_UClass_UBASettings, &UBASettings::StaticClass, TEXT("/Script/BlueprintAssist"), TEXT("UBASettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBASettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
