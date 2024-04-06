#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoginVideo_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.ActiveWidget
// 0x0001 (0x0001 - 0x0000)
struct WBP_LoginVideo_PF_C_ActiveWidget final 
{
public:
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoginVideo_PF_C_ActiveWidget) == 0x000001, "Wrong alignment on WBP_LoginVideo_PF_C_ActiveWidget");
static_assert(sizeof(WBP_LoginVideo_PF_C_ActiveWidget) == 0x000001, "Wrong size on WBP_LoginVideo_PF_C_ActiveWidget");
static_assert(offsetof(WBP_LoginVideo_PF_C_ActiveWidget, CallFunc_Play_ReturnValue) == 0x000000, "Member 'WBP_LoginVideo_PF_C_ActiveWidget::CallFunc_Play_ReturnValue' has a wrong offset!");

// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.ExecuteUbergraph_WBP_LoginVideo_PF
// 0x0068 (0x0068 - 0x0000)
struct WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46CF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF) == 0x000008, "Wrong alignment on WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF");
static_assert(sizeof(WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF) == 0x000068, "Wrong size on WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF");
static_assert(offsetof(WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF, EntryPoint) == 0x000000, "Member 'WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF, K2Node_Event_MyGeometry) == 0x000020, "Member 'WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF, K2Node_Event_InDeltaTime) == 0x000060, "Member 'WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000064, "Member 'WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_LoginVideo_PF_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoginVideo_PF_C_Tick) == 0x000008, "Wrong alignment on WBP_LoginVideo_PF_C_Tick");
static_assert(sizeof(WBP_LoginVideo_PF_C_Tick) == 0x000048, "Wrong size on WBP_LoginVideo_PF_C_Tick");
static_assert(offsetof(WBP_LoginVideo_PF_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_LoginVideo_PF_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_LoginVideo_PF_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_LoginVideo_PF_C_Tick::InDeltaTime' has a wrong offset!");

}

