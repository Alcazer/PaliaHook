#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RadioSlider_ButtonWithIconText_CM

#include "Basic.hpp"

#include "WBP_RadioSlider_ButtonWithIconText_CM_classes.hpp"
#include "WBP_RadioSlider_ButtonWithIconText_CM_parameters.hpp"


namespace SDK
{

// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.AddOptionalContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               NamedSlot                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                       CallFunc_SetContent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_SlotAsHorizontalBoxSlot_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::AddOptionalContent(class UUserWidget* Content, class UHorizontalBoxSlot** NamedSlot, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "AddOptionalContent");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_AddOptionalContent Parms{};

	Parms.Content = Content;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NamedSlot != nullptr)
		*NamedSlot = Parms.NamedSlot;
}


// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.BindIA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     IA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::BindIA(class UInputAction* IA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "BindIA");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_BindIA Parms{};

	Parms.IA = IA;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.BndEvt__WBP_RadioSlider_ButtonWithIconText_CM_Button_Root_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::BndEvt__WBP_RadioSlider_ButtonWithIconText_CM_Button_Root_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "BndEvt__WBP_RadioSlider_ButtonWithIconText_CM_Button_Root_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_BndEvt__WBP_RadioSlider_ButtonWithIconText_CM_Button_Root_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.ExecuteUbergraph_WBP_RadioSlider_ButtonWithIconText_CM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::ExecuteUbergraph_WBP_RadioSlider_ButtonWithIconText_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "ExecuteUbergraph_WBP_RadioSlider_ButtonWithIconText_CM");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_ExecuteUbergraph_WBP_RadioSlider_ButtonWithIconText_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_RadioSlider_ButtonWithIconText_CM_C*Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::OnButtonClicked__DelegateSignature(class UWBP_RadioSlider_ButtonWithIconText_CM_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "OnButtonClicked__DelegateSignature");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            InactiveStyle                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            ActiveStyle                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsConsole_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_SelectColor_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::SetActive(bool Active, class UVALUI_TextBlockStyle* InactiveStyle, class UVALUI_TextBlockStyle* ActiveStyle, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsConsole_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default, bool Temp_bool_Variable_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default_1, class UVALUI_TextBlockStyle* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "SetActive");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_SetActive Parms{};

	Parms.Active = Active;
	Parms.InactiveStyle = InactiveStyle;
	Parms.ActiveStyle = ActiveStyle;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_SelectColor_ReturnValue = std::move(CallFunc_SelectColor_ReturnValue);
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.SetIconAndText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTexture2D>        Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::SetIconAndText(class FText Text, TSoftObjectPtr<class UTexture2D> Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "SetIconAndText");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_SetIconAndText Parms{};

	Parms.Text = Text;
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.SetIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::SetIconVisibility(bool Param_IsVisible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "SetIconVisibility");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_SetIconVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C.SetNewPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                          Param_Padding                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                     CallFunc_SlotAsOverlaySlot_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioSlider_ButtonWithIconText_CM_C::SetNewPadding(const struct FMargin& Param_Padding, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RadioSlider_ButtonWithIconText_CM_C", "SetNewPadding");

	Params::WBP_RadioSlider_ButtonWithIconText_CM_C_SetNewPadding Parms{};

	Parms.Param_Padding = std::move(Param_Padding);
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}
