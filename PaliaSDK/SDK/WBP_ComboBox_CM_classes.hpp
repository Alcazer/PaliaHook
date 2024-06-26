#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComboBox_CM

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Slate_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ComboBox_CM.WBP_ComboBox_CM_C
// 0x00D8 (0x0398 - 0x02C0)
class UWBP_ComboBox_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_CM_C*              Button_Expand_CM;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_241;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Backer;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_CurrentSelection;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_ContextMenuAnchor_CM_C*   WBP_Template_ContextMenuAnchor;                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectedOptionIndex;                               // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519C[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           TextOptions;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnOptionChanged;                                   // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_ComboBox_Menu_CM_C*                ComboBoxMenu;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnMenuOpened;                                      // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVALUI_ButtonStyle*                     ButtonStyle_Expanded;                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ButtonStyle*                     ButtonStyle_Collapsed;                             // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  TextBlockStyle;                                    // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  TextJustification;                                 // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519D[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFocused;                                         // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMenuCreated;                                     // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFocusedLost;                                     // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bAutoRestoreFocusAfterClosed;                      // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519E[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMenuClosed;                                      // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ComboBox_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ComboBox_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ComboBox_CM_WBP_Template_ContextMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuContentCreated__DelegateSignature(class UUserWidget* MenuContent);
	void Construct();
	void ExecuteUbergraph_WBP_ComboBox_CM(int32 EntryPoint, int32 K2Node_CustomEvent_Index, class FText K2Node_CustomEvent_Text, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_AkEventGlobal_ReturnValue, TDelegate<void(bool bClosedByLostFocus)> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AkEventGlobal_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_2, bool CallFunc_IsOpen_ReturnValue, TDelegate<void(int32 Index, class FText Text)> K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, TDelegate<void(bool bIsOpen)> K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_bIsOpen, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUserWidget* K2Node_ComponentBoundEvent_MenuContent, class UWBP_ComboBox_Menu_CM_C* K2Node_DynamicCast_AsWBP_Combo_Box_Menu_CM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bIsShow, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool K2Node_CustomEvent_bClosedByLostFocus);
	bool Get_Menu_Anchor_Is_Open(bool CallFunc_IsOpen_ReturnValue);
	void GetCurrentSelectedItem(class FText* Selected_Text, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetDesiredFocusTarget(class UWidget** Output, bool CallFunc_Get_Menu_Anchor_Is_Open_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_Output);
	void HandleAccept();
	void HandleOnOptionSelected(int32 Param_Index, class FText Text);
	void OnFocused__DelegateSignature(class UWidget* FocusWidget);
	void OnFocusedLost__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnMenuClose_Event(bool bClosedByLostFocus);
	void OnMenuClosed__DelegateSignature(class UWBP_ComboBox_CM_C* ComboBox);
	void OnMenuCreated__DelegateSignature(class UWBP_ComboBox_Menu_CM_C* MenuWidget);
	void OnMenuOpenChanged(bool bIsOpen);
	void OnMenuOpened__DelegateSignature(class UWBP_ComboBox_CM_C* ComboBox);
	void OnOptionChanged__DelegateSignature(int32 Param_Index, class FText Text);
	void PreConstruct(bool IsDesignTime);
	void SetCurrentOptionToIndex(int32 Param_Index, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SetNavigation(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWBP_ComboBox_Menu_Option_CM_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWBP_ComboBox_Menu_Option_CM_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_ComboBox_Menu_Option_CM_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ComboBox_Menu_Option_CM_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1);
	void SetTextOptions(TArray<class FText>& Text_Options, int32 Selected_Option, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ShowFocusTip(bool bIsShow);

	void IsEmpty(bool* bIsEmpty) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ComboBox_CM_C">();
	}
	static class UWBP_ComboBox_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ComboBox_CM_C>();
	}
};
static_assert(alignof(UWBP_ComboBox_CM_C) == 0x000008, "Wrong alignment on UWBP_ComboBox_CM_C");
static_assert(sizeof(UWBP_ComboBox_CM_C) == 0x000398, "Wrong size on UWBP_ComboBox_CM_C");
static_assert(offsetof(UWBP_ComboBox_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_ComboBox_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, Button_Expand_CM) == 0x0002C8, "Member 'UWBP_ComboBox_CM_C::Button_Expand_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, Image_241) == 0x0002D0, "Member 'UWBP_ComboBox_CM_C::Image_241' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, Image_Backer) == 0x0002D8, "Member 'UWBP_ComboBox_CM_C::Image_Backer' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, TextBlock_CurrentSelection) == 0x0002E0, "Member 'UWBP_ComboBox_CM_C::TextBlock_CurrentSelection' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, WBP_Template_ContextMenuAnchor) == 0x0002E8, "Member 'UWBP_ComboBox_CM_C::WBP_Template_ContextMenuAnchor' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, SelectedOptionIndex) == 0x0002F0, "Member 'UWBP_ComboBox_CM_C::SelectedOptionIndex' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, TextOptions) == 0x0002F8, "Member 'UWBP_ComboBox_CM_C::TextOptions' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, OnOptionChanged) == 0x000308, "Member 'UWBP_ComboBox_CM_C::OnOptionChanged' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, ComboBoxMenu) == 0x000318, "Member 'UWBP_ComboBox_CM_C::ComboBoxMenu' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, OnMenuOpened) == 0x000320, "Member 'UWBP_ComboBox_CM_C::OnMenuOpened' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, ButtonStyle_Expanded) == 0x000330, "Member 'UWBP_ComboBox_CM_C::ButtonStyle_Expanded' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, ButtonStyle_Collapsed) == 0x000338, "Member 'UWBP_ComboBox_CM_C::ButtonStyle_Collapsed' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, TextBlockStyle) == 0x000340, "Member 'UWBP_ComboBox_CM_C::TextBlockStyle' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, TextJustification) == 0x000348, "Member 'UWBP_ComboBox_CM_C::TextJustification' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, OnFocused) == 0x000350, "Member 'UWBP_ComboBox_CM_C::OnFocused' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, OnMenuCreated) == 0x000360, "Member 'UWBP_ComboBox_CM_C::OnMenuCreated' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, OnFocusedLost) == 0x000370, "Member 'UWBP_ComboBox_CM_C::OnFocusedLost' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, bAutoRestoreFocusAfterClosed) == 0x000380, "Member 'UWBP_ComboBox_CM_C::bAutoRestoreFocusAfterClosed' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_CM_C, OnMenuClosed) == 0x000388, "Member 'UWBP_ComboBox_CM_C::OnMenuClosed' has a wrong offset!");

}

