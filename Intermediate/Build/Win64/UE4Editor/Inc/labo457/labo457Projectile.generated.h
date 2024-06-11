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
#ifdef LABO457_labo457Projectile_generated_h
#error "labo457Projectile.generated.h already included, missing '#pragma once' in labo457Projectile.h"
#endif
#define LABO457_labo457Projectile_generated_h

#define labo457_Source_labo457_labo457Projectile_h_15_SPARSE_DATA
#define labo457_Source_labo457_labo457Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define labo457_Source_labo457_labo457Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define labo457_Source_labo457_labo457Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAlabo457Projectile(); \
	friend struct Z_Construct_UClass_Alabo457Projectile_Statics; \
public: \
	DECLARE_CLASS(Alabo457Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/labo457"), NO_API) \
	DECLARE_SERIALIZER(Alabo457Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define labo457_Source_labo457_labo457Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAlabo457Projectile(); \
	friend struct Z_Construct_UClass_Alabo457Projectile_Statics; \
public: \
	DECLARE_CLASS(Alabo457Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/labo457"), NO_API) \
	DECLARE_SERIALIZER(Alabo457Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define labo457_Source_labo457_labo457Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Alabo457Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Alabo457Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Alabo457Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Alabo457Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Alabo457Projectile(Alabo457Projectile&&); \
	NO_API Alabo457Projectile(const Alabo457Projectile&); \
public:


#define labo457_Source_labo457_labo457Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Alabo457Projectile(Alabo457Projectile&&); \
	NO_API Alabo457Projectile(const Alabo457Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Alabo457Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Alabo457Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Alabo457Projectile)


#define labo457_Source_labo457_labo457Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(Alabo457Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Alabo457Projectile, ProjectileMovement); }


#define labo457_Source_labo457_labo457Projectile_h_12_PROLOG
#define labo457_Source_labo457_labo457Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	labo457_Source_labo457_labo457Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	labo457_Source_labo457_labo457Projectile_h_15_SPARSE_DATA \
	labo457_Source_labo457_labo457Projectile_h_15_RPC_WRAPPERS \
	labo457_Source_labo457_labo457Projectile_h_15_INCLASS \
	labo457_Source_labo457_labo457Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define labo457_Source_labo457_labo457Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	labo457_Source_labo457_labo457Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	labo457_Source_labo457_labo457Projectile_h_15_SPARSE_DATA \
	labo457_Source_labo457_labo457Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	labo457_Source_labo457_labo457Projectile_h_15_INCLASS_NO_PURE_DECLS \
	labo457_Source_labo457_labo457Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABO457_API UClass* StaticClass<class Alabo457Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID labo457_Source_labo457_labo457Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
