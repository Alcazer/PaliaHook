#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatImageEmoji

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_TIM_ChatImageEmoji.WBP_TIM_ChatImageEmoji_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_TIM_ChatImageEmoji_C_BP_OnItemExpansionChanged final 
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_ChatImageEmoji_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_TIM_ChatImageEmoji_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_TIM_ChatImageEmoji_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_TIM_ChatImageEmoji_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_TIM_ChatImageEmoji_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_TIM_ChatImageEmoji.WBP_TIM_ChatImageEmoji_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_TIM_ChatImageEmoji_C_BP_OnItemSelectionChanged final 
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_ChatImageEmoji_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_TIM_ChatImageEmoji_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_TIM_ChatImageEmoji_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_TIM_ChatImageEmoji_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_TIM_ChatImageEmoji_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_TIM_ChatImageEmoji.WBP_TIM_ChatImageEmoji_C.ExecuteUbergraph_WBP_TIM_ChatImageEmoji
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatManager*                           CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B8[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_TIM_ChatImageEmojiListItem_C*       K2Node_DynamicCast_AsBP_TIM_Chat_Image_Emoji_List_Item; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B9[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
};
static_assert(alignof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji) == 0x000008, "Wrong alignment on WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji");
static_assert(sizeof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji) == 0x0000C0, "Wrong size on WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, EntryPoint) == 0x000000, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, K2Node_Event_bIsExpanded) == 0x000010, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, K2Node_Event_bIsSelected) == 0x000011, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, K2Node_Event_ListItemObject) == 0x000018, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, K2Node_DynamicCast_AsBP_TIM_Chat_Image_Emoji_List_Item) == 0x000020, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::K2Node_DynamicCast_AsBP_TIM_Chat_Image_Emoji_List_Item' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, CallFunc_Conv_NameToText_ReturnValue) == 0x000030, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, K2Node_MakeArray_Array) == 0x000098, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'WBP_TIM_ChatImageEmoji_C_ExecuteUbergraph_WBP_TIM_ChatImageEmoji::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_TIM_ChatImageEmoji.WBP_TIM_ChatImageEmoji_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_TIM_ChatImageEmoji_C_OnListItemObjectSet final 
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_ChatImageEmoji_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_TIM_ChatImageEmoji_C_OnListItemObjectSet");
static_assert(sizeof(WBP_TIM_ChatImageEmoji_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_TIM_ChatImageEmoji_C_OnListItemObjectSet");
static_assert(offsetof(WBP_TIM_ChatImageEmoji_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_TIM_ChatImageEmoji_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

}
