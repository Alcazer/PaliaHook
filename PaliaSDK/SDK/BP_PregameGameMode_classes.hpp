#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PregameGameMode

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PregameGameMode.BP_PregameGameMode_C
// 0x0008 (0x0350 - 0x0348)
class ABP_PregameGameMode_C final  : public AGameModeBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PregameGameMode_C">();
	}
	static class ABP_PregameGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PregameGameMode_C>();
	}
};
static_assert(alignof(ABP_PregameGameMode_C) == 0x000008, "Wrong alignment on ABP_PregameGameMode_C");
static_assert(sizeof(ABP_PregameGameMode_C) == 0x000350, "Wrong size on ABP_PregameGameMode_C");
static_assert(offsetof(ABP_PregameGameMode_C, DefaultSceneRoot) == 0x000348, "Member 'ABP_PregameGameMode_C::DefaultSceneRoot' has a wrong offset!");

}

