#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PopupResetDefault_KeyRebind

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PopupResetDefault_KeyRebind.WBP_PopupResetDefault_KeyRebind_C.ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind
// 0x0018 (0x0018 - 0x0000)
struct WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FC4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind) == 0x000008, "Wrong alignment on WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind");
static_assert(sizeof(WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind) == 0x000018, "Wrong size on WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind");
static_assert(offsetof(WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind, EntryPoint) == 0x000000, "Member 'WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000010, "Member 'WBP_PopupResetDefault_KeyRebind_C_ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function WBP_PopupResetDefault_KeyRebind.WBP_PopupResetDefault_KeyRebind_C.GetInputActionHandlingComponent
// 0x0008 (0x0008 - 0x0000)
struct WBP_PopupResetDefault_KeyRebind_C_GetInputActionHandlingComponent final 
{
public:
	class US6UI_InputActionHandlingWidgetComponent* ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PopupResetDefault_KeyRebind_C_GetInputActionHandlingComponent) == 0x000008, "Wrong alignment on WBP_PopupResetDefault_KeyRebind_C_GetInputActionHandlingComponent");
static_assert(sizeof(WBP_PopupResetDefault_KeyRebind_C_GetInputActionHandlingComponent) == 0x000008, "Wrong size on WBP_PopupResetDefault_KeyRebind_C_GetInputActionHandlingComponent");
static_assert(offsetof(WBP_PopupResetDefault_KeyRebind_C_GetInputActionHandlingComponent, ReturnValue) == 0x000000, "Member 'WBP_PopupResetDefault_KeyRebind_C_GetInputActionHandlingComponent::ReturnValue' has a wrong offset!");

}

