#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToolWheelUtilityButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ToolWheelUtilityButton.WBP_ToolWheelUtilityButton_C.ExecuteUbergraph_WBP_ToolWheelUtilityButton
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D3D[0xB];                                     // 0x0005(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0010(0x00D0)()
};
static_assert(alignof(WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton) == 0x000010, "Wrong alignment on WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton");
static_assert(sizeof(WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton) == 0x0000E0, "Wrong size on WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton, EntryPoint) == 0x000000, "Member 'WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton, K2Node_MakeStruct_SlateBrush) == 0x000010, "Member 'WBP_ToolWheelUtilityButton_C_ExecuteUbergraph_WBP_ToolWheelUtilityButton::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function WBP_ToolWheelUtilityButton.WBP_ToolWheelUtilityButton_C.HandleHover
// 0x0110 (0x0110 - 0x0000)
struct WBP_ToolWheelUtilityButton_C_HandleHover final 
{
public:
	struct FSlateColor                            IconHoveredTintColor;                              // 0x0000(0x0014)(Edit, BlueprintVisible)
	uint8                                         Pad_4D3E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               BackerHoveredImage;                                // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D3F[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0030(0x00D0)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ToolWheelUtilityButton_C_HandleHover) == 0x000010, "Wrong alignment on WBP_ToolWheelUtilityButton_C_HandleHover");
static_assert(sizeof(WBP_ToolWheelUtilityButton_C_HandleHover) == 0x000110, "Wrong size on WBP_ToolWheelUtilityButton_C_HandleHover");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleHover, IconHoveredTintColor) == 0x000000, "Member 'WBP_ToolWheelUtilityButton_C_HandleHover::IconHoveredTintColor' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleHover, BackerHoveredImage) == 0x000018, "Member 'WBP_ToolWheelUtilityButton_C_HandleHover::BackerHoveredImage' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleHover, CallFunc_GetIsEnabled_ReturnValue) == 0x000020, "Member 'WBP_ToolWheelUtilityButton_C_HandleHover::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleHover, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'WBP_ToolWheelUtilityButton_C_HandleHover::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleHover, CallFunc_PlayAnimationForward_ReturnValue) == 0x000100, "Member 'WBP_ToolWheelUtilityButton_C_HandleHover::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WBP_ToolWheelUtilityButton.WBP_ToolWheelUtilityButton_C.HandleUnhover
// 0x0100 (0x0100 - 0x0000)
struct WBP_ToolWheelUtilityButton_C_HandleUnhover final 
{
public:
	class UTexture*                               BackerUnhoveredImage;                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            IconUnhoveredTintColor;                            // 0x0008(0x0014)(Edit, BlueprintVisible)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D40[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0020(0x00D0)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ToolWheelUtilityButton_C_HandleUnhover) == 0x000010, "Wrong alignment on WBP_ToolWheelUtilityButton_C_HandleUnhover");
static_assert(sizeof(WBP_ToolWheelUtilityButton_C_HandleUnhover) == 0x000100, "Wrong size on WBP_ToolWheelUtilityButton_C_HandleUnhover");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleUnhover, BackerUnhoveredImage) == 0x000000, "Member 'WBP_ToolWheelUtilityButton_C_HandleUnhover::BackerUnhoveredImage' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleUnhover, IconUnhoveredTintColor) == 0x000008, "Member 'WBP_ToolWheelUtilityButton_C_HandleUnhover::IconUnhoveredTintColor' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleUnhover, CallFunc_GetIsEnabled_ReturnValue) == 0x00001C, "Member 'WBP_ToolWheelUtilityButton_C_HandleUnhover::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleUnhover, K2Node_MakeStruct_SlateBrush) == 0x000020, "Member 'WBP_ToolWheelUtilityButton_C_HandleUnhover::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_HandleUnhover, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000F0, "Member 'WBP_ToolWheelUtilityButton_C_HandleUnhover::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function WBP_ToolWheelUtilityButton.WBP_ToolWheelUtilityButton_C.UpdateToCancel
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_ToolWheelUtilityButton_C_UpdateToCancel final 
{
public:
	class UTexture2D*                             CancelIcon;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D41[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0010(0x00D0)()
};
static_assert(alignof(WBP_ToolWheelUtilityButton_C_UpdateToCancel) == 0x000010, "Wrong alignment on WBP_ToolWheelUtilityButton_C_UpdateToCancel");
static_assert(sizeof(WBP_ToolWheelUtilityButton_C_UpdateToCancel) == 0x0000E0, "Wrong size on WBP_ToolWheelUtilityButton_C_UpdateToCancel");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_UpdateToCancel, CancelIcon) == 0x000000, "Member 'WBP_ToolWheelUtilityButton_C_UpdateToCancel::CancelIcon' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_UpdateToCancel, K2Node_MakeStruct_SlateBrush) == 0x000010, "Member 'WBP_ToolWheelUtilityButton_C_UpdateToCancel::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function WBP_ToolWheelUtilityButton.WBP_ToolWheelUtilityButton_C.UpdateToReequip
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_ToolWheelUtilityButton_C_UpdateToReequip final 
{
public:
	class UTexture2D*                             ReequipIcon;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D42[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0010(0x00D0)()
};
static_assert(alignof(WBP_ToolWheelUtilityButton_C_UpdateToReequip) == 0x000010, "Wrong alignment on WBP_ToolWheelUtilityButton_C_UpdateToReequip");
static_assert(sizeof(WBP_ToolWheelUtilityButton_C_UpdateToReequip) == 0x0000E0, "Wrong size on WBP_ToolWheelUtilityButton_C_UpdateToReequip");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_UpdateToReequip, ReequipIcon) == 0x000000, "Member 'WBP_ToolWheelUtilityButton_C_UpdateToReequip::ReequipIcon' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_UpdateToReequip, K2Node_MakeStruct_SlateBrush) == 0x000010, "Member 'WBP_ToolWheelUtilityButton_C_UpdateToReequip::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function WBP_ToolWheelUtilityButton.WBP_ToolWheelUtilityButton_C.UpdateToUnequip
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_ToolWheelUtilityButton_C_UpdateToUnequip final 
{
public:
	class UTexture2D*                             UnequipIcon;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D43[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0010(0x00D0)()
};
static_assert(alignof(WBP_ToolWheelUtilityButton_C_UpdateToUnequip) == 0x000010, "Wrong alignment on WBP_ToolWheelUtilityButton_C_UpdateToUnequip");
static_assert(sizeof(WBP_ToolWheelUtilityButton_C_UpdateToUnequip) == 0x0000E0, "Wrong size on WBP_ToolWheelUtilityButton_C_UpdateToUnequip");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_UpdateToUnequip, UnequipIcon) == 0x000000, "Member 'WBP_ToolWheelUtilityButton_C_UpdateToUnequip::UnequipIcon' has a wrong offset!");
static_assert(offsetof(WBP_ToolWheelUtilityButton_C_UpdateToUnequip, K2Node_MakeStruct_SlateBrush) == 0x000010, "Member 'WBP_ToolWheelUtilityButton_C_UpdateToUnequip::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

}

