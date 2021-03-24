// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOWENTRYJSON_ELowEntryJsonType_generated_h
#error "ELowEntryJsonType.generated.h already included, missing '#pragma once' in ELowEntryJsonType.h"
#endif
#define LOWENTRYJSON_ELowEntryJsonType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Enums_ELowEntryJsonType_h


#define FOREACH_ENUM_ELOWENTRYJSONTYPE(op) \
	op(ELowEntryJsonType::None) \
	op(ELowEntryJsonType::Null) \
	op(ELowEntryJsonType::String) \
	op(ELowEntryJsonType::Float) \
	op(ELowEntryJsonType::IntegerOrFloat) \
	op(ELowEntryJsonType::ByteOrIntegerOrFloat) \
	op(ELowEntryJsonType::Boolean) \
	op(ELowEntryJsonType::JsonObject) \
	op(ELowEntryJsonType::JsonArray) 

enum class ELowEntryJsonType : uint8;
template<> LOWENTRYJSON_API UEnum* StaticEnum<ELowEntryJsonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
