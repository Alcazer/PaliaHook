#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GoldCapWarning

#include "Basic.hpp"

#include "WBP_GoldCapWarning_classes.hpp"
#include "WBP_GoldCapWarning_parameters.hpp"


namespace SDK
{

// Function WBP_GoldCapWarning.WBP_GoldCapWarning_C.ExecuteUbergraph_WBP_GoldCapWarning
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                      K2Node_Event_InFocusEvent                              (NoDestructor)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// struct FPointerEvent                    K2Node_Event_MouseEvent_1                              (ConstParm)
// struct FPointerEvent                    K2Node_Event_MouseEvent                                (ConstParm)

void UWBP_GoldCapWarning_C::ExecuteUbergraph_WBP_GoldCapWarning(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldCapWarning_C", "ExecuteUbergraph_WBP_GoldCapWarning");

	Params::WBP_GoldCapWarning_C_ExecuteUbergraph_WBP_GoldCapWarning Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent = std::move(K2Node_Event_InFocusEvent);
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_MouseEvent_1 = std::move(K2Node_Event_MouseEvent_1);
	Parms.K2Node_Event_MouseEvent = std::move(K2Node_Event_MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GoldCapWarning.WBP_GoldCapWarning_C.MakeTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_BasicTooltip_C*              Param_ToolTipWidget                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_BasicTooltip_C*              CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_MakeLiteralText_ReturnValue                   ()

class UUserWidget* UWBP_GoldCapWarning_C::MakeTooltipWidget(class UWBP_BasicTooltip_C* Param_ToolTipWidget, class UWBP_BasicTooltip_C* CallFunc_Create_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldCapWarning_C", "MakeTooltipWidget");

	Params::WBP_GoldCapWarning_C_MakeTooltipWidget Parms{};

	Parms.Param_ToolTipWidget = Param_ToolTipWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GoldCapWarning.WBP_GoldCapWarning_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_GoldCapWarning_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldCapWarning_C", "OnFocusLost");

	Params::WBP_GoldCapWarning_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GoldCapWarning.WBP_GoldCapWarning_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_GoldCapWarning_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldCapWarning_C", "OnFocusReceived");

	Params::WBP_GoldCapWarning_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GoldCapWarning.WBP_GoldCapWarning_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GoldCapWarning_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldCapWarning_C", "OnMouseEnter");

	Params::WBP_GoldCapWarning_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GoldCapWarning.WBP_GoldCapWarning_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GoldCapWarning_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldCapWarning_C", "OnMouseLeave");

	Params::WBP_GoldCapWarning_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GoldCapWarning.WBP_GoldCapWarning_C.UpdateVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TotalItemValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsVisible                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVitalsComponent*                 CallFunc_GetVitals_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetVitalMax_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetVital_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GoldCapWarning_C::UpdateVisibility(int32 TotalItemValue, bool* Param_IsVisible, bool Visible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UVitalsComponent* CallFunc_GetVitals_ReturnValue, ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetVitalMax_ReturnValue, int32 CallFunc_GetVital_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GoldCapWarning_C", "UpdateVisibility");

	Params::WBP_GoldCapWarning_C_UpdateVisibility Parms{};

	Parms.TotalItemValue = TotalItemValue;
	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetVitals_ReturnValue = CallFunc_GetVitals_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetVitalMax_ReturnValue = CallFunc_GetVitalMax_ReturnValue;
	Parms.CallFunc_GetVital_ReturnValue = CallFunc_GetVital_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsVisible != nullptr)
		*Param_IsVisible = Parms.Param_IsVisible;
}

}

