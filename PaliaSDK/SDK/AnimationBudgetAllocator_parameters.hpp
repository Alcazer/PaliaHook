#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationBudgetAllocator

#include "Basic.hpp"

#include "AnimationBudgetAllocator_structs.hpp"


namespace SDK::Params
{

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
// 0x0010 (0x0010 - 0x0000)
struct AnimationBudgetBlueprintLibrary_EnableAnimationBudget final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E69[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AnimationBudgetBlueprintLibrary_EnableAnimationBudget) == 0x000008, "Wrong alignment on AnimationBudgetBlueprintLibrary_EnableAnimationBudget");
static_assert(sizeof(AnimationBudgetBlueprintLibrary_EnableAnimationBudget) == 0x000010, "Wrong size on AnimationBudgetBlueprintLibrary_EnableAnimationBudget");
static_assert(offsetof(AnimationBudgetBlueprintLibrary_EnableAnimationBudget, WorldContextObject) == 0x000000, "Member 'AnimationBudgetBlueprintLibrary_EnableAnimationBudget::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationBudgetBlueprintLibrary_EnableAnimationBudget, bEnabled) == 0x000008, "Member 'AnimationBudgetBlueprintLibrary_EnableAnimationBudget::bEnabled' has a wrong offset!");

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
// 0x0060 (0x0060 - 0x0000)
struct AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimationBudgetAllocatorParameters    InParameters;                                      // 0x0008(0x0058)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters) == 0x000008, "Wrong alignment on AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters");
static_assert(sizeof(AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters) == 0x000060, "Wrong size on AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters");
static_assert(offsetof(AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters, WorldContextObject) == 0x000000, "Member 'AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters, InParameters) == 0x000008, "Member 'AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters::InParameters' has a wrong offset!");

// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
// 0x0001 (0x0001 - 0x0000)
struct SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator final 
{
public:
	bool                                          bInAutoRegisterWithBudgetAllocator;                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator) == 0x000001, "Wrong alignment on SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator");
static_assert(sizeof(SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator) == 0x000001, "Wrong size on SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator");
static_assert(offsetof(SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator, bInAutoRegisterWithBudgetAllocator) == 0x000000, "Member 'SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator::bInAutoRegisterWithBudgetAllocator' has a wrong offset!");

}

