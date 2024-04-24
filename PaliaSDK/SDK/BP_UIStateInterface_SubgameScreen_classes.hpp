#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIStateInterface_SubgameScreen

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIStateInterface_SubgameScreen.BP_UIStateInterface_SubgameScreen_C
// 0x0000 (0x0028 - 0x0028)
class IBP_UIStateInterface_SubgameScreen_C final  : public IInterface
{
public:
	void InitPreOpenStateWidget(class USubgameConfig* SubgameConfig);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIStateInterface_SubgameScreen_C">();
	}
	static class IBP_UIStateInterface_SubgameScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_UIStateInterface_SubgameScreen_C>();
	}
};
static_assert(alignof(IBP_UIStateInterface_SubgameScreen_C) == 0x000008, "Wrong alignment on IBP_UIStateInterface_SubgameScreen_C");
static_assert(sizeof(IBP_UIStateInterface_SubgameScreen_C) == 0x000028, "Wrong size on IBP_UIStateInterface_SubgameScreen_C");

}
