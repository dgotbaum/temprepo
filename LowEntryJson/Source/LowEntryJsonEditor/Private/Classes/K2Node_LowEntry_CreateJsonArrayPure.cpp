// Copyright Low Entry. Apache License, Version 2.0.

#include "K2Node_LowEntry_CreateJsonArrayPure.h"
#include "LowEntryJsonLibrary.h"
#include "LowEntryJsonValue.h"
#include "LowEntryJsonArray.h"


UK2Node_LowEntry_CreateJsonArrayPure::UK2Node_LowEntry_CreateJsonArrayPure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	LowEntry_Name = TEXT("Create Json Array (Pure)");
	LowEntry_Category = TEXT("Low Entry|Json|Array|Create (Pure)");
	LowEntry_Tooltip = TEXT("Creates a new Json Array.");
	LowEntry_ResultPinName = TEXT("JsonArray");
	LowEntry_IsNodePure = true;
	LowEntry_InputClass = ULowEntryJsonValue::StaticClass();
	LowEntry_OutputClass = ULowEntryJsonArray::StaticClass();
	LowEntry_ConverterClass = ULowEntryJsonLibrary::StaticClass();
	LowEntry_ConverterFunctionName = TEXT("Array_Pure_CreateFromJsonValueArray_Internal_Safe");
}
