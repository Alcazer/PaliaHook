#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MinigameQTEInput2

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_MinigameQTEInput2.WBP_MinigameQTEInput2_C.ExecuteUbergraph_WBP_MinigameQTEInput2
// 0x0004 (0x0004 - 0x0000)
struct WBP_MinigameQTEInput2_C_ExecuteUbergraph_WBP_MinigameQTEInput2 final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTEInput2_C_ExecuteUbergraph_WBP_MinigameQTEInput2) == 0x000004, "Wrong alignment on WBP_MinigameQTEInput2_C_ExecuteUbergraph_WBP_MinigameQTEInput2");
static_assert(sizeof(WBP_MinigameQTEInput2_C_ExecuteUbergraph_WBP_MinigameQTEInput2) == 0x000004, "Wrong size on WBP_MinigameQTEInput2_C_ExecuteUbergraph_WBP_MinigameQTEInput2");
static_assert(offsetof(WBP_MinigameQTEInput2_C_ExecuteUbergraph_WBP_MinigameQTEInput2, EntryPoint) == 0x000000, "Member 'WBP_MinigameQTEInput2_C_ExecuteUbergraph_WBP_MinigameQTEInput2::EntryPoint' has a wrong offset!");

// Function WBP_MinigameQTEInput2.WBP_MinigameQTEInput2_C.ForcePosition
// 0x0030 (0x0030 - 0x0000)
struct WBP_MinigameQTEInput2_C_ForcePosition final 
{
public:
	double                                        NormalizedTime;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTEInput2_C_ForcePosition) == 0x000008, "Wrong alignment on WBP_MinigameQTEInput2_C_ForcePosition");
static_assert(sizeof(WBP_MinigameQTEInput2_C_ForcePosition) == 0x000030, "Wrong size on WBP_MinigameQTEInput2_C_ForcePosition");
static_assert(offsetof(WBP_MinigameQTEInput2_C_ForcePosition, NormalizedTime) == 0x000000, "Member 'WBP_MinigameQTEInput2_C_ForcePosition::NormalizedTime' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_ForcePosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_MinigameQTEInput2_C_ForcePosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_ForcePosition, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_MinigameQTEInput2_C_ForcePosition::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_ForcePosition, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_MinigameQTEInput2_C_ForcePosition::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_ForcePosition, CallFunc_MakeVector2D_ReturnValue) == 0x000020, "Member 'WBP_MinigameQTEInput2_C_ForcePosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_MinigameQTEInput2.WBP_MinigameQTEInput2_C.SetPositionByTime
// 0x0048 (0x0048 - 0x0000)
struct WBP_MinigameQTEInput2_C_SetPositionByTime final 
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C0F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTEInput2_C_SetPositionByTime) == 0x000008, "Wrong alignment on WBP_MinigameQTEInput2_C_SetPositionByTime");
static_assert(sizeof(WBP_MinigameQTEInput2_C_SetPositionByTime) == 0x000048, "Wrong size on WBP_MinigameQTEInput2_C_SetPositionByTime");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetPositionByTime, Time) == 0x000000, "Member 'WBP_MinigameQTEInput2_C_SetPositionByTime::Time' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetPositionByTime, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_MinigameQTEInput2_C_SetPositionByTime::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetPositionByTime, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'WBP_MinigameQTEInput2_C_SetPositionByTime::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetPositionByTime, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_MinigameQTEInput2_C_SetPositionByTime::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetPositionByTime, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_MinigameQTEInput2_C_SetPositionByTime::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetPositionByTime, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_MinigameQTEInput2_C_SetPositionByTime::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetPositionByTime, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_MinigameQTEInput2_C_SetPositionByTime::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetPositionByTime, CallFunc_MakeVector2D_ReturnValue) == 0x000038, "Member 'WBP_MinigameQTEInput2_C_SetPositionByTime::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_MinigameQTEInput2.WBP_MinigameQTEInput2_C.SetWindowSize
// 0x0018 (0x0018 - 0x0000)
struct WBP_MinigameQTEInput2_C_SetWindowSize final 
{
public:
	double                                        WindowSize;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTEInput2_C_SetWindowSize) == 0x000008, "Wrong alignment on WBP_MinigameQTEInput2_C_SetWindowSize");
static_assert(sizeof(WBP_MinigameQTEInput2_C_SetWindowSize) == 0x000018, "Wrong size on WBP_MinigameQTEInput2_C_SetWindowSize");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetWindowSize, WindowSize) == 0x000000, "Member 'WBP_MinigameQTEInput2_C_SetWindowSize::WindowSize' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_SetWindowSize, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'WBP_MinigameQTEInput2_C_SetWindowSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_MinigameQTEInput2.WBP_MinigameQTEInput2_C.Start
// 0x0048 (0x0048 - 0x0000)
struct WBP_MinigameQTEInput2_C_Start final 
{
public:
	double                                        Param_StartTime;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetTime;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Param_StartX;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetX;                                           // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Param_EndTime;                                     // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Param_PositionY;                                   // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MinigameQTEInput2_C_Start) == 0x000008, "Wrong alignment on WBP_MinigameQTEInput2_C_Start");
static_assert(sizeof(WBP_MinigameQTEInput2_C_Start) == 0x000048, "Wrong size on WBP_MinigameQTEInput2_C_Start");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, Param_StartTime) == 0x000000, "Member 'WBP_MinigameQTEInput2_C_Start::Param_StartTime' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, TargetTime) == 0x000008, "Member 'WBP_MinigameQTEInput2_C_Start::TargetTime' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, Param_StartX) == 0x000010, "Member 'WBP_MinigameQTEInput2_C_Start::Param_StartX' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, TargetX) == 0x000018, "Member 'WBP_MinigameQTEInput2_C_Start::TargetX' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, Param_EndTime) == 0x000020, "Member 'WBP_MinigameQTEInput2_C_Start::Param_EndTime' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, Param_PositionY) == 0x000028, "Member 'WBP_MinigameQTEInput2_C_Start::Param_PositionY' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_MinigameQTEInput2_C_Start::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'WBP_MinigameQTEInput2_C_Start::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MinigameQTEInput2_C_Start, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000040, "Member 'WBP_MinigameQTEInput2_C_Start::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

