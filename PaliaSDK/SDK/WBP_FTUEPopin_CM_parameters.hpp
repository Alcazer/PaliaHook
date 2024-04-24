#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FTUEPopin_CM

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_FTUEPopin_CM_C_BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final 
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FTUEPopin_CM_C_BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_FTUEPopin_CM_C_BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_FTUEPopin_CM_C_BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_FTUEPopin_CM_C_BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_FTUEPopin_CM_C_BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_FTUEPopin_CM_C_BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.ExecuteUbergraph_WBP_FTUEPopin_CM
// 0x0010 (0x0010 - 0x0000)
struct WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4293[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM) == 0x000008, "Wrong alignment on WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM");
static_assert(sizeof(WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM) == 0x000010, "Wrong size on WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM");
static_assert(offsetof(WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM, EntryPoint) == 0x000000, "Member 'WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetRichTextVisibility
// 0x0020 (0x0020 - 0x0000)
struct WBP_FTUEPopin_CM_C_SetRichTextVisibility final 
{
public:
	TArray<class FName>                           Param_InputKeyReminderFTUEPopin;                   // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                   ItemToFind;                                        // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FTUEPopin_CM_C_SetRichTextVisibility) == 0x000008, "Wrong alignment on WBP_FTUEPopin_CM_C_SetRichTextVisibility");
static_assert(sizeof(WBP_FTUEPopin_CM_C_SetRichTextVisibility) == 0x000020, "Wrong size on WBP_FTUEPopin_CM_C_SetRichTextVisibility");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetRichTextVisibility, Param_InputKeyReminderFTUEPopin) == 0x000000, "Member 'WBP_FTUEPopin_CM_C_SetRichTextVisibility::Param_InputKeyReminderFTUEPopin' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetRichTextVisibility, ItemToFind) == 0x000010, "Member 'WBP_FTUEPopin_CM_C_SetRichTextVisibility::ItemToFind' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetRichTextVisibility, CallFunc_Array_Find_ReturnValue) == 0x000018, "Member 'WBP_FTUEPopin_CM_C_SetRichTextVisibility::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetRichTextVisibility, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_FTUEPopin_CM_C_SetRichTextVisibility::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetSlotAlignment
// 0x0020 (0x0020 - 0x0000)
struct WBP_FTUEPopin_CM_C_SetSlotAlignment final 
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InAlignment;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FTUEPopin_CM_C_SetSlotAlignment) == 0x000008, "Wrong alignment on WBP_FTUEPopin_CM_C_SetSlotAlignment");
static_assert(sizeof(WBP_FTUEPopin_CM_C_SetSlotAlignment) == 0x000020, "Wrong size on WBP_FTUEPopin_CM_C_SetSlotAlignment");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotAlignment, Widget) == 0x000000, "Member 'WBP_FTUEPopin_CM_C_SetSlotAlignment::Widget' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotAlignment, InAlignment) == 0x000008, "Member 'WBP_FTUEPopin_CM_C_SetSlotAlignment::InAlignment' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotAlignment, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'WBP_FTUEPopin_CM_C_SetSlotAlignment::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetSlotOffset
// 0x0020 (0x0020 - 0x0000)
struct WBP_FTUEPopin_CM_C_SetSlotOffset final 
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                InOffset;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FTUEPopin_CM_C_SetSlotOffset) == 0x000008, "Wrong alignment on WBP_FTUEPopin_CM_C_SetSlotOffset");
static_assert(sizeof(WBP_FTUEPopin_CM_C_SetSlotOffset) == 0x000020, "Wrong size on WBP_FTUEPopin_CM_C_SetSlotOffset");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotOffset, Widget) == 0x000000, "Member 'WBP_FTUEPopin_CM_C_SetSlotOffset::Widget' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotOffset, InOffset) == 0x000008, "Member 'WBP_FTUEPopin_CM_C_SetSlotOffset::InOffset' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotOffset, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'WBP_FTUEPopin_CM_C_SetSlotOffset::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetSlotPosition
// 0x0020 (0x0020 - 0x0000)
struct WBP_FTUEPopin_CM_C_SetSlotPosition final 
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FTUEPopin_CM_C_SetSlotPosition) == 0x000008, "Wrong alignment on WBP_FTUEPopin_CM_C_SetSlotPosition");
static_assert(sizeof(WBP_FTUEPopin_CM_C_SetSlotPosition) == 0x000020, "Wrong size on WBP_FTUEPopin_CM_C_SetSlotPosition");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotPosition, Widget) == 0x000000, "Member 'WBP_FTUEPopin_CM_C_SetSlotPosition::Widget' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotPosition, InPosition) == 0x000008, "Member 'WBP_FTUEPopin_CM_C_SetSlotPosition::InPosition' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSlotPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'WBP_FTUEPopin_CM_C_SetSlotPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetSpecificFTUEPopinSlot
// 0x0068 (0x0068 - 0x0000)
struct WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot final 
{
public:
	class USizeBox*                               FTUESizeBox;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                FTUE_BorderSize;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 FTUE_Image;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   FTUE_BorderStyled;                                 // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4294[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin_2;                        // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_3;                        // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot) == 0x000008, "Wrong alignment on WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot");
static_assert(sizeof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot) == 0x000068, "Wrong size on WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, FTUESizeBox) == 0x000000, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::FTUESizeBox' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, FTUE_BorderSize) == 0x000008, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::FTUE_BorderSize' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, FTUE_Image) == 0x000010, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::FTUE_Image' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, FTUE_BorderStyled) == 0x000018, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::FTUE_BorderStyled' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, K2Node_MakeStruct_Margin) == 0x000020, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, K2Node_MakeStruct_Margin_1) == 0x000030, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, K2Node_MakeStruct_Margin_2) == 0x000044, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::K2Node_MakeStruct_Margin_2' has a wrong offset!");
static_assert(offsetof(WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot, K2Node_MakeStruct_Margin_3) == 0x000054, "Member 'WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot::K2Node_MakeStruct_Margin_3' has a wrong offset!");

}
