#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_Button_IconTertiary_01_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Template_Button_IconTertiary_01_CM.WBP_Template_Button_IconTertiary_01_CM_C.ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM
// 0x0010 (0x0010 - 0x0000)
struct WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsShow;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D47[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostGlobalEvent_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostGlobalEvent_ReturnValue_1;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM) == 0x000004, "Wrong alignment on WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM");
static_assert(sizeof(WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM) == 0x000010, "Wrong size on WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM, EntryPoint) == 0x000000, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM, K2Node_Event_bIsShow) == 0x000004, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM::K2Node_Event_bIsShow' has a wrong offset!");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM, CallFunc_PostGlobalEvent_ReturnValue) == 0x000008, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM::CallFunc_PostGlobalEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM, CallFunc_PostGlobalEvent_ReturnValue_1) == 0x00000C, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM::CallFunc_PostGlobalEvent_ReturnValue_1' has a wrong offset!");

// Function WBP_Template_Button_IconTertiary_01_CM.WBP_Template_Button_IconTertiary_01_CM_C.OnFocused__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Template_Button_IconTertiary_01_CM_C_OnFocused__DelegateSignature final 
{
public:
	class UWidget*                                FocusWidget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocused__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Template_Button_IconTertiary_01_CM_C_OnFocused__DelegateSignature");
static_assert(sizeof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocused__DelegateSignature) == 0x000008, "Wrong size on WBP_Template_Button_IconTertiary_01_CM_C_OnFocused__DelegateSignature");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocused__DelegateSignature, FocusWidget) == 0x000000, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_OnFocused__DelegateSignature::FocusWidget' has a wrong offset!");

// Function WBP_Template_Button_IconTertiary_01_CM.WBP_Template_Button_IconTertiary_01_CM_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_Template_Button_IconTertiary_01_CM.WBP_Template_Button_IconTertiary_01_CM_C.ShowFocusTip
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_Button_IconTertiary_01_CM_C_ShowFocusTip final 
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_Button_IconTertiary_01_CM_C_ShowFocusTip) == 0x000001, "Wrong alignment on WBP_Template_Button_IconTertiary_01_CM_C_ShowFocusTip");
static_assert(sizeof(WBP_Template_Button_IconTertiary_01_CM_C_ShowFocusTip) == 0x000001, "Wrong size on WBP_Template_Button_IconTertiary_01_CM_C_ShowFocusTip");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_ShowFocusTip, bIsShow) == 0x000000, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_ShowFocusTip::bIsShow' has a wrong offset!");

// Function WBP_Template_Button_IconTertiary_01_CM.WBP_Template_Button_IconTertiary_01_CM_C.IsEmpty
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_Button_IconTertiary_01_CM_C_IsEmpty final 
{
public:
	bool                                          bIsEmpty;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_Button_IconTertiary_01_CM_C_IsEmpty) == 0x000001, "Wrong alignment on WBP_Template_Button_IconTertiary_01_CM_C_IsEmpty");
static_assert(sizeof(WBP_Template_Button_IconTertiary_01_CM_C_IsEmpty) == 0x000001, "Wrong size on WBP_Template_Button_IconTertiary_01_CM_C_IsEmpty");
static_assert(offsetof(WBP_Template_Button_IconTertiary_01_CM_C_IsEmpty, bIsEmpty) == 0x000000, "Member 'WBP_Template_Button_IconTertiary_01_CM_C_IsEmpty::bIsEmpty' has a wrong offset!");

}

