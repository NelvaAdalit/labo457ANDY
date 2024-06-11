// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labo457/BoxColider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxColider() {}
// Cross Module References
	LABO457_API UClass* Z_Construct_UClass_ABoxColider_NoRegister();
	LABO457_API UClass* Z_Construct_UClass_ABoxColider();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_labo457();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoxColider::execMoverTodosLosAsignarMalla)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoverTodosLosAsignarMalla();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxColider::execcolisionar)
	{
		P_GET_OBJECT(AActor,Z_Param_objetoA);
		P_GET_OBJECT(AActor,Z_Param_objetoB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->colisionar(Z_Param_objetoA,Z_Param_objetoB);
		P_NATIVE_END;
	}
	void ABoxColider::StaticRegisterNativesABoxColider()
	{
		UClass* Class = ABoxColider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "colisionar", &ABoxColider::execcolisionar },
			{ "MoverTodosLosAsignarMalla", &ABoxColider::execMoverTodosLosAsignarMalla },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxColider_colisionar_Statics
	{
		struct BoxColider_eventcolisionar_Parms
		{
			AActor* objetoA;
			AActor* objetoB;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objetoA;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objetoB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxColider_colisionar_Statics::NewProp_objetoA = { "objetoA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxColider_eventcolisionar_Parms, objetoA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxColider_colisionar_Statics::NewProp_objetoB = { "objetoB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxColider_eventcolisionar_Parms, objetoB), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxColider_colisionar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxColider_colisionar_Statics::NewProp_objetoA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxColider_colisionar_Statics::NewProp_objetoB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxColider_colisionar_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION()\n//void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);\n//sin esto no funciona la llamada \x09\n" },
		{ "ModuleRelativePath", "BoxColider.h" },
		{ "ToolTip", "UFUNCTION()\nvoid OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);\nsin esto no funciona la llamada" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxColider_colisionar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxColider, nullptr, "colisionar", nullptr, nullptr, sizeof(BoxColider_eventcolisionar_Parms), Z_Construct_UFunction_ABoxColider_colisionar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxColider_colisionar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxColider_colisionar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxColider_colisionar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxColider_colisionar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxColider_colisionar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxColider_MoverTodosLosAsignarMalla_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxColider_MoverTodosLosAsignarMalla_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxColider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxColider_MoverTodosLosAsignarMalla_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxColider, nullptr, "MoverTodosLosAsignarMalla", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxColider_MoverTodosLosAsignarMalla_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxColider_MoverTodosLosAsignarMalla_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxColider_MoverTodosLosAsignarMalla()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxColider_MoverTodosLosAsignarMalla_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxColider_NoRegister()
	{
		return ABoxColider::StaticClass();
	}
	struct Z_Construct_UClass_ABoxColider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxColider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_labo457,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxColider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxColider_colisionar, "colisionar" }, // 1300729677
		{ &Z_Construct_UFunction_ABoxColider_MoverTodosLosAsignarMalla, "MoverTodosLosAsignarMalla" }, // 92729035
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxColider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BoxColider.h" },
		{ "ModuleRelativePath", "BoxColider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxColider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxColider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxColider_Statics::ClassParams = {
		&ABoxColider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxColider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxColider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxColider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxColider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxColider, 3964139457);
	template<> LABO457_API UClass* StaticClass<ABoxColider>()
	{
		return ABoxColider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxColider(Z_Construct_UClass_ABoxColider, &ABoxColider::StaticClass, TEXT("/Script/labo457"), TEXT("ABoxColider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxColider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
