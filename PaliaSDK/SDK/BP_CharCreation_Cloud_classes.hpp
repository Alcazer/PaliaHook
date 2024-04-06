#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharCreation_Cloud

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharCreation_Cloud.BP_CharCreation_Cloud_C
// 0x0058 (0x02F8 - 0x02A0)
class ABP_CharCreation_Cloud_C final  : public AActor
{
public:
	class UStaticMeshComponent*                   SM_CharCreation_Cloud_11;                          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CharCreation_Cloud_12;                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CharCreation_Cloud_5;                           // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CharCreation_Cloud_10;                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CharCreation_Cloud_8;                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CharCreation_Cloud_7;                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_vfx_unitSphereA_invert64;                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_charCreate_UIBackground;                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane1;                                            // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CharCreation_Cloud_6;                           // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharCreation_Cloud_C">();
	}
	static class ABP_CharCreation_Cloud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharCreation_Cloud_C>();
	}
};
static_assert(alignof(ABP_CharCreation_Cloud_C) == 0x000008, "Wrong alignment on ABP_CharCreation_Cloud_C");
static_assert(sizeof(ABP_CharCreation_Cloud_C) == 0x0002F8, "Wrong size on ABP_CharCreation_Cloud_C");
static_assert(offsetof(ABP_CharCreation_Cloud_C, SM_CharCreation_Cloud_11) == 0x0002A0, "Member 'ABP_CharCreation_Cloud_C::SM_CharCreation_Cloud_11' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, SM_CharCreation_Cloud_12) == 0x0002A8, "Member 'ABP_CharCreation_Cloud_C::SM_CharCreation_Cloud_12' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, SM_CharCreation_Cloud_5) == 0x0002B0, "Member 'ABP_CharCreation_Cloud_C::SM_CharCreation_Cloud_5' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, SM_CharCreation_Cloud_10) == 0x0002B8, "Member 'ABP_CharCreation_Cloud_C::SM_CharCreation_Cloud_10' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, SM_CharCreation_Cloud_8) == 0x0002C0, "Member 'ABP_CharCreation_Cloud_C::SM_CharCreation_Cloud_8' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, SM_CharCreation_Cloud_7) == 0x0002C8, "Member 'ABP_CharCreation_Cloud_C::SM_CharCreation_Cloud_7' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, SM_vfx_unitSphereA_invert64) == 0x0002D0, "Member 'ABP_CharCreation_Cloud_C::SM_vfx_unitSphereA_invert64' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, NS_charCreate_UIBackground) == 0x0002D8, "Member 'ABP_CharCreation_Cloud_C::NS_charCreate_UIBackground' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, Plane1) == 0x0002E0, "Member 'ABP_CharCreation_Cloud_C::Plane1' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, SM_CharCreation_Cloud_6) == 0x0002E8, "Member 'ABP_CharCreation_Cloud_C::SM_CharCreation_Cloud_6' has a wrong offset!");
static_assert(offsetof(ABP_CharCreation_Cloud_C, DefaultSceneRoot) == 0x0002F0, "Member 'ABP_CharCreation_Cloud_C::DefaultSceneRoot' has a wrong offset!");

}

