#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Kenyatta_PostProcess

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Kenyatta_PostProcess.ABP_Kenyatta_PostProcess_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct ABP_Kenyatta_PostProcess_C_AnimGraph final 
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Kenyatta_PostProcess_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Kenyatta_PostProcess_C_AnimGraph");
static_assert(sizeof(ABP_Kenyatta_PostProcess_C_AnimGraph) == 0x000020, "Wrong size on ABP_Kenyatta_PostProcess_C_AnimGraph");
static_assert(offsetof(ABP_Kenyatta_PostProcess_C_AnimGraph, InPose) == 0x000000, "Member 'ABP_Kenyatta_PostProcess_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(ABP_Kenyatta_PostProcess_C_AnimGraph, Param_AnimGraph) == 0x000010, "Member 'ABP_Kenyatta_PostProcess_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Kenyatta_PostProcess.ABP_Kenyatta_PostProcess_C.ExecuteUbergraph_ABP_Kenyatta_PostProcess
// 0x0004 (0x0004 - 0x0000)
struct ABP_Kenyatta_PostProcess_C_ExecuteUbergraph_ABP_Kenyatta_PostProcess final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Kenyatta_PostProcess_C_ExecuteUbergraph_ABP_Kenyatta_PostProcess) == 0x000004, "Wrong alignment on ABP_Kenyatta_PostProcess_C_ExecuteUbergraph_ABP_Kenyatta_PostProcess");
static_assert(sizeof(ABP_Kenyatta_PostProcess_C_ExecuteUbergraph_ABP_Kenyatta_PostProcess) == 0x000004, "Wrong size on ABP_Kenyatta_PostProcess_C_ExecuteUbergraph_ABP_Kenyatta_PostProcess");
static_assert(offsetof(ABP_Kenyatta_PostProcess_C_ExecuteUbergraph_ABP_Kenyatta_PostProcess, EntryPoint) == 0x000000, "Member 'ABP_Kenyatta_PostProcess_C_ExecuteUbergraph_ABP_Kenyatta_PostProcess::EntryPoint' has a wrong offset!");

}

