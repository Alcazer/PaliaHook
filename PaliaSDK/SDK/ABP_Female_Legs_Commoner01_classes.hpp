#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Female_Legs_Commoner01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Female_Legs_Commoner01.ABP_Female_Legs_Commoner01_C
// 0x0190 (0x04E0 - 0x0350)
class UABP_Female_Legs_Commoner01_C final  : public UAnimInstance
{
public:
	uint8                                         Pad_5EBE[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0388(0x0158)(ContainsInstancedReference)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_Female_Legs_Commoner01(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Female_Legs_Commoner01_C">();
	}
	static class UABP_Female_Legs_Commoner01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Female_Legs_Commoner01_C>();
	}
};
static_assert(alignof(UABP_Female_Legs_Commoner01_C) == 0x000010, "Wrong alignment on UABP_Female_Legs_Commoner01_C");
static_assert(sizeof(UABP_Female_Legs_Commoner01_C) == 0x0004E0, "Wrong size on UABP_Female_Legs_Commoner01_C");
static_assert(offsetof(UABP_Female_Legs_Commoner01_C, UberGraphFrame) == 0x000350, "Member 'UABP_Female_Legs_Commoner01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Female_Legs_Commoner01_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UABP_Female_Legs_Commoner01_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Female_Legs_Commoner01_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UABP_Female_Legs_Commoner01_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Female_Legs_Commoner01_C, AnimGraphNode_Root) == 0x000368, "Member 'UABP_Female_Legs_Commoner01_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Female_Legs_Commoner01_C, AnimGraphNode_CopyPoseFromMesh) == 0x000388, "Member 'UABP_Female_Legs_Commoner01_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");

}

