#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Jina_PostProcess

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Jina_PostProcess.ABP_Jina_PostProcess_C.AnimBlueprintGeneratedConstantData
// 0x00CF (0x00D0 - 0x0001)
struct ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData final  : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_50CC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_28;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_29;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50CD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_30;                               // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
};
static_assert(alignof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData) == 0x0000D0, "Wrong size on ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData, __NameProperty_28) == 0x000004, "Member 'ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData::__NameProperty_28' has a wrong offset!");
static_assert(offsetof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData, __NameProperty_29) == 0x00000C, "Member 'ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData::__NameProperty_29' has a wrong offset!");
static_assert(offsetof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData, __StructProperty_30) == 0x000018, "Member 'ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData::__StructProperty_30' has a wrong offset!");
static_assert(offsetof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'ABP_Jina_PostProcess::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_Jina_PostProcess.ABP_Jina_PostProcess_C.AnimBlueprintGeneratedMutableData
// 0x0000 (0x0001 - 0x0001)
struct ABP_Jina_PostProcess::FAnimBlueprintGeneratedMutableData final  : public FAnimBlueprintMutableData
{
};
static_assert(alignof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ABP_Jina_PostProcess::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Jina_PostProcess::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong size on ABP_Jina_PostProcess::FAnimBlueprintGeneratedMutableData");

}

