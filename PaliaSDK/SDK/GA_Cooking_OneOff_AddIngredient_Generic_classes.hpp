#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cooking_OneOff_AddIngredient_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Cooking_OneOff_AddIngredient_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Cooking_OneOff_AddIngredient_Generic.GA_Cooking_OneOff_AddIngredient_Generic_C
// 0x0010 (0x0508 - 0x04F8)
class UGA_Cooking_OneOff_AddIngredient_Generic_C final  : public UGA_Cooking_OneOff_AddIngredient_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Cooking_OneOff_AddIngredient_Generic_C; // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NumberOfSections;                                  // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Event_OnActivateAbility();
	void ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Cooking_OneOff_AddIngredient_Generic_C">();
	}
	static class UGA_Cooking_OneOff_AddIngredient_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Cooking_OneOff_AddIngredient_Generic_C>();
	}
};
static_assert(alignof(UGA_Cooking_OneOff_AddIngredient_Generic_C) == 0x000008, "Wrong alignment on UGA_Cooking_OneOff_AddIngredient_Generic_C");
static_assert(sizeof(UGA_Cooking_OneOff_AddIngredient_Generic_C) == 0x000508, "Wrong size on UGA_Cooking_OneOff_AddIngredient_Generic_C");
static_assert(offsetof(UGA_Cooking_OneOff_AddIngredient_Generic_C, UberGraphFrame_GA_Cooking_OneOff_AddIngredient_Generic_C) == 0x0004F8, "Member 'UGA_Cooking_OneOff_AddIngredient_Generic_C::UberGraphFrame_GA_Cooking_OneOff_AddIngredient_Generic_C' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_OneOff_AddIngredient_Generic_C, NumberOfSections) == 0x000500, "Member 'UGA_Cooking_OneOff_AddIngredient_Generic_C::NumberOfSections' has a wrong offset!");

}

