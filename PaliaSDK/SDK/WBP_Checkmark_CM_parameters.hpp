#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Checkmark_CM

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Checkmark_CM.WBP_Checkmark_CM_C.ExecuteUbergraph_WBP_Checkmark_CM
// 0x0008 (0x0008 - 0x0000)
struct WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM) == 0x000004, "Wrong alignment on WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM");
static_assert(sizeof(WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM) == 0x000008, "Wrong size on WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM");
static_assert(offsetof(WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM, EntryPoint) == 0x000000, "Member 'WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_Checkmark_CM_C_ExecuteUbergraph_WBP_Checkmark_CM::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_Checkmark_CM.WBP_Checkmark_CM_C.OnCheckedStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_Checkmark_CM_C_OnCheckedStateChanged__DelegateSignature final 
{
public:
	bool                                          Param_Checked;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkmark_CM_C_OnCheckedStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_Checkmark_CM_C_OnCheckedStateChanged__DelegateSignature");
static_assert(sizeof(WBP_Checkmark_CM_C_OnCheckedStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_Checkmark_CM_C_OnCheckedStateChanged__DelegateSignature");
static_assert(offsetof(WBP_Checkmark_CM_C_OnCheckedStateChanged__DelegateSignature, Param_Checked) == 0x000000, "Member 'WBP_Checkmark_CM_C_OnCheckedStateChanged__DelegateSignature::Param_Checked' has a wrong offset!");

// Function WBP_Checkmark_CM.WBP_Checkmark_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Checkmark_CM_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkmark_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Checkmark_CM_C_PreConstruct");
static_assert(sizeof(WBP_Checkmark_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_Checkmark_CM_C_PreConstruct");
static_assert(offsetof(WBP_Checkmark_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Checkmark_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Checkmark_CM.WBP_Checkmark_CM_C.PressCheckmark
// 0x0008 (0x0008 - 0x0000)
struct WBP_Checkmark_CM_C_PressCheckmark final 
{
public:
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkmark_CM_C_PressCheckmark) == 0x000004, "Wrong alignment on WBP_Checkmark_CM_C_PressCheckmark");
static_assert(sizeof(WBP_Checkmark_CM_C_PressCheckmark) == 0x000008, "Wrong size on WBP_Checkmark_CM_C_PressCheckmark");
static_assert(offsetof(WBP_Checkmark_CM_C_PressCheckmark, CallFunc_AkEventGlobal_ReturnValue) == 0x000000, "Member 'WBP_Checkmark_CM_C_PressCheckmark::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Checkmark_CM_C_PressCheckmark, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WBP_Checkmark_CM_C_PressCheckmark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_Checkmark_CM.WBP_Checkmark_CM_C.SetCheckedState
// 0x0002 (0x0002 - 0x0000)
struct WBP_Checkmark_CM_C_SetCheckedState final 
{
public:
	bool                                          Param_Checked;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallStateChangedEvent;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkmark_CM_C_SetCheckedState) == 0x000001, "Wrong alignment on WBP_Checkmark_CM_C_SetCheckedState");
static_assert(sizeof(WBP_Checkmark_CM_C_SetCheckedState) == 0x000002, "Wrong size on WBP_Checkmark_CM_C_SetCheckedState");
static_assert(offsetof(WBP_Checkmark_CM_C_SetCheckedState, Param_Checked) == 0x000000, "Member 'WBP_Checkmark_CM_C_SetCheckedState::Param_Checked' has a wrong offset!");
static_assert(offsetof(WBP_Checkmark_CM_C_SetCheckedState, CallStateChangedEvent) == 0x000001, "Member 'WBP_Checkmark_CM_C_SetCheckedState::CallStateChangedEvent' has a wrong offset!");

// Function WBP_Checkmark_CM.WBP_Checkmark_CM_C.UpdateStyle
// 0x0010 (0x0010 - 0x0000)
struct WBP_Checkmark_CM_C_UpdateStyle final 
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FDD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonButtonStyle>         K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Checkmark_CM_C_UpdateStyle) == 0x000008, "Wrong alignment on WBP_Checkmark_CM_C_UpdateStyle");
static_assert(sizeof(WBP_Checkmark_CM_C_UpdateStyle) == 0x000010, "Wrong size on WBP_Checkmark_CM_C_UpdateStyle");
static_assert(offsetof(WBP_Checkmark_CM_C_UpdateStyle, Temp_bool_Variable) == 0x000000, "Member 'WBP_Checkmark_CM_C_UpdateStyle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Checkmark_CM_C_UpdateStyle, K2Node_Select_Default) == 0x000008, "Member 'WBP_Checkmark_CM_C_UpdateStyle::K2Node_Select_Default' has a wrong offset!");

}

