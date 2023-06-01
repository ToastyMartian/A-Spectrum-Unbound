// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ASpectrumUnbound/ASpectrumUnboundGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASpectrumUnboundGameMode() {}
// Cross Module References
	ASPECTRUMUNBOUND_API UClass* Z_Construct_UClass_AASpectrumUnboundGameMode();
	ASPECTRUMUNBOUND_API UClass* Z_Construct_UClass_AASpectrumUnboundGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ASpectrumUnbound();
// End Cross Module References
	void AASpectrumUnboundGameMode::StaticRegisterNativesAASpectrumUnboundGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AASpectrumUnboundGameMode);
	UClass* Z_Construct_UClass_AASpectrumUnboundGameMode_NoRegister()
	{
		return AASpectrumUnboundGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AASpectrumUnboundGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASpectrumUnboundGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ASpectrumUnbound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASpectrumUnboundGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ASpectrumUnboundGameMode.h" },
		{ "ModuleRelativePath", "ASpectrumUnboundGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASpectrumUnboundGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASpectrumUnboundGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AASpectrumUnboundGameMode_Statics::ClassParams = {
		&AASpectrumUnboundGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AASpectrumUnboundGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AASpectrumUnboundGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AASpectrumUnboundGameMode()
	{
		if (!Z_Registration_Info_UClass_AASpectrumUnboundGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASpectrumUnboundGameMode.OuterSingleton, Z_Construct_UClass_AASpectrumUnboundGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AASpectrumUnboundGameMode.OuterSingleton;
	}
	template<> ASPECTRUMUNBOUND_API UClass* StaticClass<AASpectrumUnboundGameMode>()
	{
		return AASpectrumUnboundGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASpectrumUnboundGameMode);
	AASpectrumUnboundGameMode::~AASpectrumUnboundGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_ASpectrumUnboundGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_ASpectrumUnboundGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AASpectrumUnboundGameMode, AASpectrumUnboundGameMode::StaticClass, TEXT("AASpectrumUnboundGameMode"), &Z_Registration_Info_UClass_AASpectrumUnboundGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASpectrumUnboundGameMode), 3890864906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_ASpectrumUnboundGameMode_h_2748438525(TEXT("/Script/ASpectrumUnbound"),
		Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_ASpectrumUnboundGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_ASpectrumUnboundGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
