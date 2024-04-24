#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VillagerNamePlate

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_VillagerNamePlate.WBP_VillagerNamePlate_C.SetVillager
// 0x0008 (0x0008 - 0x0000)
struct WBP_VillagerNamePlate_C_SetVillager final 
{
public:
	class AValeriaVillagerCharacter*              Param_Villager;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_VillagerNamePlate_C_SetVillager) == 0x000008, "Wrong alignment on WBP_VillagerNamePlate_C_SetVillager");
static_assert(sizeof(WBP_VillagerNamePlate_C_SetVillager) == 0x000008, "Wrong size on WBP_VillagerNamePlate_C_SetVillager");
static_assert(offsetof(WBP_VillagerNamePlate_C_SetVillager, Param_Villager) == 0x000000, "Member 'WBP_VillagerNamePlate_C_SetVillager::Param_Villager' has a wrong offset!");

// Function WBP_VillagerNamePlate.WBP_VillagerNamePlate_C.ExecuteUbergraph_WBP_VillagerNamePlate
// 0x0150 (0x0150 - 0x0000)
struct WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FED[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaVillagerCharacter*              K2Node_CustomEvent_Villager;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_FindVillagerConfigById_OutResult;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FEE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVillagerConfig                        CallFunc_FindVillagerConfigById_ReturnValue;       // 0x0018(0x0130)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate) == 0x000008, "Wrong alignment on WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate");
static_assert(sizeof(WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate) == 0x000150, "Wrong size on WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate");
static_assert(offsetof(WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate, EntryPoint) == 0x000000, "Member 'WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate, K2Node_CustomEvent_Villager) == 0x000008, "Member 'WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate::K2Node_CustomEvent_Villager' has a wrong offset!");
static_assert(offsetof(WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate, CallFunc_FindVillagerConfigById_OutResult) == 0x000010, "Member 'WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate::CallFunc_FindVillagerConfigById_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate, CallFunc_FindVillagerConfigById_ReturnValue) == 0x000018, "Member 'WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate::CallFunc_FindVillagerConfigById_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate, K2Node_SwitchEnum_CmpSuccess) == 0x000148, "Member 'WBP_VillagerNamePlate_C_ExecuteUbergraph_WBP_VillagerNamePlate::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

