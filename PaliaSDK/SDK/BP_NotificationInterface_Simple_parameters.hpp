#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_Simple

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NotificationInterface_Simple.BP_NotificationInterface_Simple_C.GetMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_NotificationInterface_Simple_C_GetMessage final 
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_NotificationInterface_Simple_C_GetMessage) == 0x000008, "Wrong alignment on BP_NotificationInterface_Simple_C_GetMessage");
static_assert(sizeof(BP_NotificationInterface_Simple_C_GetMessage) == 0x000018, "Wrong size on BP_NotificationInterface_Simple_C_GetMessage");
static_assert(offsetof(BP_NotificationInterface_Simple_C_GetMessage, Message) == 0x000000, "Member 'BP_NotificationInterface_Simple_C_GetMessage::Message' has a wrong offset!");

// Function BP_NotificationInterface_Simple.BP_NotificationInterface_Simple_C.InitPrePushNotification
// 0x0050 (0x0050 - 0x0000)
struct BP_NotificationInterface_Simple_C_InitPrePushNotification final 
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TSoftObjectPtr<class UTexture2D>              Image;                                             // 0x0018(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          ShouldPersist;                                     // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_Simple_C_InitPrePushNotification) == 0x000008, "Wrong alignment on BP_NotificationInterface_Simple_C_InitPrePushNotification");
static_assert(sizeof(BP_NotificationInterface_Simple_C_InitPrePushNotification) == 0x000050, "Wrong size on BP_NotificationInterface_Simple_C_InitPrePushNotification");
static_assert(offsetof(BP_NotificationInterface_Simple_C_InitPrePushNotification, Message) == 0x000000, "Member 'BP_NotificationInterface_Simple_C_InitPrePushNotification::Message' has a wrong offset!");
static_assert(offsetof(BP_NotificationInterface_Simple_C_InitPrePushNotification, Image) == 0x000018, "Member 'BP_NotificationInterface_Simple_C_InitPrePushNotification::Image' has a wrong offset!");
static_assert(offsetof(BP_NotificationInterface_Simple_C_InitPrePushNotification, ShouldPersist) == 0x000048, "Member 'BP_NotificationInterface_Simple_C_InitPrePushNotification::ShouldPersist' has a wrong offset!");

}

