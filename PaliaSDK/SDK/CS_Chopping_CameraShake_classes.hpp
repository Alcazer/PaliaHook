#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CS_Chopping_CameraShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CS_Chopping_CameraShake.CS_Chopping_CameraShake_C
// 0x0000 (0x01F0 - 0x01F0)
class UCS_Chopping_CameraShake_C final  : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CS_Chopping_CameraShake_C">();
	}
	static class UCS_Chopping_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCS_Chopping_CameraShake_C>();
	}
};
static_assert(alignof(UCS_Chopping_CameraShake_C) == 0x000010, "Wrong alignment on UCS_Chopping_CameraShake_C");
static_assert(sizeof(UCS_Chopping_CameraShake_C) == 0x0001F0, "Wrong size on UCS_Chopping_CameraShake_C");

}

