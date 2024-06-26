#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_FocusUpgrade

#include "Basic.hpp"

#include "BP_NotificationInterface_FocusUpgrade_classes.hpp"
#include "BP_NotificationInterface_FocusUpgrade_parameters.hpp"


namespace SDK
{

// Function BP_NotificationInterface_FocusUpgrade.BP_NotificationInterface_FocusUpgrade_C.InitPrePushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVAL_ShrineType                         ShrineType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  UpgradeAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_NotificationInterface_FocusUpgrade_C::InitPrePushNotification(EVAL_ShrineType ShrineType, double UpgradeAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_FocusUpgrade_C", "InitPrePushNotification");

	Params::BP_NotificationInterface_FocusUpgrade_C_InitPrePushNotification Parms{};

	Parms.ShrineType = ShrineType;
	Parms.UpgradeAmount = UpgradeAmount;

	UObject::ProcessEvent(Func, &Parms);
}

}

