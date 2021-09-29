// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME307RNA_CARnage/GAME307RNA_CARnageHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAME307RNA_CARnageHud() {}
// Cross Module References
	GAME307RNA_CARNAGE_API UClass* Z_Construct_UClass_AGAME307RNA_CARnageHud_NoRegister();
	GAME307RNA_CARNAGE_API UClass* Z_Construct_UClass_AGAME307RNA_CARnageHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GAME307RNA_CARnage();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void AGAME307RNA_CARnageHud::StaticRegisterNativesAGAME307RNA_CARnageHud()
	{
	}
	UClass* Z_Construct_UClass_AGAME307RNA_CARnageHud_NoRegister()
	{
		return AGAME307RNA_CARnageHud::StaticClass();
	}
	struct Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME307RNA_CARnage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GAME307RNA_CARnageHud.h" },
		{ "ModuleRelativePath", "GAME307RNA_CARnageHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::NewProp_HUDFont_MetaData[] = {
		{ "Comment", "/** Font used to render the vehicle info */" },
		{ "ModuleRelativePath", "GAME307RNA_CARnageHud.h" },
		{ "ToolTip", "Font used to render the vehicle info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGAME307RNA_CARnageHud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::NewProp_HUDFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::NewProp_HUDFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAME307RNA_CARnageHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::ClassParams = {
		&AGAME307RNA_CARnageHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGAME307RNA_CARnageHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGAME307RNA_CARnageHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGAME307RNA_CARnageHud, 1362344600);
	template<> GAME307RNA_CARNAGE_API UClass* StaticClass<AGAME307RNA_CARnageHud>()
	{
		return AGAME307RNA_CARnageHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGAME307RNA_CARnageHud(Z_Construct_UClass_AGAME307RNA_CARnageHud, &AGAME307RNA_CARnageHud::StaticClass, TEXT("/Script/GAME307RNA_CARnage"), TEXT("AGAME307RNA_CARnageHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGAME307RNA_CARnageHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
