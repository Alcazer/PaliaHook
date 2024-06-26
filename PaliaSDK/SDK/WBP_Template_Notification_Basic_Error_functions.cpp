#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_Notification_Basic_Error

#include "Basic.hpp"

#include "WBP_Template_Notification_Basic_Error_classes.hpp"
#include "WBP_Template_Notification_Basic_Error_parameters.hpp"


namespace SDK
{

// Function WBP_Template_Notification_Basic_Error.WBP_Template_Notification_Basic_Error_C.AnimateAndDismiss
// (BlueprintCallable, BlueprintEvent)

void UWBP_Template_Notification_Basic_Error_C::AnimateAndDismiss()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Template_Notification_Basic_Error_C", "AnimateAndDismiss");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Template_Notification_Basic_Error.WBP_Template_Notification_Basic_Error_C.ExecuteUbergraph_WBP_Template_Notification_Basic_Error
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_CreatePlayAnimationProxyObject_Result         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Template_Notification_Basic_Error_C::ExecuteUbergraph_WBP_Template_Notification_Basic_Error(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Template_Notification_Basic_Error_C", "ExecuteUbergraph_WBP_Template_Notification_Basic_Error");

	Params::WBP_Template_Notification_Basic_Error_C_ExecuteUbergraph_WBP_Template_Notification_Basic_Error Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Template_Notification_Basic_Error.WBP_Template_Notification_Basic_Error_C.Finished_D92811094EBDE830D1BEA4885A7CEAE2
// (BlueprintCallable, BlueprintEvent)

void UWBP_Template_Notification_Basic_Error_C::Finished_D92811094EBDE830D1BEA4885A7CEAE2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Template_Notification_Basic_Error_C", "Finished_D92811094EBDE830D1BEA4885A7CEAE2");

	UObject::ProcessEvent(Func, nullptr);
}

}

