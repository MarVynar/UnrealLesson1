// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeWork1/MyActorLifeSpan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorLifeSpan() {}
// Cross Module References
	HOMEWORK1_API UClass* Z_Construct_UClass_AMyActorLifeSpan_NoRegister();
	HOMEWORK1_API UClass* Z_Construct_UClass_AMyActorLifeSpan();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HomeWork1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyActorLifeSpan::StaticRegisterNativesAMyActorLifeSpan()
	{
	}
	UClass* Z_Construct_UClass_AMyActorLifeSpan_NoRegister()
	{
		return AMyActorLifeSpan::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorLifeSpan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorLifeSpan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeWork1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorLifeSpan_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorLifeSpan.h" },
		{ "ModuleRelativePath", "MyActorLifeSpan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_lifeTime_MetaData[] = {
		{ "Category", "MyVariables" },
		{ "ModuleRelativePath", "MyActorLifeSpan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_lifeTime = { "lifeTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorLifeSpan, lifeTime), METADATA_PARAMS(Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_lifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_lifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_MyMeshComponent_MetaData[] = {
		{ "Category", "MyComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActorLifeSpan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_MyMeshComponent = { "MyMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorLifeSpan, MyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_MyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_MyMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorLifeSpan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_lifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorLifeSpan_Statics::NewProp_MyMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorLifeSpan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorLifeSpan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorLifeSpan_Statics::ClassParams = {
		&AMyActorLifeSpan::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyActorLifeSpan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorLifeSpan_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActorLifeSpan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorLifeSpan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorLifeSpan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorLifeSpan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorLifeSpan, 3209173447);
	template<> HOMEWORK1_API UClass* StaticClass<AMyActorLifeSpan>()
	{
		return AMyActorLifeSpan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorLifeSpan(Z_Construct_UClass_AMyActorLifeSpan, &AMyActorLifeSpan::StaticClass, TEXT("/Script/HomeWork1"), TEXT("AMyActorLifeSpan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorLifeSpan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
