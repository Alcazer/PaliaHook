#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ListObject_PartyRequest

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ListObject_PartyRequest.BP_ListObject_PartyRequest_C
// 0x00A8 (0x00D0 - 0x0028)
class UBP_ListObject_PartyRequest_C final  : public UObject
{
public:
	struct FVAL_PartyInvite                       PartyInvite;                                       // 0x0028(0x00A8)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ListObject_PartyRequest_C">();
	}
	static class UBP_ListObject_PartyRequest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ListObject_PartyRequest_C>();
	}
};
static_assert(alignof(UBP_ListObject_PartyRequest_C) == 0x000008, "Wrong alignment on UBP_ListObject_PartyRequest_C");
static_assert(sizeof(UBP_ListObject_PartyRequest_C) == 0x0000D0, "Wrong size on UBP_ListObject_PartyRequest_C");
static_assert(offsetof(UBP_ListObject_PartyRequest_C, PartyInvite) == 0x000028, "Member 'UBP_ListObject_PartyRequest_C::PartyInvite' has a wrong offset!");

}

