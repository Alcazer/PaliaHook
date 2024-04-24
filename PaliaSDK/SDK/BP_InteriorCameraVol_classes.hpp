#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteriorCameraVol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteriorCameraVol.BP_InteriorCameraVol_C
// 0x0028 (0x02D0 - 0x02A8)
class ABP_InteriorCameraVol_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    CameraBoom;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x02C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       FollowCamera;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CameraUpdateIn();
	void CameraUpdateOut();
	void ExecuteUbergraph_BP_InteriorCameraVol(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool CallFunc_Less_DoubleDouble_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_TargetArmLength_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_TargetArmLength_ImplicitCast_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteriorCameraVol_C">();
	}
	static class ABP_InteriorCameraVol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteriorCameraVol_C>();
	}
};
static_assert(alignof(ABP_InteriorCameraVol_C) == 0x000008, "Wrong alignment on ABP_InteriorCameraVol_C");
static_assert(sizeof(ABP_InteriorCameraVol_C) == 0x0002D0, "Wrong size on ABP_InteriorCameraVol_C");
static_assert(offsetof(ABP_InteriorCameraVol_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_InteriorCameraVol_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_InteriorCameraVol_C, Box) == 0x0002B0, "Member 'ABP_InteriorCameraVol_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_InteriorCameraVol_C, CameraBoom) == 0x0002B8, "Member 'ABP_InteriorCameraVol_C::CameraBoom' has a wrong offset!");
static_assert(offsetof(ABP_InteriorCameraVol_C, Timer) == 0x0002C0, "Member 'ABP_InteriorCameraVol_C::Timer' has a wrong offset!");
static_assert(offsetof(ABP_InteriorCameraVol_C, FollowCamera) == 0x0002C8, "Member 'ABP_InteriorCameraVol_C::FollowCamera' has a wrong offset!");

}

