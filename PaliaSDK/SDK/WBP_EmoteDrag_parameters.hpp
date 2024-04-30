#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EmoteDrag

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_EmoteDrag.WBP_EmoteDrag_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_EmoteDrag_C_BP_OnItemExpansionChanged final 
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteDrag_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_EmoteDrag_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_EmoteDrag_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_EmoteDrag_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_EmoteDrag_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_EmoteDrag_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_EmoteDrag.WBP_EmoteDrag_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_EmoteDrag_C_BP_OnItemSelectionChanged final 
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteDrag_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_EmoteDrag_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_EmoteDrag_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_EmoteDrag_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_EmoteDrag_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_EmoteDrag_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_EmoteDrag.WBP_EmoteDrag_C.ExecuteUbergraph_WBP_EmoteDrag
// 0x0010 (0x0010 - 0x0000)
struct WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B71[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag) == 0x000008, "Wrong alignment on WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag");
static_assert(sizeof(WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag) == 0x000010, "Wrong size on WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag");
static_assert(offsetof(WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag, EntryPoint) == 0x000000, "Member 'WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag, K2Node_Event_bIsExpanded) == 0x000004, "Member 'WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag, K2Node_Event_bIsSelected) == 0x000005, "Member 'WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag, K2Node_Event_ListItemObject) == 0x000008, "Member 'WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag::K2Node_Event_ListItemObject' has a wrong offset!");

// Function WBP_EmoteDrag.WBP_EmoteDrag_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_EmoteDrag_C_OnListItemObjectSet final 
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteDrag_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_EmoteDrag_C_OnListItemObjectSet");
static_assert(sizeof(WBP_EmoteDrag_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_EmoteDrag_C_OnListItemObjectSet");
static_assert(offsetof(WBP_EmoteDrag_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_EmoteDrag_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

}

