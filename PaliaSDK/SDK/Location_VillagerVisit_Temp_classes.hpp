#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Location_VillagerVisit_Temp

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Location_VillagerVisit_Temp.Location_VillagerVisit_Temp_C
// 0x0008 (0x02B0 - 0x02A8)
class ALocation_VillagerVisit_Temp_C final  : public AActor
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Location_VillagerVisit_Temp_C">();
	}
	static class ALocation_VillagerVisit_Temp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALocation_VillagerVisit_Temp_C>();
	}
};
static_assert(alignof(ALocation_VillagerVisit_Temp_C) == 0x000008, "Wrong alignment on ALocation_VillagerVisit_Temp_C");
static_assert(sizeof(ALocation_VillagerVisit_Temp_C) == 0x0002B0, "Wrong size on ALocation_VillagerVisit_Temp_C");
static_assert(offsetof(ALocation_VillagerVisit_Temp_C, Billboard) == 0x0002A8, "Member 'ALocation_VillagerVisit_Temp_C::Billboard' has a wrong offset!");

}

