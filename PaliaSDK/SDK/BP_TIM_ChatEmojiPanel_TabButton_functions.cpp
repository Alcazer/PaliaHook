#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TIM_ChatEmojiPanel_TabButton

#include "Basic.hpp"

#include "BP_TIM_ChatEmojiPanel_TabButton_classes.hpp"
#include "BP_TIM_ChatEmojiPanel_TabButton_parameters.hpp"


namespace SDK
{

// Function BP_TIM_ChatEmojiPanel_TabButton.BP_TIM_ChatEmojiPanel_TabButton_C.ExecuteUbergraph_BP_TIM_ChatEmojiPanel_TabButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bIsActive                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlock_Styled*          CallFunc_SpawnObject_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                       CallFunc_SetContent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_ButtonStyle*               K2Node_Select_Default                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TIM_ChatEmojiPanel_TabButton_C::ExecuteUbergraph_BP_TIM_ChatEmojiPanel_TabButton(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsActive, class UVALUI_TextBlock_Styled* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, bool Temp_bool_Variable_1, class UVALUI_ButtonStyle* K2Node_Select_Default, class UVALUI_TextBlockStyle* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TIM_ChatEmojiPanel_TabButton_C", "ExecuteUbergraph_BP_TIM_ChatEmojiPanel_TabButton");

	Params::BP_TIM_ChatEmojiPanel_TabButton_C_ExecuteUbergraph_BP_TIM_ChatEmojiPanel_TabButton Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bIsActive = K2Node_Event_bIsActive;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TIM_ChatEmojiPanel_TabButton.BP_TIM_ChatEmojiPanel_TabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TIM_ChatEmojiPanel_TabButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TIM_ChatEmojiPanel_TabButton_C", "PreConstruct");

	Params::BP_TIM_ChatEmojiPanel_TabButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TIM_ChatEmojiPanel_TabButton.BP_TIM_ChatEmojiPanel_TabButton_C.SetIsActiveTabButton
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsActive                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TIM_ChatEmojiPanel_TabButton_C::SetIsActiveTabButton(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TIM_ChatEmojiPanel_TabButton_C", "SetIsActiveTabButton");

	Params::BP_TIM_ChatEmojiPanel_TabButton_C_SetIsActiveTabButton Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}

}
