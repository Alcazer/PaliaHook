#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EmoteSelectedTip_CM

#include "Basic.hpp"

#include "WBP_EmoteSelectedTip_CM_classes.hpp"
#include "WBP_EmoteSelectedTip_CM_parameters.hpp"


namespace SDK
{

// Function WBP_EmoteSelectedTip_CM.WBP_EmoteSelectedTip_CM_C.SetFocusTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonInputSubsystem*            CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ECommonInputType                        CallFunc_GetCurrentInputType_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmoteSelectedTip_CM_C::SetFocusTip(class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmoteSelectedTip_CM_C", "SetFocusTip");

	Params::WBP_EmoteSelectedTip_CM_C_SetFocusTip Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

