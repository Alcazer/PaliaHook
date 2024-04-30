#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Bobber_Standard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function ABP_Bobber_Standard.ABP_Bobber_Standard_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Bobber_Standard_C_AnimGraph final 
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Bobber_Standard_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Bobber_Standard_C_AnimGraph");
static_assert(sizeof(ABP_Bobber_Standard_C_AnimGraph) == 0x000010, "Wrong size on ABP_Bobber_Standard_C_AnimGraph");
static_assert(offsetof(ABP_Bobber_Standard_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Bobber_Standard_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Bobber_Standard.ABP_Bobber_Standard_C.ExecuteUbergraph_ABP_Bobber_Standard
// 0x0118 (0x0118 - 0x0000)
struct ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4187[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4188[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFishingComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4189[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFishingViewComponent*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_418A[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFishingViewComponent*                  K2Node_CustomEvent_FishingView_2;                  // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFishingComponent*                      K2Node_CustomEvent_Source_1;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_fishNumber;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Temp_object_Variable_1;                            // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      K2Node_Select_Default;                             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UFishingComponent* Source)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFishingViewComponent*                  K2Node_CustomEvent_FishingView_1;                  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isBiting;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_418B[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFishingViewComponent*                  K2Node_CustomEvent_FishingView;                    // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_bobble;                         // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFishingComponent*                      K2Node_CustomEvent_Source;                         // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UFishingViewComponent* FishingView, class AActor* bobble)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EFishingState_OLD                             CallFunc_GetFishingState_ReturnValue;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_418C[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UFishingViewComponent* FishingView, bool IsBiting)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_418D[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_1;             // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard) == 0x000008, "Wrong alignment on ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard");
static_assert(sizeof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard) == 0x000118, "Wrong size on ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, EntryPoint) == 0x000000, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, Temp_int_Variable) == 0x000004, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, Temp_object_Variable) == 0x000008, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000050, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_IsValid_ReturnValue_3) == 0x000058, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CustomEvent_FishingView_2) == 0x000060, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CustomEvent_FishingView_2' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CustomEvent_Source_1) == 0x000068, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CustomEvent_Source_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CustomEvent_fishNumber) == 0x000070, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CustomEvent_fishNumber' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_Percent_IntInt_ReturnValue) == 0x000074, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, Temp_object_Variable_1) == 0x000078, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_Select_Default) == 0x000080, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue) == 0x000088, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CustomEvent_FishingView_1) == 0x0000A0, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CustomEvent_FishingView_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CustomEvent_isBiting) == 0x0000A8, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CustomEvent_isBiting' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CustomEvent_FishingView) == 0x0000B0, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CustomEvent_FishingView' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CustomEvent_bobble) == 0x0000B8, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CustomEvent_bobble' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CustomEvent_Source) == 0x0000C0, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CustomEvent_Source' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C8, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_GetFishingState_ReturnValue) == 0x0000D8, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_GetFishingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D9, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000DC, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1) == 0x0000F0, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2) == 0x0000F8, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_GetOwningActor_ReturnValue_1) == 0x000100, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_GetOwningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_GetOwner_ReturnValue_1) == 0x000108, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_IsValid_ReturnValue_4) == 0x000110, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard, CallFunc_IsLocallyControlled_ReturnValue) == 0x000111, "Member 'ABP_Bobber_Standard_C_ExecuteUbergraph_ABP_Bobber_Standard::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

// Function ABP_Bobber_Standard.ABP_Bobber_Standard_C.OnFishingBobberWasCreated_Event_0
// 0x0010 (0x0010 - 0x0000)
struct ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0 final 
{
public:
	class UFishingViewComponent*                  FishingView;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 bobble;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0) == 0x000008, "Wrong alignment on ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0");
static_assert(sizeof(ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0) == 0x000010, "Wrong size on ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0");
static_assert(offsetof(ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0, FishingView) == 0x000000, "Member 'ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0::FishingView' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0, bobble) == 0x000008, "Member 'ABP_Bobber_Standard_C_OnFishingBobberWasCreated_Event_0::bobble' has a wrong offset!");

// Function ABP_Bobber_Standard.ABP_Bobber_Standard_C.OnFishingStateChanged_Event_0
// 0x0008 (0x0008 - 0x0000)
struct ABP_Bobber_Standard_C_OnFishingStateChanged_Event_0 final 
{
public:
	class UFishingComponent*                      Source;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Bobber_Standard_C_OnFishingStateChanged_Event_0) == 0x000008, "Wrong alignment on ABP_Bobber_Standard_C_OnFishingStateChanged_Event_0");
static_assert(sizeof(ABP_Bobber_Standard_C_OnFishingStateChanged_Event_0) == 0x000008, "Wrong size on ABP_Bobber_Standard_C_OnFishingStateChanged_Event_0");
static_assert(offsetof(ABP_Bobber_Standard_C_OnFishingStateChanged_Event_0, Source) == 0x000000, "Member 'ABP_Bobber_Standard_C_OnFishingStateChanged_Event_0::Source' has a wrong offset!");

// Function ABP_Bobber_Standard.ABP_Bobber_Standard_C.OnFishIsBitingChanged_Event_0
// 0x0010 (0x0010 - 0x0000)
struct ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0 final 
{
public:
	class UFishingViewComponent*                  FishingView;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBiting;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0) == 0x000008, "Wrong alignment on ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0");
static_assert(sizeof(ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0) == 0x000010, "Wrong size on ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0");
static_assert(offsetof(ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0, FishingView) == 0x000000, "Member 'ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0::FishingView' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0, IsBiting) == 0x000008, "Member 'ABP_Bobber_Standard_C_OnFishIsBitingChanged_Event_0::IsBiting' has a wrong offset!");

// Function ABP_Bobber_Standard.ABP_Bobber_Standard_C.OnNibbled_Event_0
// 0x0018 (0x0018 - 0x0000)
struct ABP_Bobber_Standard_C_OnNibbled_Event_0 final 
{
public:
	class UFishingViewComponent*                  FishingView;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFishingComponent*                      Source;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         FishNumber;                                        // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Bobber_Standard_C_OnNibbled_Event_0) == 0x000008, "Wrong alignment on ABP_Bobber_Standard_C_OnNibbled_Event_0");
static_assert(sizeof(ABP_Bobber_Standard_C_OnNibbled_Event_0) == 0x000018, "Wrong size on ABP_Bobber_Standard_C_OnNibbled_Event_0");
static_assert(offsetof(ABP_Bobber_Standard_C_OnNibbled_Event_0, FishingView) == 0x000000, "Member 'ABP_Bobber_Standard_C_OnNibbled_Event_0::FishingView' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_OnNibbled_Event_0, Source) == 0x000008, "Member 'ABP_Bobber_Standard_C_OnNibbled_Event_0::Source' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_Standard_C_OnNibbled_Event_0, FishNumber) == 0x000010, "Member 'ABP_Bobber_Standard_C_OnNibbled_Event_0::FishNumber' has a wrong offset!");

}

