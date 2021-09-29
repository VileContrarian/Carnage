// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME307RNA_CARnage/GAME307RNA_CARnageWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAME307RNA_CARnageWheelFront() {}
// Cross Module References
	GAME307RNA_CARNAGE_API UClass* Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_NoRegister();
	GAME307RNA_CARNAGE_API UClass* Z_Construct_UClass_UGAME307RNA_CARnageWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_GAME307RNA_CARnage();
// End Cross Module References
	void UGAME307RNA_CARnageWheelFront::StaticRegisterNativesUGAME307RNA_CARnageWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_NoRegister()
	{
		return UGAME307RNA_CARnageWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME307RNA_CARnage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAME307RNA_CARnageWheelFront.h" },
		{ "ModuleRelativePath", "GAME307RNA_CARnageWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAME307RNA_CARnageWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_Statics::ClassParams = {
		&UGAME307RNA_CARnageWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAME307RNA_CARnageWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAME307RNA_CARnageWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAME307RNA_CARnageWheelFront, 2847411931);
	template<> GAME307RNA_CARNAGE_API UClass* StaticClass<UGAME307RNA_CARnageWheelFront>()
	{
		return UGAME307RNA_CARnageWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAME307RNA_CARnageWheelFront(Z_Construct_UClass_UGAME307RNA_CARnageWheelFront, &UGAME307RNA_CARnageWheelFront::StaticClass, TEXT("/Script/GAME307RNA_CARnage"), TEXT("UGAME307RNA_CARnageWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAME307RNA_CARnageWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
