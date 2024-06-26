#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DialogueRoom

#include "Basic.hpp"

#include "BP_DialogueRoom_classes.hpp"
#include "BP_DialogueRoom_parameters.hpp"


namespace SDK
{

// Function BP_DialogueRoom.BP_DialogueRoom_C.ExecuteUbergraph_BP_DialogueRoom
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndPlayReason                          K2Node_Event_EndPlayReason                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueRoom_C::ExecuteUbergraph_BP_DialogueRoom(int32 EntryPoint, EEndPlayReason K2Node_Event_EndPlayReason, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogueRoom_C", "ExecuteUbergraph_BP_DialogueRoom");

	Params::BP_DialogueRoom_C_ExecuteUbergraph_BP_DialogueRoom Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;
	Parms.CallFunc_AkEventGlobal_ReturnValue_1 = CallFunc_AkEventGlobal_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DialogueRoom.BP_DialogueRoom_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DialogueRoom_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogueRoom_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DialogueRoom.BP_DialogueRoom_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueRoom_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DialogueRoom_C", "ReceiveEndPlay");

	Params::BP_DialogueRoom_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}

