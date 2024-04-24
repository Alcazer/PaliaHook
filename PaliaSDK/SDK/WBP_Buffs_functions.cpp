#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Buffs

#include "Basic.hpp"

#include "WBP_Buffs_classes.hpp"
#include "WBP_Buffs_parameters.hpp"


namespace SDK
{

// Function WBP_Buffs.WBP_Buffs_C.BindOnChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_Buffs_C::BindOnChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "BindOnChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Buffs.WBP_Buffs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Buffs_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Buffs.WBP_Buffs_C.EvaulateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ValeriaIsVisible                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldBeVisible                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetShouldBeVisible_Visible                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buffs_C::EvaulateVisibility(bool ValeriaIsVisible, bool ShouldBeVisible, bool CallFunc_GetShouldBeVisible_Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "EvaulateVisibility");

	Params::WBP_Buffs_C_EvaulateVisibility Parms{};

	Parms.ValeriaIsVisible = ValeriaIsVisible;
	Parms.ShouldBeVisible = ShouldBeVisible;
	Parms.CallFunc_GetShouldBeVisible_Visible = CallFunc_GetShouldBeVisible_Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buffs.WBP_Buffs_C.ExecuteUbergraph_WBP_Buffs
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffComponent*                   K2Node_CustomEvent_buffs                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBuffComponent*                   CallFunc_GetBuffs_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UBuffComponent* Buffs)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBuffComponent*                   CallFunc_GetBuffs_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ShouldListenToChanges_Visible                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buffs_C::ExecuteUbergraph_WBP_Buffs(int32 EntryPoint, class UBuffComponent* K2Node_CustomEvent_buffs, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UBuffComponent* CallFunc_GetBuffs_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(class UBuffComponent* Buffs)> K2Node_CreateDelegate_OutputDelegate, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, class UBuffComponent* CallFunc_GetBuffs_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ShouldListenToChanges_Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "ExecuteUbergraph_WBP_Buffs");

	Params::WBP_Buffs_C_ExecuteUbergraph_WBP_Buffs Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_buffs = K2Node_CustomEvent_buffs;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetBuffs_ReturnValue = CallFunc_GetBuffs_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetValeriaCharacter_OutResult_1 = CallFunc_GetValeriaCharacter_OutResult_1;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue_1 = CallFunc_GetValeriaCharacter_ReturnValue_1;
	Parms.CallFunc_GetBuffs_ReturnValue_1 = CallFunc_GetBuffs_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ShouldListenToChanges_Visible = CallFunc_ShouldListenToChanges_Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buffs.WBP_Buffs_C.GetShouldBeVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ShouldListenToChanges_Visible                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buffs_C::GetShouldBeVisible(bool* Visible, bool CallFunc_ShouldListenToChanges_Visible, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "GetShouldBeVisible");

	Params::WBP_Buffs_C_GetShouldBeVisible Parms{};

	Parms.CallFunc_ShouldListenToChanges_Visible = CallFunc_ShouldListenToChanges_Visible;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function WBP_Buffs.WBP_Buffs_C.OnBuffChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBuffComponent*                   Buffs                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Buffs_C::OnBuffChanged(class UBuffComponent* Buffs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "OnBuffChanged");

	Params::WBP_Buffs_C_OnBuffChanged Parms{};

	Parms.Buffs = Buffs;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Buffs.WBP_Buffs_C.ShouldListenToChanges
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsPackagedForDistribution_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDebuggingOn__IsDebuggingOn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buffs_C::ShouldListenToChanges(bool* Visible, bool CallFunc_IsPackagedForDistribution_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDebuggingOn__IsDebuggingOn, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "ShouldListenToChanges");

	Params::WBP_Buffs_C_ShouldListenToChanges Parms{};

	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDebuggingOn__IsDebuggingOn = CallFunc_IsDebuggingOn__IsDebuggingOn;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function WBP_Buffs.WBP_Buffs_C.UnbindOnChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_Buffs_C::UnbindOnChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "UnbindOnChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Buffs.WBP_Buffs_C.UpdateBuffs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBuffConfig                      BuffConfig                                             (Edit, BlueprintVisible)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ListItem_Buff_C*              CallFunc_SpawnObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Add_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuffActivation                  CallFunc_Array_Get_Item                                ()
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_FindBuffConfigById_OutResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuffConfig                      CallFunc_FindBuffConfigById_ReturnValue                ()
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBuffComponent*                   CallFunc_GetBuffs_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buffs_C::UpdateBuffs(const struct FBuffConfig& BuffConfig, int32 Temp_int_Array_Index_Variable, class UBP_ListItem_Buff_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FBuffActivation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, EValeriaFuncResult CallFunc_FindBuffConfigById_OutResult, const struct FBuffConfig& CallFunc_FindBuffConfigById_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UBuffComponent* CallFunc_GetBuffs_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Buffs_C", "UpdateBuffs");

	Params::WBP_Buffs_C_UpdateBuffs Parms{};

	Parms.BuffConfig = std::move(BuffConfig);
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FindBuffConfigById_OutResult = CallFunc_FindBuffConfigById_OutResult;
	Parms.CallFunc_FindBuffConfigById_ReturnValue = std::move(CallFunc_FindBuffConfigById_ReturnValue);
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetBuffs_ReturnValue = CallFunc_GetBuffs_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

