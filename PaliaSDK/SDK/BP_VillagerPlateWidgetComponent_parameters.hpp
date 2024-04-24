#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VillagerPlateWidgetComponent

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function BP_VillagerPlateWidgetComponent.BP_VillagerPlateWidgetComponent_C.ExecuteUbergraph_BP_VillagerPlateWidgetComponent
// 0x0090 (0x0090 - 0x0000)
struct BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B79[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVillagerActionInfo                    K2Node_CustomEvent_actionInfo;                     // 0x0010(0x0070)()
	class UWBP_VillagerPlate_C*                   K2Node_DynamicCast_AsWBP_Villager_Plate;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent) == 0x000008, "Wrong alignment on BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent");
static_assert(sizeof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent) == 0x000090, "Wrong size on BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent");
static_assert(offsetof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent, EntryPoint) == 0x000000, "Member 'BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent, K2Node_CustomEvent_actionInfo) == 0x000010, "Member 'BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent::K2Node_CustomEvent_actionInfo' has a wrong offset!");
static_assert(offsetof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent, K2Node_DynamicCast_AsWBP_Villager_Plate) == 0x000080, "Member 'BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent::K2Node_DynamicCast_AsWBP_Villager_Plate' has a wrong offset!");
static_assert(offsetof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent, CallFunc_TextIsEmpty_ReturnValue) == 0x000089, "Member 'BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent, CallFunc_Not_PreBool_ReturnValue) == 0x00008A, "Member 'BP_VillagerPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerPlateWidgetComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_VillagerPlateWidgetComponent.BP_VillagerPlateWidgetComponent_C.SetCurrentActionForWidgetComp
// 0x0070 (0x0070 - 0x0000)
struct BP_VillagerPlateWidgetComponent_C_SetCurrentActionForWidgetComp final 
{
public:
	struct FVillagerActionInfo                    ActionInfo;                                        // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_VillagerPlateWidgetComponent_C_SetCurrentActionForWidgetComp) == 0x000008, "Wrong alignment on BP_VillagerPlateWidgetComponent_C_SetCurrentActionForWidgetComp");
static_assert(sizeof(BP_VillagerPlateWidgetComponent_C_SetCurrentActionForWidgetComp) == 0x000070, "Wrong size on BP_VillagerPlateWidgetComponent_C_SetCurrentActionForWidgetComp");
static_assert(offsetof(BP_VillagerPlateWidgetComponent_C_SetCurrentActionForWidgetComp, ActionInfo) == 0x000000, "Member 'BP_VillagerPlateWidgetComponent_C_SetCurrentActionForWidgetComp::ActionInfo' has a wrong offset!");

}

