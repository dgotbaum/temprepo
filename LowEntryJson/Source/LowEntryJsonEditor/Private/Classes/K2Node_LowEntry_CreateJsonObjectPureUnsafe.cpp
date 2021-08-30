// Copyright Low Entry. Apache License, Version 2.0.

#include "K2Node_LowEntry_CreateJsonObjectPureUnsafe.h"
#include "LowEntryJsonLibrary.h"
#include "LowEntryJsonObjectEntry.h"
#include "LowEntryJsonObject.h"


UK2Node_LowEntry_CreateJsonObjectPureUnsafe::UK2Node_LowEntry_CreateJsonObjectPureUnsafe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	LowEntry_Name = TEXT("Create Json Object (Pure) (Unsafe)");
	LowEntry_Category = TEXT("Low Entry|Json|Object|Create (Pure)");
	LowEntry_Tooltip = TEXT("Creates a new Json Object.\n\nThis function is \"Unsafe\", meaning that the given Value will not be copied before being used by this blueprint. This will offer better performance, but can cause unexpected behavior if you're still using the given Value after this blueprint has run.");
	LowEntry_ResultPinName = TEXT("JsonObject");
	LowEntry_IsNodePure = true;
	LowEntry_InputClass = ULowEntryJsonObjectEntry::StaticClass();
	LowEntry_OutputClass = ULowEntryJsonObject::StaticClass();
	LowEntry_ConverterClass = ULowEntryJsonLibrary::StaticClass();
	LowEntry_ConverterFunctionName = TEXT("Object_Pure_CreateFromObjectEntryArray_Internal_Unsafe");
}
