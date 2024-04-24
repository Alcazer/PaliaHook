#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Compass_Tick_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Compass_Tick_Base.WBP_Compass_Tick_Base_C.ExecuteUbergraph_WBP_Compass_Tick_Base
// 0x0028 (0x0028 - 0x0000)
struct WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B37[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B38[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base) == 0x000008, "Wrong alignment on WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base");
static_assert(sizeof(WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base) == 0x000028, "Wrong size on WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base");
static_assert(offsetof(WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base, EntryPoint) == 0x000000, "Member 'WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base, K2Node_Event_IsDesignTime) == 0x000010, "Member 'WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base, CallFunc_GetPosition_ReturnValue) == 0x000018, "Member 'WBP_Compass_Tick_Base_C_ExecuteUbergraph_WBP_Compass_Tick_Base::CallFunc_GetPosition_ReturnValue' has a wrong offset!");

// Function WBP_Compass_Tick_Base.WBP_Compass_Tick_Base_C.GetStartingPosition
// 0x0010 (0x0010 - 0x0000)
struct WBP_Compass_Tick_Base_C_GetStartingPosition final 
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Compass_Tick_Base_C_GetStartingPosition) == 0x000008, "Wrong alignment on WBP_Compass_Tick_Base_C_GetStartingPosition");
static_assert(sizeof(WBP_Compass_Tick_Base_C_GetStartingPosition) == 0x000010, "Wrong size on WBP_Compass_Tick_Base_C_GetStartingPosition");
static_assert(offsetof(WBP_Compass_Tick_Base_C_GetStartingPosition, Position) == 0x000000, "Member 'WBP_Compass_Tick_Base_C_GetStartingPosition::Position' has a wrong offset!");

// Function WBP_Compass_Tick_Base.WBP_Compass_Tick_Base_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Compass_Tick_Base_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Compass_Tick_Base_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Compass_Tick_Base_C_PreConstruct");
static_assert(sizeof(WBP_Compass_Tick_Base_C_PreConstruct) == 0x000001, "Wrong size on WBP_Compass_Tick_Base_C_PreConstruct");
static_assert(offsetof(WBP_Compass_Tick_Base_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Compass_Tick_Base_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

