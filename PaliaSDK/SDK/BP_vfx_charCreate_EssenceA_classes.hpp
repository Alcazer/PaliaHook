#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_vfx_charCreate_EssenceA

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_vfx_charCreate_EssenceA.BP_vfx_charCreate_EssenceA_C
// 0x0080 (0x0328 - 0x02A8)
class ABP_vfx_charCreate_EssenceA_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_quiet;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_flash;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        FaceMe_vfx;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_core_01;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_core_02;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        SpinB_vfx;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_idle;                                           // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        SpinA_vfx;                                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Debug_Sphere;                                      // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_vfx;                                          // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_anim_armA_D7E9849347803630B50266BF0D032DAB;     // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_anim_spinA_D7E9849347803630B50266BF0D032DAB;    // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_anim__Direction_D7E9849347803630B50266BF0D032DAB; // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E6[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_anim;                                           // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Pos_arm;                                           // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Custom_becomeEgg();
	void Event_becomeChar();
	void Event_becomeEssence();
	void Event_flyMe();
	void Event_spinMe();
	void ExecuteUbergraph_BP_vfx_charCreate_EssenceA(int32 EntryPoint, float K2Node_Event_DeltaSeconds, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Lerp_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Tick_faceMeUCoward();
	void TL_anim__FinishedFunc();
	void TL_anim__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_vfx_charCreate_EssenceA_C">();
	}
	static class ABP_vfx_charCreate_EssenceA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_vfx_charCreate_EssenceA_C>();
	}
};
static_assert(alignof(ABP_vfx_charCreate_EssenceA_C) == 0x000008, "Wrong alignment on ABP_vfx_charCreate_EssenceA_C");
static_assert(sizeof(ABP_vfx_charCreate_EssenceA_C) == 0x000328, "Wrong size on ABP_vfx_charCreate_EssenceA_C");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_vfx_charCreate_EssenceA_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, NS_quiet) == 0x0002B0, "Member 'ABP_vfx_charCreate_EssenceA_C::NS_quiet' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, NS_flash) == 0x0002B8, "Member 'ABP_vfx_charCreate_EssenceA_C::NS_flash' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, FaceMe_vfx) == 0x0002C0, "Member 'ABP_vfx_charCreate_EssenceA_C::FaceMe_vfx' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, NS_core_01) == 0x0002C8, "Member 'ABP_vfx_charCreate_EssenceA_C::NS_core_01' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, NS_core_02) == 0x0002D0, "Member 'ABP_vfx_charCreate_EssenceA_C::NS_core_02' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, SpinB_vfx) == 0x0002D8, "Member 'ABP_vfx_charCreate_EssenceA_C::SpinB_vfx' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, NS_idle) == 0x0002E0, "Member 'ABP_vfx_charCreate_EssenceA_C::NS_idle' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, SpinA_vfx) == 0x0002E8, "Member 'ABP_vfx_charCreate_EssenceA_C::SpinA_vfx' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, Debug_Sphere) == 0x0002F0, "Member 'ABP_vfx_charCreate_EssenceA_C::Debug_Sphere' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, Root_vfx) == 0x0002F8, "Member 'ABP_vfx_charCreate_EssenceA_C::Root_vfx' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, DefaultSceneRoot) == 0x000300, "Member 'ABP_vfx_charCreate_EssenceA_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, TL_anim_armA_D7E9849347803630B50266BF0D032DAB) == 0x000308, "Member 'ABP_vfx_charCreate_EssenceA_C::TL_anim_armA_D7E9849347803630B50266BF0D032DAB' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, TL_anim_spinA_D7E9849347803630B50266BF0D032DAB) == 0x00030C, "Member 'ABP_vfx_charCreate_EssenceA_C::TL_anim_spinA_D7E9849347803630B50266BF0D032DAB' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, TL_anim__Direction_D7E9849347803630B50266BF0D032DAB) == 0x000310, "Member 'ABP_vfx_charCreate_EssenceA_C::TL_anim__Direction_D7E9849347803630B50266BF0D032DAB' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, TL_anim) == 0x000318, "Member 'ABP_vfx_charCreate_EssenceA_C::TL_anim' has a wrong offset!");
static_assert(offsetof(ABP_vfx_charCreate_EssenceA_C, Pos_arm) == 0x000320, "Member 'ABP_vfx_charCreate_EssenceA_C::Pos_arm' has a wrong offset!");

}

