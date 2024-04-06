#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Notification_ShippingBin_GoldReceived

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Notification_ShippingBin_GoldReceived.WBP_Notification_ShippingBin_GoldReceived_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_Notification_ShippingBin_GoldReceived_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_99;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Amount;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Message;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Notification_Major_C*     WBP_Template_Major;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_NotificationQueue*               NotificationQueue;                                 // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  NotificationId;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Gold_Amount;                                       // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Notification_FriendInvite_Received_WBP_Template_Major_K2Node_ComponentBoundEvent_0_OnFinishedIntroTransitionAnimation__DelegateSignature(class UWBP_Template_Notification_Major_C* MajorNotificationTemplate);
	void BndEvt__WBP_Notification_FriendInvite_Received_WBP_Template_Major_K2Node_ComponentBoundEvent_1_OnFinishedOutroTransitionAnimation__DelegateSignature(class UWBP_Template_Notification_Major_C* MajorNotificationTemplate);
	void Construct();
	void ExecuteUbergraph_WBP_Notification_ShippingBin_GoldReceived(int32 EntryPoint, class UAkAudioEvent* Temp_object_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class UAkAudioEvent* Temp_object_Variable_1, const struct FUniqueNetIdRepl& K2Node_Event_UserID, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue_1, struct FGuid& K2Node_Event_NotificationId_1, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue, struct FGuid& K2Node_Event_NotificationId, bool Temp_bool_Variable, class UAkAudioEvent* K2Node_Select_Default, int32 CallFunc_PostGlobalEvent_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UWBP_Template_Notification_Major_C* K2Node_ComponentBoundEvent_MajorNotificationTemplate_1, class UWBP_Template_Notification_Major_C* K2Node_ComponentBoundEvent_MajorNotificationTemplate, bool CallFunc_TryDismissNotification_ReturnValue);
	void HandleNotificationDismissed(class UVALUI_NotificationQueue* Param_NotificationQueue, struct FGuid& Param_NotificationId);
	void HandleNotificationShown(class UVALUI_NotificationQueue* Param_NotificationQueue, struct FGuid& Param_NotificationId);
	void HandleOnExpirationTimerElapsed();
	void Init_Pre_Push_Notification(int32 GoldAmount, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void InitPrePushNotification(const struct FUniqueNetIdRepl& UserId);
	bool MatchesNotification(class FText& NotificationText, TSoftObjectPtr<class UTexture2D>& NotificationIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Notification_ShippingBin_GoldReceived_C">();
	}
	static class UWBP_Notification_ShippingBin_GoldReceived_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Notification_ShippingBin_GoldReceived_C>();
	}
};
static_assert(alignof(UWBP_Notification_ShippingBin_GoldReceived_C) == 0x000008, "Wrong alignment on UWBP_Notification_ShippingBin_GoldReceived_C");
static_assert(sizeof(UWBP_Notification_ShippingBin_GoldReceived_C) == 0x0002C0, "Wrong size on UWBP_Notification_ShippingBin_GoldReceived_C");
static_assert(offsetof(UWBP_Notification_ShippingBin_GoldReceived_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Notification_ShippingBin_GoldReceived_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_ShippingBin_GoldReceived_C, Image_99) == 0x000280, "Member 'UWBP_Notification_ShippingBin_GoldReceived_C::Image_99' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_ShippingBin_GoldReceived_C, TextBlock_Amount) == 0x000288, "Member 'UWBP_Notification_ShippingBin_GoldReceived_C::TextBlock_Amount' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_ShippingBin_GoldReceived_C, TextBlock_Message) == 0x000290, "Member 'UWBP_Notification_ShippingBin_GoldReceived_C::TextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_ShippingBin_GoldReceived_C, WBP_Template_Major) == 0x000298, "Member 'UWBP_Notification_ShippingBin_GoldReceived_C::WBP_Template_Major' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_ShippingBin_GoldReceived_C, NotificationQueue) == 0x0002A0, "Member 'UWBP_Notification_ShippingBin_GoldReceived_C::NotificationQueue' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_ShippingBin_GoldReceived_C, NotificationId) == 0x0002A8, "Member 'UWBP_Notification_ShippingBin_GoldReceived_C::NotificationId' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_ShippingBin_GoldReceived_C, Gold_Amount) == 0x0002B8, "Member 'UWBP_Notification_ShippingBin_GoldReceived_C::Gold_Amount' has a wrong offset!");

}

