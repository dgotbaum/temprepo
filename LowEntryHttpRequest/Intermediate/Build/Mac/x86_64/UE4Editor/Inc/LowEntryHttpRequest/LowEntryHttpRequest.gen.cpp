// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryHttpRequest/Public/Classes/LowEntryHttpRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryHttpRequest() {}
// Cross Module References
	LOWENTRYHTTPREQUEST_API UFunction* Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LowEntryHttpRequest();
	LOWENTRYHTTPREQUEST_API UClass* Z_Construct_UClass_ULowEntryHttpRequestResponse_NoRegister();
	LOWENTRYHTTPREQUEST_API UClass* Z_Construct_UClass_ULowEntryHttpRequest_NoRegister();
	LOWENTRYHTTPREQUEST_API UClass* Z_Construct_UClass_ULowEntryHttpRequest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	LOWENTRYHTTPREQUEST_API UEnum* Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics
	{
		struct _Script_LowEntryHttpRequest_eventDelegateULowEntryHttpRequestOnComplete_Parms
		{
			ULowEntryHttpRequestResponse* Response;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LowEntryHttpRequest_eventDelegateULowEntryHttpRequestOnComplete_Parms, Response), Z_Construct_UClass_ULowEntryHttpRequestResponse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LowEntryHttpRequest, nullptr, "DelegateULowEntryHttpRequestOnComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_LowEntryHttpRequest_eventDelegateULowEntryHttpRequestOnComplete_Parms), Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetReceivedPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReceivedPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetSentPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSentPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetBytesReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBytesReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetBytesToReceive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBytesToReceive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetBytesSent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBytesSent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetBytesToSend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBytesToSend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetHeaders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetHeaders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetUrl)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Type);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUrl(Z_Param_Out_Type,Z_Param_Out_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetContentAsMultipartParameters)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Boundary);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetContentAsMultipartParameters(Z_Param_Out_Boundary,Z_Param_Out_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execGetContentAsStringParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContentAsStringParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execIsExecutingRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExecutingRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execCancelRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execExecuteRequestEvent)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteRequestEvent(FDelegateULowEntryHttpRequestOnComplete(Z_Param_OnComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execExecuteRequest)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT_REF(ULowEntryHttpRequestResponse,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteRequest(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetContentAsMultipartParametersBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalContentType);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAsMultipartParametersBytes(Z_Param_Name,Z_Param_Out_Content,Z_Param_OptionalContentType,Z_Param_OptionalFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetContentAsMultipartParameters)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalContentType);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAsMultipartParameters(Z_Param_Name,Z_Param_Content,Z_Param_OptionalContentType,Z_Param_OptionalFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetContentAsStringParameters)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAsStringParameters(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetContentAsJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAsJsonString(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetContentAsString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAsString(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetContent)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContent(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeader(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetUrlParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUrlParameter(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetUrlCustomType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUrlCustomType(Z_Param_Type,Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryHttpRequest::execSetUrl)
	{
		P_GET_ENUM(ELowEntryHttpRequestType,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUrl(ELowEntryHttpRequestType(Z_Param_Type),Z_Param_Url);
		P_NATIVE_END;
	}
	void ULowEntryHttpRequest::StaticRegisterNativesULowEntryHttpRequest()
	{
		UClass* Class = ULowEntryHttpRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelRequest", &ULowEntryHttpRequest::execCancelRequest },
			{ "ExecuteRequest", &ULowEntryHttpRequest::execExecuteRequest },
			{ "ExecuteRequestEvent", &ULowEntryHttpRequest::execExecuteRequestEvent },
			{ "GetBytesReceived", &ULowEntryHttpRequest::execGetBytesReceived },
			{ "GetBytesSent", &ULowEntryHttpRequest::execGetBytesSent },
			{ "GetBytesToReceive", &ULowEntryHttpRequest::execGetBytesToReceive },
			{ "GetBytesToSend", &ULowEntryHttpRequest::execGetBytesToSend },
			{ "GetContent", &ULowEntryHttpRequest::execGetContent },
			{ "GetContentAsMultipartParameters", &ULowEntryHttpRequest::execGetContentAsMultipartParameters },
			{ "GetContentAsStringParameters", &ULowEntryHttpRequest::execGetContentAsStringParameters },
			{ "GetHeaders", &ULowEntryHttpRequest::execGetHeaders },
			{ "GetReceivedPercentage", &ULowEntryHttpRequest::execGetReceivedPercentage },
			{ "GetSentPercentage", &ULowEntryHttpRequest::execGetSentPercentage },
			{ "GetUrl", &ULowEntryHttpRequest::execGetUrl },
			{ "IsExecutingRequest", &ULowEntryHttpRequest::execIsExecutingRequest },
			{ "SetContent", &ULowEntryHttpRequest::execSetContent },
			{ "SetContentAsJsonString", &ULowEntryHttpRequest::execSetContentAsJsonString },
			{ "SetContentAsMultipartParameters", &ULowEntryHttpRequest::execSetContentAsMultipartParameters },
			{ "SetContentAsMultipartParametersBytes", &ULowEntryHttpRequest::execSetContentAsMultipartParametersBytes },
			{ "SetContentAsString", &ULowEntryHttpRequest::execSetContentAsString },
			{ "SetContentAsStringParameters", &ULowEntryHttpRequest::execSetContentAsStringParameters },
			{ "SetHeader", &ULowEntryHttpRequest::execSetHeader },
			{ "SetUrl", &ULowEntryHttpRequest::execSetUrl },
			{ "SetUrlCustomType", &ULowEntryHttpRequest::execSetUrlCustomType },
			{ "SetUrlParameter", &ULowEntryHttpRequest::execSetUrlParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_CancelRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_CancelRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Cancels any executing requests.\n\x09*/" },
		{ "DisplayName", "Cancel Request Execution" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Cancels any executing requests." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_CancelRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "CancelRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_CancelRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_CancelRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_CancelRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_CancelRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics
	{
		struct LowEntryHttpRequest_eventExecuteRequest_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			ULowEntryHttpRequestResponse* Response;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventExecuteRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventExecuteRequest_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventExecuteRequest_Parms, Response), Z_Construct_UClass_ULowEntryHttpRequestResponse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Executes the request.\n\x09*\n\x09* This blueprint can NOT execute several HTTP Requests at the same time, because this is a latent blueprint, similar to Delay or Retriggerable Delay.\n\x09* \n\x09* Only after the execution of this blueprint has been completed, can this blueprint be used again.\n\x09*\n\x09* If you need to execute several HTTP Requests at the same time, you can use several instances of this blueprint, or you can use the \"Execute Request (Event)\" blueprint instead.\n\x09*/" },
		{ "DisplayName", "Execute Request" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Executes the request.\n\nThis blueprint can NOT execute several HTTP Requests at the same time, because this is a latent blueprint, similar to Delay or Retriggerable Delay.\n\nOnly after the execution of this blueprint has been completed, can this blueprint be used again.\n\nIf you need to execute several HTTP Requests at the same time, you can use several instances of this blueprint, or you can use the \"Execute Request (Event)\" blueprint instead." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "ExecuteRequest", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventExecuteRequest_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics
	{
		struct LowEntryHttpRequest_eventExecuteRequestEvent_Parms
		{
			FScriptDelegate OnComplete;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventExecuteRequestEvent_Parms, OnComplete), Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::NewProp_OnComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::NewProp_OnComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Executes the request.\n\x09* \n\x09* When done, this blueprint will execute the given event.\n\x09* \n\x09* This blueprint can execute several HTTP Requests at the same time.\n\x09* \n\x09* This blueprint is slightly messier than the \"Execute Request\" blueprint, but only this blueprint can handle several executions at the same time.\n\x09*/" },
		{ "DisplayName", "Execute Request (Event)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Executes the request.\n\nWhen done, this blueprint will execute the given event.\n\nThis blueprint can execute several HTTP Requests at the same time.\n\nThis blueprint is slightly messier than the \"Execute Request\" blueprint, but only this blueprint can handle several executions at the same time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "ExecuteRequestEvent", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventExecuteRequestEvent_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics
	{
		struct LowEntryHttpRequest_eventGetBytesReceived_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetBytesReceived_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the number of bytes that the Http Request has received so far.\n\x09* \n\x09* Sometimes this does not return the correct value, this is caused by internal engine code.\n\x09* Don't rely on this function to always return the correct value.\n\x09*/" },
		{ "DisplayName", "Get Bytes Received So Far" },
		{ "Keywords", "data receive download" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the number of bytes that the Http Request has received so far.\n\nSometimes this does not return the correct value, this is caused by internal engine code.\nDon't rely on this function to always return the correct value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetBytesReceived", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetBytesReceived_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics
	{
		struct LowEntryHttpRequest_eventGetBytesSent_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetBytesSent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the number of bytes that the Http Request has sent so far.\n\x09* \n\x09* Sometimes this does not return the correct value, this is caused by internal engine code.\n\x09* Don't rely on this function to always return the correct value.\n\x09*/" },
		{ "DisplayName", "Get Bytes Sent So Far" },
		{ "Keywords", "data send upload" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the number of bytes that the Http Request has sent so far.\n\nSometimes this does not return the correct value, this is caused by internal engine code.\nDon't rely on this function to always return the correct value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetBytesSent", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetBytesSent_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics
	{
		struct LowEntryHttpRequest_eventGetBytesToReceive_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetBytesToReceive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the number of bytes that the Http Request will have to receive.\n\x09* This doesn't include the size of the headers, only the size of the content will be taken into account.\n\x09* \n\x09* Sometimes this does not return the correct value, this is caused by internal engine code.\n\x09* Don't rely on this function to always return the correct value.\n\x09*/" },
		{ "DisplayName", "Get Bytes To Receive" },
		{ "Keywords", "data received download" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the number of bytes that the Http Request will have to receive.\nThis doesn't include the size of the headers, only the size of the content will be taken into account.\n\nSometimes this does not return the correct value, this is caused by internal engine code.\nDon't rely on this function to always return the correct value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetBytesToReceive", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetBytesToReceive_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics
	{
		struct LowEntryHttpRequest_eventGetBytesToSend_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetBytesToSend_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the number of bytes that the Http Request will have to send.\n\x09* This doesn't include the size of the headers, only the size of the content will be taken into account.\n\x09*/" },
		{ "DisplayName", "Get Bytes To Send" },
		{ "Keywords", "data sent upload" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the number of bytes that the Http Request will have to send.\nThis doesn't include the size of the headers, only the size of the content will be taken into account." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetBytesToSend", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetBytesToSend_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics
	{
		struct LowEntryHttpRequest_eventGetContent_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the content (as bytes).\n\x09*/" },
		{ "DisplayName", "Get Content" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the content (as bytes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetContent", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetContent_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics
	{
		struct LowEntryHttpRequest_eventGetContentAsMultipartParameters_Parms
		{
			FString Boundary;
			TArray<uint8> Content;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Boundary;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::NewProp_Boundary = { "Boundary", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetContentAsMultipartParameters_Parms, Boundary), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetContentAsMultipartParameters_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::NewProp_Boundary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::NewProp_Content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the set content multiparts.\n\x09*/" },
		{ "DisplayName", "Get Content As Multiparts" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the set content multiparts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetContentAsMultipartParameters", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetContentAsMultipartParameters_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics
	{
		struct LowEntryHttpRequest_eventGetContentAsStringParameters_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetContentAsStringParameters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the set content parameters.\n\x09*/" },
		{ "DisplayName", "Get Content As Parameters" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the set content parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetContentAsStringParameters", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetContentAsStringParameters_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics
	{
		struct LowEntryHttpRequest_eventGetHeaders_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetHeaders_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the headers.\n\x09*/" },
		{ "DisplayName", "Get Headers" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the headers." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetHeaders", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetHeaders_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics
	{
		struct LowEntryHttpRequest_eventGetReceivedPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetReceivedPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the percentage of howmuch data has been received so far (from 0.0 to 1.0).\n\x09* \n\x09* Sometimes this does not return the correct value, this is caused by internal engine code.\n\x09* Don't rely on this function to always return the correct value.\n\x09*/" },
		{ "DisplayName", "Get Percentage Of Receiving Complete" },
		{ "Keywords", "data receive received part progression download" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the percentage of howmuch data has been received so far (from 0.0 to 1.0).\n\nSometimes this does not return the correct value, this is caused by internal engine code.\nDon't rely on this function to always return the correct value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetReceivedPercentage", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetReceivedPercentage_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics
	{
		struct LowEntryHttpRequest_eventGetSentPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetSentPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the percentage of howmuch data has been sent so far (from 0.0 to 1.0).\n\x09* \n\x09* Sometimes this does not return the correct value, this is caused by internal engine code.\n\x09* Don't rely on this function to always return the correct value.\n\x09*/" },
		{ "DisplayName", "Get Percentage Of Sending Complete" },
		{ "Keywords", "data send sent part progression upload" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the percentage of howmuch data has been sent so far (from 0.0 to 1.0).\n\nSometimes this does not return the correct value, this is caused by internal engine code.\nDon't rely on this function to always return the correct value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetSentPercentage", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetSentPercentage_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics
	{
		struct LowEntryHttpRequest_eventGetUrl_Parms
		{
			FString Type;
			FString Url;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetUrl_Parms, Type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventGetUrl_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns the URL (including the url parameters) and the type.\n\x09*/" },
		{ "DisplayName", "Get Url" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns the URL (including the url parameters) and the type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "GetUrl", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventGetUrl_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics
	{
		struct LowEntryHttpRequest_eventIsExecutingRequest_Parms
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
	void Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryHttpRequest_eventIsExecutingRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryHttpRequest_eventIsExecutingRequest_Parms), &Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Returns true if any requests are still executing.\n\x09*/" },
		{ "DisplayName", "Is Request Executing" },
		{ "Keywords", "done finished pending ready stopped" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Returns true if any requests are still executing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "IsExecutingRequest", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventIsExecutingRequest_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics
	{
		struct LowEntryHttpRequest_eventSetContent_Parms
		{
			TArray<uint8> Data;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContent_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets the content as bytes.\n\x09*/" },
		{ "DisplayName", "Set Content As Bytes" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets the content as bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetContent", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetContent_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics
	{
		struct LowEntryHttpRequest_eventSetContentAsJsonString_Parms
		{
			FString Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsJsonString_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets the content as a JSON string (this will automatically add the required headers to send a JSON request).\n\x09*/" },
		{ "DisplayName", "Set Content As Json String" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets the content as a JSON string (this will automatically add the required headers to send a JSON request)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetContentAsJsonString", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetContentAsJsonString_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics
	{
		struct LowEntryHttpRequest_eventSetContentAsMultipartParameters_Parms
		{
			FString Name;
			FString Content;
			FString OptionalContentType;
			FString OptionalFileName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalContentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsMultipartParameters_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsMultipartParameters_Parms, Content), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalContentType = { "OptionalContentType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsMultipartParameters_Parms, OptionalContentType), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalContentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalFileName = { "OptionalFileName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsMultipartParameters_Parms, OptionalFileName), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::NewProp_OptionalFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets the content as multipart form parameters (multipart/form-data) (this will automatically add the required headers to send a multipart request).\n\x09*\n\x09* The given string will automatically be converted to bytes.\n\x09*\n\x09* Call this blueprint multiple times to have multiple parameters.\n\x09*/" },
		{ "DisplayName", "Set Content As Multiparts (String)" },
		{ "Keywords", "post put form data parameters" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets the content as multipart form parameters (multipart/form-data) (this will automatically add the required headers to send a multipart request).\n\nThe given string will automatically be converted to bytes.\n\nCall this blueprint multiple times to have multiple parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetContentAsMultipartParameters", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetContentAsMultipartParameters_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics
	{
		struct LowEntryHttpRequest_eventSetContentAsMultipartParametersBytes_Parms
		{
			FString Name;
			TArray<uint8> Content;
			FString OptionalContentType;
			FString OptionalFileName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalContentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsMultipartParametersBytes_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsMultipartParametersBytes_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalContentType = { "OptionalContentType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsMultipartParametersBytes_Parms, OptionalContentType), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalContentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalFileName = { "OptionalFileName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsMultipartParametersBytes_Parms, OptionalFileName), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::NewProp_OptionalFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets the content as multipart form parameters (multipart/form-data) (this will automatically add the required headers to send a multipart request).\n\x09*\n\x09* Call this blueprint multiple times to have multiple parameters.\n\x09*/" },
		{ "DisplayName", "Set Content As Multiparts (Bytes)" },
		{ "Keywords", "post put form data parameters" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets the content as multipart form parameters (multipart/form-data) (this will automatically add the required headers to send a multipart request).\n\nCall this blueprint multiple times to have multiple parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetContentAsMultipartParametersBytes", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetContentAsMultipartParametersBytes_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics
	{
		struct LowEntryHttpRequest_eventSetContentAsString_Parms
		{
			FString Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsString_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets the content as a string.\n\x09*/" },
		{ "DisplayName", "Set Content As String" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets the content as a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetContentAsString", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetContentAsString_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics
	{
		struct LowEntryHttpRequest_eventSetContentAsStringParameters_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsStringParameters_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetContentAsStringParameters_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets the content as POST parameters (application/x-www-form-urlencoded) (this will automatically add the required headers to send a POST request).\n\x09* \n\x09* Call this blueprint multiple times to have multiple parameters.\n\x09*/" },
		{ "DisplayName", "Set Content As Parameters" },
		{ "Keywords", "post put parameters" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets the content as POST parameters (application/x-www-form-urlencoded) (this will automatically add the required headers to send a POST request).\n\nCall this blueprint multiple times to have multiple parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetContentAsStringParameters", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetContentAsStringParameters_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics
	{
		struct LowEntryHttpRequest_eventSetHeader_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetHeader_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetHeader_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets a HTTP header, like \"Content-Type\".\n\x09*/" },
		{ "DisplayName", "Set Header" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets a HTTP header, like \"Content-Type\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetHeader", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetHeader_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics
	{
		struct LowEntryHttpRequest_eventSetUrl_Parms
		{
			ELowEntryHttpRequestType Type;
			FString Url;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetUrl_Parms, Type), Z_Construct_UEnum_LowEntryHttpRequest_ELowEntryHttpRequestType, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetUrl_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets the URL to which the HTTP request will be made.\n\x09*/" },
		{ "DisplayName", "Set Url" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets the URL to which the HTTP request will be made." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetUrl", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetUrl_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics
	{
		struct LowEntryHttpRequest_eventSetUrlCustomType_Parms
		{
			FString Type;
			FString Url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetUrlCustomType_Parms, Type), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetUrlCustomType_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets the URL to which the HTTP request will be made.\n\x09* \n\x09* This blueprint also allows you to typ your own HTTP header request type.\n\x09*/" },
		{ "DisplayName", "Set Url (Custom Type)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets the URL to which the HTTP request will be made.\n\nThis blueprint also allows you to typ your own HTTP header request type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetUrlCustomType", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetUrlCustomType_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics
	{
		struct LowEntryHttpRequest_eventSetUrlParameter_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetUrlParameter_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryHttpRequest_eventSetUrlParameter_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Http Request|Request" },
		{ "Comment", "/**\n\x09* Sets a URL parameter (this will automatically add GET parameters to the URL when the request is executed, this will for example turn a URL like \"google.com\" into \"google.com?parameter1=value1&parameter2=value2\" on request execution).\n\x09* \n\x09* Call this blueprint multiple times to have multiple parameters.\n\x09*/" },
		{ "DisplayName", "Set Url Parameter" },
		{ "Keywords", "get parameters" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
		{ "ToolTip", "Sets a URL parameter (this will automatically add GET parameters to the URL when the request is executed, this will for example turn a URL like \"google.com\" into \"google.com?parameter1=value1&parameter2=value2\" on request execution).\n\nCall this blueprint multiple times to have multiple parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryHttpRequest, nullptr, "SetUrlParameter", nullptr, nullptr, sizeof(LowEntryHttpRequest_eventSetUrlParameter_Parms), Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULowEntryHttpRequest_NoRegister()
	{
		return ULowEntryHttpRequest::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryHttpRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GivenUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GivenUrl;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UrlParameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UrlParameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UrlParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UrlParameters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentStringParameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentStringParameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentStringParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ContentStringParameters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentMultipartParameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentMultipartParameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentMultipartParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ContentMultipartParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedContentMultipartBoundary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GeneratedContentMultipartBoundary;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Headers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static void NewProp_JsonData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepAliveCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeepAliveCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ExecutionEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionEventObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExecutionEventObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExecutionResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesToSend_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesToSend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesToReceive_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesToReceive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryHttpRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryHttpRequest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryHttpRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_CancelRequest, "CancelRequest" }, // 3433273835
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequest, "ExecuteRequest" }, // 1926018733
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_ExecuteRequestEvent, "ExecuteRequestEvent" }, // 1579282934
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesReceived, "GetBytesReceived" }, // 3449418687
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesSent, "GetBytesSent" }, // 2969448239
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToReceive, "GetBytesToReceive" }, // 3896236467
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetBytesToSend, "GetBytesToSend" }, // 265139814
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetContent, "GetContent" }, // 251040518
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsMultipartParameters, "GetContentAsMultipartParameters" }, // 4133684502
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetContentAsStringParameters, "GetContentAsStringParameters" }, // 1610698623
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetHeaders, "GetHeaders" }, // 567692086
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetReceivedPercentage, "GetReceivedPercentage" }, // 724056883
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetSentPercentage, "GetSentPercentage" }, // 407699872
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_GetUrl, "GetUrl" }, // 30299276
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_IsExecutingRequest, "IsExecutingRequest" }, // 4273294322
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetContent, "SetContent" }, // 2818227398
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsJsonString, "SetContentAsJsonString" }, // 2043622861
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParameters, "SetContentAsMultipartParameters" }, // 1450829809
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsMultipartParametersBytes, "SetContentAsMultipartParametersBytes" }, // 4068545022
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsString, "SetContentAsString" }, // 164055704
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetContentAsStringParameters, "SetContentAsStringParameters" }, // 1777910480
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetHeader, "SetHeader" }, // 609472742
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetUrl, "SetUrl" }, // 1974402021
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlCustomType, "SetUrlCustomType" }, // 3128921249
		{ &Z_Construct_UFunction_ULowEntryHttpRequest_SetUrlParameter, "SetUrlParameter" }, // 351010224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryHttpRequest.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GivenUrl_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GivenUrl = { "GivenUrl", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, GivenUrl), METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GivenUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GivenUrl_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters_ValueProp = { "UrlParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters_Key_KeyProp = { "UrlParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters = { "UrlParameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, UrlParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters_ValueProp = { "ContentStringParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters_Key_KeyProp = { "ContentStringParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters = { "ContentStringParameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, ContentStringParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters_ValueProp = { "ContentMultipartParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters_Key_KeyProp = { "ContentMultipartParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters = { "ContentMultipartParameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, ContentMultipartParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GeneratedContentMultipartBoundary_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GeneratedContentMultipartBoundary = { "GeneratedContentMultipartBoundary", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, GeneratedContentMultipartBoundary), METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GeneratedContentMultipartBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GeneratedContentMultipartBoundary_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_JsonData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	void Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_JsonData_SetBit(void* Obj)
	{
		((ULowEntryHttpRequest*)Obj)->JsonData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULowEntryHttpRequest), &Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_JsonData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_JsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_JsonData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_KeepAliveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_KeepAliveCount = { "KeepAliveCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, KeepAliveCount), METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_KeepAliveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_KeepAliveCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEvent = { "ExecutionEvent", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, ExecutionEvent), Z_Construct_UDelegateFunction_LowEntryHttpRequest_DelegateULowEntryHttpRequestOnComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEventObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEventObject = { "ExecutionEventObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, ExecutionEventObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEventObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEventObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionResponse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionResponse = { "ExecutionResponse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, ExecutionResponse), Z_Construct_UClass_ULowEntryHttpRequestResponse_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToSend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToSend = { "BytesToSend", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, BytesToSend), METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToSend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesSent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, BytesSent), METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToReceive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToReceive = { "BytesToReceive", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, BytesToReceive), METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToReceive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToReceive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryHttpRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryHttpRequest, BytesReceived), METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryHttpRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GivenUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_UrlParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentStringParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ContentMultipartParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_GeneratedContentMultipartBoundary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_Headers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_JsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_KeepAliveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionEventObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_ExecutionResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesToReceive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryHttpRequest_Statics::NewProp_BytesReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryHttpRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryHttpRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryHttpRequest_Statics::ClassParams = {
		&ULowEntryHttpRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULowEntryHttpRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryHttpRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryHttpRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryHttpRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryHttpRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryHttpRequest, 3151329999);
	template<> LOWENTRYHTTPREQUEST_API UClass* StaticClass<ULowEntryHttpRequest>()
	{
		return ULowEntryHttpRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryHttpRequest(Z_Construct_UClass_ULowEntryHttpRequest, &ULowEntryHttpRequest::StaticClass, TEXT("/Script/LowEntryHttpRequest"), TEXT("ULowEntryHttpRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryHttpRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
