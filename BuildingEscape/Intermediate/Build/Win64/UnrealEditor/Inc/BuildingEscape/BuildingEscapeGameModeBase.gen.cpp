// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/BuildingEscapeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscapeGameModeBase() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void ABuildingEscapeGameModeBase::StaticRegisterNativesABuildingEscapeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingEscapeGameModeBase);
	UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase_NoRegister()
	{
		return ABuildingEscapeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingEscapeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingEscapeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscapeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BuildingEscapeGameModeBase.h" },
		{ "ModuleRelativePath", "BuildingEscapeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingEscapeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingEscapeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingEscapeGameModeBase_Statics::ClassParams = {
		&ABuildingEscapeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingEscapeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscapeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABuildingEscapeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingEscapeGameModeBase.OuterSingleton, Z_Construct_UClass_ABuildingEscapeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildingEscapeGameModeBase.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ABuildingEscapeGameModeBase>()
	{
		return ABuildingEscapeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscapeGameModeBase);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_BuildingEscapeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_BuildingEscapeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildingEscapeGameModeBase, ABuildingEscapeGameModeBase::StaticClass, TEXT("ABuildingEscapeGameModeBase"), &Z_Registration_Info_UClass_ABuildingEscapeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingEscapeGameModeBase), 2054997551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_BuildingEscapeGameModeBase_h_155323019(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_BuildingEscapeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_BuildingEscapeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
