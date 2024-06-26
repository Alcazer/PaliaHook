#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TextButton_CM_0

#include "Basic.hpp"

#include "WBP_TextButton_CM_0_classes.hpp"
#include "WBP_TextButton_CM_0_parameters.hpp"


namespace SDK
{

// Function WBP_TextButton_CM.WBP_TextButton_CM_C.BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextButton_CM.WBP_TextButton_CM_C.BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextButton_CM.WBP_TextButton_CM_C.BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextButton_CM.WBP_TextButton_CM_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextButton_CM.WBP_TextButton_CM_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::ButtonHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "ButtonHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextButton_CM.WBP_TextButton_CM_C.ButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::ButtonUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "ButtonUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextButton_CM.WBP_TextButton_CM_C.ExecuteUbergraph_WBP_TextButton_CM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::ExecuteUbergraph_WBP_TextButton_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "ExecuteUbergraph_WBP_TextButton_CM");

	Params::WBP_TextButton_CM_C_ExecuteUbergraph_WBP_TextButton_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TextButton_CM.WBP_TextButton_CM_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "PreConstruct");

	Params::WBP_TextButton_CM_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TextButton_CM.WBP_TextButton_CM_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             New_Text                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void WBP_TextButton_CM_0::UWBP_TextButton_CM_C::SetText(class FText New_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextButton_CM_C", "SetText");

	Params::WBP_TextButton_CM_C_SetText Parms{};

	Parms.New_Text = New_Text;

	UObject::ProcessEvent(Func, &Parms);
}

}

