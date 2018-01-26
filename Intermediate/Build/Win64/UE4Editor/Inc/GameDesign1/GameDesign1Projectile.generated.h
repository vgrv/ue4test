// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GAMEDESIGN1_GameDesign1Projectile_generated_h
#error "GameDesign1Projectile.generated.h already included, missing '#pragma once' in GameDesign1Projectile.h"
#endif
#define GAMEDESIGN1_GameDesign1Projectile_generated_h

#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameDesign1Projectile(); \
	friend GAMEDESIGN1_API class UClass* Z_Construct_UClass_AGameDesign1Projectile(); \
public: \
	DECLARE_CLASS(AGameDesign1Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameDesign1"), NO_API) \
	DECLARE_SERIALIZER(AGameDesign1Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameDesign1Projectile(); \
	friend GAMEDESIGN1_API class UClass* Z_Construct_UClass_AGameDesign1Projectile(); \
public: \
	DECLARE_CLASS(AGameDesign1Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameDesign1"), NO_API) \
	DECLARE_SERIALIZER(AGameDesign1Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameDesign1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameDesign1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameDesign1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameDesign1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameDesign1Projectile(AGameDesign1Projectile&&); \
	NO_API AGameDesign1Projectile(const AGameDesign1Projectile&); \
public:


#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameDesign1Projectile(AGameDesign1Projectile&&); \
	NO_API AGameDesign1Projectile(const AGameDesign1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameDesign1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameDesign1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameDesign1Projectile)


#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGameDesign1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGameDesign1Projectile, ProjectileMovement); }


#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_9_PROLOG
#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_RPC_WRAPPERS \
	GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_INCLASS \
	GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_INCLASS_NO_PURE_DECLS \
	GameDesign1_Source_GameDesign1_GameDesign1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameDesign1_Source_GameDesign1_GameDesign1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
