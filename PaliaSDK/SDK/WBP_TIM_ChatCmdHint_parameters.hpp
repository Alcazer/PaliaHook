#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatCmdHint

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_TIM_ChatCmdHint.WBP_TIM_ChatCmdHint_C.SetHintText
// 0x0018 (0x0018 - 0x0000)
struct WBP_TIM_ChatCmdHint_C_SetHintText final 
{
public:
	class FText                                   HintText;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_TIM_ChatCmdHint_C_SetHintText) == 0x000008, "Wrong alignment on WBP_TIM_ChatCmdHint_C_SetHintText");
static_assert(sizeof(WBP_TIM_ChatCmdHint_C_SetHintText) == 0x000018, "Wrong size on WBP_TIM_ChatCmdHint_C_SetHintText");
static_assert(offsetof(WBP_TIM_ChatCmdHint_C_SetHintText, HintText) == 0x000000, "Member 'WBP_TIM_ChatCmdHint_C_SetHintText::HintText' has a wrong offset!");

}

