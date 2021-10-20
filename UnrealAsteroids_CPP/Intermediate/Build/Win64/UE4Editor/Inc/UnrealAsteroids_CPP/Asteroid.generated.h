// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREALASTEROIDS_CPP_Asteroid_generated_h
#error "Asteroid.generated.h already included, missing '#pragma once' in Asteroid.h"
#endif
#define UNREALASTEROIDS_CPP_Asteroid_generated_h

#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_15_DELEGATE \
static inline void FDelegate_DelegateWrapper(const FScriptDelegate& Delegate) \
{ \
	Delegate.ProcessDelegate<UObject>(NULL); \
}


#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_SPARSE_DATA
#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonHit);


#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonHit);


#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend struct Z_Construct_UClass_AAsteroid_Statics; \
public: \
	DECLARE_CLASS(AAsteroid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealAsteroids_CPP"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid)


#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend struct Z_Construct_UClass_AAsteroid_Statics; \
public: \
	DECLARE_CLASS(AAsteroid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealAsteroids_CPP"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid)


#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsteroid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid(AAsteroid&&); \
	NO_API AAsteroid(const AAsteroid&); \
public:


#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid(AAsteroid&&); \
	NO_API AAsteroid(const AAsteroid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroid)


#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_PRIVATE_PROPERTY_OFFSET
#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_18_PROLOG
#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_PRIVATE_PROPERTY_OFFSET \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_SPARSE_DATA \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_RPC_WRAPPERS \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_INCLASS \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_PRIVATE_PROPERTY_OFFSET \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_SPARSE_DATA \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_INCLASS_NO_PURE_DECLS \
	UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALASTEROIDS_CPP_API UClass* StaticClass<class AAsteroid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealAsteroids_CPP_Source_UnrealAsteroids_CPP_Asteroid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
