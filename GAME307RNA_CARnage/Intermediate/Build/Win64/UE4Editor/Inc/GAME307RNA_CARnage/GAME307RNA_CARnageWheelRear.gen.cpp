// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME307RNA_CARnage/GAME307RNA_CARnageWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAME307RNA_CARnageWheelRear() {}
// Cross Module References
	GAME307RNA_CARNAGE_API UClass* Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_NoRegister();
	GAME307RNA_CARNAGE_API UClass* Z_Construct_UClass_UGAME307RNA_CARnageWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_GAME307RNA_CARnage();
// End Cross Module References
	void UGAME307RNA_CARnageWheelRear::StaticRegisterNativesUGAME307RNA_CARnageWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_NoRegister()
	{
		return UGAME307RNA_CARnageWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME307RNA_CARnage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAME307RNA_CARnageWheelRear.h" },
		{ "ModuleRelativePath", "GAME307RNA_CARnageWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAME307RNA_CARnageWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_Statics::ClassParams = {
		&UGAME307RNA_CARnageWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAME307RNA_CARnageWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAME307RNA_CARnageWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAME307RNA_CARnageWheelRear, 188161212);
	template<> GAME307RNA_CARNAGE_API UClass* StaticClass<UGAME307RNA_CARnageWheelRear>()
	{
		return UGAME307RNA_CARnageWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAME307RNA_CARnageWheelRear(Z_Construct_UClass_UGAME307RNA_CARnageWheelRear, &UGAME307RNA_CARnageWheelRear::StaticClass, TEXT("/Script/GAME307RNA_CARnage"), TEXT("UGAME307RNA_CARnageWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAME307RNA_CARnageWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
