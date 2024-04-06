#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryFullError

#include "Basic.hpp"

#include "WBP_InventoryFullError_classes.hpp"
#include "WBP_InventoryFullError_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryFullError.WBP_InventoryFullError_C.ActivateError
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryFullError_C::ActivateError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryFullError_C", "ActivateError");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryFullError.WBP_InventoryFullError_C.ExecuteUbergraph_WBP_InventoryFullError
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_NotificationQueue*         K2Node_Event_NotificationQueue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_Event_NotificationId_1                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_NotificationQueue*         K2Node_Event_NotificationQueue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_Event_NotificationId                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryFullError_C::ExecuteUbergraph_WBP_InventoryFullError(int32 EntryPoint, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue_1, struct FGuid& K2Node_Event_NotificationId_1, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue, struct FGuid& K2Node_Event_NotificationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryFullError_C", "ExecuteUbergraph_WBP_InventoryFullError");

	Params::WBP_InventoryFullError_C_ExecuteUbergraph_WBP_InventoryFullError Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NotificationQueue_1 = K2Node_Event_NotificationQueue_1;
	Parms.K2Node_Event_NotificationId_1 = std::move(K2Node_Event_NotificationId_1);
	Parms.K2Node_Event_NotificationQueue = K2Node_Event_NotificationQueue;
	Parms.K2Node_Event_NotificationId = std::move(K2Node_Event_NotificationId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryFullError.WBP_InventoryFullError_C.HandleNotificationDismissed
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*         NotificationQueue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            NotificationId                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryFullError_C::HandleNotificationDismissed(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& NotificationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryFullError_C", "HandleNotificationDismissed");

	Params::WBP_InventoryFullError_C_HandleNotificationDismissed Parms{};

	Parms.NotificationQueue = NotificationQueue;
	Parms.NotificationId = std::move(NotificationId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryFullError.WBP_InventoryFullError_C.HandleNotificationShown
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*         NotificationQueue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            NotificationId                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryFullError_C::HandleNotificationShown(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& NotificationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryFullError_C", "HandleNotificationShown");

	Params::WBP_InventoryFullError_C_HandleNotificationShown Parms{};

	Parms.NotificationQueue = NotificationQueue;
	Parms.NotificationId = std::move(NotificationId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryFullError.WBP_InventoryFullError_C.MatchesNotification
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NotificationText                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSoftObjectPtr<class UTexture2D>        NotificationIcon                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_InventoryFullError_C::MatchesNotification(class FText& NotificationText, TSoftObjectPtr<class UTexture2D>& NotificationIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryFullError_C", "MatchesNotification");

	Params::WBP_InventoryFullError_C_MatchesNotification Parms{};

	Parms.NotificationText = NotificationText;
	Parms.NotificationIcon = NotificationIcon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InventoryFullError.WBP_InventoryFullError_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryFullError_C::UpdateText(class FText NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryFullError_C", "UpdateText");

	Params::WBP_InventoryFullError_C_UpdateText Parms{};

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);
}

}

