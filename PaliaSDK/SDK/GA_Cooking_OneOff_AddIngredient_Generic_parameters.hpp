#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cooking_OneOff_AddIngredient_Generic

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_Cooking_OneOff_AddIngredient_Generic.GA_Cooking_OneOff_AddIngredient_Generic_C.ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic
// 0x0028 (0x0028 - 0x0000)
struct GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45CA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic) == 0x000008, "Wrong alignment on GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic");
static_assert(sizeof(GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic) == 0x000028, "Wrong size on GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic, EntryPoint) == 0x000000, "Member 'GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic, CallFunc_RandomInteger_ReturnValue) == 0x000004, "Member 'GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic, CallFunc_Conv_StringToName_ReturnValue) == 0x000020, "Member 'GA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

}

