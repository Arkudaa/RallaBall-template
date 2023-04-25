// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollaBall/Collectible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectible() {}
// Cross Module References
	ROLLABALL_API UClass* Z_Construct_UClass_ACollectible_NoRegister();
	ROLLABALL_API UClass* Z_Construct_UClass_ACollectible();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RollaBall();
// End Cross Module References
	void ACollectible::StaticRegisterNativesACollectible()
	{
	}
	UClass* Z_Construct_UClass_ACollectible_NoRegister()
	{
		return ACollectible::StaticClass();
	}
	struct Z_Construct_UClass_ACollectible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RollaBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectible_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Collectible.h" },
		{ "ModuleRelativePath", "Collectible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollectible_Statics::ClassParams = {
		&ACollectible::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ACollectible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollectible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollectible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollectible, 4128820624);
	template<> ROLLABALL_API UClass* StaticClass<ACollectible>()
	{
		return ACollectible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollectible(Z_Construct_UClass_ACollectible, &ACollectible::StaticClass, TEXT("/Script/RollaBall"), TEXT("ACollectible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
