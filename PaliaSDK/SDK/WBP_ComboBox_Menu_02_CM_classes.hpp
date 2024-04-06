#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComboBox_Menu_02_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ComboBox_Menu_02_CM.WBP_ComboBox_Menu_02_CM_C
// 0x00A8 (0x0320 - 0x0278)
class UWBP_ComboBox_Menu_02_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_CM_C*              Button_Selection;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                       DynamicEntryBox_Options;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Backer;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DropdownArrow;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbox_Options;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_OptionsScrollbox;                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_CurrentSelection;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           Options;                                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 OptionWidgetClass;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_ComboBox_Menu_Option_02_CM_C*> OptionsWidgets;                                    // 0x02D0(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnOptionSelected;                                  // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVALUI_ButtonStyle*                     ButtonStyle;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_BorderStyle*                     BorderStyle;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  TextJustification;                                 // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C41[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedSlot;                                      // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseScrollbar;                                      // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C42[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UWBP_ComboBox_Menu_Option_02_CM_C>> SoftOptionWidgets;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void CreateOptions();
	void ExecuteUbergraph_WBP_ComboBox_Menu_02_CM(int32 EntryPoint, TArray<class FText>& K2Node_Event_Options, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, bool K2Node_Event_UseScrollbar, int32 Temp_int_Array_Index_Variable, const struct FMargin& K2Node_MakeStruct_Margin, class FText K2Node_Event_InText, ETextJustify K2Node_Event_InJustification, int32 K2Node_Event_Index, class FText K2Node_Event_Text, bool CallFunc_NotEqual_IntInt_ReturnValue, TDelegate<void(int32 Index, class FText Text)> K2Node_CreateDelegate_OutputDelegate, class UWBP_ComboBox_Menu_Option_02_CM_C* CallFunc_BP_CreateEntryOfClass_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Event_SelectedSlot);
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
		return StaticBPGeneratedClassImpl<"WBP_ComboBox_Menu_02_CM_C">();
	}
	static class UWBP_ComboBox_Menu_02_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ComboBox_Menu_02_CM_C>();
	}
};
static_assert(alignof(UWBP_ComboBox_Menu_02_CM_C) == 0x000008, "Wrong alignment on UWBP_ComboBox_Menu_02_CM_C");
static_assert(sizeof(UWBP_ComboBox_Menu_02_CM_C) == 0x000320, "Wrong size on UWBP_ComboBox_Menu_02_CM_C");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ComboBox_Menu_02_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, Button_Selection) == 0x000280, "Member 'UWBP_ComboBox_Menu_02_CM_C::Button_Selection' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, DynamicEntryBox_Options) == 0x000288, "Member 'UWBP_ComboBox_Menu_02_CM_C::DynamicEntryBox_Options' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, Image_Backer) == 0x000290, "Member 'UWBP_ComboBox_Menu_02_CM_C::Image_Backer' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, Image_DropdownArrow) == 0x000298, "Member 'UWBP_ComboBox_Menu_02_CM_C::Image_DropdownArrow' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, Scrollbox_Options) == 0x0002A0, "Member 'UWBP_ComboBox_Menu_02_CM_C::Scrollbox_Options' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, SizeBox_OptionsScrollbox) == 0x0002A8, "Member 'UWBP_ComboBox_Menu_02_CM_C::SizeBox_OptionsScrollbox' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, TextBlock_CurrentSelection) == 0x0002B0, "Member 'UWBP_ComboBox_Menu_02_CM_C::TextBlock_CurrentSelection' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, Options) == 0x0002B8, "Member 'UWBP_ComboBox_Menu_02_CM_C::Options' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, OptionWidgetClass) == 0x0002C8, "Member 'UWBP_ComboBox_Menu_02_CM_C::OptionWidgetClass' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, OptionsWidgets) == 0x0002D0, "Member 'UWBP_ComboBox_Menu_02_CM_C::OptionsWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, OnOptionSelected) == 0x0002E0, "Member 'UWBP_ComboBox_Menu_02_CM_C::OnOptionSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, ButtonStyle) == 0x0002F0, "Member 'UWBP_ComboBox_Menu_02_CM_C::ButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, BorderStyle) == 0x0002F8, "Member 'UWBP_ComboBox_Menu_02_CM_C::BorderStyle' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, TextJustification) == 0x000300, "Member 'UWBP_ComboBox_Menu_02_CM_C::TextJustification' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, SelectedSlot) == 0x000304, "Member 'UWBP_ComboBox_Menu_02_CM_C::SelectedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, UseScrollbar) == 0x000308, "Member 'UWBP_ComboBox_Menu_02_CM_C::UseScrollbar' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_Menu_02_CM_C, SoftOptionWidgets) == 0x000310, "Member 'UWBP_ComboBox_Menu_02_CM_C::SoftOptionWidgets' has a wrong offset!");

}

