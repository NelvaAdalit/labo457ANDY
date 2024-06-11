// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labo457/AsignarMalla.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsignarMalla() {}
// Cross Module References
	LABO457_API UClass* Z_Construct_UClass_AAsignarMalla_NoRegister();
	LABO457_API UClass* Z_Construct_UClass_AAsignarMalla();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_labo457();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAsignarMalla::execdestroyAsignarMalla)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->destroyAsignarMalla();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAsignarMalla::execMoverTodosLosActores)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoverTodosLosActores();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAsignarMalla::execmover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->mover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAsignarMalla::execsaltar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->saltar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAsignarMalla::execCambiarMallaSegunColisiones)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CambiarMallaSegunColisiones();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAsignarMalla::execOnMeshHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMeshHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AAsignarMalla::StaticRegisterNativesAAsignarMalla()
	{
		UClass* Class = AAsignarMalla::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CambiarMallaSegunColisiones", &AAsignarMalla::execCambiarMallaSegunColisiones },
			{ "destroyAsignarMalla", &AAsignarMalla::execdestroyAsignarMalla },
			{ "mover", &AAsignarMalla::execmover },
			{ "MoverTodosLosActores", &AAsignarMalla::execMoverTodosLosActores },
			{ "OnMeshHit", &AAsignarMalla::execOnMeshHit },
			{ "saltar", &AAsignarMalla::execsaltar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAsignarMalla_CambiarMallaSegunColisiones_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_CambiarMallaSegunColisiones_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsignarMalla_CambiarMallaSegunColisiones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsignarMalla, nullptr, "CambiarMallaSegunColisiones", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_CambiarMallaSegunColisiones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_CambiarMallaSegunColisiones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsignarMalla_CambiarMallaSegunColisiones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsignarMalla_CambiarMallaSegunColisiones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsignarMalla_destroyAsignarMalla_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_destroyAsignarMalla_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsignarMalla_destroyAsignarMalla_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsignarMalla, nullptr, "destroyAsignarMalla", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_destroyAsignarMalla_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_destroyAsignarMalla_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsignarMalla_destroyAsignarMalla()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsignarMalla_destroyAsignarMalla_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsignarMalla_mover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_mover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsignarMalla_mover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsignarMalla, nullptr, "mover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_mover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_mover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsignarMalla_mover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsignarMalla_mover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsignarMalla_MoverTodosLosActores_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_MoverTodosLosActores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsignarMalla_MoverTodosLosActores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsignarMalla, nullptr, "MoverTodosLosActores", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_MoverTodosLosActores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_MoverTodosLosActores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsignarMalla_MoverTodosLosActores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsignarMalla_MoverTodosLosActores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics
	{
		struct AsignarMalla_eventOnMeshHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsignarMalla_eventOnMeshHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsignarMalla_eventOnMeshHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsignarMalla_eventOnMeshHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsignarMalla_eventOnMeshHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsignarMalla_eventOnMeshHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsignarMalla, nullptr, "OnMeshHit", nullptr, nullptr, sizeof(AsignarMalla_eventOnMeshHit_Parms), Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsignarMalla_OnMeshHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsignarMalla_OnMeshHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsignarMalla_saltar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsignarMalla_saltar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsignarMalla_saltar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsignarMalla, nullptr, "saltar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAsignarMalla_saltar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsignarMalla_saltar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAsignarMalla_saltar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAsignarMalla_saltar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsignarMalla_NoRegister()
	{
		return AAsignarMalla::StaticClass();
	}
	struct Z_Construct_UClass_AAsignarMalla_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_malla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_malla;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumColisiones_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumColisiones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsignarMalla_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_labo457,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAsignarMalla_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsignarMalla_CambiarMallaSegunColisiones, "CambiarMallaSegunColisiones" }, // 86270583
		{ &Z_Construct_UFunction_AAsignarMalla_destroyAsignarMalla, "destroyAsignarMalla" }, // 88540629
		{ &Z_Construct_UFunction_AAsignarMalla_mover, "mover" }, // 3525730013
		{ &Z_Construct_UFunction_AAsignarMalla_MoverTodosLosActores, "MoverTodosLosActores" }, // 2704999999
		{ &Z_Construct_UFunction_AAsignarMalla_OnMeshHit, "OnMeshHit" }, // 3651586546
		{ &Z_Construct_UFunction_AAsignarMalla_saltar, "saltar" }, // 3329182066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsignarMalla_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsignarMalla.h" },
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsignarMalla_Statics::NewProp_malla_MetaData[] = {
		{ "Category", "AsignarMalla" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsignarMalla_Statics::NewProp_malla = { "malla", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsignarMalla, malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsignarMalla_Statics::NewProp_malla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsignarMalla_Statics::NewProp_malla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsignarMalla_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "AsignarMalla" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsignarMalla_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsignarMalla, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsignarMalla_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsignarMalla_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsignarMalla_Statics::NewProp_NumColisiones_MetaData[] = {
		{ "Category", "AsignarMalla" },
		{ "ModuleRelativePath", "AsignarMalla.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAsignarMalla_Statics::NewProp_NumColisiones = { "NumColisiones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsignarMalla, NumColisiones), METADATA_PARAMS(Z_Construct_UClass_AAsignarMalla_Statics::NewProp_NumColisiones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsignarMalla_Statics::NewProp_NumColisiones_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsignarMalla_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsignarMalla_Statics::NewProp_malla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsignarMalla_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsignarMalla_Statics::NewProp_NumColisiones,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsignarMalla_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsignarMalla>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsignarMalla_Statics::ClassParams = {
		&AAsignarMalla::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAsignarMalla_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsignarMalla_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAsignarMalla_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsignarMalla_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsignarMalla()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsignarMalla_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsignarMalla, 3546941934);
	template<> LABO457_API UClass* StaticClass<AAsignarMalla>()
	{
		return AAsignarMalla::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsignarMalla(Z_Construct_UClass_AAsignarMalla, &AAsignarMalla::StaticClass, TEXT("/Script/labo457"), TEXT("AAsignarMalla"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsignarMalla);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
