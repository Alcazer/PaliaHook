#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EmoteButton_CM

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_EmoteButton_CM.WBP_EmoteButton_CM_C.ExecuteUbergraph_WBP_EmoteButton_CM
// 0x0020 (0x0020 - 0x0000)
struct WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D9E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_CustomEvent_Button;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButtonBase* Button)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM) == 0x000008, "Wrong alignment on WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM");
static_assert(sizeof(WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM) == 0x000020, "Wrong size on WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM");
static_assert(offsetof(WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM, EntryPoint) == 0x000000, "Member 'WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM, K2Node_CustomEvent_Button) == 0x000008, "Member 'WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_EmoteButton_CM_C_ExecuteUbergraph_WBP_EmoteButton_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_EmoteButton_CM.WBP_EmoteButton_CM_C.OnInternalButtonClickedCM
// 0x0008 (0x0008 - 0x0000)
struct WBP_EmoteButton_CM_C_OnInternalButtonClickedCM final 
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteButton_CM_C_OnInternalButtonClickedCM) == 0x000008, "Wrong alignment on WBP_EmoteButton_CM_C_OnInternalButtonClickedCM");
static_assert(sizeof(WBP_EmoteButton_CM_C_OnInternalButtonClickedCM) == 0x000008, "Wrong size on WBP_EmoteButton_CM_C_OnInternalButtonClickedCM");
static_assert(offsetof(WBP_EmoteButton_CM_C_OnInternalButtonClickedCM, Button) == 0x000000, "Member 'WBP_EmoteButton_CM_C_OnInternalButtonClickedCM::Button' has a wrong offset!");

}
