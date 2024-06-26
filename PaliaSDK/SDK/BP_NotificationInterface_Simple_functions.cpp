#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_Simple

#include "Basic.hpp"

#include "BP_NotificationInterface_Simple_classes.hpp"
#include "BP_NotificationInterface_Simple_parameters.hpp"


namespace SDK
{

// Function BP_NotificationInterface_Simple.BP_NotificationInterface_Simple_C.GetMessage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (Parm, OutParm)

void IBP_NotificationInterface_Simple_C::GetMessage(class FText* Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_Simple_C", "GetMessage");

	Params::BP_NotificationInterface_Simple_C_GetMessage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Message != nullptr)
		*Message = Parms.Message;
}


// Function BP_NotificationInterface_Simple.BP_NotificationInterface_Simple_C.InitPrePushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTexture2D>        Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    ShouldPersist                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_NotificationInterface_Simple_C::InitPrePushNotification(class FText Message, TSoftObjectPtr<class UTexture2D> Image, bool ShouldPersist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_Simple_C", "InitPrePushNotification");

	Params::BP_NotificationInterface_Simple_C_InitPrePushNotification Parms{};

	Parms.Message = Message;
	Parms.Image = Image;
	Parms.ShouldPersist = ShouldPersist;

	UObject::ProcessEvent(Func, &Parms);
}

}

