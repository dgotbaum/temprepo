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
			{ "Request_Create", &ULowEntryHttpRequestLibrary::execRequest_Create },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ &Z_Construct_UFunction_ULowEntryHttpRequestLibrary_Request_Create, "Request_Create" }, // 875397091
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
	IMPLEMENT_CLASS(ULowEntryHttpRequestLibrary, 2619058826);
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
