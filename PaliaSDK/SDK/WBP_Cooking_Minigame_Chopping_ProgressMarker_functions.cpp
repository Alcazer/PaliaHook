#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigame_Chopping_ProgressMarker

#include "Basic.hpp"

#include "WBP_Cooking_Minigame_Chopping_ProgressMarker_classes.hpp"
#include "WBP_Cooking_Minigame_Chopping_ProgressMarker_parameters.hpp"


namespace SDK
{

// Function WBP_Cooking_Minigame_Chopping_ProgressMarker.WBP_Cooking_Minigame_Chopping_ProgressMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigame_Chopping_ProgressMarker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Cooking_Minigame_Chopping_ProgressMarker.WBP_Cooking_Minigame_Chopping_ProgressMarker_C.ExecuteUbergraph_WBP_Cooking_Minigame_Chopping_ProgressMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::ExecuteUbergraph_WBP_Cooking_Minigame_Chopping_ProgressMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigame_Chopping_ProgressMarker_C", "ExecuteUbergraph_WBP_Cooking_Minigame_Chopping_ProgressMarker");

	Params::WBP_Cooking_Minigame_Chopping_ProgressMarker_C_ExecuteUbergraph_WBP_Cooking_Minigame_Chopping_ProgressMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigame_Chopping_ProgressMarker.WBP_Cooking_Minigame_Chopping_ProgressMarker_C.PlaySuccessfulHitAnimationFromDelay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::PlaySuccessfulHitAnimationFromDelay(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigame_Chopping_ProgressMarker_C", "PlaySuccessfulHitAnimationFromDelay");

	Params::WBP_Cooking_Minigame_Chopping_ProgressMarker_C_PlaySuccessfulHitAnimationFromDelay Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigame_Chopping_ProgressMarker.WBP_Cooking_Minigame_Chopping_ProgressMarker_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigame_Chopping_ProgressMarker_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Cooking_Minigame_Chopping_ProgressMarker.WBP_Cooking_Minigame_Chopping_ProgressMarker_C.SuccessfulHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::SuccessfulHit(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigame_Chopping_ProgressMarker_C", "SuccessfulHit");

	Params::WBP_Cooking_Minigame_Chopping_ProgressMarker_C_SuccessfulHit Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}

}

