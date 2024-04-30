#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Kenyatta_PostProcess

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Kenyatta_PostProcess.ABP_Kenyatta_PostProcess_C
// 0x0A90 (0x0DE0 - 0x0350)
class UABP_Kenyatta_PostProcess_C final  : public UAnimInstance
{
public:
	uint8                                         Pad_4768[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	uint8                                         Pad_4769[0x8];                                     // 0x0388(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0390(0x0950)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0CE0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0D00(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0D20(0x00B8)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_Kenyatta_PostProcess(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Kenyatta_PostProcess_C">();
	}
	static class UABP_Kenyatta_PostProcess_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Kenyatta_PostProcess_C>();
	}
};
static_assert(alignof(UABP_Kenyatta_PostProcess_C) == 0x000010, "Wrong alignment on UABP_Kenyatta_PostProcess_C");
static_assert(sizeof(UABP_Kenyatta_PostProcess_C) == 0x000DE0, "Wrong size on UABP_Kenyatta_PostProcess_C");
static_assert(offsetof(UABP_Kenyatta_PostProcess_C, UberGraphFrame) == 0x000350, "Member 'UABP_Kenyatta_PostProcess_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Kenyatta_PostProcess_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UABP_Kenyatta_PostProcess_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Kenyatta_PostProcess_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UABP_Kenyatta_PostProcess_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Kenyatta_PostProcess_C, AnimGraphNode_Root) == 0x000368, "Member 'UABP_Kenyatta_PostProcess_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Kenyatta_PostProcess_C, AnimGraphNode_RigidBody) == 0x000390, "Member 'UABP_Kenyatta_PostProcess_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UABP_Kenyatta_PostProcess_C, AnimGraphNode_LocalToComponentSpace) == 0x000CE0, "Member 'UABP_Kenyatta_PostProcess_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Kenyatta_PostProcess_C, AnimGraphNode_ComponentToLocalSpace) == 0x000D00, "Member 'UABP_Kenyatta_PostProcess_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Kenyatta_PostProcess_C, AnimGraphNode_LinkedInputPose) == 0x000D20, "Member 'UABP_Kenyatta_PostProcess_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");

}

