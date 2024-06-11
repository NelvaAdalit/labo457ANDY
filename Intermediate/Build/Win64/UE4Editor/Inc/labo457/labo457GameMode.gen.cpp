// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labo457/labo457GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelabo457GameMode() {}
// Cross Module References
	LABO457_API UClass* Z_Construct_UClass_Alabo457GameMode_NoRegister();
	LABO457_API UClass* Z_Construct_UClass_Alabo457GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_labo457();
// End Cross Module References
	void Alabo457GameMode::StaticRegisterNativesAlabo457GameMode()
	{
	}
	UClass* Z_Construct_UClass_Alabo457GameMode_NoRegister()
	{
		return Alabo457GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Alabo457GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Alabo457GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_labo457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alabo457GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "labo457GameMode.h" },
		{ "ModuleRelativePath", "labo457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Alabo457GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Alabo457GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Alabo457GameMode_Statics::ClassParams = {
		&Alabo457GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Alabo457GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Alabo457GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Alabo457GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Alabo457GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Alabo457GameMode, 3993699433);
	template<> LABO457_API UClass* StaticClass<Alabo457GameMode>()
	{
		return Alabo457GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Alabo457GameMode(Z_Construct_UClass_Alabo457GameMode, &Alabo457GameMode::StaticClass, TEXT("/Script/labo457"), TEXT("Alabo457GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Alabo457GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
