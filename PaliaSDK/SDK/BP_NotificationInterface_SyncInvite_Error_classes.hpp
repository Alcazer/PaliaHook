#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_SyncInvite_Error

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NotificationInterface_SyncInvite_Error.BP_NotificationInterface_SyncInvite_Error_C
// 0x0000 (0x0028 - 0x0028)
class IBP_NotificationInterface_SyncInvite_Error_C final  : public IInterface
{
public:
	void GetFinalErrorText(class FText* FinalErrorText);
	void InitPrePushNotification(class UInvitation* Invitation, EInvitationFailureReason FailureReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NotificationInterface_SyncInvite_Error_C">();
	}
	static class IBP_NotificationInterface_SyncInvite_Error_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_NotificationInterface_SyncInvite_Error_C>();
	}
};
static_assert(alignof(IBP_NotificationInterface_SyncInvite_Error_C) == 0x000008, "Wrong alignment on IBP_NotificationInterface_SyncInvite_Error_C");
static_assert(sizeof(IBP_NotificationInterface_SyncInvite_Error_C) == 0x000028, "Wrong size on IBP_NotificationInterface_SyncInvite_Error_C");

}

