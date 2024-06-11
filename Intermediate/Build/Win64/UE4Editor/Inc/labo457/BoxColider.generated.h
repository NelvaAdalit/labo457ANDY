// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef LABO457_BoxColider_generated_h
#error "BoxColider.generated.h already included, missing '#pragma once' in BoxColider.h"
#endif
#define LABO457_BoxColider_generated_h

#define labo457_Source_labo457_BoxColider_h_15_SPARSE_DATA
#define labo457_Source_labo457_BoxColider_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoverTodosLosAsignarMalla); \
	DECLARE_FUNCTION(execcolisionar);


#define labo457_Source_labo457_BoxColider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoverTodosLosAsignarMalla); \
	DECLARE_FUNCTION(execcolisionar);


#define labo457_Source_labo457_BoxColider_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxColider(); \
	friend struct Z_Construct_UClass_ABoxColider_Statics; \
public: \
	DECLARE_CLASS(ABoxColider, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/labo457"), NO_API) \
	DECLARE_SERIALIZER(ABoxColider)


#define labo457_Source_labo457_BoxColider_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABoxColider(); \
	friend struct Z_Construct_UClass_ABoxColider_Statics; \
public: \
	DECLARE_CLASS(ABoxColider, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/labo457"), NO_API) \
	DECLARE_SERIALIZER(ABoxColider)


#define labo457_Source_labo457_BoxColider_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxColider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxColider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxColider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxColider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxColider(ABoxColider&&); \
	NO_API ABoxColider(const ABoxColider&); \
public:


#define labo457_Source_labo457_BoxColider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxColider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxColider(ABoxColider&&); \
	NO_API ABoxColider(const ABoxColider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxColider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxColider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxColider)


#define labo457_Source_labo457_BoxColider_h_15_PRIVATE_PROPERTY_OFFSET
#define labo457_Source_labo457_BoxColider_h_12_PROLOG
#define labo457_Source_labo457_BoxColider_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	labo457_Source_labo457_BoxColider_h_15_PRIVATE_PROPERTY_OFFSET \
	labo457_Source_labo457_BoxColider_h_15_SPARSE_DATA \
	labo457_Source_labo457_BoxColider_h_15_RPC_WRAPPERS \
	labo457_Source_labo457_BoxColider_h_15_INCLASS \
	labo457_Source_labo457_BoxColider_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define labo457_Source_labo457_BoxColider_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	labo457_Source_labo457_BoxColider_h_15_PRIVATE_PROPERTY_OFFSET \
	labo457_Source_labo457_BoxColider_h_15_SPARSE_DATA \
	labo457_Source_labo457_BoxColider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	labo457_Source_labo457_BoxColider_h_15_INCLASS_NO_PURE_DECLS \
	labo457_Source_labo457_BoxColider_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABO457_API UClass* StaticClass<class ABoxColider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID labo457_Source_labo457_BoxColider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
