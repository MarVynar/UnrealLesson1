// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeWork1/MyGameModeParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeParent() {}
// Cross Module References
	HOMEWORK1_API UClass* Z_Construct_UClass_AMyGameModeParent_NoRegister();
	HOMEWORK1_API UClass* Z_Construct_UClass_AMyGameModeParent();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_HomeWork1();
// End Cross Module References
	void AMyGameModeParent::StaticRegisterNativesAMyGameModeParent()
	{
	}
	UClass* Z_Construct_UClass_AMyGameModeParent_NoRegister()
	{
		return AMyGameModeParent::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameModeParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameModeParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeWork1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeParent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameModeParent.h" },
		{ "ModuleRelativePath", "MyGameModeParent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameModeParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeParent_Statics::ClassParams = {
		&AMyGameModeParent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameModeParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameModeParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameModeParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameModeParent, 25133048);
	template<> HOMEWORK1_API UClass* StaticClass<AMyGameModeParent>()
	{
		return AMyGameModeParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameModeParent(Z_Construct_UClass_AMyGameModeParent, &AMyGameModeParent::StaticClass, TEXT("/Script/HomeWork1"), TEXT("AMyGameModeParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
