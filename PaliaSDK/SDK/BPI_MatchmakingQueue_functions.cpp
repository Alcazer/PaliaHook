#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MatchmakingQueue

#include "Basic.hpp"

#include "BPI_MatchmakingQueue_classes.hpp"
#include "BPI_MatchmakingQueue_parameters.hpp"


namespace SDK
{

// Function BPI_MatchmakingQueue.BPI_MatchmakingQueue_C.ResetQueue
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_MatchmakingQueue_C::ResetQueue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MatchmakingQueue_C", "ResetQueue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_MatchmakingQueue.BPI_MatchmakingQueue_C.UpdateNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_MatchmakingQueue_C::UpdateNumber(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MatchmakingQueue_C", "UpdateNumber");

	Params::BPI_MatchmakingQueue_C_UpdateNumber Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);
}

}

