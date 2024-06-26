#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_Relationship

#include "Basic.hpp"

#include "BP_NotificationInterface_Relationship_classes.hpp"
#include "BP_NotificationInterface_Relationship_parameters.hpp"


namespace SDK
{

// Function BP_NotificationInterface_Relationship.BP_NotificationInterface_Relationship_C.InitPrePushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVillagerRelationshipChange      Change                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void IBP_NotificationInterface_Relationship_C::InitPrePushNotification(const struct FVillagerRelationshipChange& Change)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_Relationship_C", "InitPrePushNotification");

	Params::BP_NotificationInterface_Relationship_C_InitPrePushNotification Parms{};

	Parms.Change = std::move(Change);

	UObject::ProcessEvent(Func, &Parms);
}

}

