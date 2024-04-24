#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GPPopup_AnchoredPopup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_GPPopup_AnchoredPopup.WBP_GPPopup_AnchoredPopup_C.BP_OnHandleBackAction
// 0x0001 (0x0001 - 0x0000)
struct WBP_GPPopup_AnchoredPopup_C_BP_OnHandleBackAction final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GPPopup_AnchoredPopup_C_BP_OnHandleBackAction) == 0x000001, "Wrong alignment on WBP_GPPopup_AnchoredPopup_C_BP_OnHandleBackAction");
static_assert(sizeof(WBP_GPPopup_AnchoredPopup_C_BP_OnHandleBackAction) == 0x000001, "Wrong size on WBP_GPPopup_AnchoredPopup_C_BP_OnHandleBackAction");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_BP_OnHandleBackAction, ReturnValue) == 0x000000, "Member 'WBP_GPPopup_AnchoredPopup_C_BP_OnHandleBackAction::ReturnValue' has a wrong offset!");

// Function WBP_GPPopup_AnchoredPopup.WBP_GPPopup_AnchoredPopup_C.ExecuteUbergraph_WBP_GPPopup_AnchoredPopup
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_AnchoredPopupType*                 K2Node_DynamicCast_AsAnchored_Modal_Type;          // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVAL_DismissGameAction*                 K2Node_DynamicCast_AsGameplay_Action;              // 0x0050(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECC[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_KeypressTimeoutDismiss*            K2Node_DynamicCast_AsTimeout_or_Keypress;          // 0x0060(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECD[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue; // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECE[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_DismissTimerDuration_ImplicitCast; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup) == 0x000008, "Wrong alignment on WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup");
static_assert(sizeof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup) == 0x0000B0, "Wrong size on WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, EntryPoint) == 0x000000, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_DynamicCast_AsAnchored_Modal_Type) == 0x000008, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_DynamicCast_AsAnchored_Modal_Type' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_Event_MyGeometry) == 0x000014, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_DynamicCast_AsGameplay_Action) == 0x000050, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_DynamicCast_AsGameplay_Action' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_DynamicCast_AsTimeout_or_Keypress) == 0x000060, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_DynamicCast_AsTimeout_or_Keypress' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue) == 0x00006C, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000070, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000088, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000090, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, K2Node_VariableSet_DismissTimerDuration_ImplicitCast) == 0x000098, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::K2Node_VariableSet_DismissTimerDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000A0, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000A8, "Member 'WBP_GPPopup_AnchoredPopup_C_ExecuteUbergraph_WBP_GPPopup_AnchoredPopup::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_GPPopup_AnchoredPopup.WBP_GPPopup_AnchoredPopup_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_GPPopup_AnchoredPopup_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GPPopup_AnchoredPopup_C_Tick) == 0x000004, "Wrong alignment on WBP_GPPopup_AnchoredPopup_C_Tick");
static_assert(sizeof(WBP_GPPopup_AnchoredPopup_C_Tick) == 0x00003C, "Wrong size on WBP_GPPopup_AnchoredPopup_C_Tick");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_GPPopup_AnchoredPopup_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GPPopup_AnchoredPopup_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_GPPopup_AnchoredPopup_C_Tick::InDeltaTime' has a wrong offset!");

}
