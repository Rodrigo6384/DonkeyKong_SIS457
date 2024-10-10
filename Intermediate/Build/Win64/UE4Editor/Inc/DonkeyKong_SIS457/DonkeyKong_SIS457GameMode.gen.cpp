// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/DonkeyKong_SIS457GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKong_SIS457GameMode() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ADonkeyKong_SIS457GameMode_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ADonkeyKong_SIS457GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APlataforma_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ATeleporter_NoRegister();
// End Cross Module References
	void ADonkeyKong_SIS457GameMode::StaticRegisterNativesADonkeyKong_SIS457GameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKong_SIS457GameMode_NoRegister()
	{
		return ADonkeyKong_SIS457GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlataformaMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlataformaMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlataformaMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlataformaMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeletransportadorMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeletransportadorMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeletransportadorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TeletransportadorMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DonkeyKong_SIS457GameMode.h" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap_ValueProp = { "PlataformaMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_APlataforma_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap_Key_KeyProp = { "PlataformaMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap_MetaData[] = {
		{ "ModuleRelativePath", "DonkeyKong_SIS457GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap = { "PlataformaMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_SIS457GameMode, PlataformaMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap_ValueProp = { "TeletransportadorMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ATeleporter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap_Key_KeyProp = { "TeletransportadorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap_MetaData[] = {
		{ "ModuleRelativePath", "DonkeyKong_SIS457GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap = { "TeletransportadorMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_SIS457GameMode, TeletransportadorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_PlataformaMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::NewProp_TeletransportadorMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKong_SIS457GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::ClassParams = {
		&ADonkeyKong_SIS457GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKong_SIS457GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKong_SIS457GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKong_SIS457GameMode, 2629565645);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ADonkeyKong_SIS457GameMode>()
	{
		return ADonkeyKong_SIS457GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKong_SIS457GameMode(Z_Construct_UClass_ADonkeyKong_SIS457GameMode, &ADonkeyKong_SIS457GameMode::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ADonkeyKong_SIS457GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKong_SIS457GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
