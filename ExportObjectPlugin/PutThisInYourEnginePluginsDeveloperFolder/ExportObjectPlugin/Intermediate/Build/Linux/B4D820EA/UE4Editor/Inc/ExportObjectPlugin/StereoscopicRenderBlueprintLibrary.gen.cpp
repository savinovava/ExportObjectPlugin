// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExportObjectPlugin/Classes/StereoscopicRenderBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoscopicRenderBlueprintLibrary() {}
// Cross Module References
	EXPORTOBJECTPLUGIN_API UClass* Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_NoRegister();
	EXPORTOBJECTPLUGIN_API UClass* Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ExportObjectPlugin();
	EXPORTOBJECTPLUGIN_API UFunction* Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UStereoscopicRenderBlueprintLibrary::StaticRegisterNativesUStereoscopicRenderBlueprintLibrary()
	{
		UClass* Class = UStereoscopicRenderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportObjectToPath", &UStereoscopicRenderBlueprintLibrary::execExportObjectToPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics
	{
		struct StereoscopicRenderBlueprintLibrary_eventExportObjectToPath_Parms
		{
			UObject* ObjectToExport;
			FString SaveFileName;
			FString FileNameAppendage;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameAppendage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveFileName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToExport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StereoscopicRenderBlueprintLibrary_eventExportObjectToPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StereoscopicRenderBlueprintLibrary_eventExportObjectToPath_Parms), &Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_FileNameAppendage = { "FileNameAppendage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoscopicRenderBlueprintLibrary_eventExportObjectToPath_Parms, FileNameAppendage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_SaveFileName = { "SaveFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoscopicRenderBlueprintLibrary_eventExportObjectToPath_Parms, SaveFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_ObjectToExport = { "ObjectToExport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoscopicRenderBlueprintLibrary_eventExportObjectToPath_Parms, ObjectToExport), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_FileNameAppendage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_SaveFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::NewProp_ObjectToExport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Classes/StereoscopicRenderBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary, nullptr, "ExportObjectToPath", nullptr, nullptr, sizeof(StereoscopicRenderBlueprintLibrary_eventExportObjectToPath_Parms), Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_NoRegister()
	{
		return UStereoscopicRenderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ExportObjectPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoscopicRenderBlueprintLibrary_ExportObjectToPath, "ExportObjectToPath" }, // 1270739665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Library of helper functions for UMGEx Widgets\n" },
		{ "IncludePath", "StereoscopicRenderBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/StereoscopicRenderBlueprintLibrary.h" },
		{ "ToolTip", "Library of helper functions for UMGEx Widgets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoscopicRenderBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics::ClassParams = {
		&UStereoscopicRenderBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStereoscopicRenderBlueprintLibrary, 2156419721);
	template<> EXPORTOBJECTPLUGIN_API UClass* StaticClass<UStereoscopicRenderBlueprintLibrary>()
	{
		return UStereoscopicRenderBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoscopicRenderBlueprintLibrary(Z_Construct_UClass_UStereoscopicRenderBlueprintLibrary, &UStereoscopicRenderBlueprintLibrary::StaticClass, TEXT("/Script/ExportObjectPlugin"), TEXT("UStereoscopicRenderBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoscopicRenderBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
