#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_PartyInviteSent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NotificationInterface_PartyInviteSent.BP_NotificationInterface_PartyInviteSent_C.InitPrePushNotification
// 0x0030 (0x0030 - 0x0000)
struct BP_NotificationInterface_PartyInviteSent_C_InitPrePushNotification final 
{
public:
	struct FUniqueNetIdRepl                       UserId;                                            // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_PartyInviteSent_C_InitPrePushNotification) == 0x000008, "Wrong alignment on BP_NotificationInterface_PartyInviteSent_C_InitPrePushNotification");
static_assert(sizeof(BP_NotificationInterface_PartyInviteSent_C_InitPrePushNotification) == 0x000030, "Wrong size on BP_NotificationInterface_PartyInviteSent_C_InitPrePushNotification");
static_assert(offsetof(BP_NotificationInterface_PartyInviteSent_C_InitPrePushNotification, UserId) == 0x000000, "Member 'BP_NotificationInterface_PartyInviteSent_C_InitPrePushNotification::UserId' has a wrong offset!");

}

