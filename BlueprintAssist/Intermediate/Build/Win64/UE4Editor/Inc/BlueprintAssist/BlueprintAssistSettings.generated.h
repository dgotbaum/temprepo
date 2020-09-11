// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTASSIST_BlueprintAssistSettings_generated_h
#error "BlueprintAssistSettings.generated.h already included, missing '#pragma once' in BlueprintAssistSettings.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistSettings_generated_h

#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBAFormatterSettings_Statics; \
	BLUEPRINTASSIST_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<struct FBAFormatterSettings>();

#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_SPARSE_DATA
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_RPC_WRAPPERS
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBASettings(); \
	friend struct Z_Construct_UClass_UBASettings_Statics; \
public: \
	DECLARE_CLASS(UBASettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintAssist"), NO_API) \
	DECLARE_SERIALIZER(UBASettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUBASettings(); \
	friend struct Z_Construct_UClass_UBASettings_Statics; \
public: \
	DECLARE_CLASS(UBASettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintAssist"), NO_API) \
	DECLARE_SERIALIZER(UBASettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBASettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBASettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBASettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBASettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBASettings(UBASettings&&); \
	NO_API UBASettings(const UBASettings&); \
public:


#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBASettings(UBASettings&&); \
	NO_API UBASettings(const UBASettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBASettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBASettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBASettings)


#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_84_PROLOG
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_SPARSE_DATA \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_INCLASS \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_SPARSE_DATA \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTASSIST_API UClass* StaticClass<class UBASettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h


#define FOREACH_ENUM_EBAFORMATALLSTYLE(op) \
	op(BAFormatAll_Simple) \
	op(BAFormatAll_Smart) \
	op(BAFormatAll_NodeType) 
#define FOREACH_ENUM_EBAAUTOFORMATTING(op) \
	op(BAAutoFormat_Never) \
	op(BAAutoFormat_FormatAllConnected) \
	op(BAAutoFormat_FormatSingleConnected) 
#define FOREACH_ENUM_EBAAUTOINSERTCOMMENT(op) \
	op(BAAutoInsertComment_Never) \
	op(BAAutoInsertComment_Always) \
	op(BAAutoInsertComment_Surrounded) 
#define FOREACH_ENUM_EBAWIRINGSTYLE(op) \
	op(BAWiringStyle_AlwaysMerge) \
	op(BAWiringStyle_MergeWhenNear) \
	op(BAWiringStyle_SingleWire) 
#define FOREACH_ENUM_EBAGRAPHTYPE(op) \
	op(BAGraphType_Unknown) \
	op(BAGraphType_Blueprint) \
	op(BAGraphType_SoundCue) \
	op(BAGraphType_BehaviorTree) \
	op(BAGraphType_MaterialGraph) \
	op(BAGraphType_NiagaraGraph) \
	op(BAGraphType_AnimGraph) 
#define FOREACH_ENUM_EBAPARAMETERFORMATTINGSTYLE(op) \
	op(BAParameterFormatting_Helixing) \
	op(BAParameterFormatting_LeftSide) 
#define FOREACH_ENUM_EBANODEFORMATTINGSTYLE(op) \
	op(BANodeFormatting_Expanded) \
	op(BANodeFormatting_Compact) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
