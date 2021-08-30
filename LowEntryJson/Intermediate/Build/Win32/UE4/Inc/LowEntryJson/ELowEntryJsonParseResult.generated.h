// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOWENTRYJSON_ELowEntryJsonParseResult_generated_h
#error "ELowEntryJsonParseResult.generated.h already included, missing '#pragma once' in ELowEntryJsonParseResult.h"
#endif
#define LOWENTRYJSON_ELowEntryJsonParseResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LowEntryJson_Source_LowEntryJson_Public_Enums_ELowEntryJsonParseResult_h


#define FOREACH_ENUM_ELOWENTRYJSONPARSERESULT(op) \
	op(ELowEntryJsonParseResult::FoundObject) \
	op(ELowEntryJsonParseResult::FoundArray) \
	op(ELowEntryJsonParseResult::StringIsEmpty) \
	op(ELowEntryJsonParseResult::UnableToParse) 

enum class ELowEntryJsonParseResult : uint8;
template<> LOWENTRYJSON_API UEnum* StaticEnum<ELowEntryJsonParseResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
