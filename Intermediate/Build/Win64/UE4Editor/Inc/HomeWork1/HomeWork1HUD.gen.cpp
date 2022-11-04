// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeWork1/HomeWork1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomeWork1HUD() {}
// Cross Module References
	HOMEWORK1_API UClass* Z_Construct_UClass_AHomeWork1HUD_NoRegister();
	HOMEWORK1_API UClass* Z_Construct_UClass_AHomeWork1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HomeWork1();
// End Cross Module References
	void AHomeWork1HUD::StaticRegisterNativesAHomeWork1HUD()
	{
	}
	UClass* Z_Construct_UClass_AHomeWork1HUD_NoRegister()
	{
		return AHomeWork1HUD::StaticClass();
	}
	struct Z_Construct_UClass_AHomeWork1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHomeWork1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeWork1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWork1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HomeWork1HUD.h" },
		{ "ModuleRelativePath", "HomeWork1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHomeWork1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHomeWork1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHomeWork1HUD_Statics::ClassParams = {
		&AHomeWork1HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHomeWork1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWork1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHomeWork1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHomeWork1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHomeWork1HUD, 2199846457);
	template<> HOMEWORK1_API UClass* StaticClass<AHomeWork1HUD>()
	{
		return AHomeWork1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHomeWork1HUD(Z_Construct_UClass_AHomeWork1HUD, &AHomeWork1HUD::StaticClass, TEXT("/Script/HomeWork1"), TEXT("AHomeWork1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHomeWork1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
