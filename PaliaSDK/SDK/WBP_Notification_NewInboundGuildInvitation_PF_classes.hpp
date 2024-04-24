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
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Notification_NewInboundGuildInvitation_PF.WBP_Notification_NewInboundGuildInvitation_PF_C
// 0x0088 (0x0370 - 0x02E8)
class UWBP_Notification_NewInboundGuildInvitation_PF_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_99;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Message;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlatformPlayerName_C*              WBP_PlatformPlayerName;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Notification_Minor_C*     WBP_Template_Notification_Minor;                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuid                                  PlayerGuildId;                                     // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       InviterId;                                         // 0x0320(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UVALUI_NotificationQueue*               NotificationQueue;                                 // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  NotificationId;                                    // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NotificationDuration;                              // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_PF(int32 EntryPoint, int32 CallFunc_PostGlobalEvent_ReturnValue, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue_1, struct FGuid& K2Node_Event_NotificationId_1, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FVAL_PlayerGuild& CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo, bool CallFunc_TryGetPlayerGuild_ReturnValue, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue, struct FGuid& K2Node_Event_NotificationId, int32 CallFunc_AkEventGlobal_ReturnValue);
	void HandleNotificationDismissed(class UVALUI_NotificationQueue* Param_NotificationQueue, struct FGuid& Param_NotificationId);
	void HandleNotificationShown(class UVALUI_NotificationQueue* Param_NotificationQueue, struct FGuid& Param_NotificationId);
	void HandlePlayerGuildManagerAcceptInvitationFailed(const class FString& ErrorMessage);
	void HandlePlayerGuildManagerAcceptInvitationSucceeded();
	void HandlePlayerGuildManagerDeclineInvitationFailed(const class FString& ErrorMessage);
	void HandlePlayerGuildManagerDeclineInvitationSucceeded();
	bool MatchesNotification(class FText& NotificationText, TSoftObjectPtr<class UTexture2D>& NotificationIcon);
	void OnExpired(bool CallFunc_TryDismissNotification_ReturnValue);
	void RefreshExpirationTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void UpdateTexts(class FText PlayerGuildName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Notification_NewInboundGuildInvitation_PF_C">();
	}
	static class UWBP_Notification_NewInboundGuildInvitation_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Notification_NewInboundGuildInvitation_PF_C>();
	}
};
static_assert(alignof(UWBP_Notification_NewInboundGuildInvitation_PF_C) == 0x000008, "Wrong alignment on UWBP_Notification_NewInboundGuildInvitation_PF_C");
static_assert(sizeof(UWBP_Notification_NewInboundGuildInvitation_PF_C) == 0x000370, "Wrong size on UWBP_Notification_NewInboundGuildInvitation_PF_C");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, Image_99) == 0x0002F0, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::Image_99' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, TextBlock_Message) == 0x0002F8, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::TextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, WBP_PlatformPlayerName) == 0x000300, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::WBP_PlatformPlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, WBP_Template_Notification_Minor) == 0x000308, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::WBP_Template_Notification_Minor' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, PlayerGuildId) == 0x000310, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::PlayerGuildId' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, InviterId) == 0x000320, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::InviterId' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, NotificationQueue) == 0x000350, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::NotificationQueue' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, NotificationId) == 0x000358, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::NotificationId' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_PF_C, NotificationDuration) == 0x000368, "Member 'UWBP_Notification_NewInboundGuildInvitation_PF_C::NotificationDuration' has a wrong offset!");

}
