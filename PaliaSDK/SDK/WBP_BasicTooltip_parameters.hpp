#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BasicTooltip

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.CenterBodyText
// 0x0008 (0x0008 - 0x0000)
struct WBP_BasicTooltip_C_CenterBodyText final 
{
public:
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BasicTooltip_C_CenterBodyText) == 0x000008, "Wrong alignment on WBP_BasicTooltip_C_CenterBodyText");
static_assert(sizeof(WBP_BasicTooltip_C_CenterBodyText) == 0x000008, "Wrong size on WBP_BasicTooltip_C_CenterBodyText");
static_assert(offsetof(WBP_BasicTooltip_C_CenterBodyText, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000000, "Member 'WBP_BasicTooltip_C_CenterBodyText::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.ExecuteUbergraph_WBP_BasicTooltip
// 0x0038 (0x0038 - 0x0000)
struct WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FD6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Text;                                 // 0x0008(0x0018)(ConstParm)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip) == 0x000008, "Wrong alignment on WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip");
static_assert(sizeof(WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip) == 0x000038, "Wrong size on WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip");
static_assert(offsetof(WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip, EntryPoint) == 0x000000, "Member 'WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip, K2Node_Event_Text) == 0x000008, "Member 'WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip::K2Node_Event_Text' has a wrong offset!");
static_assert(offsetof(WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000020, "Member 'WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip, CallFunc_GetCurrentInputType_ReturnValue) == 0x000030, "Member 'WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000031, "Member 'WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.Reset
// 0x0008 (0x0008 - 0x0000)
struct WBP_BasicTooltip_C_Reset final 
{
public:
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BasicTooltip_C_Reset) == 0x000008, "Wrong alignment on WBP_BasicTooltip_C_Reset");
static_assert(sizeof(WBP_BasicTooltip_C_Reset) == 0x000008, "Wrong size on WBP_BasicTooltip_C_Reset");
static_assert(offsetof(WBP_BasicTooltip_C_Reset, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000000, "Member 'WBP_BasicTooltip_C_Reset::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateFullTooltip
// 0x0038 (0x0038 - 0x0000)
struct WBP_BasicTooltip_C_UpdateFullTooltip final 
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                             Image;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Header;                                            // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_BasicTooltip_C_UpdateFullTooltip) == 0x000008, "Wrong alignment on WBP_BasicTooltip_C_UpdateFullTooltip");
static_assert(sizeof(WBP_BasicTooltip_C_UpdateFullTooltip) == 0x000038, "Wrong size on WBP_BasicTooltip_C_UpdateFullTooltip");
static_assert(offsetof(WBP_BasicTooltip_C_UpdateFullTooltip, Text) == 0x000000, "Member 'WBP_BasicTooltip_C_UpdateFullTooltip::Text' has a wrong offset!");
static_assert(offsetof(WBP_BasicTooltip_C_UpdateFullTooltip, Image) == 0x000018, "Member 'WBP_BasicTooltip_C_UpdateFullTooltip::Image' has a wrong offset!");
static_assert(offsetof(WBP_BasicTooltip_C_UpdateFullTooltip, Header) == 0x000020, "Member 'WBP_BasicTooltip_C_UpdateFullTooltip::Header' has a wrong offset!");

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateHeader
// 0x0018 (0x0018 - 0x0000)
struct WBP_BasicTooltip_C_UpdateHeader final 
{
public:
	class FText                                   Header;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_BasicTooltip_C_UpdateHeader) == 0x000008, "Wrong alignment on WBP_BasicTooltip_C_UpdateHeader");
static_assert(sizeof(WBP_BasicTooltip_C_UpdateHeader) == 0x000018, "Wrong size on WBP_BasicTooltip_C_UpdateHeader");
static_assert(offsetof(WBP_BasicTooltip_C_UpdateHeader, Header) == 0x000000, "Member 'WBP_BasicTooltip_C_UpdateHeader::Header' has a wrong offset!");

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateImage
// 0x0008 (0x0008 - 0x0000)
struct WBP_BasicTooltip_C_UpdateImage final 
{
public:
	class UTexture2D*                             Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BasicTooltip_C_UpdateImage) == 0x000008, "Wrong alignment on WBP_BasicTooltip_C_UpdateImage");
static_assert(sizeof(WBP_BasicTooltip_C_UpdateImage) == 0x000008, "Wrong size on WBP_BasicTooltip_C_UpdateImage");
static_assert(offsetof(WBP_BasicTooltip_C_UpdateImage, Image) == 0x000000, "Member 'WBP_BasicTooltip_C_UpdateImage::Image' has a wrong offset!");

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateText
// 0x0018 (0x0018 - 0x0000)
struct WBP_BasicTooltip_C_UpdateText final 
{
public:
	class FText                                   Param_ToolTipText;                                 // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_BasicTooltip_C_UpdateText) == 0x000008, "Wrong alignment on WBP_BasicTooltip_C_UpdateText");
static_assert(sizeof(WBP_BasicTooltip_C_UpdateText) == 0x000018, "Wrong size on WBP_BasicTooltip_C_UpdateText");
static_assert(offsetof(WBP_BasicTooltip_C_UpdateText, Param_ToolTipText) == 0x000000, "Member 'WBP_BasicTooltip_C_UpdateText::Param_ToolTipText' has a wrong offset!");

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateToolTipText
// 0x0018 (0x0018 - 0x0000)
struct WBP_BasicTooltip_C_UpdateToolTipText final 
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_BasicTooltip_C_UpdateToolTipText) == 0x000008, "Wrong alignment on WBP_BasicTooltip_C_UpdateToolTipText");
static_assert(sizeof(WBP_BasicTooltip_C_UpdateToolTipText) == 0x000018, "Wrong size on WBP_BasicTooltip_C_UpdateToolTipText");
static_assert(offsetof(WBP_BasicTooltip_C_UpdateToolTipText, Text) == 0x000000, "Member 'WBP_BasicTooltip_C_UpdateToolTipText::Text' has a wrong offset!");

}

