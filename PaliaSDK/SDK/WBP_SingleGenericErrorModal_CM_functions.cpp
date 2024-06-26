#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SingleGenericErrorModal_CM

#include "Basic.hpp"

#include "WBP_SingleGenericErrorModal_CM_classes.hpp"
#include "WBP_SingleGenericErrorModal_CM_parameters.hpp"


namespace SDK
{

// Function WBP_SingleGenericErrorModal_CM.WBP_SingleGenericErrorModal_CM_C.BndEvt__WBP_SingleGenericErrorModal_CM_Button_Primary_Confirm_CM_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_SingleGenericErrorModal_CM_C::BndEvt__WBP_SingleGenericErrorModal_CM_Button_Primary_Confirm_CM_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SingleGenericErrorModal_CM_C", "BndEvt__WBP_SingleGenericErrorModal_CM_Button_Primary_Confirm_CM_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SingleGenericErrorModal_CM.WBP_SingleGenericErrorModal_CM_C.BndEvt__WBP_SingleGenericErrorModal_CM_WBP_Template_Button_Primary_01_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_SingleGenericErrorModal_CM_C::BndEvt__WBP_SingleGenericErrorModal_CM_WBP_Template_Button_Primary_01_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SingleGenericErrorModal_CM_C", "BndEvt__WBP_SingleGenericErrorModal_CM_WBP_Template_Button_Primary_01_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SingleGenericErrorModal_CM.WBP_SingleGenericErrorModal_CM_C.ExecuteUbergraph_WBP_SingleGenericErrorModal_CM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue            (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     Temp_object_Variable                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_0                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1_0                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_GenericErrorModalPayload      K2Node_Event_payload                                   (HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SingleGenericErrorModal_CM_C::ExecuteUbergraph_WBP_SingleGenericErrorModal_CM(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FF_GenericErrorModalPayload& K2Node_Event_payload, int32 CallFunc_AkEventGlobal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SingleGenericErrorModal_CM_C", "ExecuteUbergraph_WBP_SingleGenericErrorModal_CM");

	Params::WBP_SingleGenericErrorModal_CM_C_ExecuteUbergraph_WBP_SingleGenericErrorModal_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue = std::move(K2Node_EnhancedInputActionEvent_ActionValue);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime = K2Node_EnhancedInputActionEvent_ElapsedTime;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime = K2Node_EnhancedInputActionEvent_TriggeredTime;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction = K2Node_EnhancedInputActionEvent_SourceAction;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue = CallFunc_Conv_InputActionValueToBool_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_0 = Temp_real_Variable_0;
	Parms.Temp_real_Variable_1_0 = Temp_real_Variable_1_0;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_payload = std::move(K2Node_Event_payload);
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SingleGenericErrorModal_CM.WBP_SingleGenericErrorModal_CM_C.InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SingleGenericErrorModal_CM_C::InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SingleGenericErrorModal_CM_C", "InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_SingleGenericErrorModal_CM_C_InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SingleGenericErrorModal_CM.WBP_SingleGenericErrorModal_CM_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SingleGenericErrorModal_CM_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SingleGenericErrorModal_CM_C", "PreConstruct");

	Params::WBP_SingleGenericErrorModal_CM_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SingleGenericErrorModal_CM.WBP_SingleGenericErrorModal_CM_C.SetErrorPayload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_GenericErrorModalPayload      Param_Payload                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_SingleGenericErrorModal_CM_C::SetErrorPayload(const struct FF_GenericErrorModalPayload& Param_Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SingleGenericErrorModal_CM_C", "SetErrorPayload");

	Params::WBP_SingleGenericErrorModal_CM_C_SetErrorPayload Parms{};

	Parms.Param_Payload = std::move(Param_Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SingleGenericErrorModal_CM.WBP_SingleGenericErrorModal_CM_C.UpdateFromPayload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsWindowsPlatform_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsConsolePlatform_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*                 K2Node_DynamicCast_AsVertical_Box_Slot                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*                 K2Node_DynamicCast_AsVertical_Box_Slot_1               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                     K2Node_DynamicCast_AsOverlay_Slot                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SingleGenericErrorModal_CM_C::UpdateFromPayload(bool CallFunc_IsWindowsPlatform_ReturnValue, bool CallFunc_IsConsolePlatform_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SingleGenericErrorModal_CM_C", "UpdateFromPayload");

	Params::WBP_SingleGenericErrorModal_CM_C_UpdateFromPayload Parms{};

	Parms.CallFunc_IsWindowsPlatform_ReturnValue = CallFunc_IsWindowsPlatform_ReturnValue;
	Parms.CallFunc_IsConsolePlatform_ReturnValue = CallFunc_IsConsolePlatform_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot_1 = K2Node_DynamicCast_AsVertical_Box_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsOverlay_Slot = K2Node_DynamicCast_AsOverlay_Slot;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast = CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}

}

