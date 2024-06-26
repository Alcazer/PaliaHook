#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GpPopup_DescriptivePopupBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_GpPopup_DescriptivePopupBase.WBP_GpPopup_DescriptivePopupBase_C.CloseWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_GpPopup_DescriptivePopupBase_C_CloseWidget final 
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GpPopup_DescriptivePopupBase_C_CloseWidget) == 0x000008, "Wrong alignment on WBP_GpPopup_DescriptivePopupBase_C_CloseWidget");
static_assert(sizeof(WBP_GpPopup_DescriptivePopupBase_C_CloseWidget) == 0x000010, "Wrong size on WBP_GpPopup_DescriptivePopupBase_C_CloseWidget");
static_assert(offsetof(WBP_GpPopup_DescriptivePopupBase_C_CloseWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'WBP_GpPopup_DescriptivePopupBase_C_CloseWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GpPopup_DescriptivePopupBase_C_CloseWidget, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'WBP_GpPopup_DescriptivePopupBase_C_CloseWidget::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function WBP_GpPopup_DescriptivePopupBase.WBP_GpPopup_DescriptivePopupBase_C.ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase
// 0x0028 (0x0028 - 0x0000)
struct WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54FA[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_DescriptivePopupType*              K2Node_DynamicCast_AsDescriptive_Modal_Type;       // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase) == 0x000008, "Wrong alignment on WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase");
static_assert(sizeof(WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase) == 0x000028, "Wrong size on WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase");
static_assert(offsetof(WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase, EntryPoint) == 0x000000, "Member 'WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase, K2Node_DynamicCast_AsDescriptive_Modal_Type) == 0x000018, "Member 'WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase::K2Node_DynamicCast_AsDescriptive_Modal_Type' has a wrong offset!");
static_assert(offsetof(WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_GpPopup_DescriptivePopupBase_C_ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_GpPopup_DescriptivePopupBase.WBP_GpPopup_DescriptivePopupBase_C.SetModalAlignment
// 0x0010 (0x0010 - 0x0000)
struct WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment final 
{
public:
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment) == 0x000008, "Wrong alignment on WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment");
static_assert(sizeof(WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment) == 0x000010, "Wrong size on WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment");
static_assert(offsetof(WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000000, "Member 'WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'WBP_GpPopup_DescriptivePopupBase_C_SetModalAlignment::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

