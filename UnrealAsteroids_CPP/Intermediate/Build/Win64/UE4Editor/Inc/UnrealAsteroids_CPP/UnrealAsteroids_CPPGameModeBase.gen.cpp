// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAsteroids_CPP/UnrealAsteroids_CPPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealAsteroids_CPPGameModeBase() {}
// Cross Module References
	UNREALASTEROIDS_CPP_API UClass* Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_NoRegister();
	UNREALASTEROIDS_CPP_API UClass* Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealAsteroids_CPP();
// End Cross Module References
	void AUnrealAsteroids_CPPGameModeBase::StaticRegisterNativesAUnrealAsteroids_CPPGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_NoRegister()
	{
		return AUnrealAsteroids_CPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAsteroids_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealAsteroids_CPPGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealAsteroids_CPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealAsteroids_CPPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_Statics::ClassParams = {
		&AUnrealAsteroids_CPPGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealAsteroids_CPPGameModeBase, 3858385478);
	template<> UNREALASTEROIDS_CPP_API UClass* StaticClass<AUnrealAsteroids_CPPGameModeBase>()
	{
		return AUnrealAsteroids_CPPGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealAsteroids_CPPGameModeBase(Z_Construct_UClass_AUnrealAsteroids_CPPGameModeBase, &AUnrealAsteroids_CPPGameModeBase::StaticClass, TEXT("/Script/UnrealAsteroids_CPP"), TEXT("AUnrealAsteroids_CPPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealAsteroids_CPPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
