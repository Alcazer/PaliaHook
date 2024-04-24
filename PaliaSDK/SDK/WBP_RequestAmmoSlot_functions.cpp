#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RequestAmmoSlot

#include "Basic.hpp"

#include "WBP_RequestAmmoSlot_classes.hpp"
#include "WBP_RequestAmmoSlot_parameters.hpp"


namespace SDK
{

// Function WBP_RequestAmmoSlot.WBP_RequestAmmoSlot_C.ExecuteUbergraph_WBP_RequestAmmoSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_bIsRequestActive                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RequestAmmoSlot_C::ExecuteUbergraph_WBP_RequestAmmoSlot(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_bIsRequestActive, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RequestAmmoSlot_C", "ExecuteUbergraph_WBP_RequestAmmoSlot");

	Params::WBP_RequestAmmoSlot_C_ExecuteUbergraph_WBP_RequestAmmoSlot Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_bIsRequestActive = K2Node_CustomEvent_bIsRequestActive;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RequestAmmoSlot.WBP_RequestAmmoSlot_C.SetRequestIndication
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsRequestActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RequestAmmoSlot_C::SetRequestIndication(bool bIsRequestActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RequestAmmoSlot_C", "SetRequestIndication");

	Params::WBP_RequestAmmoSlot_C_SetRequestIndication Parms{};

	Parms.bIsRequestActive = bIsRequestActive;

	UObject::ProcessEvent(Func, &Parms);
}

}
