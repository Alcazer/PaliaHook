#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PopupHasButtonNotBound_KeyRebind_PF

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_PopupHasButtonNotBound_KeyRebind_PF.WBP_PopupHasButtonNotBound_KeyRebind_PF_C.ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF
// 0x0018 (0x0018 - 0x0000)
struct WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FC1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF) == 0x000008, "Wrong alignment on WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF");
static_assert(sizeof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF) == 0x000018, "Wrong size on WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF");
static_assert(offsetof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF, EntryPoint) == 0x000000, "Member 'WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000010, "Member 'WBP_PopupHasButtonNotBound_KeyRebind_PF_C_ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind_PF::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function WBP_PopupHasButtonNotBound_KeyRebind_PF.WBP_PopupHasButtonNotBound_KeyRebind_PF_C.GetInputActionHandlingComponent
// 0x0008 (0x0008 - 0x0000)
struct WBP_PopupHasButtonNotBound_KeyRebind_PF_C_GetInputActionHandlingComponent final 
{
public:
	class US6UI_InputActionHandlingWidgetComponent* ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_GetInputActionHandlingComponent) == 0x000008, "Wrong alignment on WBP_PopupHasButtonNotBound_KeyRebind_PF_C_GetInputActionHandlingComponent");
static_assert(sizeof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_GetInputActionHandlingComponent) == 0x000008, "Wrong size on WBP_PopupHasButtonNotBound_KeyRebind_PF_C_GetInputActionHandlingComponent");
static_assert(offsetof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_GetInputActionHandlingComponent, ReturnValue) == 0x000000, "Member 'WBP_PopupHasButtonNotBound_KeyRebind_PF_C_GetInputActionHandlingComponent::ReturnValue' has a wrong offset!");

// Function WBP_PopupHasButtonNotBound_KeyRebind_PF.WBP_PopupHasButtonNotBound_KeyRebind_PF_C.Initialize
// 0x0001 (0x0001 - 0x0000)
struct WBP_PopupHasButtonNotBound_KeyRebind_PF_C_Initialize final 
{
public:
	ECommonInputType                              CurrentInputType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_Initialize) == 0x000001, "Wrong alignment on WBP_PopupHasButtonNotBound_KeyRebind_PF_C_Initialize");
static_assert(sizeof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_Initialize) == 0x000001, "Wrong size on WBP_PopupHasButtonNotBound_KeyRebind_PF_C_Initialize");
static_assert(offsetof(WBP_PopupHasButtonNotBound_KeyRebind_PF_C_Initialize, CurrentInputType) == 0x000000, "Member 'WBP_PopupHasButtonNotBound_KeyRebind_PF_C_Initialize::CurrentInputType' has a wrong offset!");

}

