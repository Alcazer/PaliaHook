#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Base_Head

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function ABP_Base_Head.ABP_Base_Head_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Base_Head_C_AnimGraph final 
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Base_Head_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Base_Head_C_AnimGraph");
static_assert(sizeof(ABP_Base_Head_C_AnimGraph) == 0x000010, "Wrong size on ABP_Base_Head_C_AnimGraph");
static_assert(offsetof(ABP_Base_Head_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Base_Head_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Base_Head.ABP_Base_Head_C.BlueprintThreadSafeUpdateAnimation
// 0x0018 (0x0018 - 0x0000)
struct ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation final 
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation) == 0x000008, "Wrong alignment on ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation) == 0x000018, "Wrong size on ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation, CallFunc_VSize_ReturnValue) == 0x000008, "Member 'ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation, CallFunc_VSize_ReturnValue_1) == 0x000010, "Member 'ABP_Base_Head_C_BlueprintThreadSafeUpdateAnimation::CallFunc_VSize_ReturnValue_1' has a wrong offset!");

// Function ABP_Base_Head.ABP_Base_Head_C.ExecuteUbergraph_ABP_Base_Head
// 0x0030 (0x0030 - 0x0000)
struct ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaVillagerCharacter*              K2Node_DynamicCast_AsValeria_Villager_Character;   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head) == 0x000008, "Wrong alignment on ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head");
static_assert(sizeof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head) == 0x000030, "Wrong size on ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head");
static_assert(offsetof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head, EntryPoint) == 0x000000, "Member 'ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head, CallFunc_GetValeriaCharacter_OutResult) == 0x000004, "Member 'ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000008, "Member 'ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000018, "Member 'ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head, K2Node_DynamicCast_AsValeria_Villager_Character) == 0x000020, "Member 'ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head::K2Node_DynamicCast_AsValeria_Villager_Character' has a wrong offset!");
static_assert(offsetof(ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ABP_Base_Head_C_ExecuteUbergraph_ABP_Base_Head::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

