#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Notification_NewInboundGuildInvitation_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Notification_NewInboundGuildInvitation_CM.WBP_Notification_NewInboundGuildInvitation_CM_C
// 0x0090 (0x05A0 - 0x0510)
class UWBP_Notification_NewInboundGuildInvitation_CM_C final  : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_Primary_Accept;                             // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_99;                                          // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Message;                                 // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* WBP_Template_Button_Secondary_01_CM_C_0;           // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Notification_Major_C*     WBP_Template_Major;                                // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuid                                  PlayerGuildId;                                     // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       InviterId;                                         // 0x0550(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UVALUI_NotificationQueue*               NotificationQueue;                                 // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  NotificationId;                                    // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NotificationDuration;                              // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Notification_NewInboundGuildInvitation_CM_WBP_Template_Button_Secondary_01_CM_C_0_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_Notification_NewInboundNeighborhoodInvitation_Button_Primary_Accept_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_Notification_NewInboundNeighborhoodInvitation_Button_Primary_Accept_K2Node_ComponentBoundEvent_5_ButtonHovered__DelegateSignature();
	void BndEvt__WBP_Notification_NewInboundNeighborhoodInvitation_WBP_Template_Major_K2Node_ComponentBoundEvent_2_OnFinishedOutroTransitionAnimation__DelegateSignature(class UWBP_Template_Notification_Major_C* MajorNotificationTemplate);
	void BndEvt__WBP_Notification_NewInboundNeighborhoodInvitation_WBP_Template_Major_K2Node_ComponentBoundEvent_3_OnFinishedIntroTransitionAnimation__DelegateSignature(class UWBP_Template_Notification_Major_C* MajorNotificationTemplate);
	void Construct();
	void ExecuteUbergraph_WBP_Notification_NewInboundGuildInvitation_CM(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId_1, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue_1, struct FGuid& K2Node_Event_NotificationId_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_PostGlobalEvent_ReturnValue, int32 CallFunc_PostGlobalEvent_ReturnValue_1, int32 CallFunc_PostGlobalEvent_ReturnValue_2, class UVALUI_NotificationQueue* K2Node_Event_NotificationQueue, struct FGuid& K2Node_Event_NotificationId, class UWBP_Template_Notification_Major_C* K2Node_ComponentBoundEvent_MajorNotificationTemplate_1, class UWBP_Template_Notification_Major_C* K2Node_ComponentBoundEvent_MajorNotificationTemplate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, bool CallFunc_TryDismissNotification_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, int32 CallFunc_PostGlobalEvent_ReturnValue_3, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, const struct FVAL_PlayerGuild& CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo, bool CallFunc_TryGetPlayerGuild_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void HandleExpirationTimerElapsed();
	void HandleNotificationDismissed(class UVALUI_NotificationQueue* Param_NotificationQueue, struct FGuid& Param_NotificationId);
	void HandleNotificationShown(class UVALUI_NotificationQueue* Param_NotificationQueue, struct FGuid& Param_NotificationId);
	void HandlePlayerGuildManagerAcceptInvitationFailed(const class FString& ErrorMessage);
	void HandlePlayerGuildManagerAcceptInvitationSucceeded();
	void HandlePlayerGuildManagerDeclineInvitationFailed(const class FString& ErrorMessage);
	void HandlePlayerGuildManagerDeclineInvitationSucceeded();
	bool MatchesNotification(class FText& NotificationText, TSoftObjectPtr<class UTexture2D>& NotificationIcon);
	void OnFailure_607BDA9A452CF30FCB2059A1D6CE5E03(struct FGuid& AccountId);
	void OnSuccess_607BDA9A452CF30FCB2059A1D6CE5E03(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);
	void StartOutro();
	void UpdateTexts(class FText PlayerGuildName, class FText InstigatorCharacterName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Notification_NewInboundGuildInvitation_CM_C">();
	}
	static class UWBP_Notification_NewInboundGuildInvitation_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Notification_NewInboundGuildInvitation_CM_C>();
	}
};
static_assert(alignof(UWBP_Notification_NewInboundGuildInvitation_CM_C) == 0x000008, "Wrong alignment on UWBP_Notification_NewInboundGuildInvitation_CM_C");
static_assert(sizeof(UWBP_Notification_NewInboundGuildInvitation_CM_C) == 0x0005A0, "Wrong size on UWBP_Notification_NewInboundGuildInvitation_CM_C");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, Button_Primary_Accept) == 0x000518, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::Button_Primary_Accept' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, Image_99) == 0x000520, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::Image_99' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, TextBlock_Message) == 0x000528, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::TextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, WBP_Template_Button_Secondary_01_CM_C_0) == 0x000530, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::WBP_Template_Button_Secondary_01_CM_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, WBP_Template_Major) == 0x000538, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::WBP_Template_Major' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, PlayerGuildId) == 0x000540, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::PlayerGuildId' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, InviterId) == 0x000550, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::InviterId' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, NotificationQueue) == 0x000580, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::NotificationQueue' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, NotificationId) == 0x000588, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::NotificationId' has a wrong offset!");
static_assert(offsetof(UWBP_Notification_NewInboundGuildInvitation_CM_C, NotificationDuration) == 0x000598, "Member 'UWBP_Notification_NewInboundGuildInvitation_CM_C::NotificationDuration' has a wrong offset!");

}

