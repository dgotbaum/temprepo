// Copyright Low Entry. Apache License, Version 2.0.

#include "K2Node_LowEntry_CreateJsonArrayUnsafe.h"
#include "LowEntryJsonLibrary.h"
#include "LowEntryJsonValue.h"
#include "LowEntryJsonArray.h"


UK2Node_LowEntry_CreateJsonArrayUnsafe::UK2Node_LowEntry_CreateJsonArrayUnsafe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	LowEntry_Name = TEXT("Create Json Array (Non-Pure) (Unsafe)");
	LowEntry_Category = TEXT("Low Entry|Json|Array|Create (Non-Pure)");
	LowEntry_Tooltip = TEXT("Creates a new Json Array.\n\nThis function is \"Unsafe\", meaning that the given Value will not be copied before being used by this blueprint. This will offer better performance, but can cause unexpected behavior if you're still using the given Value after this blueprint has run.");
	LowEntry_ResultPinName = TEXT("JsonArray");
	LowEntry_IsNodePure = false;
	LowEntry_InputClass = ULowEntryJsonValue::StaticClass();
	LowEntry_OutputClass = ULowEntryJsonArray::StaticClass();
	LowEntry_ConverterClass = ULowEntryJsonLibrary::StaticClass();
	LowEntry_ConverterFunctionName = TEXT("Array_Pure_CreateFromJsonValueArray_Internal_Unsafe");
}
