#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Rod_EquipView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_vfx_toolQuality_structs.hpp"
#include "BP_EquipViewActor_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Rod_EquipView.BP_Rod_EquipView_C
// 0x0118 (0x03D0 - 0x02B8)
class ABP_Rod_EquipView_C final  : public ABP_EquipViewActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 MySK_Bobber;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       BobberPhysObject;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FIshingHook_Small;                              // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        Cable_fishLineIdle;                                // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Root_bobberAttach;                                 // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFishingLineComponent*                  FishingLineComponent;                              // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak_MovementWhoosh;                                 // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_FishingRod;                                     // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_lineCasting_castMe_123A52F04C61D8C7AC335BABF088569D; // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_lineCasting__Direction_123A52F04C61D8C7AC335BABF088569D; // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49FE[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_lineCasting;                                    // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_fadeLine_NewTrack_0_C2F9F4484B466828D92D46ABB57D1E4E; // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_fadeLine__Direction_C2F9F4484B466828D92D46ABB57D1E4E; // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49FF[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_fadeLine;                                       // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	Enum_vfx_toolQuality                          Tool_quality;                                      // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4A00[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CableLineEndAttach;                                // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevLocation;                                      // 0x0338(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReelLoopAudioPlaying;                             // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A01[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WhooshThreshold;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayWhoosh;                                       // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A02[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Dur_casting;                                       // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_bobber_miniGame;                                // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale_bobberOnRod;                                 // 0x0378(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Scale_bobberInWater;                               // 0x0390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkComponent*                           AkReel;                                            // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnFromWater;                                   // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A03[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          CurrentSkBobberFromGear;                           // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          DefaultSkBobber;                                   // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         AkReelEventId;                                     // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AttachCableLineEndTo(class AActor* AttachTo, bool PlayIntroAnimation);
	void DetachCableLineEnd(class ABP_Bobber_C* Bobber);
	void ExecuteUbergraph_BP_Rod_EquipView(int32 EntryPoint, class ABP_Bobber_C* K2Node_CustomEvent_Bobber, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Ak_Object_Velocity_Set_Previous_Location, double CallFunc_Ak_Object_Velocity_VectorLength, double CallFunc_Ak_Object_Velocity_VectorLengthClamped, class UFishingViewComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* K2Node_CustomEvent_AttachTo, bool K2Node_CustomEvent_PlayIntroAnimation, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class UFishingViewComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsDebuggingOn__IsDebuggingOn, double CallFunc_Divide_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_Bobber_C* K2Node_DynamicCast_AsBP_Bobber, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_3, class UAkComponent* CallFunc_AkEventSpawnAttached_Ak, int32 CallFunc_AkEventSpawnAttached_Id, class AActor* CallFunc_GetOwner_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, class UAkComponent* CallFunc_AkEventSpawnAttached_Ak_1, int32 CallFunc_AkEventSpawnAttached_Id_1, class UAkComponent* CallFunc_AkEventSpawnAttached_Ak_2, int32 CallFunc_AkEventSpawnAttached_Id_2, TDelegate<void(class UGearComponent* GearComponent)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetDistanceTo_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsDedicatedServer_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, TDelegate<void(class UGearComponent* GearComponent, const struct FValeriaItem& Item)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool K2Node_CustomEvent_ArePhysicsEnabled, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, EEndPlayReason K2Node_Event_EndPlayReason, class AActor* CallFunc_GetOwner_ReturnValue_6, class UGearComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UGearComponent* K2Node_CustomEvent_GearComponent_1, const struct FValeriaItem& K2Node_CustomEvent_Item, bool CallFunc_IsValid_ReturnValue_6, class AActor* CallFunc_GetOwner_ReturnValue_7, class UGearComponent* K2Node_CustomEvent_GearComponent, class UGearComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_8, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID, class UAkComponent* CallFunc_AkEventSpawnAttached_Ak_3, int32 CallFunc_AkEventSpawnAttached_Id_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsDebuggingOn__IsDebuggingOn_1, bool CallFunc_IsSwitchPlatform_ReturnValue, double CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float K2Node_VariableSet_TensionFactor_ImplicitCast);
	void OnGearAssetsWereLoaded(class UGearComponent* GearComponent, const struct FValeriaItem& Item);
	void OnGearWasChanged(class UGearComponent* GearComponent);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void SetPhysicsOnBobber(bool ArePhysicsEnabled);
	void StopOpacityTimeline();
	void StopReelingAudio();
	void TL_fadeLine__FinishedFunc();
	void TL_fadeLine__UpdateFunc();
	void TL_lineCasting__FinishedFunc();
	void TL_lineCasting__UpdateFunc();
	void UpdateBobberFromGear(class UObject* LoadedAsset, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UGearComponent* CallFunc_GetComponentByClass_ReturnValue, class UObject* CallFunc_GetLoadedAssetWithTag_ReturnValue);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Rod_EquipView_C">();
	}
	static class ABP_Rod_EquipView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Rod_EquipView_C>();
	}
};
static_assert(alignof(ABP_Rod_EquipView_C) == 0x000008, "Wrong alignment on ABP_Rod_EquipView_C");
static_assert(sizeof(ABP_Rod_EquipView_C) == 0x0003D0, "Wrong size on ABP_Rod_EquipView_C");
static_assert(offsetof(ABP_Rod_EquipView_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_Rod_EquipView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, MySK_Bobber) == 0x0002C0, "Member 'ABP_Rod_EquipView_C::MySK_Bobber' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, BobberPhysObject) == 0x0002C8, "Member 'ABP_Rod_EquipView_C::BobberPhysObject' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, SM_FIshingHook_Small) == 0x0002D0, "Member 'ABP_Rod_EquipView_C::SM_FIshingHook_Small' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, Cable_fishLineIdle) == 0x0002D8, "Member 'ABP_Rod_EquipView_C::Cable_fishLineIdle' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, Root_bobberAttach) == 0x0002E0, "Member 'ABP_Rod_EquipView_C::Root_bobberAttach' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, PhysicsConstraint) == 0x0002E8, "Member 'ABP_Rod_EquipView_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, FishingLineComponent) == 0x0002F0, "Member 'ABP_Rod_EquipView_C::FishingLineComponent' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, Ak_MovementWhoosh) == 0x0002F8, "Member 'ABP_Rod_EquipView_C::Ak_MovementWhoosh' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, SK_FishingRod) == 0x000300, "Member 'ABP_Rod_EquipView_C::SK_FishingRod' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, TL_lineCasting_castMe_123A52F04C61D8C7AC335BABF088569D) == 0x000308, "Member 'ABP_Rod_EquipView_C::TL_lineCasting_castMe_123A52F04C61D8C7AC335BABF088569D' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, TL_lineCasting__Direction_123A52F04C61D8C7AC335BABF088569D) == 0x00030C, "Member 'ABP_Rod_EquipView_C::TL_lineCasting__Direction_123A52F04C61D8C7AC335BABF088569D' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, TL_lineCasting) == 0x000310, "Member 'ABP_Rod_EquipView_C::TL_lineCasting' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, TL_fadeLine_NewTrack_0_C2F9F4484B466828D92D46ABB57D1E4E) == 0x000318, "Member 'ABP_Rod_EquipView_C::TL_fadeLine_NewTrack_0_C2F9F4484B466828D92D46ABB57D1E4E' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, TL_fadeLine__Direction_C2F9F4484B466828D92D46ABB57D1E4E) == 0x00031C, "Member 'ABP_Rod_EquipView_C::TL_fadeLine__Direction_C2F9F4484B466828D92D46ABB57D1E4E' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, TL_fadeLine) == 0x000320, "Member 'ABP_Rod_EquipView_C::TL_fadeLine' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, Tool_quality) == 0x000328, "Member 'ABP_Rod_EquipView_C::Tool_quality' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, CableLineEndAttach) == 0x000330, "Member 'ABP_Rod_EquipView_C::CableLineEndAttach' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, PrevLocation) == 0x000338, "Member 'ABP_Rod_EquipView_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, bReelLoopAudioPlaying) == 0x000350, "Member 'ABP_Rod_EquipView_C::bReelLoopAudioPlaying' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, WhooshThreshold) == 0x000358, "Member 'ABP_Rod_EquipView_C::WhooshThreshold' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, bPlayWhoosh) == 0x000360, "Member 'ABP_Rod_EquipView_C::bPlayWhoosh' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, Dur_casting) == 0x000368, "Member 'ABP_Rod_EquipView_C::Dur_casting' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, SK_bobber_miniGame) == 0x000370, "Member 'ABP_Rod_EquipView_C::SK_bobber_miniGame' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, Scale_bobberOnRod) == 0x000378, "Member 'ABP_Rod_EquipView_C::Scale_bobberOnRod' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, Scale_bobberInWater) == 0x000390, "Member 'ABP_Rod_EquipView_C::Scale_bobberInWater' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, AkReel) == 0x0003A8, "Member 'ABP_Rod_EquipView_C::AkReel' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, ReturnFromWater) == 0x0003B0, "Member 'ABP_Rod_EquipView_C::ReturnFromWater' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, CurrentSkBobberFromGear) == 0x0003B8, "Member 'ABP_Rod_EquipView_C::CurrentSkBobberFromGear' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, DefaultSkBobber) == 0x0003C0, "Member 'ABP_Rod_EquipView_C::DefaultSkBobber' has a wrong offset!");
static_assert(offsetof(ABP_Rod_EquipView_C, AkReelEventId) == 0x0003C8, "Member 'ABP_Rod_EquipView_C::AkReelEventId' has a wrong offset!");

}

