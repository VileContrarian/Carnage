// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME307RNA_CARnage/GAME307RNA_CARnageGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAME307RNA_CARnageGameMode() {}
// Cross Module References
	GAME307RNA_CARNAGE_API UClass* Z_Construct_UClass_AGAME307RNA_CARnageGameMode_NoRegister();
	GAME307RNA_CARNAGE_API UClass* Z_Construct_UClass_AGAME307RNA_CARnageGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GAME307RNA_CARnage();
// End Cross Module References
	void AGAME307RNA_CARnageGameMode::StaticRegisterNativesAGAME307RNA_CARnageGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGAME307RNA_CARnageGameMode_NoRegister()
	{
		return AGAME307RNA_CARnageGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGAME307RNA_CARnageGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGAME307RNA_CARnageGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME307RNA_CARnage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAME307RNA_CARnageGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GAME307RNA_CARnageGameMode.h" },
		{ "ModuleRelativePath", "GAME307RNA_CARnageGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGAME307RNA_CARnageGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAME307RNA_CARnageGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGAME307RNA_CARnageGameMode_Statics::ClassParams = {
		&AGAME307RNA_CARnageGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGAME307RNA_CARnageGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGAME307RNA_CARnageGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGAME307RNA_CARnageGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGAME307RNA_CARnageGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGAME307RNA_CARnageGameMode, 1328272870);
	template<> GAME307RNA_CARNAGE_API UClass* StaticClass<AGAME307RNA_CARnageGameMode>()
	{
		return AGAME307RNA_CARnageGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGAME307RNA_CARnageGameMode(Z_Construct_UClass_AGAME307RNA_CARnageGameMode, &AGAME307RNA_CARnageGameMode::StaticClass, TEXT("/Script/GAME307RNA_CARnage"), TEXT("AGAME307RNA_CARnageGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGAME307RNA_CARnageGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
