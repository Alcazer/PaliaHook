#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Cooking_OneOff_AddIngredient_Generic.GA_Cooking_OneOff_AddIngredient_Generic_C.Event_OnActivateAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Cooking_OneOff_AddIngredient_Generic_C::Event_OnActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Generic_C", "Event_OnActivateAbility");

	Params::UGA_Cooking_OneOff_AddIngredient_Generic_C_Event_OnActivateAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_OneOff_AddIngredient_Generic.GA_Cooking_OneOff_AddIngredient_Generic_C.ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_AddIngredient_Generic_C::ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic(int32 InEntryPoint, int32 InCallFunc_RandomInteger_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, const class FString& InCallFunc_Conv_IntToString_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Generic_C", "ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic");

	Params::UGA_Cooking_OneOff_AddIngredient_Generic_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.CallFunc_RandomInteger_ReturnValue = InCallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = InCallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = InCallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
