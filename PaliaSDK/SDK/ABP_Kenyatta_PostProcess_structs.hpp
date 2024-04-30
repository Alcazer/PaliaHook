#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Kenyatta_PostProcess

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Kenyatta_PostProcess.ABP_Kenyatta_PostProcess_C.AnimBlueprintGeneratedConstantData
// 0x00CF (0x00D0 - 0x0001)
struct ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData final  : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_4766[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_13;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_14;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4767[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_15;                               // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
};
static_assert(alignof(ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData) == 0x0000D0, "Wrong size on ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData, __NameProperty_13) == 0x000004, "Member 'ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData::__NameProperty_13' has a wrong offset!");
static_assert(offsetof(ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData, __NameProperty_14) == 0x00000C, "Member 'ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData::__NameProperty_14' has a wrong offset!");
static_assert(offsetof(ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData, __StructProperty_15) == 0x000018, "Member 'ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData::__StructProperty_15' has a wrong offset!");
static_assert(offsetof(ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'ABP_Kenyatta_PostProcess::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

