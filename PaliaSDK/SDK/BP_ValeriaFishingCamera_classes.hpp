#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaFishingCamera

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ValeriaFishingCamera.BP_ValeriaFishingCamera_C
// 0x0018 (0x02B8 - 0x02A0)
class ABP_ValeriaFishingCamera_C final  : public AActor
{
public:
	class UCameraComponent*                       Camera;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CameraRoot;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ValeriaFishingCamera_C">();
	}
	static class ABP_ValeriaFishingCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ValeriaFishingCamera_C>();
	}
};
static_assert(alignof(ABP_ValeriaFishingCamera_C) == 0x000008, "Wrong alignment on ABP_ValeriaFishingCamera_C");
static_assert(sizeof(ABP_ValeriaFishingCamera_C) == 0x0002B8, "Wrong size on ABP_ValeriaFishingCamera_C");
static_assert(offsetof(ABP_ValeriaFishingCamera_C, Camera) == 0x0002A0, "Member 'ABP_ValeriaFishingCamera_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaFishingCamera_C, CameraRoot) == 0x0002A8, "Member 'ABP_ValeriaFishingCamera_C::CameraRoot' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaFishingCamera_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_ValeriaFishingCamera_C::DefaultSceneRoot' has a wrong offset!");

}

