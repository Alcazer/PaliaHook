#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_QuestProgress

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NotificationInterface_QuestProgress.BP_NotificationInterface_QuestProgress_C.GetTextBlockQuestObjective
// 0x0008 (0x0008 - 0x0000)
struct BP_NotificationInterface_QuestProgress_C_GetTextBlockQuestObjective final 
{
public:
	class UVALUI_TextBlock_Styled*                TextBlockQuestObjective;                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_QuestProgress_C_GetTextBlockQuestObjective) == 0x000008, "Wrong alignment on BP_NotificationInterface_QuestProgress_C_GetTextBlockQuestObjective");
static_assert(sizeof(BP_NotificationInterface_QuestProgress_C_GetTextBlockQuestObjective) == 0x000008, "Wrong size on BP_NotificationInterface_QuestProgress_C_GetTextBlockQuestObjective");
static_assert(offsetof(BP_NotificationInterface_QuestProgress_C_GetTextBlockQuestObjective, TextBlockQuestObjective) == 0x000000, "Member 'BP_NotificationInterface_QuestProgress_C_GetTextBlockQuestObjective::TextBlockQuestObjective' has a wrong offset!");

// Function BP_NotificationInterface_QuestProgress.BP_NotificationInterface_QuestProgress_C.InitAcceptedPostPushNotification
// 0x0008 (0x0008 - 0x0000)
struct BP_NotificationInterface_QuestProgress_C_InitAcceptedPostPushNotification final 
{
public:
	class UVAL_QuestDef*                          QuestDef;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_QuestProgress_C_InitAcceptedPostPushNotification) == 0x000008, "Wrong alignment on BP_NotificationInterface_QuestProgress_C_InitAcceptedPostPushNotification");
static_assert(sizeof(BP_NotificationInterface_QuestProgress_C_InitAcceptedPostPushNotification) == 0x000008, "Wrong size on BP_NotificationInterface_QuestProgress_C_InitAcceptedPostPushNotification");
static_assert(offsetof(BP_NotificationInterface_QuestProgress_C_InitAcceptedPostPushNotification, QuestDef) == 0x000000, "Member 'BP_NotificationInterface_QuestProgress_C_InitAcceptedPostPushNotification::QuestDef' has a wrong offset!");

// Function BP_NotificationInterface_QuestProgress.BP_NotificationInterface_QuestProgress_C.InitStepPostPushNotification
// 0x0010 (0x0010 - 0x0000)
struct BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification final 
{
public:
	class UVAL_QuestDef*                          QuestDef;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         QuestStepNum;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification) == 0x000008, "Wrong alignment on BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification");
static_assert(sizeof(BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification) == 0x000010, "Wrong size on BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification");
static_assert(offsetof(BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification, QuestDef) == 0x000000, "Member 'BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification::QuestDef' has a wrong offset!");
static_assert(offsetof(BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification, QuestStepNum) == 0x000008, "Member 'BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification::QuestStepNum' has a wrong offset!");

}

