// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ASpectrumUnbound/OverstimComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverstimComponent() {}
// Cross Module References
	ASPECTRUMUNBOUND_API UClass* Z_Construct_UClass_UOverstimComponent();
	ASPECTRUMUNBOUND_API UClass* Z_Construct_UClass_UOverstimComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ASpectrumUnbound();
// End Cross Module References
	void UOverstimComponent::StaticRegisterNativesUOverstimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverstimComponent);
	UClass* Z_Construct_UClass_UOverstimComponent_NoRegister()
	{
		return UOverstimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOverstimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOverstim_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOverstim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverstimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ASpectrumUnbound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverstimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OverstimComponent.h" },
		{ "ModuleRelativePath", "OverstimComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverstimComponent_Statics::NewProp_MaxOverstim_MetaData[] = {
		{ "Category", "OverstimComponent" },
		{ "ModuleRelativePath", "OverstimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOverstimComponent_Statics::NewProp_MaxOverstim = { "MaxOverstim", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOverstimComponent, MaxOverstim), METADATA_PARAMS(Z_Construct_UClass_UOverstimComponent_Statics::NewProp_MaxOverstim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOverstimComponent_Statics::NewProp_MaxOverstim_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverstimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverstimComponent_Statics::NewProp_MaxOverstim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverstimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverstimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverstimComponent_Statics::ClassParams = {
		&UOverstimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOverstimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverstimComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOverstimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOverstimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverstimComponent()
	{
		if (!Z_Registration_Info_UClass_UOverstimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverstimComponent.OuterSingleton, Z_Construct_UClass_UOverstimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverstimComponent.OuterSingleton;
	}
	template<> ASPECTRUMUNBOUND_API UClass* StaticClass<UOverstimComponent>()
	{
		return UOverstimComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverstimComponent);
	UOverstimComponent::~UOverstimComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_OverstimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_OverstimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverstimComponent, UOverstimComponent::StaticClass, TEXT("UOverstimComponent"), &Z_Registration_Info_UClass_UOverstimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverstimComponent), 1775351536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_OverstimComponent_h_2582496364(TEXT("/Script/ASpectrumUnbound"),
		Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_OverstimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Celine_Documents_Unreal_Projects_ASpectrumUnbound_Source_ASpectrumUnbound_OverstimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
