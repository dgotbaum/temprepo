// Copyright Low Entry. Apache License, Version 2.0.

#include "K2Node_LowEntry_CreateJsonObjectPure.h"
#include "LowEntryJsonLibrary.h"
#include "LowEntryJsonObjectEntry.h"
#include "LowEntryJsonObject.h"


UK2Node_LowEntry_CreateJsonObjectPure::UK2Node_LowEntry_CreateJsonObjectPure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	LowEntry_Name = TEXT("Create Json Object (Pure)");
	LowEntry_Category = TEXT("Low Entry|Json|Object|Create (Pure)");
	LowEntry_Tooltip = TEXT("Creates a new Json Object.");
	LowEntry_ResultPinName = TEXT("JsonObject");
	LowEntry_IsNodePure = true;
	LowEntry_InputClass = ULowEntryJsonObjectEntry::StaticClass();
	LowEntry_OutputClass = ULowEntryJsonObject::StaticClass();
	LowEntry_ConverterClass = ULowEntryJsonLibrary::StaticClass();
	LowEntry_ConverterFunctionName = TEXT("Object_Pure_CreateFromObjectEntryArray");
}
