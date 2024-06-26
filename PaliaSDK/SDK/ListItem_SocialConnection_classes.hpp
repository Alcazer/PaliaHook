#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ListItem_SocialConnection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SocialPanelConfig_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ListItem_SocialConnection.ListItem_SocialConnection_C
// 0x0038 (0x0060 - 0x0028)
class UListItem_SocialConnection_C final  : public UObject
{
public:
	struct FUniqueNetIdRepl                       UserId;                                            // 0x0028(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DebugFakeConnection;                               // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FBP_SocialPanelConfig                  Config;                                            // 0x0059(0x0006)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ListItem_SocialConnection_C">();
	}
	static class UListItem_SocialConnection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UListItem_SocialConnection_C>();
	}
};
static_assert(alignof(UListItem_SocialConnection_C) == 0x000008, "Wrong alignment on UListItem_SocialConnection_C");
static_assert(sizeof(UListItem_SocialConnection_C) == 0x000060, "Wrong size on UListItem_SocialConnection_C");
static_assert(offsetof(UListItem_SocialConnection_C, UserId) == 0x000028, "Member 'UListItem_SocialConnection_C::UserId' has a wrong offset!");
static_assert(offsetof(UListItem_SocialConnection_C, DebugFakeConnection) == 0x000058, "Member 'UListItem_SocialConnection_C::DebugFakeConnection' has a wrong offset!");
static_assert(offsetof(UListItem_SocialConnection_C, Config) == 0x000059, "Member 'UListItem_SocialConnection_C::Config' has a wrong offset!");

}

