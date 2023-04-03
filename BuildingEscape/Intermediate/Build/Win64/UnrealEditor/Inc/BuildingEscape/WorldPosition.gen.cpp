// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/WorldPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPosition() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UWorldPosition_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UWorldPosition();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UWorldPosition::StaticRegisterNativesUWorldPosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPosition);
	UClass* Z_Construct_UClass_UWorldPosition_NoRegister()
	{
		return UWorldPosition::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WorldPosition.h" },
		{ "ModuleRelativePath", "WorldPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPosition_Statics::ClassParams = {
		&UWorldPosition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPosition()
	{
		if (!Z_Registration_Info_UClass_UWorldPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPosition.OuterSingleton, Z_Construct_UClass_UWorldPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPosition.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UWorldPosition>()
	{
		return UWorldPosition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPosition);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_WorldPosition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_WorldPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPosition, UWorldPosition::StaticClass, TEXT("UWorldPosition"), &Z_Registration_Info_UClass_UWorldPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPosition), 1623686216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_WorldPosition_h_4153848681(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_WorldPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_WorldPosition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
