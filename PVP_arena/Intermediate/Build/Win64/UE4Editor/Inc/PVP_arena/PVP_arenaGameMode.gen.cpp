// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVP_arena/PVP_arenaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVP_arenaGameMode() {}
// Cross Module References
	PVP_ARENA_API UClass* Z_Construct_UClass_APVP_arenaGameMode_NoRegister();
	PVP_ARENA_API UClass* Z_Construct_UClass_APVP_arenaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PVP_arena();
// End Cross Module References
	void APVP_arenaGameMode::StaticRegisterNativesAPVP_arenaGameMode()
	{
	}
	UClass* Z_Construct_UClass_APVP_arenaGameMode_NoRegister()
	{
		return APVP_arenaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APVP_arenaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APVP_arenaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVP_arena,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVP_arenaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PVP_arenaGameMode.h" },
		{ "ModuleRelativePath", "PVP_arenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APVP_arenaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APVP_arenaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APVP_arenaGameMode_Statics::ClassParams = {
		&APVP_arenaGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APVP_arenaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APVP_arenaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APVP_arenaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APVP_arenaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APVP_arenaGameMode, 1342021710);
	template<> PVP_ARENA_API UClass* StaticClass<APVP_arenaGameMode>()
	{
		return APVP_arenaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APVP_arenaGameMode(Z_Construct_UClass_APVP_arenaGameMode, &APVP_arenaGameMode::StaticClass, TEXT("/Script/PVP_arena"), TEXT("APVP_arenaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APVP_arenaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
