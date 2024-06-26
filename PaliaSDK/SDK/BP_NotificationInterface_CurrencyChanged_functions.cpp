#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_CurrencyChanged

#include "Basic.hpp"

#include "BP_NotificationInterface_CurrencyChanged_classes.hpp"
#include "BP_NotificationInterface_CurrencyChanged_parameters.hpp"


namespace SDK
{

// Function BP_NotificationInterface_CurrencyChanged.BP_NotificationInterface_CurrencyChanged_C.InitPrePushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurrencyConfig*                  Config                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_NotificationInterface_CurrencyChanged_C::InitPrePushNotification(class UCurrencyConfig* Config, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_CurrencyChanged_C", "InitPrePushNotification");

	Params::BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification Parms{};

	Parms.Config = Config;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}

}

