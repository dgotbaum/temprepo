// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryJson/Public/Classes/LowEntryJsonDebugLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryJsonDebugLibrary() {}
// Cross Module References
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonDebugLibrary_NoRegister();
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonDebugLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LowEntryJson();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonArray_NoRegister();
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonObject_NoRegister();
	LOWENTRYJSON_API UClass* Z_Construct_UClass_ULowEntryJsonValue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintBooleanArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(bool,Z_Param_Out_BooleanArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintBooleanArray(Z_Param_WorldContextObject,Z_Param_Out_BooleanArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintByteArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintByteArray(Z_Param_WorldContextObject,Z_Param_Out_ByteArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintFloatArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintFloatArray(Z_Param_WorldContextObject,Z_Param_Out_FloatArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintIntegerArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntegerArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintIntegerArray(Z_Param_WorldContextObject,Z_Param_Out_IntegerArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintStringArrayEscaped)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintStringArrayEscaped(Z_Param_WorldContextObject,Z_Param_Out_StringArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintJsonValueArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(ULowEntryJsonValue*,Z_Param_Out_JsonValueArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintJsonValueArray(Z_Param_WorldContextObject,Z_Param_Out_JsonValueArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintJsonArrayArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(ULowEntryJsonArray*,Z_Param_Out_JsonArrayArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintJsonArrayArray(Z_Param_WorldContextObject,Z_Param_Out_JsonArrayArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintJsonObjectArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(ULowEntryJsonObject*,Z_Param_Out_JsonObjectArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintJsonObjectArray(Z_Param_WorldContextObject,Z_Param_Out_JsonObjectArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintBoolean)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Boolean);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintBoolean(Z_Param_WorldContextObject,Z_Param_Boolean,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintByte)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param_Byte);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintByte(Z_Param_WorldContextObject,Z_Param_Byte,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintFloat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Float);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintFloat(Z_Param_WorldContextObject,Z_Param_Float,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintInteger)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Integer);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintInteger(Z_Param_WorldContextObject,Z_Param_Integer,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintStringEscaped)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintStringEscaped(Z_Param_WorldContextObject,Z_Param_String,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintJsonValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ULowEntryJsonValue,Z_Param_JsonValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintJsonValue(Z_Param_WorldContextObject,Z_Param_JsonValue,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintJsonArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ULowEntryJsonArray,Z_Param_JsonArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintJsonArray(Z_Param_WorldContextObject,Z_Param_JsonArray,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryJsonDebugLibrary::execPrintJsonObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ULowEntryJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenDurationTime);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULowEntryJsonDebugLibrary::PrintJsonObject(Z_Param_WorldContextObject,Z_Param_JsonObject,Z_Param_Label,Z_Param_ScreenDurationTime,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor);
		P_NATIVE_END;
	}
	void ULowEntryJsonDebugLibrary::StaticRegisterNativesULowEntryJsonDebugLibrary()
	{
		UClass* Class = ULowEntryJsonDebugLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintBoolean", &ULowEntryJsonDebugLibrary::execPrintBoolean },
			{ "PrintBooleanArray", &ULowEntryJsonDebugLibrary::execPrintBooleanArray },
			{ "PrintByte", &ULowEntryJsonDebugLibrary::execPrintByte },
			{ "PrintByteArray", &ULowEntryJsonDebugLibrary::execPrintByteArray },
			{ "PrintFloat", &ULowEntryJsonDebugLibrary::execPrintFloat },
			{ "PrintFloatArray", &ULowEntryJsonDebugLibrary::execPrintFloatArray },
			{ "PrintInteger", &ULowEntryJsonDebugLibrary::execPrintInteger },
			{ "PrintIntegerArray", &ULowEntryJsonDebugLibrary::execPrintIntegerArray },
			{ "PrintJsonArray", &ULowEntryJsonDebugLibrary::execPrintJsonArray },
			{ "PrintJsonArrayArray", &ULowEntryJsonDebugLibrary::execPrintJsonArrayArray },
			{ "PrintJsonObject", &ULowEntryJsonDebugLibrary::execPrintJsonObject },
			{ "PrintJsonObjectArray", &ULowEntryJsonDebugLibrary::execPrintJsonObjectArray },
			{ "PrintJsonValue", &ULowEntryJsonDebugLibrary::execPrintJsonValue },
			{ "PrintJsonValueArray", &ULowEntryJsonDebugLibrary::execPrintJsonValueArray },
			{ "PrintStringArrayEscaped", &ULowEntryJsonDebugLibrary::execPrintStringArrayEscaped },
			{ "PrintStringEscaped", &ULowEntryJsonDebugLibrary::execPrintStringEscaped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintBoolean_Parms
		{
			UObject* WorldContextObject;
			bool Boolean;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boolean_MetaData[];
#endif
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Boolean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBoolean_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Boolean_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintBoolean_Parms*)Obj)->Boolean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintBoolean_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Boolean_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Boolean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBoolean_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBoolean_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintBoolean_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintBoolean_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintBoolean_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintBoolean_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBoolean_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Boolean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintBoolean", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintBoolean_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms
		{
			UObject* WorldContextObject;
			TArray<bool> BooleanArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BooleanArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BooleanArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BooleanArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_BooleanArray_Inner = { "BooleanArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_BooleanArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_BooleanArray = { "BooleanArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms, BooleanArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_BooleanArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_BooleanArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_BooleanArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_BooleanArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintBooleanArray", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintBooleanArray_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintByte_Parms
		{
			UObject* WorldContextObject;
			uint8 Byte;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Byte_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Byte;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByte_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Byte_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Byte = { "Byte", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByte_Parms, Byte), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Byte_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Byte_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByte_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByte_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintByte_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintByte_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintByte_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintByte_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByte_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Byte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintByte", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintByte_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintByteArray_Parms
		{
			UObject* WorldContextObject;
			TArray<uint8> ByteArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByteArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ByteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByteArray_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ByteArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByteArray_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByteArray_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintByteArray_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintByteArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintByteArray_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintByteArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintByteArray_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ByteArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ByteArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintByteArray", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintByteArray_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintFloat_Parms
		{
			UObject* WorldContextObject;
			float Float;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Float_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloat_Parms, Float), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloat_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloat_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintFloat_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintFloat_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintFloat_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintFloat_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloat_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Float,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintFloat", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintFloat_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms
		{
			UObject* WorldContextObject;
			TArray<float> FloatArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_FloatArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_FloatArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_FloatArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_FloatArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintFloatArray", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintFloatArray_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintInteger_Parms
		{
			UObject* WorldContextObject;
			int32 Integer;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Integer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintInteger_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Integer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintInteger_Parms, Integer), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Integer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Integer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintInteger_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintInteger_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintInteger_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintInteger_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintInteger_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintInteger_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintInteger_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Integer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintInteger", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintInteger_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms
		{
			UObject* WorldContextObject;
			TArray<int32> IntegerArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntegerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntegerArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_IntegerArray_Inner = { "IntegerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_IntegerArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_IntegerArray = { "IntegerArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms, IntegerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_IntegerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_IntegerArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_IntegerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_IntegerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintIntegerArray", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintIntegerArray_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms
		{
			UObject* WorldContextObject;
			ULowEntryJsonArray* JsonArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_JsonArray = { "JsonArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms, JsonArray), Z_Construct_UClass_ULowEntryJsonArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_JsonArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintJsonArray", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintJsonArray_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms
		{
			UObject* WorldContextObject;
			TArray<ULowEntryJsonArray*> JsonArrayArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonArrayArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonArrayArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JsonArrayArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_JsonArrayArray_Inner = { "JsonArrayArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULowEntryJsonArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_JsonArrayArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_JsonArrayArray = { "JsonArrayArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms, JsonArrayArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_JsonArrayArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_JsonArrayArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_JsonArrayArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_JsonArrayArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintJsonArrayArray", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintJsonArrayArray_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms
		{
			UObject* WorldContextObject;
			ULowEntryJsonObject* JsonObject;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms, JsonObject), Z_Construct_UClass_ULowEntryJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintJsonObject", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintJsonObject_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms
		{
			UObject* WorldContextObject;
			TArray<ULowEntryJsonObject*> JsonObjectArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObjectArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObjectArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JsonObjectArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_JsonObjectArray_Inner = { "JsonObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULowEntryJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_JsonObjectArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_JsonObjectArray = { "JsonObjectArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms, JsonObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_JsonObjectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_JsonObjectArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_JsonObjectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_JsonObjectArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintJsonObjectArray", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintJsonObjectArray_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms
		{
			UObject* WorldContextObject;
			ULowEntryJsonValue* JsonValue;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms, JsonValue), Z_Construct_UClass_ULowEntryJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_JsonValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintJsonValue", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintJsonValue_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms
		{
			UObject* WorldContextObject;
			TArray<ULowEntryJsonValue*> JsonValueArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonValueArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonValueArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JsonValueArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_JsonValueArray_Inner = { "JsonValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULowEntryJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_JsonValueArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_JsonValueArray = { "JsonValueArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms, JsonValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_JsonValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_JsonValueArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_JsonValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_JsonValueArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintJsonValueArray", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintJsonValueArray_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> StringArray;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_StringArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_StringArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_StringArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "DisplayName", "Print String Array (Escaped)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintStringArrayEscaped", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintStringArrayEscaped_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics
	{
		struct LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms
		{
			UObject* WorldContextObject;
			FString String;
			FString Label;
			float ScreenDurationTime;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenDurationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToScreen_MetaData[];
#endif
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrintToLog_MetaData[];
#endif
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_ScreenDurationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_ScreenDurationTime = { "ScreenDurationTime", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms, ScreenDurationTime), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_ScreenDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_ScreenDurationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms*)Obj)->bPrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms), &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_TextColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_ScreenDurationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_bPrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Low Entry|Json|Debug|Print" },
		{ "Comment", "/**\n\x09* Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString.\n\x09*/" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_ScreenDurationTime", "5.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "DisplayName", "Print String (Escaped)" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
		{ "ToolTip", "Creates a Json Object, sets the given variable as a value, converts the created Json Object to a Json String, formats the Json String, and prints the formatted Json String using KismetSystemLibrary's PrintString." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryJsonDebugLibrary, nullptr, "PrintStringEscaped", nullptr, nullptr, sizeof(LowEntryJsonDebugLibrary_eventPrintStringEscaped_Parms), Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULowEntryJsonDebugLibrary_NoRegister()
	{
		return ULowEntryJsonDebugLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBoolean, "PrintBoolean" }, // 278607252
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintBooleanArray, "PrintBooleanArray" }, // 2626074847
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByte, "PrintByte" }, // 1311569484
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintByteArray, "PrintByteArray" }, // 1089340893
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloat, "PrintFloat" }, // 2262339525
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintFloatArray, "PrintFloatArray" }, // 936307889
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintInteger, "PrintInteger" }, // 3727129423
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintIntegerArray, "PrintIntegerArray" }, // 540061996
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArray, "PrintJsonArray" }, // 3639372072
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonArrayArray, "PrintJsonArrayArray" }, // 2427951443
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObject, "PrintJsonObject" }, // 1507274743
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonObjectArray, "PrintJsonObjectArray" }, // 3142485968
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValue, "PrintJsonValue" }, // 2927733779
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintJsonValueArray, "PrintJsonValueArray" }, // 3609705815
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringArrayEscaped, "PrintStringArrayEscaped" }, // 50520523
		{ &Z_Construct_UFunction_ULowEntryJsonDebugLibrary_PrintStringEscaped, "PrintStringEscaped" }, // 2457847955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/LowEntryJsonDebugLibrary.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryJsonDebugLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryJsonDebugLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics::ClassParams = {
		&ULowEntryJsonDebugLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryJsonDebugLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryJsonDebugLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryJsonDebugLibrary, 3697891474);
	template<> LOWENTRYJSON_API UClass* StaticClass<ULowEntryJsonDebugLibrary>()
	{
		return ULowEntryJsonDebugLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryJsonDebugLibrary(Z_Construct_UClass_ULowEntryJsonDebugLibrary, &ULowEntryJsonDebugLibrary::StaticClass, TEXT("/Script/LowEntryJson"), TEXT("ULowEntryJsonDebugLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryJsonDebugLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
