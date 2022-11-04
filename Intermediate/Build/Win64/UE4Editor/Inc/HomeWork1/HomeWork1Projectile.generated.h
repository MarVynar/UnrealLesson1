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
#ifdef HOMEWORK1_HomeWork1Projectile_generated_h
#error "HomeWork1Projectile.generated.h already included, missing '#pragma once' in HomeWork1Projectile.h"
#endif
#define HOMEWORK1_HomeWork1Projectile_generated_h

#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_SPARSE_DATA
#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHomeWork1Projectile(); \
	friend struct Z_Construct_UClass_AHomeWork1Projectile_Statics; \
public: \
	DECLARE_CLASS(AHomeWork1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeWork1"), NO_API) \
	DECLARE_SERIALIZER(AHomeWork1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHomeWork1Projectile(); \
	friend struct Z_Construct_UClass_AHomeWork1Projectile_Statics; \
public: \
	DECLARE_CLASS(AHomeWork1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeWork1"), NO_API) \
	DECLARE_SERIALIZER(AHomeWork1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHomeWork1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHomeWork1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHomeWork1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHomeWork1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHomeWork1Projectile(AHomeWork1Projectile&&); \
	NO_API AHomeWork1Projectile(const AHomeWork1Projectile&); \
public:


#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHomeWork1Projectile(AHomeWork1Projectile&&); \
	NO_API AHomeWork1Projectile(const AHomeWork1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHomeWork1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHomeWork1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHomeWork1Projectile)


#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AHomeWork1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AHomeWork1Projectile, ProjectileMovement); }


#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_12_PROLOG
#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_SPARSE_DATA \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_RPC_WRAPPERS \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_INCLASS \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_SPARSE_DATA \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	HomeWork1_Source_HomeWork1_HomeWork1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMEWORK1_API UClass* StaticClass<class AHomeWork1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeWork1_Source_HomeWork1_HomeWork1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
