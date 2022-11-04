// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMEWORK1_MyActorChangingColors_generated_h
#error "MyActorChangingColors.generated.h already included, missing '#pragma once' in MyActorChangingColors.h"
#endif
#define HOMEWORK1_MyActorChangingColors_generated_h

#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_SPARSE_DATA
#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_RPC_WRAPPERS
#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActorChangingColors(); \
	friend struct Z_Construct_UClass_AMyActorChangingColors_Statics; \
public: \
	DECLARE_CLASS(AMyActorChangingColors, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeWork1"), NO_API) \
	DECLARE_SERIALIZER(AMyActorChangingColors)


#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMyActorChangingColors(); \
	friend struct Z_Construct_UClass_AMyActorChangingColors_Statics; \
public: \
	DECLARE_CLASS(AMyActorChangingColors, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeWork1"), NO_API) \
	DECLARE_SERIALIZER(AMyActorChangingColors)


#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActorChangingColors(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActorChangingColors) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActorChangingColors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActorChangingColors); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActorChangingColors(AMyActorChangingColors&&); \
	NO_API AMyActorChangingColors(const AMyActorChangingColors&); \
public:


#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActorChangingColors(AMyActorChangingColors&&); \
	NO_API AMyActorChangingColors(const AMyActorChangingColors&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActorChangingColors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActorChangingColors); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActorChangingColors)


#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyMeshComponent() { return STRUCT_OFFSET(AMyActorChangingColors, MyMeshComponent); } \
	FORCEINLINE static uint32 __PPO__MaterialRed() { return STRUCT_OFFSET(AMyActorChangingColors, MaterialRed); } \
	FORCEINLINE static uint32 __PPO__MaterialGreen() { return STRUCT_OFFSET(AMyActorChangingColors, MaterialGreen); } \
	FORCEINLINE static uint32 __PPO__MaterialBlue() { return STRUCT_OFFSET(AMyActorChangingColors, MaterialBlue); }


#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_18_PROLOG
#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_PRIVATE_PROPERTY_OFFSET \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_SPARSE_DATA \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_RPC_WRAPPERS \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_INCLASS \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_PRIVATE_PROPERTY_OFFSET \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_SPARSE_DATA \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_INCLASS_NO_PURE_DECLS \
	HomeWork1_Source_HomeWork1_MyActorChangingColors_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMEWORK1_API UClass* StaticClass<class AMyActorChangingColors>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeWork1_Source_HomeWork1_MyActorChangingColors_h


#define FOREACH_ENUM_ECOLOR(op) \
	op(Red) \
	op(Green) \
	op(Blue) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
