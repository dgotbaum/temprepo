// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOWENTRYJSON_ELowEntryJsonValueAndTypeFound_generated_h
#error "ELowEntryJsonValueAndTypeFound.generated.h already included, missing '#pragma once' in ELowEntryJsonValueAndTypeFound.h"
#endif
#define LOWENTRYJSON_ELowEntryJsonValueAndTypeFound_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Enums_ELowEntryJsonValueAndTypeFound_h


#define FOREACH_ENUM_ELOWENTRYJSONVALUEANDTYPEFOUND(op) \
	op(ELowEntryJsonValueAndTypeFound::Success) \
	op(ELowEntryJsonValueAndTypeFound::NotFound) \
	op(ELowEntryJsonValueAndTypeFound::WrongType) 

enum class ELowEntryJsonValueAndTypeFound : uint8;
template<> LOWENTRYJSON_API UEnum* StaticEnum<ELowEntryJsonValueAndTypeFound>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
