#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cinematic_CharSelect_BodyRevealFX

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Cinematic_CharSelect_BodyRevealFX.BP_Cinematic_CharSelect_BodyRevealFX_C
// 0x00A8 (0x0350 - 0x02A8)
class ABP_Cinematic_CharSelect_BodyRevealFX_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_3_RevealFX_InvertDissolve_E7C37EA844E8EA83266E87A4163AD0D4; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_3_RevealFX_Progress_E7C37EA844E8EA83266E87A4163AD0D4; // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_3__Direction_E7C37EA844E8EA83266E87A4163AD0D4; // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40AE[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_3;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_X_Offset_2_B404A45F4033335F8707049E7DD65FDD; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Z_Offset_2_B404A45F4033335F8707049E7DD65FDD; // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_X_Offset_B404A45F4033335F8707049E7DD65FDD; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Z_Offset_B404A45F4033335F8707049E7DD65FDD; // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_B404A45F4033335F8707049E7DD65FDD; // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40AF[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         RevealEffect_RevealFX_InvertDissolve_CD69B92E44AC85715FEB7583FAB23455; // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RevealEffect_RevealFX_Progress_CD69B92E44AC85715FEB7583FAB23455; // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RevealEffect__Direction_CD69B92E44AC85715FEB7583FAB23455; // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40B0[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RevealEffect;                                      // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_Cinematic_Intro_BodyRevealFX_C*     BodyRevealFX;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      Character;                                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANiagaraActor*                          Essence_Effect;                                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Orb_Path_Animation;                                // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      TrailFX;                                           // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      BurstFX;                                           // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PedestalFX;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Cinematic_CharSelect_BodyRevealFX(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ABP_Cinematic_Intro_BodyRevealFX_C* CallFunc_FinishSpawningActor_ReturnValue, double CallFunc_Lerp_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Lerp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_16, class AValeriaCharacter* K2Node_CustomEvent_Character, class ANiagaraActor* K2Node_CustomEvent_EssenceEffect, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1);
	void Initialize_Actor(class AValeriaCharacter* Param_Character, class ANiagaraActor* EssenceEffect);
	void OnFinish__DelegateSignature();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RevealEffect__FinishedFunc();
	void RevealEffect__RevealFX_UnhidePlayer__EventFunc();
	void RevealEffect__UpdateFunc();
	void StartOutroRevealFX();
	void Timeline_3__FinishedFunc();
	void Timeline_3__RevealFX_UnhidePlayer__EventFunc();
	void Timeline_3__UpdateFunc();
	void Timeline__Burst__EventFunc();
	void Timeline__FinishedFunc();
	void Timeline__SmallTrail__EventFunc();
	void Timeline__Trail__EventFunc();
	void Timeline__Trail_Off__EventFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Cinematic_CharSelect_BodyRevealFX_C">();
	}
	static class ABP_Cinematic_CharSelect_BodyRevealFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Cinematic_CharSelect_BodyRevealFX_C>();
	}
};
static_assert(alignof(ABP_Cinematic_CharSelect_BodyRevealFX_C) == 0x000008, "Wrong alignment on ABP_Cinematic_CharSelect_BodyRevealFX_C");
static_assert(sizeof(ABP_Cinematic_CharSelect_BodyRevealFX_C) == 0x000350, "Wrong size on ABP_Cinematic_CharSelect_BodyRevealFX_C");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline_3_RevealFX_InvertDissolve_E7C37EA844E8EA83266E87A4163AD0D4) == 0x0002B8, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline_3_RevealFX_InvertDissolve_E7C37EA844E8EA83266E87A4163AD0D4' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline_3_RevealFX_Progress_E7C37EA844E8EA83266E87A4163AD0D4) == 0x0002BC, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline_3_RevealFX_Progress_E7C37EA844E8EA83266E87A4163AD0D4' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline_3__Direction_E7C37EA844E8EA83266E87A4163AD0D4) == 0x0002C0, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline_3__Direction_E7C37EA844E8EA83266E87A4163AD0D4' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline_3) == 0x0002C8, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline_3' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline_X_Offset_2_B404A45F4033335F8707049E7DD65FDD) == 0x0002D0, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline_X_Offset_2_B404A45F4033335F8707049E7DD65FDD' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline_Z_Offset_2_B404A45F4033335F8707049E7DD65FDD) == 0x0002D4, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline_Z_Offset_2_B404A45F4033335F8707049E7DD65FDD' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline_X_Offset_B404A45F4033335F8707049E7DD65FDD) == 0x0002D8, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline_X_Offset_B404A45F4033335F8707049E7DD65FDD' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline_Z_Offset_B404A45F4033335F8707049E7DD65FDD) == 0x0002DC, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline_Z_Offset_B404A45F4033335F8707049E7DD65FDD' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline__Direction_B404A45F4033335F8707049E7DD65FDD) == 0x0002E0, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline__Direction_B404A45F4033335F8707049E7DD65FDD' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Timeline) == 0x0002E8, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, RevealEffect_RevealFX_InvertDissolve_CD69B92E44AC85715FEB7583FAB23455) == 0x0002F0, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::RevealEffect_RevealFX_InvertDissolve_CD69B92E44AC85715FEB7583FAB23455' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, RevealEffect_RevealFX_Progress_CD69B92E44AC85715FEB7583FAB23455) == 0x0002F4, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::RevealEffect_RevealFX_Progress_CD69B92E44AC85715FEB7583FAB23455' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, RevealEffect__Direction_CD69B92E44AC85715FEB7583FAB23455) == 0x0002F8, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::RevealEffect__Direction_CD69B92E44AC85715FEB7583FAB23455' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, RevealEffect) == 0x000300, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::RevealEffect' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, OnFinish) == 0x000308, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::OnFinish' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, BodyRevealFX) == 0x000318, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::BodyRevealFX' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Character) == 0x000320, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Character' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Essence_Effect) == 0x000328, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Essence_Effect' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, Orb_Path_Animation) == 0x000330, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::Orb_Path_Animation' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, TrailFX) == 0x000338, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::TrailFX' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, BurstFX) == 0x000340, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::BurstFX' has a wrong offset!");
static_assert(offsetof(ABP_Cinematic_CharSelect_BodyRevealFX_C, PedestalFX) == 0x000348, "Member 'ABP_Cinematic_CharSelect_BodyRevealFX_C::PedestalFX' has a wrong offset!");

}
