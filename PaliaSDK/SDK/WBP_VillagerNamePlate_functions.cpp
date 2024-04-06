#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VillagerNamePlate

#include "Basic.hpp"

#include "WBP_VillagerNamePlate_classes.hpp"
#include "WBP_VillagerNamePlate_parameters.hpp"


namespace SDK
{

// Function WBP_VillagerNamePlate.WBP_VillagerNamePlate_C.ExecuteUbergraph_WBP_VillagerNamePlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaVillagerCharacter*        K2Node_CustomEvent_Villager                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_FindVillagerConfigById_OutResult              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVillagerConfig                  CallFunc_FindVillagerConfigById_ReturnValue            ()
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VillagerNamePlate_C::ExecuteUbergraph_WBP_VillagerNamePlate(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AValeriaVillagerCharacter* K2Node_CustomEvent_Villager, EValeriaFuncResult CallFunc_FindVillagerConfigById_OutResult, const struct FVillagerConfig& CallFunc_FindVillagerConfigById_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VillagerNamePlate_C", "ExecuteUbergraph_WBP_VillagerNamePlate");

	Params::WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Villager = K2Node_CustomEvent_Villager;
	Parms.CallFunc_FindVillagerConfigById_OutResult = CallFunc_FindVillagerConfigById_OutResult;
	Parms.CallFunc_FindVillagerConfigById_ReturnValue = std::move(CallFunc_FindVillagerConfigById_ReturnValue);
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VillagerNamePlate.WBP_VillagerNamePlate_C.SetVillager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaVillagerCharacter*        Param_Villager                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_VillagerNamePlate_C::SetVillager(class AValeriaVillagerCharacter* Param_Villager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VillagerNamePlate_C", "SetVillager");

	Params::WBP_VillagerNamePlate_C_SetVillager Parms{};

	Parms.Param_Villager = Param_Villager;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VillagerNamePlate.WBP_VillagerNamePlate_C.UpdateName
// (BlueprintCallable, BlueprintEvent)

void UWBP_VillagerNamePlate_C::UpdateName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VillagerNamePlate_C", "UpdateName");

	UObject::ProcessEvent(Func, nullptr);
}

}

