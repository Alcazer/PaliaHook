#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bobber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bobber.BP_Bobber_C
// 0x0110 (0x03B8 - 0x02A8)
class ABP_Bobber_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_Trail;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FIshingHook_Small;                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arm_biteAnim;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_biteAnim;                                     // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_idleWater;                                      // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 MySK_Bobber;                                       // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        Cable_toFish;                                      // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_fishStruggle_stretch_91B7712D4C6AC9F088004CAE35049099; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_fishStruggle_spin_91B7712D4C6AC9F088004CAE35049099; // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_fishStruggle__Direction_91B7712D4C6AC9F088004CAE35049099; // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C9[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_fishStruggle;                                   // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_FishBites_stretch_192968264672F4E07210159990D86C89; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_FishBites_spin_192968264672F4E07210159990D86C89; // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_FishBites__Direction_192968264672F4E07210159990D86C89; // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49CA[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_FishBites;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        RandomNumber;                                      // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RandomNumberMax;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FishNumberOld;                                     // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49CB[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CableLineEndAttach;                                // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevLocation;                                      // 0x0348(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          FishSwimmingSound;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBobberInWater;                                   // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49CC[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Dur_bite;                                          // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          SK_bobber;                                         // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Pos_biteX;                                         // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Pos_biteY;                                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        bite_moveRange;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_reeling;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EFishingMiniGameState                         State;                                             // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49CD[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFishingViewComponent*                  FishingView;                                       // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          DidHitWater;                                       // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AttachCableLineEndTo(class AActor* AttachTo);
	void DetachCableLineEnd();
	void Event_bobberAnimReset();
	void Event_bobberBites();
	void ExecuteUbergraph_BP_Bobber(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* K2Node_CustomEvent_AttachTo, bool CallFunc_IsValid_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Ak_Object_Velocity_Set_Previous_Location, double CallFunc_Ak_Object_Velocity_VectorLength, double CallFunc_Ak_Object_Velocity_VectorLengthClamped, int32 CallFunc_AkEventComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class UBP_FishingViewComponent_C* K2Node_CustomEvent_FishingView, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, bool CallFunc_Is_Bobber_in_Water__IsInWater, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, int32 K2Node_CustomEvent_fishNumber, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, class UFishingComponent* CallFunc_GetFishing_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_ShouldCurrentFishStruggle_ReturnValue, EFishingSafeTier CallFunc_GetCurrentSafetyTier_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, double K2Node_CustomEvent_spin, double K2Node_CustomEvent_stretch, double CallFunc_Lerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, double CallFunc_Lerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_MakeVector_ReturnValue, bool K2Node_CustomEvent_isBiting, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_3, double CallFunc_RandomFloatInRange_ReturnValue_2, class UAkComponent* CallFunc_AkEventSpawnAttached_Ak, int32 CallFunc_AkEventSpawnAttached_Id, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, int32 CallFunc_AkEventActor_ReturnValue, bool CallFunc_Should_Struggle_Should_Struggle, bool CallFunc_Should_Struggle_Should_Struggle_1, bool CallFunc_Should_Struggle_Should_Struggle_2, bool CallFunc_IsLocallyControlled_ReturnValue_1, double CallFunc_update_bobberStruggle_spin_ImplicitCast, double CallFunc_update_bobberStruggle_stretch_ImplicitCast, double CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast, double CallFunc_update_bobberStruggle_spin_ImplicitCast_1, double CallFunc_update_bobberStruggle_stretch_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void OnFishIsBitingChanged(bool IsBiting);
	void OnNibbled(int32 FishNumber);
	void OnViewWasUpdated(class UBP_FishingViewComponent_C* Param_FishingView);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetRelativeRotation(double RotationScale, double RotationScale2, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_RotatorFromAxisAndAngle_Angle_ImplicitCast, float CallFunc_RotatorFromAxisAndAngle_Angle_ImplicitCast_1);
	void Should_Struggle(bool* Param_Should_Struggle, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void TL_FishBites__FinishedFunc();
	void TL_FishBites__UpdateFunc();
	void TL_fishStruggle__FinishedFunc();
	void TL_fishStruggle__UpdateFunc();
	void Update_bobberStruggle(double Spin, double Stretch);
	void Update_reelVFX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bobber_C">();
	}
	static class ABP_Bobber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bobber_C>();
	}
};
static_assert(alignof(ABP_Bobber_C) == 0x000008, "Wrong alignment on ABP_Bobber_C");
static_assert(sizeof(ABP_Bobber_C) == 0x0003B8, "Wrong size on ABP_Bobber_C");
static_assert(offsetof(ABP_Bobber_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_Bobber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, NS_Trail) == 0x0002B0, "Member 'ABP_Bobber_C::NS_Trail' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, SM_FIshingHook_Small) == 0x0002B8, "Member 'ABP_Bobber_C::SM_FIshingHook_Small' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, Arm_biteAnim) == 0x0002C0, "Member 'ABP_Bobber_C::Arm_biteAnim' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, Root_biteAnim) == 0x0002C8, "Member 'ABP_Bobber_C::Root_biteAnim' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, NS_idleWater) == 0x0002D0, "Member 'ABP_Bobber_C::NS_idleWater' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, Ak) == 0x0002D8, "Member 'ABP_Bobber_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, MySK_Bobber) == 0x0002E0, "Member 'ABP_Bobber_C::MySK_Bobber' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, Cable_toFish) == 0x0002E8, "Member 'ABP_Bobber_C::Cable_toFish' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, DefaultSceneRoot) == 0x0002F0, "Member 'ABP_Bobber_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, TL_fishStruggle_stretch_91B7712D4C6AC9F088004CAE35049099) == 0x0002F8, "Member 'ABP_Bobber_C::TL_fishStruggle_stretch_91B7712D4C6AC9F088004CAE35049099' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, TL_fishStruggle_spin_91B7712D4C6AC9F088004CAE35049099) == 0x0002FC, "Member 'ABP_Bobber_C::TL_fishStruggle_spin_91B7712D4C6AC9F088004CAE35049099' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, TL_fishStruggle__Direction_91B7712D4C6AC9F088004CAE35049099) == 0x000300, "Member 'ABP_Bobber_C::TL_fishStruggle__Direction_91B7712D4C6AC9F088004CAE35049099' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, TL_fishStruggle) == 0x000308, "Member 'ABP_Bobber_C::TL_fishStruggle' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, TL_FishBites_stretch_192968264672F4E07210159990D86C89) == 0x000310, "Member 'ABP_Bobber_C::TL_FishBites_stretch_192968264672F4E07210159990D86C89' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, TL_FishBites_spin_192968264672F4E07210159990D86C89) == 0x000314, "Member 'ABP_Bobber_C::TL_FishBites_spin_192968264672F4E07210159990D86C89' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, TL_FishBites__Direction_192968264672F4E07210159990D86C89) == 0x000318, "Member 'ABP_Bobber_C::TL_FishBites__Direction_192968264672F4E07210159990D86C89' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, TL_FishBites) == 0x000320, "Member 'ABP_Bobber_C::TL_FishBites' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, RandomNumber) == 0x000328, "Member 'ABP_Bobber_C::RandomNumber' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, RandomNumberMax) == 0x000330, "Member 'ABP_Bobber_C::RandomNumberMax' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, FishNumberOld) == 0x000338, "Member 'ABP_Bobber_C::FishNumberOld' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, CableLineEndAttach) == 0x000340, "Member 'ABP_Bobber_C::CableLineEndAttach' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, PrevLocation) == 0x000348, "Member 'ABP_Bobber_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, FishSwimmingSound) == 0x000360, "Member 'ABP_Bobber_C::FishSwimmingSound' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, IsBobberInWater) == 0x000368, "Member 'ABP_Bobber_C::IsBobberInWater' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, Dur_bite) == 0x000370, "Member 'ABP_Bobber_C::Dur_bite' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, SK_bobber) == 0x000378, "Member 'ABP_Bobber_C::SK_bobber' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, Pos_biteX) == 0x000380, "Member 'ABP_Bobber_C::Pos_biteX' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, Pos_biteY) == 0x000388, "Member 'ABP_Bobber_C::Pos_biteY' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, bite_moveRange) == 0x000390, "Member 'ABP_Bobber_C::bite_moveRange' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, Timer_reeling) == 0x000398, "Member 'ABP_Bobber_C::Timer_reeling' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, State) == 0x0003A0, "Member 'ABP_Bobber_C::State' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, FishingView) == 0x0003A8, "Member 'ABP_Bobber_C::FishingView' has a wrong offset!");
static_assert(offsetof(ABP_Bobber_C, DidHitWater) == 0x0003B0, "Member 'ABP_Bobber_C::DidHitWater' has a wrong offset!");

}

