#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaCastingBobber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ValeriaCastingBobber.BP_ValeriaCastingBobber_C
// 0x0028 (0x02D0 - 0x02A8)
class ABP_ValeriaCastingBobber_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   DebugMesh;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Ak_Bobber_Splash;                                  // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ValeriaCastingBobber(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsDebuggingOn__IsDebuggingOn, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ValeriaCastingBobber_C">();
	}
	static class ABP_ValeriaCastingBobber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ValeriaCastingBobber_C>();
	}
};
static_assert(alignof(ABP_ValeriaCastingBobber_C) == 0x000008, "Wrong alignment on ABP_ValeriaCastingBobber_C");
static_assert(sizeof(ABP_ValeriaCastingBobber_C) == 0x0002D0, "Wrong size on ABP_ValeriaCastingBobber_C");
static_assert(offsetof(ABP_ValeriaCastingBobber_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_ValeriaCastingBobber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCastingBobber_C, DebugMesh) == 0x0002B0, "Member 'ABP_ValeriaCastingBobber_C::DebugMesh' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCastingBobber_C, Sphere) == 0x0002B8, "Member 'ABP_ValeriaCastingBobber_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCastingBobber_C, ProjectileMovement) == 0x0002C0, "Member 'ABP_ValeriaCastingBobber_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCastingBobber_C, Ak_Bobber_Splash) == 0x0002C8, "Member 'ABP_ValeriaCastingBobber_C::Ak_Bobber_Splash' has a wrong offset!");

}

