// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeWork1/MyActorChangingColors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorChangingColors() {}
// Cross Module References
	HOMEWORK1_API UEnum* Z_Construct_UEnum_HomeWork1_EColor();
	UPackage* Z_Construct_UPackage__Script_HomeWork1();
	HOMEWORK1_API UClass* Z_Construct_UClass_AMyActorChangingColors_NoRegister();
	HOMEWORK1_API UClass* Z_Construct_UClass_AMyActorChangingColors();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	static UEnum* EColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HomeWork1_EColor, Z_Construct_UPackage__Script_HomeWork1(), TEXT("EColor"));
		}
		return Singleton;
	}
	template<> HOMEWORK1_API UEnum* StaticEnum<EColor>()
	{
		return EColor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EColor(EColor_StaticEnum, TEXT("/Script/HomeWork1"), TEXT("EColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HomeWork1_EColor_Hash() { return 3985834760U; }
	UEnum* Z_Construct_UEnum_HomeWork1_EColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HomeWork1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EColor"), 0, Get_Z_Construct_UEnum_HomeWork1_EColor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Red", (int64)Red },
				{ "Green", (int64)Green },
				{ "Blue", (int64)Blue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blue.DisplayName", "Blue" },
				{ "Blue.Name", "Blue" },
				{ "BlueprintType", "true" },
				{ "Green.DisplayName", "Green" },
				{ "Green.Name", "Green" },
				{ "ModuleRelativePath", "MyActorChangingColors.h" },
				{ "Red.DisplayName", "Red" },
				{ "Red.Name", "Red" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HomeWork1,
				nullptr,
				"EColor",
				"EColor",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMyActorChangingColors::StaticRegisterNativesAMyActorChangingColors()
	{
	}
	UClass* Z_Construct_UClass_AMyActorChangingColors_NoRegister()
	{
		return AMyActorChangingColors::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorChangingColors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialGreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialBlue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialBlue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorChangingColors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeWork1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorChangingColors_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorChangingColors.h" },
		{ "ModuleRelativePath", "MyActorChangingColors.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MyMeshComponent_MetaData[] = {
		{ "Category", "MyComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActorChangingColors.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MyMeshComponent = { "MyMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorChangingColors, MyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MyMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialRed_MetaData[] = {
		{ "Category", "MyComponents" },
		{ "ModuleRelativePath", "MyActorChangingColors.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialRed = { "MaterialRed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorChangingColors, MaterialRed), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialGreen_MetaData[] = {
		{ "Category", "MyComponents" },
		{ "ModuleRelativePath", "MyActorChangingColors.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialGreen = { "MaterialGreen", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorChangingColors, MaterialGreen), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialBlue_MetaData[] = {
		{ "Category", "MyComponents" },
		{ "ModuleRelativePath", "MyActorChangingColors.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialBlue = { "MaterialBlue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorChangingColors, MaterialBlue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialBlue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorChangingColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MyMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorChangingColors_Statics::NewProp_MaterialBlue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorChangingColors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorChangingColors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorChangingColors_Statics::ClassParams = {
		&AMyActorChangingColors::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyActorChangingColors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorChangingColors_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActorChangingColors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorChangingColors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorChangingColors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorChangingColors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorChangingColors, 1903139071);
	template<> HOMEWORK1_API UClass* StaticClass<AMyActorChangingColors>()
	{
		return AMyActorChangingColors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorChangingColors(Z_Construct_UClass_AMyActorChangingColors, &AMyActorChangingColors::StaticClass, TEXT("/Script/HomeWork1"), TEXT("AMyActorChangingColors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorChangingColors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
