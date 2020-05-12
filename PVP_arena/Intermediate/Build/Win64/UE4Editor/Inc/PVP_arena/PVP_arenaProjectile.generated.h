// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVP_ARENA_PVP_arenaProjectile_generated_h
#error "PVP_arenaProjectile.generated.h already included, missing '#pragma once' in PVP_arenaProjectile.h"
#endif
#define PVP_ARENA_PVP_arenaProjectile_generated_h

#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_SPARSE_DATA
#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPVP_arenaProjectile(); \
	friend struct Z_Construct_UClass_APVP_arenaProjectile_Statics; \
public: \
	DECLARE_CLASS(APVP_arenaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVP_arena"), NO_API) \
	DECLARE_SERIALIZER(APVP_arenaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPVP_arenaProjectile(); \
	friend struct Z_Construct_UClass_APVP_arenaProjectile_Statics; \
public: \
	DECLARE_CLASS(APVP_arenaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVP_arena"), NO_API) \
	DECLARE_SERIALIZER(APVP_arenaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APVP_arenaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APVP_arenaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVP_arenaProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVP_arenaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVP_arenaProjectile(APVP_arenaProjectile&&); \
	NO_API APVP_arenaProjectile(const APVP_arenaProjectile&); \
public:


#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVP_arenaProjectile(APVP_arenaProjectile&&); \
	NO_API APVP_arenaProjectile(const APVP_arenaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVP_arenaProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVP_arenaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APVP_arenaProjectile)


#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APVP_arenaProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APVP_arenaProjectile, ProjectileMovement); }


#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_9_PROLOG
#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_SPARSE_DATA \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_RPC_WRAPPERS \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_INCLASS \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_SPARSE_DATA \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_INCLASS_NO_PURE_DECLS \
	PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVP_ARENA_API UClass* StaticClass<class APVP_arenaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVP_arena_Source_PVP_arena_PVP_arenaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
