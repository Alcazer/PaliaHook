#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GPPopup_QuickModal

#include "Basic.hpp"

#include "WBP_GPPopup_QuickModal_classes.hpp"
#include "WBP_GPPopup_QuickModal_parameters.hpp"


namespace SDK
{

// Function WBP_GPPopup_QuickModal.WBP_GPPopup_QuickModal_C.BndEvt__WBP_GPPopup_QuickModal_WBP_Template_Button_Primary_01_CM_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_GPPopup_QuickModal_C::BndEvt__WBP_GPPopup_QuickModal_WBP_Template_Button_Primary_01_CM_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GPPopup_QuickModal_C", "BndEvt__WBP_GPPopup_QuickModal_WBP_Template_Button_Primary_01_CM_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GPPopup_QuickModal.WBP_GPPopup_QuickModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GPPopup_QuickModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GPPopup_QuickModal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GPPopup_QuickModal.WBP_GPPopup_QuickModal_C.ExecuteUbergraph_WBP_GPPopup_QuickModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_Event_ActionValue                               (NoDestructor)
// float                                   K2Node_Event_ElapsedTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_TriggeredTime                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_Event_SourceAction                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                          CallFunc_LoadAsset_Blocking_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       K2Node_DynamicCast_AsTexture_2D                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      CallFunc_MakeBrushFromTexture_ReturnValue              ()

void UWBP_GPPopup_QuickModal_C::ExecuteUbergraph_WBP_GPPopup_QuickModal(int32 EntryPoint, const struct FInputActionValue& K2Node_Event_ActionValue, float K2Node_Event_ElapsedTime, float K2Node_Event_TriggeredTime, class UInputAction* K2Node_Event_SourceAction, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GPPopup_QuickModal_C", "ExecuteUbergraph_WBP_GPPopup_QuickModal");

	Params::WBP_GPPopup_QuickModal_C_ExecuteUbergraph_WBP_GPPopup_QuickModal Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionValue = std::move(K2Node_Event_ActionValue);
	Parms.K2Node_Event_ElapsedTime = K2Node_Event_ElapsedTime;
	Parms.K2Node_Event_TriggeredTime = K2Node_Event_TriggeredTime;
	Parms.K2Node_Event_SourceAction = K2Node_Event_SourceAction;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = std::move(CallFunc_MakeBrushFromTexture_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GPPopup_QuickModal.WBP_GPPopup_QuickModal_C.HandleInputAction_UIBack_Triggered
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GPPopup_QuickModal_C::HandleInputAction_UIBack_Triggered(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GPPopup_QuickModal_C", "HandleInputAction_UIBack_Triggered");

	Params::WBP_GPPopup_QuickModal_C_HandleInputAction_UIBack_Triggered Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}

}

