#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TIM_ChatMessageListItem_CM

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ValeriaUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TIM_ChatMessageListItem_CM.BP_TIM_ChatMessageListItem_CM_C
// 0x0090 (0x00B8 - 0x0028)
class UBP_TIM_ChatMessageListItem_CM_C final  : public UObject
{
public:
	struct FGuid                                  CurrentUserId;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FValeriaChatMessage                    ChatMessage;                                       // 0x0038(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	struct FVALUI_ChatMessageConfig               MessageConfig;                                     // 0x00A0(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_50CD[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TIM_ChatPanel_CM_C*                ChatPanelWidget;                                   // 0x00B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TIM_ChatMessageListItem_CM_C">();
	}
	static class UBP_TIM_ChatMessageListItem_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TIM_ChatMessageListItem_CM_C>();
	}
};
static_assert(alignof(UBP_TIM_ChatMessageListItem_CM_C) == 0x000008, "Wrong alignment on UBP_TIM_ChatMessageListItem_CM_C");
static_assert(sizeof(UBP_TIM_ChatMessageListItem_CM_C) == 0x0000B8, "Wrong size on UBP_TIM_ChatMessageListItem_CM_C");
static_assert(offsetof(UBP_TIM_ChatMessageListItem_CM_C, CurrentUserId) == 0x000028, "Member 'UBP_TIM_ChatMessageListItem_CM_C::CurrentUserId' has a wrong offset!");
static_assert(offsetof(UBP_TIM_ChatMessageListItem_CM_C, ChatMessage) == 0x000038, "Member 'UBP_TIM_ChatMessageListItem_CM_C::ChatMessage' has a wrong offset!");
static_assert(offsetof(UBP_TIM_ChatMessageListItem_CM_C, MessageConfig) == 0x0000A0, "Member 'UBP_TIM_ChatMessageListItem_CM_C::MessageConfig' has a wrong offset!");
static_assert(offsetof(UBP_TIM_ChatMessageListItem_CM_C, ChatPanelWidget) == 0x0000B0, "Member 'UBP_TIM_ChatMessageListItem_CM_C::ChatPanelWidget' has a wrong offset!");

}

