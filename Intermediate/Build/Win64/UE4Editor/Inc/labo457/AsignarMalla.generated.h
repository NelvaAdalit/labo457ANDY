// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LABO457_AsignarMalla_generated_h
#error "AsignarMalla.generated.h already included, missing '#pragma once' in AsignarMalla.h"
#endif
#define LABO457_AsignarMalla_generated_h

#define labo457_Source_labo457_AsignarMalla_h_13_SPARSE_DATA
#define labo457_Source_labo457_AsignarMalla_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdestroyAsignarMalla); \
	DECLARE_FUNCTION(execMoverTodosLosActores); \
	DECLARE_FUNCTION(execmover); \
	DECLARE_FUNCTION(execsaltar); \
	DECLARE_FUNCTION(execCambiarMallaSegunColisiones); \
	DECLARE_FUNCTION(execOnMeshHit);


#define labo457_Source_labo457_AsignarMalla_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdestroyAsignarMalla); \
	DECLARE_FUNCTION(execMoverTodosLosActores); \
	DECLARE_FUNCTION(execmover); \
	DECLARE_FUNCTION(execsaltar); \
	DECLARE_FUNCTION(execCambiarMallaSegunColisiones); \
	DECLARE_FUNCTION(execOnMeshHit);


#define labo457_Source_labo457_AsignarMalla_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsignarMalla(); \
	friend struct Z_Construct_UClass_AAsignarMalla_Statics; \
public: \
	DECLARE_CLASS(AAsignarMalla, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/labo457"), NO_API) \
	DECLARE_SERIALIZER(AAsignarMalla)


#define labo457_Source_labo457_AsignarMalla_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAsignarMalla(); \
	friend struct Z_Construct_UClass_AAsignarMalla_Statics; \
public: \
	DECLARE_CLASS(AAsignarMalla, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/labo457"), NO_API) \
	DECLARE_SERIALIZER(AAsignarMalla)


#define labo457_Source_labo457_AsignarMalla_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsignarMalla(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsignarMalla) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsignarMalla); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsignarMalla); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsignarMalla(AAsignarMalla&&); \
	NO_API AAsignarMalla(const AAsignarMalla&); \
public:


#define labo457_Source_labo457_AsignarMalla_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsignarMalla(AAsignarMalla&&); \
	NO_API AAsignarMalla(const AAsignarMalla&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsignarMalla); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsignarMalla); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsignarMalla)


#define labo457_Source_labo457_AsignarMalla_h_13_PRIVATE_PROPERTY_OFFSET
#define labo457_Source_labo457_AsignarMalla_h_10_PROLOG
#define labo457_Source_labo457_AsignarMalla_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	labo457_Source_labo457_AsignarMalla_h_13_PRIVATE_PROPERTY_OFFSET \
	labo457_Source_labo457_AsignarMalla_h_13_SPARSE_DATA \
	labo457_Source_labo457_AsignarMalla_h_13_RPC_WRAPPERS \
	labo457_Source_labo457_AsignarMalla_h_13_INCLASS \
	labo457_Source_labo457_AsignarMalla_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define labo457_Source_labo457_AsignarMalla_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	labo457_Source_labo457_AsignarMalla_h_13_PRIVATE_PROPERTY_OFFSET \
	labo457_Source_labo457_AsignarMalla_h_13_SPARSE_DATA \
	labo457_Source_labo457_AsignarMalla_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	labo457_Source_labo457_AsignarMalla_h_13_INCLASS_NO_PURE_DECLS \
	labo457_Source_labo457_AsignarMalla_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABO457_API UClass* StaticClass<class AAsignarMalla>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID labo457_Source_labo457_AsignarMalla_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
