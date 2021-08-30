// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryHttpRequest/Public/Classes/LowEntryHttpRequestResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryHttpRequestResponse() {}
// Cross Module References
	LOWENTRYHTTPREQUEST_API UClass* Z_Construct_UClass_ULowEntryHttpRequestResponse_NoRegister();
	LOWENTRYHTTPREQUEST_API UClass* Z_Construct_UClass_ULowEntryHttpRequestResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LowEntryHttpRequest();
	LOWENTRYHTTPREQUEST_API UEnum* Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestSuccess();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetAllHeaders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllHeaders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHeader(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetContentType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContentType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetContentLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetContentLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetContentAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContentAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execIsResponseCodeOk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsResponseCodeOk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetResponseCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResponseCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetWasSuccessful)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWasSuccessful();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execWasSuccessful)
	{
		P_GET_ENUM_REF(ELowEntryHttpRequestSuccess,Z_Param_Out_Branch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WasSuccessful((ELowEntryHttpRequestSuccess&)(Z_Param_Out_Branch));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execGetWasConnectionSuccessful)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWasConnectionSuccessful();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequestResponse::execWasConnectionSuccessful)
	{
		P_GET_ENUM_REF(ELowEntryHttpRequestSuccess,Z_Param_Out_Branch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WasConnectionSuccessful((ELowEntryHttpRequestSuccess&)(Z_Param_Out_Branch));
		P_NATIVE_END;
	}
	void ULowEntryHttpRequestResponse::StaticRegisterNativesULowEntryHttpRequestResponse()
	{
		UClass* Class = ULowEntryHttpRequestResponse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllHeaders", &ULowEntryHttpRequestResponse::execGetAllHeaders },
			{ "GetContent", &ULowEntryHttpRequestResponse::execGetContent },
			{ "GetContentAsString", &ULowEntryHttpRequestResponse::execGetContentAsString },
			{ "GetContentLength", &ULowEntryHttpRequestResponse::execGetContentLength },
			{ "GetContentType", &ULowEntryHttpRequestResponse::execGetContentType },
			{ "GetHeader", &ULowEntryHttpRequestResponse::execGetHeader },
			{ "GetResponseCode", &ULowEntryHttpRequestResponse::execGetResponseCode },
			{ "GetUrl", &ULowEntryHttpRequestResponse::execGetUrl },
			{ "GetWasConnectionSuccessful", &ULowEntryHttpRequestResponse::execGetWasConnectionSuccessful },
			{ "GetWasSuccessful", &ULowEntryHttpRequestResponse::execGetWasSuccessful },
			{ "IsResponseCodeOk", &ULowEntryHttpRequestResponse::execIsResponseCodeOk },
			{ "WasConnectionSuccessful", &ULowEntryHttpRequestResponse::execWasConnectionSuccessful },
			{ "WasSuccessful", &ULowEntryHttpRequestResponse::execWasSuccessful },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetAllHeaders_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetAllHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns all headers that the HTTP request returned.\n\x09*/" },
		{ "DisplayName", "Get All Headers" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns all headers that the HTTP request returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetAllHeaders", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetAllHeaders_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetContent_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns the content as bytes that the HTTP request returned.\n\x09*/" },
		{ "DisplayName", "Get Content As Bytes" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns the content as bytes that the HTTP request returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetContent", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetContent_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetContentAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetContentAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns the content as a string that the HTTP request returned.\n\x09*/" },
		{ "DisplayName", "Get Content As String" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns the content as a string that the HTTP request returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetContentAsString", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetContentAsString_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetContentLength_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetContentLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns the length of the content that the HTTP request returned.\n\x09*/" },
		{ "DisplayName", "Get Content Length" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns the length of the content that the HTTP request returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetContentLength", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetContentLength_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetContentType_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetContentType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns the type of the content that the HTTP request returned.\n\x09*/" },
		{ "DisplayName", "Get Content Type" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns the type of the content that the HTTP request returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetContentType", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetContentType_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetHeader_Parms
		{
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetHeader_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns a header that the HTTP request returned.\n\x09*/" },
		{ "DisplayName", "Get Header" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns a header that the HTTP request returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetHeader", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetHeader_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetResponseCode_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns the HTTP response code.\n\x09*/" },
		{ "DisplayName", "Get Response Code" },
		{ "Keywords", "is was" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns the HTTP response code." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetResponseCode", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetResponseCode_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns the URL to which the HTTP request was made.\n\x09*/" },
		{ "DisplayName", "Get Url" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns the URL to which the HTTP request was made." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetUrl", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetUrl_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetWasConnectionSuccessful_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryHttpRequestResponse_eventGetWasConnectionSuccessful_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryHttpRequestResponse_eventGetWasConnectionSuccessful_Parms), &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns true if the connection was successful.\n\x09* \n\x09* This blueprint is automatically used in the \"Was Request Successful\" blueprint.\n\x09*/" },
		{ "DisplayName", "Get Was Connection Successful" },
		{ "Keywords", "is was" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns true if the connection was successful.\n\nThis blueprint is automatically used in the \"Was Request Successful\" blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetWasConnectionSuccessful", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetWasConnectionSuccessful_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics
	{
		struct LowEntryHttpRequestResponse_eventGetWasSuccessful_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryHttpRequestResponse_eventGetWasSuccessful_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryHttpRequestResponse_eventGetWasSuccessful_Parms), &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns true if the HTTP request was successful.\n\x09* \n\x09* This blueprint just runs the \"Was Connection Successful\" and the \"Is Response Code Ok\" blueprints, it will return true if both of these blueprints returned true.\n\x09*/" },
		{ "DisplayName", "Get Was Request Successful" },
		{ "Keywords", "is was" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns true if the HTTP request was successful.\n\nThis blueprint just runs the \"Was Connection Successful\" and the \"Is Response Code Ok\" blueprints, it will return true if both of these blueprints returned true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "GetWasSuccessful", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventGetWasSuccessful_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics
	{
		struct LowEntryHttpRequestResponse_eventIsResponseCodeOk_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryHttpRequestResponse_eventIsResponseCodeOk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryHttpRequestResponse_eventIsResponseCodeOk_Parms), &Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns true if the HTTP response code is 'OK' according to the engine. The current implementation checks if the HTTP response code is between 200 and 206. Returns false otherwise.\n\x09* \n\x09* This blueprint is automatically used in the \"Was Request Successful\" blueprint.\n\x09*/" },
		{ "DisplayName", "Is Response Code Ok" },
		{ "Keywords", "is was" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns true if the HTTP response code is 'OK' according to the engine. The current implementation checks if the HTTP response code is between 200 and 206. Returns false otherwise.\n\nThis blueprint is automatically used in the \"Was Request Successful\" blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "IsResponseCodeOk", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventIsResponseCodeOk_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics
	{
		struct LowEntryHttpRequestResponse_eventWasConnectionSuccessful_Parms
		{
			ELowEntryHttpRequestSuccess Branch;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branch_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::NewProp_Branch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventWasConnectionSuccessful_Parms, Branch), Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestSuccess, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::NewProp_Branch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns true if the connection was successful.\n\x09* \n\x09* This blueprint is automatically used in the \"Was Request Successful\" blueprint.\n\x09*/" },
		{ "DisplayName", "Was Connection Successful" },
		{ "ExpandEnumAsExecs", "Branch" },
		{ "Keywords", "is was" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns true if the connection was successful.\n\nThis blueprint is automatically used in the \"Was Request Successful\" blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "WasConnectionSuccessful", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventWasConnectionSuccessful_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics
	{
		struct LowEntryHttpRequestResponse_eventWasSuccessful_Parms
		{
			ELowEntryHttpRequestSuccess Branch;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branch_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::NewProp_Branch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequestResponse_eventWasSuccessful_Parms, Branch), Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestSuccess, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::NewProp_Branch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::NewProp_Branch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Response" },
		{ "Comment", "/**\n\x09* Returns true if the HTTP request was successful.\n\x09* \n\x09* This blueprint just runs the \"Was Connection Successful\" and the \"Is Response Code Ok\" blueprints, it will return true if both of these blueprints returned true.\n\x09*/" },
		{ "DisplayName", "Was Request Successful" },
		{ "ExpandEnumAsExecs", "Branch" },
		{ "Keywords", "is was" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
		{ "ToolTip", "Returns true if the HTTP request was successful.\n\nThis blueprint just runs the \"Was Connection Successful\" and the \"Is Response Code Ok\" blueprints, it will return true if both of these blueprints returned true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequestResponse, nullptr, "WasSuccessful", nullptr, nullptr, sizeof(LowEntryHttpRequestResponse_eventWasSuccessful_Parms), Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULowEntryHttpRequestResponse_NoRegister()
	{
		return ULowEntryHttpRequestResponse::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionSuccessful_MetaData[];
#endif
		static void NewProp_ConnectionSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConnectionSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryHttpRequest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetAllHeaders, "GetAllHeaders" }, // 1565375617
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContent, "GetContent" }, // 3897092033
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentAsString, "GetContentAsString" }, // 2024295176
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentLength, "GetContentLength" }, // 2145696392
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetContentType, "GetContentType" }, // 3153388714
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetHeader, "GetHeader" }, // 1184934312
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetResponseCode, "GetResponseCode" }, // 1183236618
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetUrl, "GetUrl" }, // 2430369079
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasConnectionSuccessful, "GetWasConnectionSuccessful" }, // 2486311459
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_GetWasSuccessful, "GetWasSuccessful" }, // 2212086081
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_IsResponseCodeOk, "IsResponseCodeOk" }, // 304537798
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasConnectionSuccessful, "WasConnectionSuccessful" }, // 3295650306
		{ &Z_Construct_UFunction_ULowEntryHttpRequestResponse_WasSuccessful, "WasSuccessful" }, // 4014027702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryHttpRequestResponse.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::NewProp_ConnectionSuccessful_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequestResponse.h" },
	};
#endif
	void Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::NewProp_ConnectionSuccessful_SetBit(void* Obj)
	{
		((ULowEntryHttpRequestResponse*)Obj)->ConnectionSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::NewProp_ConnectionSuccessful = { "ConnectionSuccessful", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULowEntryHttpRequestResponse), &Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::NewProp_ConnectionSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::NewProp_ConnectionSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::NewProp_ConnectionSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::NewProp_ConnectionSuccessful,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryHttpRequestResponse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::ClassParams = {
		&ULowEntryHttpRequestResponse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryHttpRequestResponse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryHttpRequestResponse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryHttpRequestResponse, 3622282912);
	template<> LOWENTRYHTTPREQUEST_API UClass* StaticClass<ULowEntryHttpRequestResponse>()
	{
		return ULowEntryHttpRequestResponse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryHttpRequestResponse(Z_Construct_UClass_ULowEntryHttpRequestResponse, &ULowEntryHttpRequestResponse::StaticClass, TEXT("/Script/LowEntryHttpRequest"), TEXT("ULowEntryHttpRequestResponse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryHttpRequestResponse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
