#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_SMR_Vision_Red

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_SMR_Vision_Red.GE_SMR_Vision_Red_C
// 0x0000 (0x0860 - 0x0860)
class UGE_SMR_Vision_Red_C final  : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_SMR_Vision_Red_C">();
	}
	static class UGE_SMR_Vision_Red_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_SMR_Vision_Red_C>();
	}
};
static_assert(alignof(UGE_SMR_Vision_Red_C) == 0x000008, "Wrong alignment on UGE_SMR_Vision_Red_C");
static_assert(sizeof(UGE_SMR_Vision_Red_C) == 0x000860, "Wrong size on UGE_SMR_Vision_Red_C");

}

