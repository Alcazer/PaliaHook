#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterSelection_Windmill_Blade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterSelection_Windmill_Blade.BP_CharacterSelection_Windmill_Blade_C
// 0x0020 (0x02C0 - 0x02A0)
class ABP_CharacterSelection_Windmill_Blade_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Valtech_Windmill_Wheel_WithBlades;              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CharacterSelection_Windmill_RotatingMovement_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void ExecuteUbergraph_BP_CharacterSelection_Windmill_Blade(int32 EntryPoint, class UActorComponent* K2Node_ComponentBoundEvent_Component, bool K2Node_ComponentBoundEvent_bReset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterSelection_Windmill_Blade_C">();
	}
	static class ABP_CharacterSelection_Windmill_Blade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterSelection_Windmill_Blade_C>();
	}
};
static_assert(alignof(ABP_CharacterSelection_Windmill_Blade_C) == 0x000008, "Wrong alignment on ABP_CharacterSelection_Windmill_Blade_C");
static_assert(sizeof(ABP_CharacterSelection_Windmill_Blade_C) == 0x0002C0, "Wrong size on ABP_CharacterSelection_Windmill_Blade_C");
static_assert(offsetof(ABP_CharacterSelection_Windmill_Blade_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_CharacterSelection_Windmill_Blade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelection_Windmill_Blade_C, RotatingMovement) == 0x0002A8, "Member 'ABP_CharacterSelection_Windmill_Blade_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelection_Windmill_Blade_C, SM_Valtech_Windmill_Wheel_WithBlades) == 0x0002B0, "Member 'ABP_CharacterSelection_Windmill_Blade_C::SM_Valtech_Windmill_Wheel_WithBlades' has a wrong offset!");
static_assert(offsetof(ABP_CharacterSelection_Windmill_Blade_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_CharacterSelection_Windmill_Blade_C::DefaultSceneRoot' has a wrong offset!");

}

