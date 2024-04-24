#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Notification_NewInboundGuildInvitation_PF

#include "Basic.hpp"

#include "WBP_Notification_NewInboundGuildInvitation_PF_classes.hpp"
#include "WBP_Notification_NewInboundGuildInvitation_PF_parameters.hpp"


namespace SDK
{

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_PostGlobalEvent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_NotificationQueue*         K2Node_Event_NotificationQueue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_Event_NotificationId_1                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuild                 CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo          ()
// bool                                    CallFunc_TryGetPlayerGuild_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_NotificationQueue*         K2Node_Event_NotificationQueue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_Event_NotificationId                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF(int32 EntryPoint, int32 CallFunc_PostGlobalEvent_ReturnValue, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue_1, struct FGuid& K2Node_Event_NotificationId_1, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FVAL_PlayerGuild& CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo, bool CallFunc_TryGetPlayerGuild_ReturnValue, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue, struct FGuid& K2Node_Event_NotificationId, int32 CallFunc_AkEventGlobal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostGlobalEvent_ReturnValue = CallFunc_PostGlobalEvent_ReturnValue;
	Parms.K2Node_Event_NotificationQueue_1 = K2Node_Event_NotificationQueue_1;
	Parms.K2Node_Event_NotificationId_1 = std::move(K2Node_Event_NotificationId_1);
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo = std::move(CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo);
	Parms.CallFunc_TryGetPlayerGuild_ReturnValue = CallFunc_TryGetPlayerGuild_ReturnValue;
	Parms.K2Node_Event_NotificationQueue = K2Node_Event_NotificationQueue;
	Parms.K2Node_Event_NotificationId = std::move(K2Node_Event_NotificationId);
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandleNotificationDismissed
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*         Param_NotificationQueue                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            Param_NotificationId                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::HandleNotificationDismissed(class UVALUI_NotificationQueue* Param_NotificationQueue, struct FGuid& Param_NotificationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "HandleNotificationDismissed");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed Parms{};

	Parms.Param_NotificationQueue = Param_NotificationQueue;
	Parms.Param_NotificationId = std::move(Param_NotificationId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandleNotificationShown
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*         Param_NotificationQueue                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            Param_NotificationId                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::HandleNotificationShown(class UVALUI_NotificationQueue* Param_NotificationQueue, struct FGuid& Param_NotificationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "HandleNotificationShown");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown Parms{};

	Parms.Param_NotificationQueue = Param_NotificationQueue;
	Parms.Param_NotificationId = std::move(Param_NotificationId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandlePlayerGuildManagerAcceptInvitationFailed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ErrorMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::HandlePlayerGuildManagerAcceptInvitationFailed(const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "HandlePlayerGuildManagerAcceptInvitationFailed");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerAcceptInvitationFailed Parms{};

	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandlePlayerGuildManagerAcceptInvitationSucceeded
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::HandlePlayerGuildManagerAcceptInvitationSucceeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "HandlePlayerGuildManagerAcceptInvitationSucceeded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandlePlayerGuildManagerDeclineInvitationFailed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ErrorMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::HandlePlayerGuildManagerDeclineInvitationFailed(const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "HandlePlayerGuildManagerDeclineInvitationFailed");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerDeclineInvitationFailed Parms{};

	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandlePlayerGuildManagerDeclineInvitationSucceeded
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::HandlePlayerGuildManagerDeclineInvitationSucceeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "HandlePlayerGuildManagerDeclineInvitationSucceeded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.MatchesNotification
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NotificationText                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSoftObjectPtr<class UTexture2D>        NotificationIcon                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Notification_NewInboundGuildInvitation_PF_C::MatchesNotification(class FText& NotificationText, TSoftObjectPtr<class UTexture2D>& NotificationIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "MatchesNotification");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification Parms{};

	Parms.NotificationText = NotificationText;
	Parms.NotificationIcon = NotificationIcon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.OnExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_TryDismissNotification_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::OnExpired(bool CallFunc_TryDismissNotification_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "OnExpired");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_OnExpired Parms{};

	Parms.CallFunc_TryDismissNotification_ReturnValue = CallFunc_TryDismissNotification_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.RefreshExpirationTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                     CallFunc_K2_SetTimer_ReturnValue                       (NoDestructor, HasGetValueTypeHash)

void UWBP_Notification_NewInboundGuildInvitation_PF_C::RefreshExpirationTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "RefreshExpirationTimer");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_RefreshExpirationTimer Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = std::move(CallFunc_K2_SetTimer_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.UpdateTexts
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlayerGuildName                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()

void UWBP_Notification_NewInboundGuildInvitation_PF_C::UpdateTexts(class FText PlayerGuildName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notification_NewInboundGuildInvitation_PF_C", "UpdateTexts");

	Params::WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts Parms{};

	Parms.PlayerGuildName = PlayerGuildName;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}

}
