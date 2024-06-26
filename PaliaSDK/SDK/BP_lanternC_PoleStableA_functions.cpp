#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_lanternC_PoleStableA

#include "Basic.hpp"

#include "BP_lanternC_PoleStableA_classes.hpp"
#include "BP_lanternC_PoleStableA_parameters.hpp"


namespace SDK
{

// Function BP_lanternC_PoleStableA.BP_lanternC_PoleStableA_C.ExecuteUbergraph_BP_lanternC_PoleStableA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_DestroyIfServer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_DeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_lanternC_PoleStableA_C::ExecuteUbergraph_BP_lanternC_PoleStableA(int32 EntryPoint, bool CallFunc_DestroyIfServer_ReturnValue, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_lanternC_PoleStableA_C", "ExecuteUbergraph_BP_lanternC_PoleStableA");

	Params::BP_lanternC_PoleStableA_C_ExecuteUbergraph_BP_lanternC_PoleStableA Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_DestroyIfServer_ReturnValue = CallFunc_DestroyIfServer_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_lanternC_PoleStableA.BP_lanternC_PoleStableA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_lanternC_PoleStableA_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_lanternC_PoleStableA_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_lanternC_PoleStableA.BP_lanternC_PoleStableA_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_lanternC_PoleStableA_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_lanternC_PoleStableA_C", "ReceiveTick");

	Params::BP_lanternC_PoleStableA_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

