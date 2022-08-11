// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAUNTEDHOTEL_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define HAUNTEDHOTEL_Pickup_generated_h

#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_SPARSE_DATA
#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execRotateActor);


#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execRotateActor);


#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedHotel"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedHotel"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_PRIVATE_PROPERTY_OFFSET
#define HauntedHotel_Source_HauntedHotel_Pickup_h_10_PROLOG
#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_PRIVATE_PROPERTY_OFFSET \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_SPARSE_DATA \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_RPC_WRAPPERS \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_INCLASS \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HauntedHotel_Source_HauntedHotel_Pickup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_PRIVATE_PROPERTY_OFFSET \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_SPARSE_DATA \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_INCLASS_NO_PURE_DECLS \
	HauntedHotel_Source_HauntedHotel_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAUNTEDHOTEL_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HauntedHotel_Source_HauntedHotel_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
