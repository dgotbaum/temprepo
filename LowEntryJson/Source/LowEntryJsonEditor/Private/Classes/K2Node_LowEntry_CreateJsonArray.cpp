// Copyright Low Entry. Apache License, Version 2.0.

#include "K2Node_LowEntry_CreateJsonArray.h"
#include "LowEntryJsonLibrary.h"
#include "LowEntryJsonValue.h"
#include "LowEntryJsonArray.h"


UK2Node_LowEntry_CreateJsonArray::UK2Node_LowEntry_CreateJsonArray(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	LowEntry_Name = TEXT("Create Json Array (Non-Pure)");
	LowEntry_Category = TEXT("Low Entry|Json|Array|Create (Non-Pure)");
	LowEntry_Tooltip = TEXT("Creates a new Json Array.");
	LowEntry_ResultPinName = TEXT("JsonArray");
	LowEntry_IsNodePure = false;
	LowEntry_InputClass = ULowEntryJsonValue::StaticClass();
	LowEntry_OutputClass = ULowEntryJsonArray::StaticClass();
	LowEntry_ConverterClass = ULowEntryJsonLibrary::StaticClass();
	LowEntry_ConverterFunctionName = TEXT("Array_Pure_CreateFromJsonValueArray");
}
