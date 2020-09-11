// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetsCleaner/Public/AssetsCleanerBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetsCleanerBPLibrary() {}
// Cross Module References
	ASSETSCLEANER_API UEnum* Z_Construct_UEnum_AssetsCleaner_EDialogBoxResult();
	UPackage* Z_Construct_UPackage__Script_AssetsCleaner();
	ASSETSCLEANER_API UClass* Z_Construct_UClass_UAssetsCleanerBPLibrary_NoRegister();
	ASSETSCLEANER_API UClass* Z_Construct_UClass_UAssetsCleanerBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ASSETSCLEANER_API UClass* Z_Construct_UClass_UAssetsCleanerEntryObject_NoRegister();
// End Cross Module References
	static UEnum* EDialogBoxResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AssetsCleaner_EDialogBoxResult, Z_Construct_UPackage__Script_AssetsCleaner(), TEXT("EDialogBoxResult"));
		}
		return Singleton;
	}
	template<> ASSETSCLEANER_API UEnum* StaticEnum<EDialogBoxResult>()
	{
		return EDialogBoxResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDialogBoxResult(EDialogBoxResult_StaticEnum, TEXT("/Script/AssetsCleaner"), TEXT("EDialogBoxResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AssetsCleaner_EDialogBoxResult_Hash() { return 1090778835U; }
	UEnum* Z_Construct_UEnum_AssetsCleaner_EDialogBoxResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AssetsCleaner();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDialogBoxResult"), 0, Get_Z_Construct_UEnum_AssetsCleaner_EDialogBoxResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDialogBoxResult::OK", (int64)EDialogBoxResult::OK },
				{ "EDialogBoxResult::Cancel", (int64)EDialogBoxResult::Cancel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "EDialogBoxResult::Cancel" },
				{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
				{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
				{ "OK.Name", "EDialogBoxResult::OK" },
				{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AssetsCleaner,
				nullptr,
				"EDialogBoxResult",
				"EDialogBoxResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execLocateAssetsOnDisk)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::LocateAssetsOnDisk(Z_Param_Out_Assets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execOpenConfirmationDialog)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_GET_ENUM_REF(EDialogBoxResult,Z_Param_Out_Results);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::OpenConfirmationDialog(Z_Param_Message,(EDialogBoxResult&)(Z_Param_Out_Results));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execGetIsPlayingInEditor)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Playing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::GetIsPlayingInEditor(Z_Param_Out_Playing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execGetAssetDataSize)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetToSelect);
		P_GET_UBOOL_REF(Z_Param_Out_Returned);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::GetAssetDataSize(Z_Param_Out_AssetToSelect,Z_Param_Out_Returned,Z_Param_Out_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execSyncBrowserToAssetData)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetsToSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::SyncBrowserToAssetData(Z_Param_Out_AssetsToSelect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execGetModuleExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModuleName);
		P_GET_UBOOL_REF(Z_Param_Out_Exists);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::GetModuleExists(Z_Param_ModuleName,Z_Param_Out_Exists);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execShowSizeMap)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_SelectedAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::ShowSizeMap(Z_Param_Out_SelectedAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execShowRefGraph)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_SelectedAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::ShowRefGraph(Z_Param_Out_SelectedAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execDeleteAssets)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetsToDelete);
		P_GET_UBOOL_REF(Z_Param_Out_Succeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::DeleteAssets(Z_Param_Out_AssetsToDelete,Z_Param_Out_Succeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execPickPath)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Succeeded);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::PickPath(Z_Param_Out_Succeeded,Z_Param_Out_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetsCleanerBPLibrary::execSortAssetEntryArray)
	{
		P_GET_TARRAY_REF(UAssetsCleanerEntryObject*,Z_Param_Out_Array_To_Sort);
		P_GET_PROPERTY(FIntProperty,Z_Param_SortMethod);
		P_GET_UBOOL(Z_Param_Descending);
		P_GET_TARRAY_REF(UAssetsCleanerEntryObject*,Z_Param_Out_Sorted_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetsCleanerBPLibrary::SortAssetEntryArray(Z_Param_Out_Array_To_Sort,Z_Param_SortMethod,Z_Param_Descending,Z_Param_Out_Sorted_Array);
		P_NATIVE_END;
	}
	void UAssetsCleanerBPLibrary::StaticRegisterNativesUAssetsCleanerBPLibrary()
	{
		UClass* Class = UAssetsCleanerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteAssets", &UAssetsCleanerBPLibrary::execDeleteAssets },
			{ "GetAssetDataSize", &UAssetsCleanerBPLibrary::execGetAssetDataSize },
			{ "GetIsPlayingInEditor", &UAssetsCleanerBPLibrary::execGetIsPlayingInEditor },
			{ "GetModuleExists", &UAssetsCleanerBPLibrary::execGetModuleExists },
			{ "LocateAssetsOnDisk", &UAssetsCleanerBPLibrary::execLocateAssetsOnDisk },
			{ "OpenConfirmationDialog", &UAssetsCleanerBPLibrary::execOpenConfirmationDialog },
			{ "PickPath", &UAssetsCleanerBPLibrary::execPickPath },
			{ "ShowRefGraph", &UAssetsCleanerBPLibrary::execShowRefGraph },
			{ "ShowSizeMap", &UAssetsCleanerBPLibrary::execShowSizeMap },
			{ "SortAssetEntryArray", &UAssetsCleanerBPLibrary::execSortAssetEntryArray },
			{ "SyncBrowserToAssetData", &UAssetsCleanerBPLibrary::execSyncBrowserToAssetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics
	{
		struct AssetsCleanerBPLibrary_eventDeleteAssets_Parms
		{
			TArray<FAssetData> AssetsToDelete;
			bool Succeeded;
		};
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToDelete;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetsToDelete_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((AssetsCleanerBPLibrary_eventDeleteAssets_Parms*)Obj)->Succeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetsCleanerBPLibrary_eventDeleteAssets_Parms), &Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::NewProp_AssetsToDelete = { "AssetsToDelete", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventDeleteAssets_Parms, AssetsToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::NewProp_AssetsToDelete_Inner = { "AssetsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::NewProp_Succeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::NewProp_AssetsToDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::NewProp_AssetsToDelete_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Delete Assets with Dialog" },
		{ "Keywords", "Delete Assets editor dialog window popup" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: Delete Assets (Using editor 'Delete Assets' confirmation window" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "DeleteAssets", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventDeleteAssets_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics
	{
		struct AssetsCleanerBPLibrary_eventGetAssetDataSize_Parms
		{
			FAssetData AssetToSelect;
			bool Returned;
			float Size;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static void NewProp_Returned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Returned;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetToSelect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventGetAssetDataSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::NewProp_Returned_SetBit(void* Obj)
	{
		((AssetsCleanerBPLibrary_eventGetAssetDataSize_Parms*)Obj)->Returned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::NewProp_Returned = { "Returned", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetsCleanerBPLibrary_eventGetAssetDataSize_Parms), &Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::NewProp_Returned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::NewProp_AssetToSelect = { "AssetToSelect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventGetAssetDataSize_Parms, AssetToSelect), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::NewProp_Returned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::NewProp_AssetToSelect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Get AssetData Size" },
		{ "Keywords", "get size disk asset data" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: Gets the Disk size of an Asset through AssetData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "GetAssetDataSize", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventGetAssetDataSize_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics
	{
		struct AssetsCleanerBPLibrary_eventGetIsPlayingInEditor_Parms
		{
			bool Playing;
		};
		static void NewProp_Playing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Playing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::NewProp_Playing_SetBit(void* Obj)
	{
		((AssetsCleanerBPLibrary_eventGetIsPlayingInEditor_Parms*)Obj)->Playing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::NewProp_Playing = { "Playing", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetsCleanerBPLibrary_eventGetIsPlayingInEditor_Parms), &Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::NewProp_Playing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::NewProp_Playing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Is Playing In Editor?" },
		{ "Keywords", "get is playing in editor PIE" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: Return if editor is in Play In Editor mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "GetIsPlayingInEditor", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventGetIsPlayingInEditor_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics
	{
		struct AssetsCleanerBPLibrary_eventGetModuleExists_Parms
		{
			FString ModuleName;
			bool Exists;
		};
		static void NewProp_Exists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Exists;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::NewProp_Exists_SetBit(void* Obj)
	{
		((AssetsCleanerBPLibrary_eventGetModuleExists_Parms*)Obj)->Exists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::NewProp_Exists = { "Exists", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetsCleanerBPLibrary_eventGetModuleExists_Parms), &Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::NewProp_Exists_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventGetModuleExists_Parms, ModuleName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::NewProp_Exists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::NewProp_ModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Does Module Exist" },
		{ "Keywords", "does module exist modulemanager" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: returns if a code module exists (loaded or not)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "GetModuleExists", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventGetModuleExists_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics
	{
		struct AssetsCleanerBPLibrary_eventLocateAssetsOnDisk_Parms
		{
			TArray<FAssetData> Assets;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventLocateAssetsOnDisk_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::NewProp_Assets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::NewProp_Assets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Locate Asset on Disk" },
		{ "Keywords", "locate asset explore disk explorer" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: Locates the asset in Explorer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "LocateAssetsOnDisk", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventLocateAssetsOnDisk_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics
	{
		struct AssetsCleanerBPLibrary_eventOpenConfirmationDialog_Parms
		{
			FText Message;
			EDialogBoxResult Results;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Results_Underlying;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventOpenConfirmationDialog_Parms, Results), Z_Construct_UEnum_AssetsCleaner_EDialogBoxResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::NewProp_Results_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventOpenConfirmationDialog_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::NewProp_Results,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::NewProp_Results_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Open Confirmation Dialog" },
		{ "ExpandEnumAsExecs", "Results" },
		{ "Keywords", "For AssetCleanerPlugin use only: Open confirmation dialog box popup" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "Open an editor dialog confirmation box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "OpenConfirmationDialog", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventOpenConfirmationDialog_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics
	{
		struct AssetsCleanerBPLibrary_eventPickPath_Parms
		{
			bool Succeeded;
			FString Path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventPickPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((AssetsCleanerBPLibrary_eventPickPath_Parms*)Obj)->Succeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetsCleanerBPLibrary_eventPickPath_Parms), &Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::NewProp_Succeeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Pick Folder" },
		{ "Keywords", "pick folder open browse" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: Proper folder picker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "PickPath", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventPickPath_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics
	{
		struct AssetsCleanerBPLibrary_eventShowRefGraph_Parms
		{
			TArray<FAssetData> SelectedAssets;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedAssets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::NewProp_SelectedAssets = { "SelectedAssets", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventShowRefGraph_Parms, SelectedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::NewProp_SelectedAssets_Inner = { "SelectedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::NewProp_SelectedAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::NewProp_SelectedAssets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Show Reference Graph for Assets" },
		{ "Keywords", "Show reference graph asset" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: Show the reference graph for the selected assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "ShowRefGraph", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventShowRefGraph_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics
	{
		struct AssetsCleanerBPLibrary_eventShowSizeMap_Parms
		{
			TArray<FAssetData> SelectedAssets;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedAssets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::NewProp_SelectedAssets = { "SelectedAssets", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventShowSizeMap_Parms, SelectedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::NewProp_SelectedAssets_Inner = { "SelectedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::NewProp_SelectedAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::NewProp_SelectedAssets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Show Size Map for Assets" },
		{ "Keywords", "Show size map asset" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: Show the Size map tool for the selected assets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "ShowSizeMap", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventShowSizeMap_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics
	{
		struct AssetsCleanerBPLibrary_eventSortAssetEntryArray_Parms
		{
			TArray<UAssetsCleanerEntryObject*> Array_To_Sort;
			int32 SortMethod;
			bool Descending;
			TArray<UAssetsCleanerEntryObject*> Sorted_Array;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sorted_Array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sorted_Array_Inner;
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SortMethod;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array_To_Sort;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_To_Sort_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Sorted_Array = { "Sorted_Array", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventSortAssetEntryArray_Parms, Sorted_Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Sorted_Array_Inner = { "Sorted_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetsCleanerEntryObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((AssetsCleanerBPLibrary_eventSortAssetEntryArray_Parms*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetsCleanerBPLibrary_eventSortAssetEntryArray_Parms), &Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventSortAssetEntryArray_Parms, SortMethod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Array_To_Sort = { "Array_To_Sort", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventSortAssetEntryArray_Parms, Array_To_Sort), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Array_To_Sort_Inner = { "Array_To_Sort", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetsCleanerEntryObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Sorted_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Sorted_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Array_To_Sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::NewProp_Array_To_Sort_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetsCleanerLibrary" },
		{ "DisplayName", "Sort AssetEntry array" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "SortAssetEntryArray", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventSortAssetEntryArray_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics
	{
		struct AssetsCleanerBPLibrary_eventSyncBrowserToAssetData_Parms
		{
			TArray<FAssetData> AssetsToSelect;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToSelect;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetsToSelect_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::NewProp_AssetsToSelect = { "AssetsToSelect", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetsCleanerBPLibrary_eventSyncBrowserToAssetData_Parms, AssetsToSelect), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::NewProp_AssetsToSelect_Inner = { "AssetsToSelect", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::NewProp_AssetsToSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::NewProp_AssetsToSelect_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetCleanerPlugin" },
		{ "DisplayName", "Sync Content Browser to Asset Data" },
		{ "Keywords", "Sync content browser asset data" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
		{ "ToolTip", "For AssetCleanerPlugin use only: Sync content browser asset data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetsCleanerBPLibrary, nullptr, "SyncBrowserToAssetData", nullptr, nullptr, sizeof(AssetsCleanerBPLibrary_eventSyncBrowserToAssetData_Parms), Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetsCleanerBPLibrary_NoRegister()
	{
		return UAssetsCleanerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetsCleaner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_DeleteAssets, "DeleteAssets" }, // 1036941205
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetAssetDataSize, "GetAssetDataSize" }, // 1204142445
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetIsPlayingInEditor, "GetIsPlayingInEditor" }, // 2480236442
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_GetModuleExists, "GetModuleExists" }, // 2760739811
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_LocateAssetsOnDisk, "LocateAssetsOnDisk" }, // 3412416573
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_OpenConfirmationDialog, "OpenConfirmationDialog" }, // 4044274200
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_PickPath, "PickPath" }, // 4174762681
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowRefGraph, "ShowRefGraph" }, // 315476298
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_ShowSizeMap, "ShowSizeMap" }, // 3456341247
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_SortAssetEntryArray, "SortAssetEntryArray" }, // 1837724766
		{ &Z_Construct_UFunction_UAssetsCleanerBPLibrary_SyncBrowserToAssetData, "SyncBrowserToAssetData" }, // 1825391071
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetsCleanerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AssetsCleanerBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetsCleanerBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics::ClassParams = {
		&UAssetsCleanerBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetsCleanerBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetsCleanerBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetsCleanerBPLibrary, 3929899608);
	template<> ASSETSCLEANER_API UClass* StaticClass<UAssetsCleanerBPLibrary>()
	{
		return UAssetsCleanerBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetsCleanerBPLibrary(Z_Construct_UClass_UAssetsCleanerBPLibrary, &UAssetsCleanerBPLibrary::StaticClass, TEXT("/Script/AssetsCleaner"), TEXT("UAssetsCleanerBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetsCleanerBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
