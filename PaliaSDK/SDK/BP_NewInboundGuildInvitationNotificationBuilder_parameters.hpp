#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NewInboundGuildInvitationNotificationBuilder

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.CreateIncomingInvitationWidget
// 0x00C0 (0x00C0 - 0x0000)
struct BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget final 
{
public:
	TSoftClassPtr<class UClass>                   WidgetClass;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FGuid                                  Param_PlayerGuildId;                               // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       Param_InviterId;                                   // 0x0038(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UUserWidget*                            NewWidget;                                         // 0x0068(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDesktop_ReturnValue;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51F6[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51F7[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobile_ReturnValue;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51F8[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Notification_NewInboundGuildInvitation_PF_C* K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_PF; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51F9[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Notification_NewInboundGuildInvitation_CM_C* K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_CM; // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConsole_ReturnValue;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget) == 0x000008, "Wrong alignment on BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget");
static_assert(sizeof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget) == 0x0000C0, "Wrong size on BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, WidgetClass) == 0x000000, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::WidgetClass' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, Param_PlayerGuildId) == 0x000028, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::Param_PlayerGuildId' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, Param_InviterId) == 0x000038, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::Param_InviterId' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, NewWidget) == 0x000068, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::NewWidget' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, CallFunc_IsDesktop_ReturnValue) == 0x000070, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::CallFunc_IsDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, CallFunc_LoadClassAsset_Blocking_ReturnValue) == 0x000078, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::CallFunc_LoadClassAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000080, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, K2Node_ClassDynamicCast_bSuccess) == 0x000088, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, CallFunc_Create_ReturnValue) == 0x000090, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, CallFunc_IsMobile_ReturnValue) == 0x000098, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::CallFunc_IsMobile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_PF) == 0x0000A0, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_PF' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_CM) == 0x0000B0, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_CM' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, K2Node_DynamicCast_bSuccess_1) == 0x0000B8, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget, CallFunc_IsConsole_ReturnValue) == 0x0000B9, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget::CallFunc_IsConsole_ReturnValue' has a wrong offset!");

// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.Handle Get Player Guild Succeeded
// 0x0150 (0x0150 - 0x0000)
struct BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded final 
{
public:
	struct FVAL_PlayerGuild                       PlayerGuild;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_RedirectStateType_ReturnValue;            // 0x0120(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_CreateIncomingInvitationWidget_NewWidget; // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded) == 0x000008, "Wrong alignment on BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded");
static_assert(sizeof(BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded) == 0x000150, "Wrong size on BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded, PlayerGuild) == 0x000000, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded::PlayerGuild' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000118, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded, CallFunc_RedirectStateType_ReturnValue) == 0x000120, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded::CallFunc_RedirectStateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded, CallFunc_CreateIncomingInvitationWidget_NewWidget) == 0x000148, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded::CallFunc_CreateIncomingInvitationWidget_NewWidget' has a wrong offset!");

// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.HandleGetNeighborgoodFailed
// 0x0010 (0x0010 - 0x0000)
struct BP_NewInboundGuildInvitationNotificationBuilder_C_HandleGetNeighborgoodFailed final 
{
public:
	class FString                                 ErrorMessage;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NewInboundGuildInvitationNotificationBuilder_C_HandleGetNeighborgoodFailed) == 0x000008, "Wrong alignment on BP_NewInboundGuildInvitationNotificationBuilder_C_HandleGetNeighborgoodFailed");
static_assert(sizeof(BP_NewInboundGuildInvitationNotificationBuilder_C_HandleGetNeighborgoodFailed) == 0x000010, "Wrong size on BP_NewInboundGuildInvitationNotificationBuilder_C_HandleGetNeighborgoodFailed");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_HandleGetNeighborgoodFailed, ErrorMessage) == 0x000000, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_HandleGetNeighborgoodFailed::ErrorMessage' has a wrong offset!");

// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.OnFinishedBuilding__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature final 
{
public:
	class UBP_NewInboundGuildInvitationNotificationBuilder_C* Builder;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                BuiltNotification;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature) == 0x000008, "Wrong alignment on BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature");
static_assert(sizeof(BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature) == 0x000010, "Wrong size on BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature, Builder) == 0x000000, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature::Builder' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature, BuiltNotification) == 0x000008, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature::BuiltNotification' has a wrong offset!");

// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.StartBuilding
// 0x0178 (0x0178 - 0x0000)
struct BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding final 
{
public:
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_RedirectStateType_ReturnValue;            // 0x0008(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FVAL_PlayerGuild& PlayerGuild)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_CreateIncomingInvitationWidget_NewWidget; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVAL_PlayerGuild                       CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo;     // 0x0058(0x0118)()
	bool                                          CallFunc_TryGetPlayerGuild_ReturnValue;            // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding) == 0x000008, "Wrong alignment on BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding");
static_assert(sizeof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding) == 0x000178, "Wrong size on BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000000, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding, CallFunc_RedirectStateType_ReturnValue) == 0x000008, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding::CallFunc_RedirectStateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding, CallFunc_CreateIncomingInvitationWidget_NewWidget) == 0x000050, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding::CallFunc_CreateIncomingInvitationWidget_NewWidget' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding, CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo) == 0x000058, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding::CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo' has a wrong offset!");
static_assert(offsetof(BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding, CallFunc_TryGetPlayerGuild_ReturnValue) == 0x000170, "Member 'BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding::CallFunc_TryGetPlayerGuild_ReturnValue' has a wrong offset!");

}

