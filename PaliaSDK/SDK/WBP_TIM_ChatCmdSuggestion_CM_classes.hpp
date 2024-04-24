#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatCmdSuggestion_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TIM_ChatCmdSuggestion_CM.WBP_TIM_ChatCmdSuggestion_CM_C
// 0x0028 (0x02E8 - 0x02C0)
class UWBP_TIM_ChatCmdSuggestion_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   SuggestionBorder;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuggestionTextBlock;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_BorderStyle*                     SelectedStyle;                                     // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_BorderStyle*                     UnselectedStyle;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_TIM_ChatCmdSuggestion_CM(int32 EntryPoint, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, class UBP_TIM_ChatCmdSuggestionListItem_C* K2Node_DynamicCast_AsBP_TIM_Chat_Cmd_Suggestion_List_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TIM_ChatCmdSuggestion_CM_C">();
	}
	static class UWBP_TIM_ChatCmdSuggestion_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TIM_ChatCmdSuggestion_CM_C>();
	}
};
static_assert(alignof(UWBP_TIM_ChatCmdSuggestion_CM_C) == 0x000008, "Wrong alignment on UWBP_TIM_ChatCmdSuggestion_CM_C");
static_assert(sizeof(UWBP_TIM_ChatCmdSuggestion_CM_C) == 0x0002E8, "Wrong size on UWBP_TIM_ChatCmdSuggestion_CM_C");
static_assert(offsetof(UWBP_TIM_ChatCmdSuggestion_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TIM_ChatCmdSuggestion_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatCmdSuggestion_CM_C, SuggestionBorder) == 0x0002C8, "Member 'UWBP_TIM_ChatCmdSuggestion_CM_C::SuggestionBorder' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatCmdSuggestion_CM_C, SuggestionTextBlock) == 0x0002D0, "Member 'UWBP_TIM_ChatCmdSuggestion_CM_C::SuggestionTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatCmdSuggestion_CM_C, SelectedStyle) == 0x0002D8, "Member 'UWBP_TIM_ChatCmdSuggestion_CM_C::SelectedStyle' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatCmdSuggestion_CM_C, UnselectedStyle) == 0x0002E0, "Member 'UWBP_TIM_ChatCmdSuggestion_CM_C::UnselectedStyle' has a wrong offset!");

}

