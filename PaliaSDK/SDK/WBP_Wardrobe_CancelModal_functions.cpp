#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Wardrobe_CancelModal

#include "Basic.hpp"

#include "WBP_Wardrobe_CancelModal_classes.hpp"
#include "WBP_Wardrobe_CancelModal_parameters.hpp"


namespace SDK
{

// Function WBP_Wardrobe_CancelModal.WBP_Wardrobe_CancelModal_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Wardrobe_CancelModal_C::OnConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Wardrobe_CancelModal_C", "OnConfirm__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Wardrobe_CancelModal.WBP_Wardrobe_CancelModal_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Wardrobe_CancelModal_C::OnCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Wardrobe_CancelModal_C", "OnCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Wardrobe_CancelModal.WBP_Wardrobe_CancelModal_C.ExecuteUbergraph_WBP_Wardrobe_CancelModal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Wardrobe_CancelModal_C::ExecuteUbergraph_WBP_Wardrobe_CancelModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Wardrobe_CancelModal_C", "ExecuteUbergraph_WBP_Wardrobe_CancelModal");

	Params::WBP_Wardrobe_CancelModal_C_ExecuteUbergraph_WBP_Wardrobe_CancelModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Wardrobe_CancelModal.WBP_Wardrobe_CancelModal_C.CloseSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Wardrobe_CancelModal_C::CloseSelf(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Wardrobe_CancelModal_C", "CloseSelf");

	Params::WBP_Wardrobe_CancelModal_C_CloseSelf Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Wardrobe_CancelModal.WBP_Wardrobe_CancelModal_C.BndEvt__WBP_CharacterRespecConfirmation_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_1_Cancel__DelegateSignature
// (BlueprintEvent)

void UWBP_Wardrobe_CancelModal_C::BndEvt__WBP_CharacterRespecConfirmation_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_1_Cancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Wardrobe_CancelModal_C", "BndEvt__WBP_CharacterRespecConfirmation_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_1_Cancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Wardrobe_CancelModal.WBP_Wardrobe_CancelModal_C.BndEvt__WBP_CharacterRespecConfirmation_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature
// (BlueprintEvent)

void UWBP_Wardrobe_CancelModal_C::BndEvt__WBP_CharacterRespecConfirmation_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Wardrobe_CancelModal_C", "BndEvt__WBP_CharacterRespecConfirmation_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

