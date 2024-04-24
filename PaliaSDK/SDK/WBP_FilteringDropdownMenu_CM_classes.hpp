#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FilteringDropdownMenu_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FilteringDropdownMenu_CM.WBP_FilteringDropdownMenu_CM_C
// 0x00C0 (0x0380 - 0x02C0)
class UWBP_FilteringDropdownMenu_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class US6UI_CustomNavigationGroup*            CustomNavigation_DropdwonMenu;                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ListView_Styled*                 ListView_Options;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Header;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Num;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ExpandableArea_InLine_CM_C*        WBP_ExpandableArea_InLine_CM;                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HeaderName;                                        // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnOptionSelected;                                  // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                 ButtonStyle_Collapsed;                             // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct> CosmeticTagOptions;                                // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct> CurrentlySelectedCosmeticTagOptions;               // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 ButtonStyle_Expanded;                              // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* BP_ListEntry_FilterDropdownMenu;                   // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnInLineFocused;                                   // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnListInitialized;                                 // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFiltterOptionFocused;                            // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_FilteringDropdownMenu_CM_CustomNavigation_DropdwonMenu_K2Node_ComponentBoundEvent_0_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BndEvt__WBP_FilteringDropdownMenu_CM_ListView_Options_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_FilteringDropdownMenu_CM_WBP_ExpandableArea_InLine_CM_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_FilteringDropdownMenu_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* K2Node_DynamicCast_AsList_Entry_Character_Customization_Filtering_Dropdown_Menu, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsExpanded, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, TArray<class UWidget*>& K2Node_MakeArray_Array, class UWBP_FilterOption_CM_C* K2Node_DynamicCast_AsWBP_Filter_Option_CM, bool K2Node_DynamicCast_bSuccess_1);
	void GetCurrentSelectedOptions(TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>* CosmeticTags, const TArray<class FText>& CurrentSelectedTags);
	void HasTagOptions(bool* Param_HasTagOptions, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnDropdownMenuOptionSelected(bool IsSelected, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& SelectedCosmeticTag, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnFilterOptionFocused_Event();
	void OnFiltterOptionFocused__DelegateSignature(class UVALUI_ListView_Styled* ListView);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnInLineFocused__DelegateSignature();
	void OnListInitialized__DelegateSignature(class UObject* Item, bool Widget, bool NewParam2);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnOptionSelected__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Set_Tag_Options(TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>& NewTextOptions, TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>& CurrentlySelectedTagOptions, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TDelegate<void(bool IsSelected, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& SelectedCosmeticTag)> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& CallFunc_Array_Get_Item, class UListEntry_CharacterCustomization_FilterOption_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetHeaderText(class FText NewHeaderText, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FilteringDropdownMenu_CM_C">();
	}
	static class UWBP_FilteringDropdownMenu_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FilteringDropdownMenu_CM_C>();
	}
};
static_assert(alignof(UWBP_FilteringDropdownMenu_CM_C) == 0x000008, "Wrong alignment on UWBP_FilteringDropdownMenu_CM_C");
static_assert(sizeof(UWBP_FilteringDropdownMenu_CM_C) == 0x000380, "Wrong size on UWBP_FilteringDropdownMenu_CM_C");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_FilteringDropdownMenu_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, CustomNavigation_DropdwonMenu) == 0x0002C8, "Member 'UWBP_FilteringDropdownMenu_CM_C::CustomNavigation_DropdwonMenu' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, ListView_Options) == 0x0002D0, "Member 'UWBP_FilteringDropdownMenu_CM_C::ListView_Options' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, TextBlock_Header) == 0x0002D8, "Member 'UWBP_FilteringDropdownMenu_CM_C::TextBlock_Header' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, TextBlock_Num) == 0x0002E0, "Member 'UWBP_FilteringDropdownMenu_CM_C::TextBlock_Num' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, WBP_ExpandableArea_InLine_CM) == 0x0002E8, "Member 'UWBP_FilteringDropdownMenu_CM_C::WBP_ExpandableArea_InLine_CM' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, HeaderName) == 0x0002F0, "Member 'UWBP_FilteringDropdownMenu_CM_C::HeaderName' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, OnOptionSelected) == 0x000308, "Member 'UWBP_FilteringDropdownMenu_CM_C::OnOptionSelected' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, ButtonStyle_Collapsed) == 0x000318, "Member 'UWBP_FilteringDropdownMenu_CM_C::ButtonStyle_Collapsed' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, CosmeticTagOptions) == 0x000320, "Member 'UWBP_FilteringDropdownMenu_CM_C::CosmeticTagOptions' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, CurrentlySelectedCosmeticTagOptions) == 0x000330, "Member 'UWBP_FilteringDropdownMenu_CM_C::CurrentlySelectedCosmeticTagOptions' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, ButtonStyle_Expanded) == 0x000340, "Member 'UWBP_FilteringDropdownMenu_CM_C::ButtonStyle_Expanded' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, BP_ListEntry_FilterDropdownMenu) == 0x000348, "Member 'UWBP_FilteringDropdownMenu_CM_C::BP_ListEntry_FilterDropdownMenu' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, OnInLineFocused) == 0x000350, "Member 'UWBP_FilteringDropdownMenu_CM_C::OnInLineFocused' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, OnListInitialized) == 0x000360, "Member 'UWBP_FilteringDropdownMenu_CM_C::OnListInitialized' has a wrong offset!");
static_assert(offsetof(UWBP_FilteringDropdownMenu_CM_C, OnFiltterOptionFocused) == 0x000370, "Member 'UWBP_FilteringDropdownMenu_CM_C::OnFiltterOptionFocused' has a wrong offset!");

}
