#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Bow

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Bow.ABP_Bow_C.AnimBlueprintGeneratedConstantData
// 0x0107 (0x0108 - 0x0001)
struct ABP_Bow::FAnimBlueprintGeneratedConstantData final  : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_3CD9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_10;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_11;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDA[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_12;                                // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_13;                               // 0x0014(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_14;                                // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_15;                                 // 0x0044(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_16;                                 // 0x0045(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_17;                                 // 0x0046(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDB[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_18;                                 // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_19;                               // 0x0050(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0070(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F0(0x0018)()
};
static_assert(alignof(ABP_Bow::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Bow::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Bow::FAnimBlueprintGeneratedConstantData) == 0x000108, "Wrong size on ABP_Bow::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __NameProperty_10) == 0x000004, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__NameProperty_10' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __BoolProperty_11) == 0x00000C, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__BoolProperty_11' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __FloatProperty_12) == 0x000010, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__FloatProperty_12' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __StructProperty_13) == 0x000014, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__StructProperty_13' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __FloatProperty_14) == 0x000040, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__FloatProperty_14' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __BoolProperty_15) == 0x000044, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__BoolProperty_15' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __EnumProperty_16) == 0x000045, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__EnumProperty_16' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __ByteProperty_17) == 0x000046, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__ByteProperty_17' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __NameProperty_18) == 0x000048, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__NameProperty_18' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, __StructProperty_19) == 0x000050, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::__StructProperty_19' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000070, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Bow::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F0, "Member 'ABP_Bow::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

