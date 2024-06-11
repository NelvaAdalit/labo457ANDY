// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABO457_Shape_generated_h
#error "Shape.generated.h already included, missing '#pragma once' in Shape.h"
#endif
#define LABO457_Shape_generated_h

#define labo457_Source_labo457_Shape_h_12_SPARSE_DATA
#define labo457_Source_labo457_Shape_h_12_RPC_WRAPPERS
#define labo457_Source_labo457_Shape_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define labo457_Source_labo457_Shape_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShape(); \
	friend struct Z_Construct_UClass_AShape_Statics; \
public: \
	DECLARE_CLASS(AShape, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/labo457"), NO_API) \
	DECLARE_SERIALIZER(AShape)


#define labo457_Source_labo457_Shape_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShape(); \
	friend struct Z_Construct_UClass_AShape_Statics; \
public: \
	DECLARE_CLASS(AShape, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/labo457"), NO_API) \
	DECLARE_SERIALIZER(AShape)


#define labo457_Source_labo457_Shape_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShape(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShape(AShape&&); \
	NO_API AShape(const AShape&); \
public:


#define labo457_Source_labo457_Shape_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShape(AShape&&); \
	NO_API AShape(const AShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShape)


#define labo457_Source_labo457_Shape_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__velocity() { return STRUCT_OFFSET(AShape, velocity); } \
	FORCEINLINE static uint32 __PPO__damageLevel() { return STRUCT_OFFSET(AShape, damageLevel); }


#define labo457_Source_labo457_Shape_h_9_PROLOG
#define labo457_Source_labo457_Shape_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	labo457_Source_labo457_Shape_h_12_PRIVATE_PROPERTY_OFFSET \
	labo457_Source_labo457_Shape_h_12_SPARSE_DATA \
	labo457_Source_labo457_Shape_h_12_RPC_WRAPPERS \
	labo457_Source_labo457_Shape_h_12_INCLASS \
	labo457_Source_labo457_Shape_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define labo457_Source_labo457_Shape_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	labo457_Source_labo457_Shape_h_12_PRIVATE_PROPERTY_OFFSET \
	labo457_Source_labo457_Shape_h_12_SPARSE_DATA \
	labo457_Source_labo457_Shape_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	labo457_Source_labo457_Shape_h_12_INCLASS_NO_PURE_DECLS \
	labo457_Source_labo457_Shape_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABO457_API UClass* StaticClass<class AShape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID labo457_Source_labo457_Shape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
