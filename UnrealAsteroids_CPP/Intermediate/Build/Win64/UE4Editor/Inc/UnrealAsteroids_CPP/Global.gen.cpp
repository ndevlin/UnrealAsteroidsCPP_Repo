// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAsteroids_CPP/Global.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobal() {}
// Cross Module References
	UNREALASTEROIDS_CPP_API UClass* Z_Construct_UClass_AGlobal_NoRegister();
	UNREALASTEROIDS_CPP_API UClass* Z_Construct_UClass_AGlobal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealAsteroids_CPP();
// End Cross Module References
	void AGlobal::StaticRegisterNativesAGlobal()
	{
	}
	UClass* Z_Construct_UClass_AGlobal_NoRegister()
	{
		return AGlobal::StaticClass();
	}
	struct Z_Construct_UClass_AGlobal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGlobal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAsteroids_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Global.h" },
		{ "ModuleRelativePath", "Global.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobal_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Global" },
		{ "ModuleRelativePath", "Global.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGlobal_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGlobal, Score), METADATA_PARAMS(Z_Construct_UClass_AGlobal_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobal_Statics::NewProp_Score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGlobal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGlobal_Statics::ClassParams = {
		&AGlobal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGlobal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGlobal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGlobal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGlobal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGlobal, 553918665);
	template<> UNREALASTEROIDS_CPP_API UClass* StaticClass<AGlobal>()
	{
		return AGlobal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGlobal(Z_Construct_UClass_AGlobal, &AGlobal::StaticClass, TEXT("/Script/UnrealAsteroids_CPP"), TEXT("AGlobal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
