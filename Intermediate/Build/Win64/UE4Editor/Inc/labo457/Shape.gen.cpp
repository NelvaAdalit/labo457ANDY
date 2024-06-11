// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labo457/Shape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShape() {}
// Cross Module References
	LABO457_API UClass* Z_Construct_UClass_AShape_NoRegister();
	LABO457_API UClass* Z_Construct_UClass_AShape();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_labo457();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShape::StaticRegisterNativesAShape()
	{
	}
	UClass* Z_Construct_UClass_AShape_NoRegister()
	{
		return AShape::StaticClass();
	}
	struct Z_Construct_UClass_AShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_malla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_malla;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_direccion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_direccion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frecuencia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frecuencia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desfase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desfase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoscionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PoscionY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_labo457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shape.h" },
		{ "ModuleRelativePath", "Shape.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_Root_MetaData[] = {
		{ "Comment", "///para crear una malla \n//a?adido definicion de objetos -----------\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "para crear una malla\na?adido definicion de objetos -----------" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_malla_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "//donde sea conveniente\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "donde sea conveniente" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_malla = { "malla", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_malla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_malla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_velocity_MetaData[] = {
		{ "Category", "nave enemiga" },
		{ "Comment", "//crear la una categoria nave enemiga ///////////\n//=======\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "crear la una categoria nave enemiga" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, velocity), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_damageLevel_MetaData[] = {
		{ "Category", "nave enemiga" },
		{ "Comment", "//definicon ----------\n//=======\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "definicon ----------" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_damageLevel = { "damageLevel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, damageLevel), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_damageLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_damageLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_direccion_MetaData[] = {
		{ "Category", "nave enemiga" },
		{ "Comment", "//\n//=======pantalla\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "=======pantalla" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_direccion = { "direccion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, direccion), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_direccion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_direccion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Movimiento Sinusoidal" },
		{ "Comment", "// Propiedades para el movimiento sinusoidal\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "Propiedades para el movimiento sinusoidal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, Amplitude), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia_MetaData[] = {
		{ "Category", "Movimiento Sinusoidal" },
		{ "Comment", "//amplitud \n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "amplitud" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia = { "Frecuencia", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, Frecuencia), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_desfase_MetaData[] = {
		{ "Category", "Movimiento Sinusoidal" },
		{ "Comment", "// frecuencia \n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "frecuencia" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_desfase = { "desfase", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, desfase), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_desfase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_desfase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_PoscionY_MetaData[] = {
		{ "Category", "Movimiento Sinusoidal" },
		{ "Comment", "//float Poscion;\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "float Poscion;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_PoscionY = { "PoscionY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, PoscionY), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_PoscionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_PoscionY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_malla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_damageLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_direccion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_desfase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_PoscionY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShape_Statics::ClassParams = {
		&AShape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShape, 1612038926);
	template<> LABO457_API UClass* StaticClass<AShape>()
	{
		return AShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShape(Z_Construct_UClass_AShape, &AShape::StaticClass, TEXT("/Script/labo457"), TEXT("AShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
