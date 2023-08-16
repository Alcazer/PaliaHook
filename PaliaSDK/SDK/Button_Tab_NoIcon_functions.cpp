#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Button_Tab_NoIcon.Button_Tab_NoIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_Tab_NoIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_Tab_NoIcon_C", "PreConstruct");

	Params::UButton_Tab_NoIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_Tab_NoIcon.Button_Tab_NoIcon_C.SetIsActiveTabButton
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_Tab_NoIcon_C::SetIsActiveTabButton(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_Tab_NoIcon_C", "SetIsActiveTabButton");

	Params::UButton_Tab_NoIcon_C_SetIsActiveTabButton_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_Tab_NoIcon.Button_Tab_NoIcon_C.ExecuteUbergraph_Button_Tab_NoIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsActive                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_ButtonStyle*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UButton_Tab_NoIcon_C::ExecuteUbergraph_Button_Tab_NoIcon(int32 EntryPoint, bool K2Node_Event_bIsActive, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, class UVALUI_ButtonStyle* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_Tab_NoIcon_C", "ExecuteUbergraph_Button_Tab_NoIcon");

	Params::UButton_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsActive = K2Node_Event_bIsActive;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
