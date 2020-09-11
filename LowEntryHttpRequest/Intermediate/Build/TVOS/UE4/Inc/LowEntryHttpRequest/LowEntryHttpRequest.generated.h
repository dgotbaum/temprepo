// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULowEntryHttpRequestResponse;
 
class UObject;
struct FLatentActionInfo;
enum class ELowEntryHttpRequestType : uint8;
#ifdef LOWENTRYHTTPREQUEST_LowEntryHttpRequest_generated_h
#error "LowEntryHttpRequest.generated.h already included, missing '#pragma once' in LowEntryHttpRequest.h"
#endif
#define LOWENTRYHTTPREQUEST_LowEntryHttpRequest_generated_h

#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_23_DELEGATE \
struct _Script_LowEntryHttpRequest_eventDelegateULowEntryHttpRequestOnComplete_Parms \
{ \
	ULowEntryHttpRequestResponse* Response; \
}; \
static inline void FDelegateULowEntryHttpRequestOnComplete_DelegateWrapper(const FScriptDelegate& DelegateULowEntryHttpRequestOnComplete, ULowEntryHttpRequestResponse* Response) \
{ \
	_Script_LowEntryHttpRequest_eventDelegateULowEntryHttpRequestOnComplete_Parms Parms; \
	Parms.Response=Response; \
	DelegateULowEntryHttpRequestOnComplete.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_SPARSE_DATA
#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReceivedPercentage); \
	DECLARE_FUNCTION(execGetSentPercentage); \
	DECLARE_FUNCTION(execGetBytesReceived); \
	DECLARE_FUNCTION(execGetBytesToReceive); \
	DECLARE_FUNCTION(execGetBytesSent); \
	DECLARE_FUNCTION(execGetBytesToSend); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execGetHeaders); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetContentAsMultipartParameters); \
	DECLARE_FUNCTION(execGetContentAsStringParameters); \
	DECLARE_FUNCTION(execIsExecutingRequest); \
	DECLARE_FUNCTION(execCancelRequest); \
	DECLARE_FUNCTION(execExecuteRequestEvent); \
	DECLARE_FUNCTION(execExecuteRequest); \
	DECLARE_FUNCTION(execSetContentAsMultipartParametersBytes); \
	DECLARE_FUNCTION(execSetContentAsMultipartParameters); \
	DECLARE_FUNCTION(execSetContentAsStringParameters); \
	DECLARE_FUNCTION(execSetContentAsJsonString); \
	DECLARE_FUNCTION(execSetContentAsString); \
	DECLARE_FUNCTION(execSetContent); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSetUrlParameter); \
	DECLARE_FUNCTION(execSetUrlCustomType); \
	DECLARE_FUNCTION(execSetUrl);


#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReceivedPercentage); \
	DECLARE_FUNCTION(execGetSentPercentage); \
	DECLARE_FUNCTION(execGetBytesReceived); \
	DECLARE_FUNCTION(execGetBytesToReceive); \
	DECLARE_FUNCTION(execGetBytesSent); \
	DECLARE_FUNCTION(execGetBytesToSend); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execGetHeaders); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetContentAsMultipartParameters); \
	DECLARE_FUNCTION(execGetContentAsStringParameters); \
	DECLARE_FUNCTION(execIsExecutingRequest); \
	DECLARE_FUNCTION(execCancelRequest); \
	DECLARE_FUNCTION(execExecuteRequestEvent); \
	DECLARE_FUNCTION(execExecuteRequest); \
	DECLARE_FUNCTION(execSetContentAsMultipartParametersBytes); \
	DECLARE_FUNCTION(execSetContentAsMultipartParameters); \
	DECLARE_FUNCTION(execSetContentAsStringParameters); \
	DECLARE_FUNCTION(execSetContentAsJsonString); \
	DECLARE_FUNCTION(execSetContentAsString); \
	DECLARE_FUNCTION(execSetContent); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSetUrlParameter); \
	DECLARE_FUNCTION(execSetUrlCustomType); \
	DECLARE_FUNCTION(execSetUrl);


#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULowEntryHttpRequest(); \
	friend struct Z_Construct_UClass_ULowEntryHttpRequest_Statics; \
public: \
	DECLARE_CLASS(ULowEntryHttpRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LowEntryHttpRequest"), NO_API) \
	DECLARE_SERIALIZER(ULowEntryHttpRequest)


#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_INCLASS \
private: \
	static void StaticRegisterNativesULowEntryHttpRequest(); \
	friend struct Z_Construct_UClass_ULowEntryHttpRequest_Statics; \
public: \
	DECLARE_CLASS(ULowEntryHttpRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LowEntryHttpRequest"), NO_API) \
	DECLARE_SERIALIZER(ULowEntryHttpRequest)


#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULowEntryHttpRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULowEntryHttpRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULowEntryHttpRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULowEntryHttpRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULowEntryHttpRequest(ULowEntryHttpRequest&&); \
	NO_API ULowEntryHttpRequest(const ULowEntryHttpRequest&); \
public:


#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULowEntryHttpRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULowEntryHttpRequest(ULowEntryHttpRequest&&); \
	NO_API ULowEntryHttpRequest(const ULowEntryHttpRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULowEntryHttpRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULowEntryHttpRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULowEntryHttpRequest)


#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_26_PROLOG
#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_SPARSE_DATA \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_RPC_WRAPPERS \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_INCLASS \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_SPARSE_DATA \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LowEntryHttpRequest."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOWENTRYHTTPREQUEST_API UClass* StaticClass<class ULowEntryHttpRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LowEntryHttpRequest_Source_LowEntryHttpRequest_Public_Classes_LowEntryHttpRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
