// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HauntedHotel/Exorcist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExorcist() {}
// Cross Module References
	HAUNTEDHOTEL_API UClass* Z_Construct_UClass_AExorcist_NoRegister();
	HAUNTEDHOTEL_API UClass* Z_Construct_UClass_AExorcist();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HauntedHotel();
// End Cross Module References
	void AExorcist::StaticRegisterNativesAExorcist()
	{
	}
	UClass* Z_Construct_UClass_AExorcist_NoRegister()
	{
		return AExorcist::StaticClass();
	}
	struct Z_Construct_UClass_AExorcist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExorcist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HauntedHotel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExorcist_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Exorcist.h" },
		{ "ModuleRelativePath", "Exorcist.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExorcist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExorcist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExorcist_Statics::ClassParams = {
		&AExorcist::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExorcist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExorcist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExorcist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExorcist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExorcist, 4213858496);
	template<> HAUNTEDHOTEL_API UClass* StaticClass<AExorcist>()
	{
		return AExorcist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExorcist(Z_Construct_UClass_AExorcist, &AExorcist::StaticClass, TEXT("/Script/HauntedHotel"), TEXT("AExorcist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExorcist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
