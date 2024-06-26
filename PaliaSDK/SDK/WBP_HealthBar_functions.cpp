#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HealthBar

#include "Basic.hpp"

#include "WBP_HealthBar_classes.hpp"
#include "WBP_HealthBar_parameters.hpp"


namespace SDK
{

// Function WBP_HealthBar.WBP_HealthBar_C.BindOnChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVitalsComponent*                 Vitals                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthBar_C::BindOnChanged(class UVitalsComponent*& Vitals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "BindOnChanged");

	Params::WBP_HealthBar_C_BindOnChanged Parms{};

	Parms.Vitals = Vitals;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthBar.WBP_HealthBar_C.ExecuteUbergraph_WBP_HealthBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVitalsComponent*                 K2Node_CustomEvent_Vitals                              (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UVitalsComponent* Vitals)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVitalsComponent*                 K2Node_CustomEvent_Vitals_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthBar_C::ExecuteUbergraph_WBP_HealthBar(int32 EntryPoint, class UVitalsComponent* K2Node_CustomEvent_Vitals, TDelegate<void(class UVitalsComponent* Vitals)> K2Node_CreateDelegate_OutputDelegate, class UVitalsComponent* K2Node_CustomEvent_Vitals_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "ExecuteUbergraph_WBP_HealthBar");

	Params::WBP_HealthBar_C_ExecuteUbergraph_WBP_HealthBar Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Vitals = K2Node_CustomEvent_Vitals;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Vitals_1 = K2Node_CustomEvent_Vitals_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthBar.WBP_HealthBar_C.OnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVitalsComponent*                 Vitals                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthBar_C::OnChanged(class UVitalsComponent* Vitals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "OnChanged");

	Params::WBP_HealthBar_C_OnChanged Parms{};

	Parms.Vitals = Vitals;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthBar.WBP_HealthBar_C.SetActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UVitalsComponent*                 CallFunc_GetComponentByClass_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthBar_C::SetActor(class AActor*& Param_Actor, class UVitalsComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "SetActor");

	Params::WBP_HealthBar_C_SetActor Parms{};

	Parms.Param_Actor = Param_Actor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	Param_Actor = Parms.Param_Actor;
}


// Function WBP_HealthBar.WBP_HealthBar_C.Update
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVitalsComponent*                 VitalsComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   CallFunc_MakeLiteralByte_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetVitalStart_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetVital_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetVitalMax_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Conv_IntToDouble_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Conv_IntToDouble_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Divide_DoubleDouble_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_SetPercent_InPercent_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthBar_C::Update(class UVitalsComponent*& VitalsComponent, bool Temp_bool_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_GetVitalStart_ReturnValue, int32 CallFunc_GetVital_ReturnValue, int32 CallFunc_GetVitalMax_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 K2Node_Select_Default, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthBar_C", "Update");

	Params::WBP_HealthBar_C_Update Parms{};

	Parms.VitalsComponent = VitalsComponent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetVitalStart_ReturnValue = CallFunc_GetVitalStart_ReturnValue;
	Parms.CallFunc_GetVital_ReturnValue = CallFunc_GetVital_ReturnValue;
	Parms.CallFunc_GetVitalMax_ReturnValue = CallFunc_GetVitalMax_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	VitalsComponent = Parms.VitalsComponent;
}

}

