#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComboBox_Menu_02_CM_Locale_Specific

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Slate_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C
// 0x00A8 (0x0368 - 0x02C0)
class UWBP_ComboBox_Menu_02_CM_Locale_Specific_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_CM_C*              Button_Selection;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                       DynamicEntryBox_Options;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Backer;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DropdownArrow;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbox_Options;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_OptionsScrollbox;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_CurrentSelection;                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           Options;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 OptionWidgetClass;                                 // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_ComboBox_Menu_Option_02_CM_C*> OptionsWidgets;                                    // 0x0318(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnOptionSelected;                                  // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVALUI_ButtonStyle*                     ButtonStyle;                                       // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_BorderStyle*                     BorderStyle;                                       // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  TextJustification;                                 // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5209[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedSlot;                                      // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseScrollbar;                                      // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520A[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UWBP_ComboBox_Menu_Option_02_CM_C>> SoftOptionWidgets;                                 // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void CreateOptions();
	void ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific(int32 EntryPoint, TArray<class FText>& K2Node_Event_Options, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, bool K2Node_Event_UseScrollbar, int32 Temp_int_Array_Index_Variable, const struct FMargin& K2Node_MakeStruct_Margin, class FText K2Node_Event_InText, ETextJustify K2Node_Event_InJustification, int32 K2Node_Event_Index, class FText K2Node_Event_Text, bool CallFunc_NotEqual_IntInt_ReturnValue, TDelegate<void(int32 Index, class FText Text)> K2Node_CreateDelegate_OutputDelegate, class UWBP_ComboBox_Menu_Option_02_CM_C* CallFunc_BP_CreateEntryOfClass_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Event_SelectedSlot);
	void GetButtonSelection(class UWBP_Template_Button_CM_C** Param_Button_Selection);
	void GetOptionWidgets(TArray<class UWBP_ComboBox_Menu_Option_02_CM_C*>* OptionWidgets);
	void GetSelfMenu(class UUserWidget** SelfMenu);
	void HandleOnOptionSelected(int32 Param_Index, class FText Text);
	void OnOptionSelected__DelegateSignature(int32 Param_Index, class FText Text);
	void SetActiveSelectedAppearance(class FText InText, ETextJustify InJustification);
	void SetOptions(TArray<class FText>& Param_Options);
	void SetSelectedSlot(int32 Param_SelectedSlot);
	void SetUseScrollbar(bool Param_UseScrollbar);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ComboBox_Menu_02_CM_Locale_Specific_C">();
	}
	static class UWBP_ComboBox_Menu_02_CM_Locale_Specific_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ComboBox_Menu_02_CM_Locale_Specific_C>();
	}
};
static_assert(alignof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C) == 0x000008, "Wrong alignment on UWBP_ComboBox_Menu_02_CM_Locale_Specific_C");
static_assert(sizeof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C) == 0x000368, "Wrong size on UWBP_ComboBox_Menu_02_CM_Locale_Specific_C");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, Button_Selection) == 0x0002C8, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::Button_Selection' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, DynamicEntryBox_Options) == 0x0002D0, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::DynamicEntryBox_Options' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, Image_Backer) == 0x0002D8, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::Image_Backer' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, Image_DropdownArrow) == 0x0002E0, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::Image_DropdownArrow' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, Scrollbox_Options) == 0x0002E8, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::Scrollbox_Options' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, SizeBox_OptionsScrollbox) == 0x0002F0, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::SizeBox_OptionsScrollbox' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, TextBlock_CurrentSelection) == 0x0002F8, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::TextBlock_CurrentSelection' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, Options) == 0x000300, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::Options' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, OptionWidgetClass) == 0x000310, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::OptionWidgetClass' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, OptionsWidgets) == 0x000318, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::OptionsWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, OnOptionSelected) == 0x000328, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::OnOptionSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, ButtonStyle) == 0x000338, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::ButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, BorderStyle) == 0x000340, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::BorderStyle' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, TextJustification) == 0x000348, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::TextJustification' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, SelectedSlot) == 0x00034C, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::SelectedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, UseScrollbar) == 0x000350, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::UseScrollbar' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_Locale_Specific_C, SoftOptionWidgets) == 0x000358, "Member 'UWBP_ComboBox_Menu_02_CM_Locale_Specific_C::SoftOptionWidgets' has a wrong offset!");

}

