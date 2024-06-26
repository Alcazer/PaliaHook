#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_FishingRod

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function ABP_FishingRod.ABP_FishingRod_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_FishingRod_C_AnimGraph final 
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_FishingRod_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_FishingRod_C_AnimGraph");
static_assert(sizeof(ABP_FishingRod_C_AnimGraph) == 0x000010, "Wrong size on ABP_FishingRod_C_AnimGraph");
static_assert(offsetof(ABP_FishingRod_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_FishingRod_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_FishingRod.ABP_FishingRod_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_FishingRod_C_BlueprintUpdateAnimation final 
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_FishingRod_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_FishingRod_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_FishingRod_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_FishingRod_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_FishingRod_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_FishingRod_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_FishingRod.ABP_FishingRod_C.ExecuteUbergraph_ABP_FishingRod
// 0x0240 (0x0240 - 0x0000)
struct ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4555[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4556[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UFishingViewComponent* FishingView, bool IsBiting)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_11;       // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_12;       // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_13;       // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_14;       // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_15;       // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_16;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_17;       // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_18;       // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_19;       // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_20;       // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4557[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_1;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_21;       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4558[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFishingViewComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4559[0x8];                                     // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFishingMiniGameViewState              CallFunc_GetViewState_ReturnValue;                 // 0x0080(0x0120)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_22;       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455A[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455B[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455C[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_2;             // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFishingViewComponent*                  K2Node_CustomEvent_FishingView_1;                  // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFishingComponent*                      K2Node_CustomEvent_Source;                         // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_fishNumber;                     // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455D[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFishingViewComponent*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455E[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue; // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFishingViewComponent*                  K2Node_CustomEvent_FishingView;                    // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isBiting;                       // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_23;       // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455F[0x2];                                     // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x021C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_24;       // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4560[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_StateLerp_ImplicitCast;         // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_Value_ImplicitCast;                // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod) == 0x000010, "Wrong alignment on ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod");
static_assert(sizeof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod) == 0x000240, "Wrong size on ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, EntryPoint) == 0x000000, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_IsLocallyControlled_ReturnValue) == 0x000019, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x00001A, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00001B, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00001C, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00001E, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00001F, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000021, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Not_PreBool_ReturnValue_1) == 0x000022, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x000023, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Not_PreBool_ReturnValue_2) == 0x000024, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000025, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Not_PreBool_ReturnValue_3) == 0x000026, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000027, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Not_PreBool_ReturnValue_4) == 0x000028, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000029, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x00002A, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Not_PreBool_ReturnValue_5) == 0x00002B, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x00002C, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_10) == 0x000040, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_11) == 0x000041, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_12) == 0x000042, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_BooleanOR_ReturnValue) == 0x000043, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_BooleanAND_ReturnValue_1) == 0x000044, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_13) == 0x000045, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_14) == 0x000046, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_15) == 0x000047, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_16) == 0x000048, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_17) == 0x000049, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_BooleanOR_ReturnValue_1) == 0x00004A, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_18) == 0x00004B, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Not_PreBool_ReturnValue_6) == 0x00004C, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_BooleanOR_ReturnValue_2) == 0x00004D, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_19) == 0x00004E, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_20) == 0x00004F, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_Event_DeltaTimeX) == 0x000050, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetOwningActor_ReturnValue_1) == 0x000058, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetOwningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetOwner_ReturnValue_1) == 0x000060, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_21) == 0x000068, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetViewState_ReturnValue) == 0x000080, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetViewState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_22) == 0x0001A0, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_FClamp_ReturnValue) == 0x0001A8, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_BooleanOR_ReturnValue_3) == 0x0001B0, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001B8, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_BooleanOR_ReturnValue_4) == 0x0001C0, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetOwningActor_ReturnValue_2) == 0x0001D0, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetOwningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_CustomEvent_FishingView_1) == 0x0001D8, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_CustomEvent_FishingView_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_CustomEvent_Source) == 0x0001E0, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_CustomEvent_Source' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_CustomEvent_fishNumber) == 0x0001E8, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_CustomEvent_fishNumber' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetOwner_ReturnValue_2) == 0x0001F0, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0001F8, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_IsDedicatedServer_ReturnValue) == 0x000200, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue) == 0x000208, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_CustomEvent_FishingView) == 0x000210, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_CustomEvent_FishingView' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_CustomEvent_isBiting) == 0x000218, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_CustomEvent_isBiting' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_23) == 0x000219, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_CreateDelegate_OutputDelegate_1) == 0x00021C, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_EqualEqual_ByteByte_ReturnValue_24) == 0x00022C, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_EqualEqual_ByteByte_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, K2Node_VariableSet_StateLerp_ImplicitCast) == 0x000230, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::K2Node_VariableSet_StateLerp_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod, CallFunc_FClamp_Value_ImplicitCast) == 0x000238, "Member 'ABP_FishingRod_C_ExecuteUbergraph_ABP_FishingRod::CallFunc_FClamp_Value_ImplicitCast' has a wrong offset!");

// Function ABP_FishingRod.ABP_FishingRod_C.OnFishIsBitingChanged_Event_0
// 0x0010 (0x0010 - 0x0000)
struct ABP_FishingRod_C_OnFishIsBitingChanged_Event_0 final 
{
public:
	class UFishingViewComponent*                  FishingView;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsBiting;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_FishingRod_C_OnFishIsBitingChanged_Event_0) == 0x000008, "Wrong alignment on ABP_FishingRod_C_OnFishIsBitingChanged_Event_0");
static_assert(sizeof(ABP_FishingRod_C_OnFishIsBitingChanged_Event_0) == 0x000010, "Wrong size on ABP_FishingRod_C_OnFishIsBitingChanged_Event_0");
static_assert(offsetof(ABP_FishingRod_C_OnFishIsBitingChanged_Event_0, FishingView) == 0x000000, "Member 'ABP_FishingRod_C_OnFishIsBitingChanged_Event_0::FishingView' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_OnFishIsBitingChanged_Event_0, Param_IsBiting) == 0x000008, "Member 'ABP_FishingRod_C_OnFishIsBitingChanged_Event_0::Param_IsBiting' has a wrong offset!");

// Function ABP_FishingRod.ABP_FishingRod_C.OnNibbled_Event_0
// 0x0018 (0x0018 - 0x0000)
struct ABP_FishingRod_C_OnNibbled_Event_0 final 
{
public:
	class UFishingViewComponent*                  FishingView;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFishingComponent*                      Source;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         FishNumber;                                        // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_FishingRod_C_OnNibbled_Event_0) == 0x000008, "Wrong alignment on ABP_FishingRod_C_OnNibbled_Event_0");
static_assert(sizeof(ABP_FishingRod_C_OnNibbled_Event_0) == 0x000018, "Wrong size on ABP_FishingRod_C_OnNibbled_Event_0");
static_assert(offsetof(ABP_FishingRod_C_OnNibbled_Event_0, FishingView) == 0x000000, "Member 'ABP_FishingRod_C_OnNibbled_Event_0::FishingView' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_OnNibbled_Event_0, Source) == 0x000008, "Member 'ABP_FishingRod_C_OnNibbled_Event_0::Source' has a wrong offset!");
static_assert(offsetof(ABP_FishingRod_C_OnNibbled_Event_0, FishNumber) == 0x000010, "Member 'ABP_FishingRod_C_OnNibbled_Event_0::FishNumber' has a wrong offset!");

}

