#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Notification_NewInboundGuildInvitation_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF
// 0x0168 (0x0168 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostGlobalEvent_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVALUI_NotificationQueue*               K2Node_Event_NotificationQueue_1;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_Event_NotificationId_1;                     // 0x0010(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVAL_PlayerGuildSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVAL_PlayerGuild                       CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo;     // 0x0028(0x0118)()
	bool                                          CallFunc_TryGetPlayerGuild_ReturnValue;            // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A22[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_NotificationQueue*               K2Node_Event_NotificationQueue;                    // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_Event_NotificationId;                       // 0x0150(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF) == 0x000008, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF) == 0x000168, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, EntryPoint) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, CallFunc_PostGlobalEvent_ReturnValue) == 0x000004, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::CallFunc_PostGlobalEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, K2Node_Event_NotificationQueue_1) == 0x000008, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::K2Node_Event_NotificationQueue_1' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, K2Node_Event_NotificationId_1) == 0x000010, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::K2Node_Event_NotificationId_1' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000020, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo) == 0x000028, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, CallFunc_TryGetPlayerGuild_ReturnValue) == 0x000140, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::CallFunc_TryGetPlayerGuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, K2Node_Event_NotificationQueue) == 0x000148, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::K2Node_Event_NotificationQueue' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, K2Node_Event_NotificationId) == 0x000150, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::K2Node_Event_NotificationId' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF, CallFunc_AkEventGlobal_ReturnValue) == 0x000160, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandleNotificationDismissed
// 0x0018 (0x0018 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed final 
{
public:
	class UVALUI_NotificationQueue*               Param_NotificationQueue;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  Param_NotificationId;                              // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed) == 0x000008, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed) == 0x000018, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed, Param_NotificationQueue) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed::Param_NotificationQueue' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed, Param_NotificationId) == 0x000008, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationDismissed::Param_NotificationId' has a wrong offset!");

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandleNotificationShown
// 0x0018 (0x0018 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown final 
{
public:
	class UVALUI_NotificationQueue*               Param_NotificationQueue;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  Param_NotificationId;                              // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown) == 0x000008, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown) == 0x000018, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown, Param_NotificationQueue) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown::Param_NotificationQueue' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown, Param_NotificationId) == 0x000008, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_HandleNotificationShown::Param_NotificationId' has a wrong offset!");

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandlePlayerGuildManagerAcceptInvitationFailed
// 0x0010 (0x0010 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerAcceptInvitationFailed final 
{
public:
	class FString                                 ErrorMessage;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerAcceptInvitationFailed) == 0x000008, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerAcceptInvitationFailed");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerAcceptInvitationFailed) == 0x000010, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerAcceptInvitationFailed");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerAcceptInvitationFailed, ErrorMessage) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerAcceptInvitationFailed::ErrorMessage' has a wrong offset!");

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.HandlePlayerGuildManagerDeclineInvitationFailed
// 0x0010 (0x0010 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerDeclineInvitationFailed final 
{
public:
	class FString                                 ErrorMessage;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerDeclineInvitationFailed) == 0x000008, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerDeclineInvitationFailed");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerDeclineInvitationFailed) == 0x000010, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerDeclineInvitationFailed");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerDeclineInvitationFailed, ErrorMessage) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_HandlePlayerGuildManagerDeclineInvitationFailed::ErrorMessage' has a wrong offset!");

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.MatchesNotification
// 0x0048 (0x0048 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification final 
{
public:
	class FText                                   NotificationText;                                  // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TSoftObjectPtr<class UTexture2D>              NotificationIcon;                                  // 0x0018(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification) == 0x000008, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification) == 0x000048, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification, NotificationText) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification::NotificationText' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification, NotificationIcon) == 0x000018, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification::NotificationIcon' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification, ReturnValue) == 0x000040, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_MatchesNotification::ReturnValue' has a wrong offset!");

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.OnExpired
// 0x0001 (0x0001 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_OnExpired final 
{
public:
	bool                                          CallFunc_TryDismissNotification_ReturnValue;       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_OnExpired) == 0x000001, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_OnExpired");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_OnExpired) == 0x000001, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_OnExpired");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_OnExpired, CallFunc_TryDismissNotification_ReturnValue) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_OnExpired::CallFunc_TryDismissNotification_ReturnValue' has a wrong offset!");

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.RefreshExpirationTimer
// 0x0008 (0x0008 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_RefreshExpirationTimer final 
{
public:
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_RefreshExpirationTimer) == 0x000008, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_RefreshExpirationTimer");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_RefreshExpirationTimer) == 0x000008, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_RefreshExpirationTimer");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_RefreshExpirationTimer, CallFunc_K2_SetTimer_ReturnValue) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_RefreshExpirationTimer::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

// Function WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C.UpdateTexts
// 0x0090 (0x0090 - 0x0000)
struct WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts final 
{
public:
	class FText                                   PlayerGuildName;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
};
static_assert(alignof(WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts) == 0x000008, "Wrong alignment on WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts");
static_assert(sizeof(WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts) == 0x000090, "Wrong size on WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts, PlayerGuildName) == 0x000000, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts::PlayerGuildName' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts, K2Node_MakeArray_Array) == 0x000068, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts, CallFunc_Format_ReturnValue) == 0x000078, "Member 'WBP_Notification_NewInboundGuildInvitation_PF_C_UpdateTexts::CallFunc_Format_ReturnValue' has a wrong offset!");

}

