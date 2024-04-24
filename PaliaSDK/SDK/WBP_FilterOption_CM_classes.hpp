#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FilterOption_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FilterOption_CM.WBP_FilterOption_CM_C
// 0x0080 (0x0340 - 0x02C0)
class UWBP_FilterOption_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CheckmarkButton_CM_C*              WBP_CheckmarkButton_CM;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Index_WBP_FilterOption_CM_C;                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4D89[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOptionSelected;                                  // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Is_Selected;                                       // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D8A[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_CharacterCustomization_CosmeticTagFilterStruct CosmeticTag;                                       // 0x02F0(0x0038)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UListEntry_CharacterCustomization_FilterOption_C* BP_ListEntry;                                      // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFocused;                                         // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature(bool IsSelected);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ClearSelection();
	void ExecuteUbergraph_WBP_FilterOption_CM(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsSelected, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, int32 CallFunc_AkEventGlobal_ReturnValue, class UObject* K2Node_Event_ListItemObject, class UListEntry_CharacterCustomization_FilterOption_C* K2Node_DynamicCast_AsList_Entry_Character_Customization_Filter_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsListItemSelected_ReturnValue);
	void OnFocused__DelegateSignature();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnOptionSelected__DelegateSignature(bool IsSelected, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& SelectedCosmeticTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FilterOption_CM_C">();
	}
	static class UWBP_FilterOption_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FilterOption_CM_C>();
	}
};
static_assert(alignof(UWBP_FilterOption_CM_C) == 0x000008, "Wrong alignment on UWBP_FilterOption_CM_C");
static_assert(sizeof(UWBP_FilterOption_CM_C) == 0x000340, "Wrong size on UWBP_FilterOption_CM_C");
static_assert(offsetof(UWBP_FilterOption_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_FilterOption_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FilterOption_CM_C, WBP_CheckmarkButton_CM) == 0x0002C8, "Member 'UWBP_FilterOption_CM_C::WBP_CheckmarkButton_CM' has a wrong offset!");
static_assert(offsetof(UWBP_FilterOption_CM_C, Index_WBP_FilterOption_CM_C) == 0x0002D0, "Member 'UWBP_FilterOption_CM_C::Index_WBP_FilterOption_CM_C' has a wrong offset!");
static_assert(offsetof(UWBP_FilterOption_CM_C, OnOptionSelected) == 0x0002D8, "Member 'UWBP_FilterOption_CM_C::OnOptionSelected' has a wrong offset!");
static_assert(offsetof(UWBP_FilterOption_CM_C, Is_Selected) == 0x0002E8, "Member 'UWBP_FilterOption_CM_C::Is_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_FilterOption_CM_C, CosmeticTag) == 0x0002F0, "Member 'UWBP_FilterOption_CM_C::CosmeticTag' has a wrong offset!");
static_assert(offsetof(UWBP_FilterOption_CM_C, BP_ListEntry) == 0x000328, "Member 'UWBP_FilterOption_CM_C::BP_ListEntry' has a wrong offset!");
static_assert(offsetof(UWBP_FilterOption_CM_C, OnFocused) == 0x000330, "Member 'UWBP_FilterOption_CM_C::OnFocused' has a wrong offset!");

}
