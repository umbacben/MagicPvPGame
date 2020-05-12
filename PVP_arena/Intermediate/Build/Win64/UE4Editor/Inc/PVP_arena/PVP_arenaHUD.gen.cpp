// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVP_arena/PVP_arenaHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVP_arenaHUD() {}
// Cross Module References
	PVP_ARENA_API UClass* Z_Construct_UClass_APVP_arenaHUD_NoRegister();
	PVP_ARENA_API UClass* Z_Construct_UClass_APVP_arenaHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PVP_arena();
// End Cross Module References
	void APVP_arenaHUD::StaticRegisterNativesAPVP_arenaHUD()
	{
	}
	UClass* Z_Construct_UClass_APVP_arenaHUD_NoRegister()
	{
		return APVP_arenaHUD::StaticClass();
	}
	struct Z_Construct_UClass_APVP_arenaHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APVP_arenaHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PVP_arena,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVP_arenaHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PVP_arenaHUD.h" },
		{ "ModuleRelativePath", "PVP_arenaHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APVP_arenaHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APVP_arenaHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APVP_arenaHUD_Statics::ClassParams = {
		&APVP_arenaHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APVP_arenaHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APVP_arenaHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APVP_arenaHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APVP_arenaHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APVP_arenaHUD, 1896423699);
	template<> PVP_ARENA_API UClass* StaticClass<APVP_arenaHUD>()
	{
		return APVP_arenaHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APVP_arenaHUD(Z_Construct_UClass_APVP_arenaHUD, &APVP_arenaHUD::StaticClass, TEXT("/Script/PVP_arena"), TEXT("APVP_arenaHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APVP_arenaHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
