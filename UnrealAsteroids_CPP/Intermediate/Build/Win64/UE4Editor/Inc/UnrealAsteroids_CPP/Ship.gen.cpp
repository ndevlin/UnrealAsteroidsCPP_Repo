// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAsteroids_CPP/Ship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShip() {}
// Cross Module References
	UNREALASTEROIDS_CPP_API UClass* Z_Construct_UClass_AShip_NoRegister();
	UNREALASTEROIDS_CPP_API UClass* Z_Construct_UClass_AShip();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnrealAsteroids_CPP();
// End Cross Module References
	void AShip::StaticRegisterNativesAShip()
	{
	}
	UClass* Z_Construct_UClass_AShip_NoRegister()
	{
		return AShip::StaticClass();
	}
	struct Z_Construct_UClass_AShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAsteroids_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ship.h" },
		{ "ModuleRelativePath", "Ship.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShip_Statics::ClassParams = {
		&AShip::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShip, 1932525541);
	template<> UNREALASTEROIDS_CPP_API UClass* StaticClass<AShip>()
	{
		return AShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShip(Z_Construct_UClass_AShip, &AShip::StaticClass, TEXT("/Script/UnrealAsteroids_CPP"), TEXT("AShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
