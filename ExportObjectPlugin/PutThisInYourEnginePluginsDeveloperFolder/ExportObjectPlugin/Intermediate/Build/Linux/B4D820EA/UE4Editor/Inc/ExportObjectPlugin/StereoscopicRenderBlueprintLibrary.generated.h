// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef EXPORTOBJECTPLUGIN_StereoscopicRenderBlueprintLibrary_generated_h
#error "StereoscopicRenderBlueprintLibrary.generated.h already included, missing '#pragma once' in StereoscopicRenderBlueprintLibrary.h"
#endif
#define EXPORTOBJECTPLUGIN_StereoscopicRenderBlueprintLibrary_generated_h

#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_SPARSE_DATA
#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportObjectToPath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToExport); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameAppendage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStereoscopicRenderBlueprintLibrary::ExportObjectToPath(Z_Param_ObjectToExport,Z_Param_SaveFileName,Z_Param_FileNameAppendage); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportObjectToPath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToExport); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameAppendage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStereoscopicRenderBlueprintLibrary::ExportObjectToPath(Z_Param_ObjectToExport,Z_Param_SaveFileName,Z_Param_FileNameAppendage); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoscopicRenderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UStereoscopicRenderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExportObjectPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStereoscopicRenderBlueprintLibrary)


#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUStereoscopicRenderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UStereoscopicRenderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExportObjectPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStereoscopicRenderBlueprintLibrary)


#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoscopicRenderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoscopicRenderBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoscopicRenderBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoscopicRenderBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoscopicRenderBlueprintLibrary(UStereoscopicRenderBlueprintLibrary&&); \
	NO_API UStereoscopicRenderBlueprintLibrary(const UStereoscopicRenderBlueprintLibrary&); \
public:


#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoscopicRenderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoscopicRenderBlueprintLibrary(UStereoscopicRenderBlueprintLibrary&&); \
	NO_API UStereoscopicRenderBlueprintLibrary(const UStereoscopicRenderBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoscopicRenderBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoscopicRenderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoscopicRenderBlueprintLibrary)


#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_7_PROLOG
#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_SPARSE_DATA \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_RPC_WRAPPERS \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_INCLASS \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_SPARSE_DATA \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPORTOBJECTPLUGIN_API UClass* StaticClass<class UStereoscopicRenderBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_ExportObjectPlugin_Source_ExportObjectPlugin_Classes_StereoscopicRenderBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
