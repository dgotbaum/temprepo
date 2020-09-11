// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
enum class EDialogBoxResult : uint8;
class UAssetsCleanerEntryObject;
#ifdef ASSETSCLEANER_AssetsCleanerBPLibrary_generated_h
#error "AssetsCleanerBPLibrary.generated.h already included, missing '#pragma once' in AssetsCleanerBPLibrary.h"
#endif
#define ASSETSCLEANER_AssetsCleanerBPLibrary_generated_h

#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_SPARSE_DATA
#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLocateAssetsOnDisk); \
	DECLARE_FUNCTION(execOpenConfirmationDialog); \
	DECLARE_FUNCTION(execGetIsPlayingInEditor); \
	DECLARE_FUNCTION(execGetAssetDataSize); \
	DECLARE_FUNCTION(execSyncBrowserToAssetData); \
	DECLARE_FUNCTION(execGetModuleExists); \
	DECLARE_FUNCTION(execShowSizeMap); \
	DECLARE_FUNCTION(execShowRefGraph); \
	DECLARE_FUNCTION(execDeleteAssets); \
	DECLARE_FUNCTION(execPickPath); \
	DECLARE_FUNCTION(execSortAssetEntryArray);


#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLocateAssetsOnDisk); \
	DECLARE_FUNCTION(execOpenConfirmationDialog); \
	DECLARE_FUNCTION(execGetIsPlayingInEditor); \
	DECLARE_FUNCTION(execGetAssetDataSize); \
	DECLARE_FUNCTION(execSyncBrowserToAssetData); \
	DECLARE_FUNCTION(execGetModuleExists); \
	DECLARE_FUNCTION(execShowSizeMap); \
	DECLARE_FUNCTION(execShowRefGraph); \
	DECLARE_FUNCTION(execDeleteAssets); \
	DECLARE_FUNCTION(execPickPath); \
	DECLARE_FUNCTION(execSortAssetEntryArray);


#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetsCleanerBPLibrary(); \
	friend struct Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAssetsCleanerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetsCleaner"), NO_API) \
	DECLARE_SERIALIZER(UAssetsCleanerBPLibrary)


#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUAssetsCleanerBPLibrary(); \
	friend struct Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAssetsCleanerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetsCleaner"), NO_API) \
	DECLARE_SERIALIZER(UAssetsCleanerBPLibrary)


#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetsCleanerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetsCleanerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetsCleanerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetsCleanerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetsCleanerBPLibrary(UAssetsCleanerBPLibrary&&); \
	NO_API UAssetsCleanerBPLibrary(const UAssetsCleanerBPLibrary&); \
public:


#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetsCleanerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetsCleanerBPLibrary(UAssetsCleanerBPLibrary&&); \
	NO_API UAssetsCleanerBPLibrary(const UAssetsCleanerBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetsCleanerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetsCleanerBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetsCleanerBPLibrary)


#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_34_PROLOG
#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_SPARSE_DATA \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_RPC_WRAPPERS \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_INCLASS \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_SPARSE_DATA \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AssetsCleanerBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETSCLEANER_API UClass* StaticClass<class UAssetsCleanerBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerBPLibrary_h


#define FOREACH_ENUM_EDIALOGBOXRESULT(op) \
	op(EDialogBoxResult::OK) \
	op(EDialogBoxResult::Cancel) 

enum class EDialogBoxResult : uint8;
template<> ASSETSCLEANER_API UEnum* StaticEnum<EDialogBoxResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
