#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_PartyInviteSent

#include "Basic.hpp"

#include "BP_NotificationInterface_PartyInviteSent_classes.hpp"
#include "BP_NotificationInterface_PartyInviteSent_parameters.hpp"


namespace SDK
{

// Function BP_NotificationInterface_PartyInviteSent.BP_NotificationInterface_PartyInviteSent_C.InitPrePushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 UserId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBP_NotificationInterface_PartyInviteSent_C::InitPrePushNotification(const struct FUniqueNetIdRepl& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_PartyInviteSent_C", "InitPrePushNotification");

	Params::BP_NotificationInterface_PartyInviteSent_C_InitPrePushNotification Parms{};

	Parms.UserId = std::move(UserId);

	UObject::ProcessEvent(Func, &Parms);
}

}

