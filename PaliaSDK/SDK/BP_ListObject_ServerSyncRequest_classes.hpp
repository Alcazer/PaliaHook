#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ListObject_ServerSyncRequest

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ListObject_ServerSyncRequest.BP_ListObject_ServerSyncRequest_C
// 0x0008 (0x0030 - 0x0028)
class UBP_ListObject_ServerSyncRequest_C final  : public UObject
{
public:
	class UInvitation*                            Invitation;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ListObject_ServerSyncRequest_C">();
	}
	static class UBP_ListObject_ServerSyncRequest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ListObject_ServerSyncRequest_C>();
	}
};
static_assert(alignof(UBP_ListObject_ServerSyncRequest_C) == 0x000008, "Wrong alignment on UBP_ListObject_ServerSyncRequest_C");
static_assert(sizeof(UBP_ListObject_ServerSyncRequest_C) == 0x000030, "Wrong size on UBP_ListObject_ServerSyncRequest_C");
static_assert(offsetof(UBP_ListObject_ServerSyncRequest_C, Invitation) == 0x000028, "Member 'UBP_ListObject_ServerSyncRequest_C::Invitation' has a wrong offset!");

}

