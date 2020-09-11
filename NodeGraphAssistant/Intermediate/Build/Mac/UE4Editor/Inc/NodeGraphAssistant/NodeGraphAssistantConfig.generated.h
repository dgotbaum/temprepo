// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NODEGRAPHASSISTANT_NodeGraphAssistantConfig_generated_h
#error "NodeGraphAssistantConfig.generated.h already included, missing '#pragma once' in NodeGraphAssistantConfig.h"
#endif
#define NODEGRAPHASSISTANT_NodeGraphAssistantConfig_generated_h

#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_SPARSE_DATA
#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_RPC_WRAPPERS
#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNodeGraphAssistantConfig(); \
	friend struct Z_Construct_UClass_UNodeGraphAssistantConfig_Statics; \
public: \
	DECLARE_CLASS(UNodeGraphAssistantConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NodeGraphAssistant"), NO_API) \
	DECLARE_SERIALIZER(UNodeGraphAssistantConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUNodeGraphAssistantConfig(); \
	friend struct Z_Construct_UClass_UNodeGraphAssistantConfig_Statics; \
public: \
	DECLARE_CLASS(UNodeGraphAssistantConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NodeGraphAssistant"), NO_API) \
	DECLARE_SERIALIZER(UNodeGraphAssistantConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeGraphAssistantConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeGraphAssistantConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeGraphAssistantConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeGraphAssistantConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeGraphAssistantConfig(UNodeGraphAssistantConfig&&); \
	NO_API UNodeGraphAssistantConfig(const UNodeGraphAssistantConfig&); \
public:


#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeGraphAssistantConfig(UNodeGraphAssistantConfig&&); \
	NO_API UNodeGraphAssistantConfig(const UNodeGraphAssistantConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeGraphAssistantConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeGraphAssistantConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNodeGraphAssistantConfig)


#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_25_PROLOG
#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_SPARSE_DATA \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_RPC_WRAPPERS \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_INCLASS \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_SPARSE_DATA \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NODEGRAPHASSISTANT_API UClass* StaticClass<class UNodeGraphAssistantConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h


#define FOREACH_ENUM_EAUTOCONNECTMODIFIER(op) \
	op(EAutoConnectModifier::Alt) \
	op(EAutoConnectModifier::None) 

enum class EAutoConnectModifier : uint8;
template<> NODEGRAPHASSISTANT_API UEnum* StaticEnum<EAutoConnectModifier>();

#define FOREACH_ENUM_ECUTOFFMOUSEBUTTON(op) \
	op(ECutOffMouseButton::Middle) \
	op(ECutOffMouseButton::Left) \
	op(ECutOffMouseButton::None) 

enum class ECutOffMouseButton : uint8;
template<> NODEGRAPHASSISTANT_API UEnum* StaticEnum<ECutOffMouseButton>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
