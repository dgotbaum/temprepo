// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULowEntryJsonValue;
class ULowEntryJsonArray;
class ULowEntryJsonObject;
enum class ELowEntryJsonTypeFound : uint8;
enum class ELowEntryJsonType : uint8;
enum class ELowEntryJsonValueFound : uint8;
enum class ELowEntryJsonValueAndTypeFound : uint8;
class ULowEntryJsonObjectIterator;
class ULowEntryJsonObjectEntry;
enum class ELowEntryJsonParseResult : uint8;
#ifdef LOWENTRYJSON_LowEntryJsonLibrary_generated_h
#error "LowEntryJsonLibrary.generated.h already included, missing '#pragma once' in LowEntryJsonLibrary.h"
#endif
#define LOWENTRYJSON_LowEntryJsonLibrary_generated_h

#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_SPARSE_DATA
#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execValue_GetAsJsonArrayOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsJsonObjectOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsBooleanOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsByteOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsFloatOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsIntegerOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsStringOrDefault); \
	DECLARE_FUNCTION(execValue_GetJsonArray); \
	DECLARE_FUNCTION(execValue_GetJsonObject); \
	DECLARE_FUNCTION(execValue_GetBoolean); \
	DECLARE_FUNCTION(execValue_GetByte); \
	DECLARE_FUNCTION(execValue_GetFloat); \
	DECLARE_FUNCTION(execValue_GetInteger); \
	DECLARE_FUNCTION(execValue_GetString); \
	DECLARE_FUNCTION(execValue_GetNull); \
	DECLARE_FUNCTION(execValue_Get); \
	DECLARE_FUNCTION(execValue_SetJsonArray); \
	DECLARE_FUNCTION(execValue_SetJsonObject); \
	DECLARE_FUNCTION(execValue_SetBoolean); \
	DECLARE_FUNCTION(execValue_SetByte); \
	DECLARE_FUNCTION(execValue_SetFloat); \
	DECLARE_FUNCTION(execValue_SetInteger); \
	DECLARE_FUNCTION(execValue_SetString); \
	DECLARE_FUNCTION(execValue_SetNull); \
	DECLARE_FUNCTION(execValue_Set); \
	DECLARE_FUNCTION(execValue_NotEquals); \
	DECLARE_FUNCTION(execValue_Equals); \
	DECLARE_FUNCTION(execValue_Pure_Clone); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromJsonArray); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromJsonObject); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromBoolean); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromByte); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromFloat); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromInteger); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromString); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromNull); \
	DECLARE_FUNCTION(execValue_Pure_Create); \
	DECLARE_FUNCTION(execValue_Clone); \
	DECLARE_FUNCTION(execValue_CreateFromJsonArray); \
	DECLARE_FUNCTION(execValue_CreateFromJsonObject); \
	DECLARE_FUNCTION(execValue_CreateFromBoolean); \
	DECLARE_FUNCTION(execValue_CreateFromByte); \
	DECLARE_FUNCTION(execValue_CreateFromFloat); \
	DECLARE_FUNCTION(execValue_CreateFromInteger); \
	DECLARE_FUNCTION(execValue_CreateFromString); \
	DECLARE_FUNCTION(execValue_CreateFromNull); \
	DECLARE_FUNCTION(execValue_Create); \
	DECLARE_FUNCTION(execArray_Append); \
	DECLARE_FUNCTION(execArray_Shorten); \
	DECLARE_FUNCTION(execArray_Expand); \
	DECLARE_FUNCTION(execArray_Resize); \
	DECLARE_FUNCTION(execArray_Length); \
	DECLARE_FUNCTION(execArray_GetAsJsonValueOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsJsonArrayOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsJsonObjectOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsBooleanOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsByteOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsFloatOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsIntegerOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsStringOrDefault); \
	DECLARE_FUNCTION(execArray_GetJsonValue); \
	DECLARE_FUNCTION(execArray_GetJsonArray); \
	DECLARE_FUNCTION(execArray_GetJsonObject); \
	DECLARE_FUNCTION(execArray_GetBoolean); \
	DECLARE_FUNCTION(execArray_GetByte); \
	DECLARE_FUNCTION(execArray_GetFloat); \
	DECLARE_FUNCTION(execArray_GetInteger); \
	DECLARE_FUNCTION(execArray_GetString); \
	DECLARE_FUNCTION(execArray_GetNull); \
	DECLARE_FUNCTION(execArray_Get); \
	DECLARE_FUNCTION(execArray_InsertJsonValue); \
	DECLARE_FUNCTION(execArray_InsertJsonArray); \
	DECLARE_FUNCTION(execArray_InsertJsonObject); \
	DECLARE_FUNCTION(execArray_InsertBoolean); \
	DECLARE_FUNCTION(execArray_InsertByte); \
	DECLARE_FUNCTION(execArray_InsertFloat); \
	DECLARE_FUNCTION(execArray_InsertInteger); \
	DECLARE_FUNCTION(execArray_InsertString); \
	DECLARE_FUNCTION(execArray_InsertNull); \
	DECLARE_FUNCTION(execArray_SetJsonValue); \
	DECLARE_FUNCTION(execArray_SetJsonArray); \
	DECLARE_FUNCTION(execArray_SetJsonObject); \
	DECLARE_FUNCTION(execArray_SetBoolean); \
	DECLARE_FUNCTION(execArray_SetByte); \
	DECLARE_FUNCTION(execArray_SetFloat); \
	DECLARE_FUNCTION(execArray_SetInteger); \
	DECLARE_FUNCTION(execArray_SetString); \
	DECLARE_FUNCTION(execArray_SetNull); \
	DECLARE_FUNCTION(execArray_AddJsonValue); \
	DECLARE_FUNCTION(execArray_AddJsonArray); \
	DECLARE_FUNCTION(execArray_AddJsonObject); \
	DECLARE_FUNCTION(execArray_AddBoolean); \
	DECLARE_FUNCTION(execArray_AddByte); \
	DECLARE_FUNCTION(execArray_AddFloat); \
	DECLARE_FUNCTION(execArray_AddInteger); \
	DECLARE_FUNCTION(execArray_AddString); \
	DECLARE_FUNCTION(execArray_AddNull); \
	DECLARE_FUNCTION(execArray_IsSet); \
	DECLARE_FUNCTION(execArray_Unset); \
	DECLARE_FUNCTION(execArray_Clear); \
	DECLARE_FUNCTION(execArray_NotEquals); \
	DECLARE_FUNCTION(execArray_Equals); \
	DECLARE_FUNCTION(execArray_Pure_ToJsonString); \
	DECLARE_FUNCTION(execArray_ToJsonString); \
	DECLARE_FUNCTION(execArray_Pure_Merge); \
	DECLARE_FUNCTION(execArray_Pure_Clone); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromJsonValueArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromJsonArrayArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromJsonObjectArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromBooleanArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromByteArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromFloatArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromIntegerArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromStringArray); \
	DECLARE_FUNCTION(execArray_Merge); \
	DECLARE_FUNCTION(execArray_Clone); \
	DECLARE_FUNCTION(execArray_CreateFromJsonValueArray); \
	DECLARE_FUNCTION(execArray_CreateFromJsonArrayArray); \
	DECLARE_FUNCTION(execArray_CreateFromJsonObjectArray); \
	DECLARE_FUNCTION(execArray_CreateFromBooleanArray); \
	DECLARE_FUNCTION(execArray_CreateFromByteArray); \
	DECLARE_FUNCTION(execArray_CreateFromFloatArray); \
	DECLARE_FUNCTION(execArray_CreateFromIntegerArray); \
	DECLARE_FUNCTION(execArray_CreateFromStringArray); \
	DECLARE_FUNCTION(execObjectIterator_Length); \
	DECLARE_FUNCTION(execObjectIterator_GetValues); \
	DECLARE_FUNCTION(execObjectIterator_GetKeys); \
	DECLARE_FUNCTION(execObjectIterator_Get); \
	DECLARE_FUNCTION(execObjectIterator_Clone); \
	DECLARE_FUNCTION(execObjectIterator_Create); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromJsonArray); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromJsonObject); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromBoolean); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromByte); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromFloat); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromInteger); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromString); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromNull); \
	DECLARE_FUNCTION(execObjectEntry_GetValue); \
	DECLARE_FUNCTION(execObjectEntry_GetKey); \
	DECLARE_FUNCTION(execObjectEntry_Pure_Create); \
	DECLARE_FUNCTION(execObject_Sort); \
	DECLARE_FUNCTION(execObject_Append); \
	DECLARE_FUNCTION(execObject_Length); \
	DECLARE_FUNCTION(execObject_GetValues); \
	DECLARE_FUNCTION(execObject_GetKeys); \
	DECLARE_FUNCTION(execObject_GetAsJsonValueOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsJsonArrayOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsJsonObjectOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsBooleanOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsByteOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsFloatOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsIntegerOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsStringOrDefault); \
	DECLARE_FUNCTION(execObject_GetJsonValue); \
	DECLARE_FUNCTION(execObject_GetJsonArray); \
	DECLARE_FUNCTION(execObject_GetJsonObject); \
	DECLARE_FUNCTION(execObject_GetBoolean); \
	DECLARE_FUNCTION(execObject_GetByte); \
	DECLARE_FUNCTION(execObject_GetFloat); \
	DECLARE_FUNCTION(execObject_GetInteger); \
	DECLARE_FUNCTION(execObject_GetString); \
	DECLARE_FUNCTION(execObject_GetNull); \
	DECLARE_FUNCTION(execObject_Get); \
	DECLARE_FUNCTION(execObject_SetJsonValue); \
	DECLARE_FUNCTION(execObject_SetJsonArray); \
	DECLARE_FUNCTION(execObject_SetJsonObject); \
	DECLARE_FUNCTION(execObject_SetBoolean); \
	DECLARE_FUNCTION(execObject_SetByte); \
	DECLARE_FUNCTION(execObject_SetFloat); \
	DECLARE_FUNCTION(execObject_SetInteger); \
	DECLARE_FUNCTION(execObject_SetString); \
	DECLARE_FUNCTION(execObject_SetNull); \
	DECLARE_FUNCTION(execObject_IsSet); \
	DECLARE_FUNCTION(execObject_Unset); \
	DECLARE_FUNCTION(execObject_Clear); \
	DECLARE_FUNCTION(execObject_NotEquals); \
	DECLARE_FUNCTION(execObject_Equals); \
	DECLARE_FUNCTION(execObject_Pure_ToJsonString); \
	DECLARE_FUNCTION(execObject_ToJsonString); \
	DECLARE_FUNCTION(execObject_Pure_Merge); \
	DECLARE_FUNCTION(execObject_Pure_Clone); \
	DECLARE_FUNCTION(execObject_Pure_CreateFromObjectEntryArray); \
	DECLARE_FUNCTION(execObject_Merge); \
	DECLARE_FUNCTION(execObject_Clone); \
	DECLARE_FUNCTION(execObject_CreateFromObjectEntryArray); \
	DECLARE_FUNCTION(execJson_ParseJsonString);


#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValue_GetAsJsonArrayOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsJsonObjectOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsBooleanOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsByteOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsFloatOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsIntegerOrDefault); \
	DECLARE_FUNCTION(execValue_GetAsStringOrDefault); \
	DECLARE_FUNCTION(execValue_GetJsonArray); \
	DECLARE_FUNCTION(execValue_GetJsonObject); \
	DECLARE_FUNCTION(execValue_GetBoolean); \
	DECLARE_FUNCTION(execValue_GetByte); \
	DECLARE_FUNCTION(execValue_GetFloat); \
	DECLARE_FUNCTION(execValue_GetInteger); \
	DECLARE_FUNCTION(execValue_GetString); \
	DECLARE_FUNCTION(execValue_GetNull); \
	DECLARE_FUNCTION(execValue_Get); \
	DECLARE_FUNCTION(execValue_SetJsonArray); \
	DECLARE_FUNCTION(execValue_SetJsonObject); \
	DECLARE_FUNCTION(execValue_SetBoolean); \
	DECLARE_FUNCTION(execValue_SetByte); \
	DECLARE_FUNCTION(execValue_SetFloat); \
	DECLARE_FUNCTION(execValue_SetInteger); \
	DECLARE_FUNCTION(execValue_SetString); \
	DECLARE_FUNCTION(execValue_SetNull); \
	DECLARE_FUNCTION(execValue_Set); \
	DECLARE_FUNCTION(execValue_NotEquals); \
	DECLARE_FUNCTION(execValue_Equals); \
	DECLARE_FUNCTION(execValue_Pure_Clone); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromJsonArray); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromJsonObject); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromBoolean); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromByte); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromFloat); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromInteger); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromString); \
	DECLARE_FUNCTION(execValue_Pure_CreateFromNull); \
	DECLARE_FUNCTION(execValue_Pure_Create); \
	DECLARE_FUNCTION(execValue_Clone); \
	DECLARE_FUNCTION(execValue_CreateFromJsonArray); \
	DECLARE_FUNCTION(execValue_CreateFromJsonObject); \
	DECLARE_FUNCTION(execValue_CreateFromBoolean); \
	DECLARE_FUNCTION(execValue_CreateFromByte); \
	DECLARE_FUNCTION(execValue_CreateFromFloat); \
	DECLARE_FUNCTION(execValue_CreateFromInteger); \
	DECLARE_FUNCTION(execValue_CreateFromString); \
	DECLARE_FUNCTION(execValue_CreateFromNull); \
	DECLARE_FUNCTION(execValue_Create); \
	DECLARE_FUNCTION(execArray_Append); \
	DECLARE_FUNCTION(execArray_Shorten); \
	DECLARE_FUNCTION(execArray_Expand); \
	DECLARE_FUNCTION(execArray_Resize); \
	DECLARE_FUNCTION(execArray_Length); \
	DECLARE_FUNCTION(execArray_GetAsJsonValueOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsJsonArrayOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsJsonObjectOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsBooleanOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsByteOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsFloatOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsIntegerOrDefault); \
	DECLARE_FUNCTION(execArray_GetAsStringOrDefault); \
	DECLARE_FUNCTION(execArray_GetJsonValue); \
	DECLARE_FUNCTION(execArray_GetJsonArray); \
	DECLARE_FUNCTION(execArray_GetJsonObject); \
	DECLARE_FUNCTION(execArray_GetBoolean); \
	DECLARE_FUNCTION(execArray_GetByte); \
	DECLARE_FUNCTION(execArray_GetFloat); \
	DECLARE_FUNCTION(execArray_GetInteger); \
	DECLARE_FUNCTION(execArray_GetString); \
	DECLARE_FUNCTION(execArray_GetNull); \
	DECLARE_FUNCTION(execArray_Get); \
	DECLARE_FUNCTION(execArray_InsertJsonValue); \
	DECLARE_FUNCTION(execArray_InsertJsonArray); \
	DECLARE_FUNCTION(execArray_InsertJsonObject); \
	DECLARE_FUNCTION(execArray_InsertBoolean); \
	DECLARE_FUNCTION(execArray_InsertByte); \
	DECLARE_FUNCTION(execArray_InsertFloat); \
	DECLARE_FUNCTION(execArray_InsertInteger); \
	DECLARE_FUNCTION(execArray_InsertString); \
	DECLARE_FUNCTION(execArray_InsertNull); \
	DECLARE_FUNCTION(execArray_SetJsonValue); \
	DECLARE_FUNCTION(execArray_SetJsonArray); \
	DECLARE_FUNCTION(execArray_SetJsonObject); \
	DECLARE_FUNCTION(execArray_SetBoolean); \
	DECLARE_FUNCTION(execArray_SetByte); \
	DECLARE_FUNCTION(execArray_SetFloat); \
	DECLARE_FUNCTION(execArray_SetInteger); \
	DECLARE_FUNCTION(execArray_SetString); \
	DECLARE_FUNCTION(execArray_SetNull); \
	DECLARE_FUNCTION(execArray_AddJsonValue); \
	DECLARE_FUNCTION(execArray_AddJsonArray); \
	DECLARE_FUNCTION(execArray_AddJsonObject); \
	DECLARE_FUNCTION(execArray_AddBoolean); \
	DECLARE_FUNCTION(execArray_AddByte); \
	DECLARE_FUNCTION(execArray_AddFloat); \
	DECLARE_FUNCTION(execArray_AddInteger); \
	DECLARE_FUNCTION(execArray_AddString); \
	DECLARE_FUNCTION(execArray_AddNull); \
	DECLARE_FUNCTION(execArray_IsSet); \
	DECLARE_FUNCTION(execArray_Unset); \
	DECLARE_FUNCTION(execArray_Clear); \
	DECLARE_FUNCTION(execArray_NotEquals); \
	DECLARE_FUNCTION(execArray_Equals); \
	DECLARE_FUNCTION(execArray_Pure_ToJsonString); \
	DECLARE_FUNCTION(execArray_ToJsonString); \
	DECLARE_FUNCTION(execArray_Pure_Merge); \
	DECLARE_FUNCTION(execArray_Pure_Clone); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromJsonValueArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromJsonArrayArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromJsonObjectArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromBooleanArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromByteArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromFloatArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromIntegerArray); \
	DECLARE_FUNCTION(execArray_Pure_CreateFromStringArray); \
	DECLARE_FUNCTION(execArray_Merge); \
	DECLARE_FUNCTION(execArray_Clone); \
	DECLARE_FUNCTION(execArray_CreateFromJsonValueArray); \
	DECLARE_FUNCTION(execArray_CreateFromJsonArrayArray); \
	DECLARE_FUNCTION(execArray_CreateFromJsonObjectArray); \
	DECLARE_FUNCTION(execArray_CreateFromBooleanArray); \
	DECLARE_FUNCTION(execArray_CreateFromByteArray); \
	DECLARE_FUNCTION(execArray_CreateFromFloatArray); \
	DECLARE_FUNCTION(execArray_CreateFromIntegerArray); \
	DECLARE_FUNCTION(execArray_CreateFromStringArray); \
	DECLARE_FUNCTION(execObjectIterator_Length); \
	DECLARE_FUNCTION(execObjectIterator_GetValues); \
	DECLARE_FUNCTION(execObjectIterator_GetKeys); \
	DECLARE_FUNCTION(execObjectIterator_Get); \
	DECLARE_FUNCTION(execObjectIterator_Clone); \
	DECLARE_FUNCTION(execObjectIterator_Create); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromJsonArray); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromJsonObject); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromBoolean); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromByte); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromFloat); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromInteger); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromString); \
	DECLARE_FUNCTION(execObjectEntry_Pure_CreateFromNull); \
	DECLARE_FUNCTION(execObjectEntry_GetValue); \
	DECLARE_FUNCTION(execObjectEntry_GetKey); \
	DECLARE_FUNCTION(execObjectEntry_Pure_Create); \
	DECLARE_FUNCTION(execObject_Sort); \
	DECLARE_FUNCTION(execObject_Append); \
	DECLARE_FUNCTION(execObject_Length); \
	DECLARE_FUNCTION(execObject_GetValues); \
	DECLARE_FUNCTION(execObject_GetKeys); \
	DECLARE_FUNCTION(execObject_GetAsJsonValueOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsJsonArrayOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsJsonObjectOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsBooleanOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsByteOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsFloatOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsIntegerOrDefault); \
	DECLARE_FUNCTION(execObject_GetAsStringOrDefault); \
	DECLARE_FUNCTION(execObject_GetJsonValue); \
	DECLARE_FUNCTION(execObject_GetJsonArray); \
	DECLARE_FUNCTION(execObject_GetJsonObject); \
	DECLARE_FUNCTION(execObject_GetBoolean); \
	DECLARE_FUNCTION(execObject_GetByte); \
	DECLARE_FUNCTION(execObject_GetFloat); \
	DECLARE_FUNCTION(execObject_GetInteger); \
	DECLARE_FUNCTION(execObject_GetString); \
	DECLARE_FUNCTION(execObject_GetNull); \
	DECLARE_FUNCTION(execObject_Get); \
	DECLARE_FUNCTION(execObject_SetJsonValue); \
	DECLARE_FUNCTION(execObject_SetJsonArray); \
	DECLARE_FUNCTION(execObject_SetJsonObject); \
	DECLARE_FUNCTION(execObject_SetBoolean); \
	DECLARE_FUNCTION(execObject_SetByte); \
	DECLARE_FUNCTION(execObject_SetFloat); \
	DECLARE_FUNCTION(execObject_SetInteger); \
	DECLARE_FUNCTION(execObject_SetString); \
	DECLARE_FUNCTION(execObject_SetNull); \
	DECLARE_FUNCTION(execObject_IsSet); \
	DECLARE_FUNCTION(execObject_Unset); \
	DECLARE_FUNCTION(execObject_Clear); \
	DECLARE_FUNCTION(execObject_NotEquals); \
	DECLARE_FUNCTION(execObject_Equals); \
	DECLARE_FUNCTION(execObject_Pure_ToJsonString); \
	DECLARE_FUNCTION(execObject_ToJsonString); \
	DECLARE_FUNCTION(execObject_Pure_Merge); \
	DECLARE_FUNCTION(execObject_Pure_Clone); \
	DECLARE_FUNCTION(execObject_Pure_CreateFromObjectEntryArray); \
	DECLARE_FUNCTION(execObject_Merge); \
	DECLARE_FUNCTION(execObject_Clone); \
	DECLARE_FUNCTION(execObject_CreateFromObjectEntryArray); \
	DECLARE_FUNCTION(execJson_ParseJsonString);


#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULowEntryJsonLibrary(); \
	friend struct Z_Construct_UClass_ULowEntryJsonLibrary_Statics; \
public: \
	DECLARE_CLASS(ULowEntryJsonLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LowEntryJson"), NO_API) \
	DECLARE_SERIALIZER(ULowEntryJsonLibrary)


#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesULowEntryJsonLibrary(); \
	friend struct Z_Construct_UClass_ULowEntryJsonLibrary_Statics; \
public: \
	DECLARE_CLASS(ULowEntryJsonLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LowEntryJson"), NO_API) \
	DECLARE_SERIALIZER(ULowEntryJsonLibrary)


#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULowEntryJsonLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULowEntryJsonLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULowEntryJsonLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULowEntryJsonLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULowEntryJsonLibrary(ULowEntryJsonLibrary&&); \
	NO_API ULowEntryJsonLibrary(const ULowEntryJsonLibrary&); \
public:


#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULowEntryJsonLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULowEntryJsonLibrary(ULowEntryJsonLibrary&&); \
	NO_API ULowEntryJsonLibrary(const ULowEntryJsonLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULowEntryJsonLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULowEntryJsonLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULowEntryJsonLibrary)


#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_29_PROLOG
#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_SPARSE_DATA \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_RPC_WRAPPERS \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_INCLASS \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_SPARSE_DATA \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LowEntryJsonLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOWENTRYJSON_API UClass* StaticClass<class ULowEntryJsonLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Classes_LowEntryJsonLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
