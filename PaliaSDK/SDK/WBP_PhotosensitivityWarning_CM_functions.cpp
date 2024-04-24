#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PhotosensitivityWarning_CM

#include "Basic.hpp"

#include "WBP_PhotosensitivityWarning_CM_classes.hpp"
#include "WBP_PhotosensitivityWarning_CM_parameters.hpp"


namespace SDK
{

// Function WBP_PhotosensitivityWarning_CM.WBP_PhotosensitivityWarning_CM_C.BndEvt__WBP_PhotosensitivityWarning_CM_WBP_Template_PopupSimple_01_CM_37_K2Node_ComponentBoundEvent_1_PrimaryButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_PhotosensitivityWarning_CM_C::BndEvt__WBP_PhotosensitivityWarning_CM_WBP_Template_PopupSimple_01_CM_37_K2Node_ComponentBoundEvent_1_PrimaryButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhotosensitivityWarning_CM_C", "BndEvt__WBP_PhotosensitivityWarning_CM_WBP_Template_PopupSimple_01_CM_37_K2Node_ComponentBoundEvent_1_PrimaryButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PhotosensitivityWarning_CM.WBP_PhotosensitivityWarning_CM_C.ExecuteUbergraph_WBP_PhotosensitivityWarning_CM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotosensitivityWarning_CM_C::ExecuteUbergraph_WBP_PhotosensitivityWarning_CM(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhotosensitivityWarning_CM_C", "ExecuteUbergraph_WBP_PhotosensitivityWarning_CM");

	Params::WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhotosensitivityWarning_CM.WBP_PhotosensitivityWarning_CM_C.OnContinueClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PhotosensitivityWarning_CM_C::OnContinueClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhotosensitivityWarning_CM_C", "OnContinueClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
