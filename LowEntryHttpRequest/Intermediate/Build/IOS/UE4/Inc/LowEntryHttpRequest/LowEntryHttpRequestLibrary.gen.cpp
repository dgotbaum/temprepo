// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryHttpRequest/Public/Classes/LowEntryHttpRequestLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryHttpRequestLibrary() {}
// Cross Module References
	LOWENTRYHTTPREQUEST_API UClass* Z_Construct_UClass_ULowEntryHttpRequestLibrary_NoRegister();
	LOWENTRYHTTPREQUEST_API UClass* Z_Construct_UClass_ULowEntryHttpRequestLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LowEntryHttpRequest();
	LOWENTRYHTTPREQUEST_API UClass* Z_Construct_UClass_ULowEntryHttpRequest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryHttpRequestLibrary::execGetUrlParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULowEntryHttpRequestLibrary::GetUrlParameter(Z_Param_Url,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestLibrary::execGetUrlPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_UBOOL(Z_Param_IncludeQueryString);
		P_GET_UBOOL(Z_Param_IncludeFragment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULowEntryHttpRequestLibrary::GetUrlPath(Z_Param_Url,Z_Param_IncludeQueryString,Z_Param_IncludeFragment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestLibrary::execGetUrlDomain)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULowEntryHttpRequestLibrary::GetUrlDomain(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestLibrary::execGetMimeType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULowEntryHttpRequestLibrary::GetMimeType(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestLibrary::execHtmlEncode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULowEntryHttpRequestLibrary::HtmlEncode(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestLibrary::execUrlDecode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULowEntryHttpRequestLibrary::UrlDecode(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestLibrary::execUrlEncode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULowEntryHttpRequestLibrary::UrlEncode(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestLibrary::execRequest_Create)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryHttpRequest**)Z_Param__Result=ULowEntryHttpRequestLibrary::Request_Create();
		P_NATIVE_END;
	}
	void ULowEntryHttpRequestLibrary::StaticRegisterNativesULowEntryHttpRequestLibrary()
	{
		UClass* Class = ULowEntryHttpRequestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMimeType", &ULowEntryHttpRequestLibrary::execGetMimeType },
			{ "GetUrlDomain", &ULowEntryHttpRequestLibrary::execGetUrlDomain },
			{ "GetUrlParameter", &ULowEntryHttpRequestLibrary::execGetUrlParameter },
			{ "GetUrlPath", &ULowEntryHttpRequestLibrary::execGetUrlPath },
			{ "HtmlEncode", &ULowEntryHttpRequestLibrary::execHtmlEncode },
			{ "Request_Create", &ULowEntryHttpRequestLibrary::execRequest_Create },
			{ "UrlDecode", &ULowEntryHttpRequestLibrary::execUrlDecode },
			{ "UrlEncode", &ULowEntryHttpRequestLibrary::execUrlEncode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics
	{
		struct LowEntryHttpRequestLibrary_eventGetMimeType_Parms
		{
			FString FilePath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetMimeType_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetMimeType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Utility" },
		{ "Comment", "/**\n\x09* Returns the mimetype of the given filepath/extension.\n\x09*/" },
		{ "DisplayName", "Get Mimetype" },
		{ "Keywords", "string convert" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
		{ "ToolTip", "Returns the mimetype of the given filepath/extension." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestLibrary, nullptr, "GetMimeType", nullptr, nullptr, sizeof(LowEntryHttpRequestLibrary_eventGetMimeType_Parms), Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics
	{
		struct LowEntryHttpRequestLibrary_eventGetUrlDomain_Parms
		{
			FString Url;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetUrlDomain_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetUrlDomain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Utility" },
		{ "Comment", "/**\n\x09* Returns the domain part of the given URL.\n\x09*/" },
		{ "DisplayName", "Get Url Domain" },
		{ "Keywords", "string" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
		{ "ToolTip", "Returns the domain part of the given URL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestLibrary, nullptr, "GetUrlDomain", nullptr, nullptr, sizeof(LowEntryHttpRequestLibrary_eventGetUrlDomain_Parms), Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics
	{
		struct LowEntryHttpRequestLibrary_eventGetUrlParameter_Parms
		{
			FString Url;
			FString ParameterName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetUrlParameter_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetUrlParameter_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetUrlParameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Utility" },
		{ "Comment", "/**\n\x09* Returns the given parameter from the given URL, returns an empty string if it doesn't exist.\n\x09*/" },
		{ "DisplayName", "Get Url Parameter" },
		{ "Keywords", "string" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
		{ "ToolTip", "Returns the given parameter from the given URL, returns an empty string if it doesn't exist." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestLibrary, nullptr, "GetUrlParameter", nullptr, nullptr, sizeof(LowEntryHttpRequestLibrary_eventGetUrlParameter_Parms), Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics
	{
		struct LowEntryHttpRequestLibrary_eventGetUrlPath_Parms
		{
			FString Url;
			bool IncludeQueryString;
			bool IncludeFragment;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeQueryString_MetaData[];
#endif
		static void NewProp_IncludeQueryString_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeQueryString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeFragment_MetaData[];
#endif
		static void NewProp_IncludeFragment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeFragment;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetUrlPath_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeQueryString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeQueryString_SetBit(void* Obj)
	{
		((LowEntryHttpRequestLibrary_eventGetUrlPath_Parms*)Obj)->IncludeQueryString = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeQueryString = { "IncludeQueryString", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryHttpRequestLibrary_eventGetUrlPath_Parms), &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeQueryString_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeQueryString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeQueryString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeFragment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeFragment_SetBit(void* Obj)
	{
		((LowEntryHttpRequestLibrary_eventGetUrlPath_Parms*)Obj)->IncludeFragment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeFragment = { "IncludeFragment", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryHttpRequestLibrary_eventGetUrlPath_Parms), &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeFragment_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeFragment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeFragment_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventGetUrlPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeQueryString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_IncludeFragment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Low Entry|Http Request|Utility" },
		{ "Comment", "/**\n\x09* Returns the path part of the given URL.\n\x09*/" },
		{ "CPP_Default_IncludeFragment", "false" },
		{ "CPP_Default_IncludeQueryString", "false" },
		{ "DisplayName", "Get Url Path" },
		{ "Keywords", "string" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
		{ "ToolTip", "Returns the path part of the given URL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestLibrary, nullptr, "GetUrlPath", nullptr, nullptr, sizeof(LowEntryHttpRequestLibrary_eventGetUrlPath_Parms), Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics
	{
		struct LowEntryHttpRequestLibrary_eventHtmlEncode_Parms
		{
			FString String;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventHtmlEncode_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventHtmlEncode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Utility" },
		{ "Comment", "/**\n\x09* Returns the string HTML-encoded (converts > to &gt; etc).\n\x09*/" },
		{ "DisplayName", "Html Encode" },
		{ "Keywords", "string convert safe" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
		{ "ToolTip", "Returns the string HTML-encoded (converts > to &gt; etc)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestLibrary, nullptr, "HtmlEncode", nullptr, nullptr, sizeof(LowEntryHttpRequestLibrary_eventHtmlEncode_Parms), Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics
	{
		struct LowEntryHttpRequestLibrary_eventRequest_Create_Parms
		{
			ULowEntryHttpRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventRequest_Create_Parms, ReturnValue), Z_Construct_UClass_ULowEntryHttpRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Creates a new HTTP Request.\n\x09*/" },
		{ "DisplayName", "Create (Http Request)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
		{ "ToolTip", "Creates a new HTTP Request." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestLibrary, nullptr, "Request_Create", nullptr, nullptr, sizeof(LowEntryHttpRequestLibrary_eventRequest_Create_Parms), Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics
	{
		struct LowEntryHttpRequestLibrary_eventUrlDecode_Parms
		{
			FString String;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventUrlDecode_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventUrlDecode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Utility" },
		{ "Comment", "/**\n\x09* Returns the un-URL-encoded string (converts  %2F back to slashes etc).\n\x09*/" },
		{ "DisplayName", "Url Decode" },
		{ "Keywords", "string convert safe" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
		{ "ToolTip", "Returns the un-URL-encoded string (converts  %2F back to slashes etc)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestLibrary, nullptr, "UrlDecode", nullptr, nullptr, sizeof(LowEntryHttpRequestLibrary_eventUrlDecode_Parms), Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics
	{
		struct LowEntryHttpRequestLibrary_eventUrlEncode_Parms
		{
			FString String;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventUrlEncode_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestLibrary_eventUrlEncode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Utility" },
		{ "Comment", "/**\n\x09* Returns the string URL-encoded (converts slashes to %2F etc).\n\x09*/" },
		{ "DisplayName", "Url Encode" },
		{ "Keywords", "string convert safe" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
		{ "ToolTip", "Returns the string URL-encoded (converts slashes to %2F etc)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestLibrary, nullptr, "UrlEncode", nullptr, nullptr, sizeof(LowEntryHttpRequestLibrary_eventUrlEncode_Parms), Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULowEntryHttpRequestLibrary_NoRegister()
	{
		return ULowEntryHttpRequestLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryHttpRequest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetMimeType, "GetMimeType" }, // 3573496897
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlDomain, "GetUrlDomain" }, // 1951340823
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlParameter, "GetUrlParameter" }, // 1844184517
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_GetUrlPath, "GetUrlPath" }, // 3101012133
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_HtmlEncode, "HtmlEncode" }, // 2730933365
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create, "Request_Create" }, // 875397091
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlDecode, "UrlDecode" }, // 1241535241
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_UrlEncode, "UrlEncode" }, // 3581116751
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/LowEntryHttpRequestLibrary.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryHttpRequestLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics::ClassParams = {
		&ULowEntryHttpRequestLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryHttpRequestLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryHttpRequestLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryHttpRequestLibrary, 3235278007);
	template<> LOWENTRYHTTPREQUEST_API UClass* StaticClass<ULowEntryHttpRequestLibrary>()
	{
		return ULowEntryHttpRequestLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryHttpRequestLibrary(Z_Construct_UClass_ULowEntryHttpRequestLibrary, &ULowEntryHttpRequestLibrary::StaticClass, TEXT("/Script/LowEntryHttpRequest"), TEXT("ULowEntryHttpRequestLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryHttpRequestLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
