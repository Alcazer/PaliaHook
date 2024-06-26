#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SettingsItem_Checkbox_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_SettingsItem_Parent_DoNotEdit_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SettingsItem_Checkbox_CM.WBP_SettingsItem_Checkbox_CM_C
// 0x0098 (0x0380 - 0x02E8)
class UWBP_SettingsItem_Checkbox_CM_C final  : public UWBP_SettingsItem_Parent_DoNotEdit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_SettingsItem_Checkbox_CM_C;     // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_CM_C*              Buton_Backer_CM;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_ItemName;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Checkmark_CM_C*                    WBP_Checkmark_CM;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCheckedStateChanged;                             // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Checked;                                           // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52D1[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ItemName;                                          // 0x0320(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnBackerButton_Hovered;                            // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBackerButton_Clicked;                            // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBackerButton_Unhovered;                          // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   Description;                                       // 0x0368(0x0018)(Edit, BlueprintVisible)

public:
	void BndEvt__WBP_SettingsItem_Checkbox_CM_Buton_Backer_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_SettingsItem_Checkbox_CM_Buton_Backer_CM_K2Node_ComponentBoundEvent_4_OnFocused__DelegateSignature();
	void BndEvt__WBP_SettingsItem_Checkbox_CM_Buton_Backer_CM_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_SettingsItem_Checkbox_CM_Buton_Backer_CM_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_SettingsItem_Checkbox_CM_WBP_Checkmark_CM_K2Node_ComponentBoundEvent_1_OnCheckedStateChanged__DelegateSignature(bool Param_Checked);
	void BndEvt__WBP_SettingsItem_Checkbox_CM_WBP_Checkmark_CM_K2Node_ComponentBoundEvent_3_OnUnfocused__DelegateSignature();
	void ExecuteUbergraph_WBP_SettingsItem_Checkbox_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Checked, int32 CallFunc_AkEventGlobal_ReturnValue);
	void OnBackerButton_Clicked__DelegateSignature();
	void OnBackerButton_Hovered__DelegateSignature();
	void OnBackerButton_Unhovered__DelegateSignature();
	void OnCheckedStateChanged__DelegateSignature(bool Param_Checked);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void SetCheckedState(bool Param_Checked, bool CallStateChangedEvent);
	void SetItemName(class FText Param_ItemName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SettingsItem_Checkbox_CM_C">();
	}
	static class UWBP_SettingsItem_Checkbox_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SettingsItem_Checkbox_CM_C>();
	}
};
static_assert(alignof(UWBP_SettingsItem_Checkbox_CM_C) == 0x000008, "Wrong alignment on UWBP_SettingsItem_Checkbox_CM_C");
static_assert(sizeof(UWBP_SettingsItem_Checkbox_CM_C) == 0x000380, "Wrong size on UWBP_SettingsItem_Checkbox_CM_C");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, UberGraphFrame_WBP_SettingsItem_Checkbox_CM_C) == 0x0002E8, "Member 'UWBP_SettingsItem_Checkbox_CM_C::UberGraphFrame_WBP_SettingsItem_Checkbox_CM_C' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, Buton_Backer_CM) == 0x0002F0, "Member 'UWBP_SettingsItem_Checkbox_CM_C::Buton_Backer_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, TextBlock_ItemName) == 0x0002F8, "Member 'UWBP_SettingsItem_Checkbox_CM_C::TextBlock_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, WBP_Checkmark_CM) == 0x000300, "Member 'UWBP_SettingsItem_Checkbox_CM_C::WBP_Checkmark_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, OnCheckedStateChanged) == 0x000308, "Member 'UWBP_SettingsItem_Checkbox_CM_C::OnCheckedStateChanged' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, Checked) == 0x000318, "Member 'UWBP_SettingsItem_Checkbox_CM_C::Checked' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, ItemName) == 0x000320, "Member 'UWBP_SettingsItem_Checkbox_CM_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, OnBackerButton_Hovered) == 0x000338, "Member 'UWBP_SettingsItem_Checkbox_CM_C::OnBackerButton_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, OnBackerButton_Clicked) == 0x000348, "Member 'UWBP_SettingsItem_Checkbox_CM_C::OnBackerButton_Clicked' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, OnBackerButton_Unhovered) == 0x000358, "Member 'UWBP_SettingsItem_Checkbox_CM_C::OnBackerButton_Unhovered' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsItem_Checkbox_CM_C, Description) == 0x000368, "Member 'UWBP_SettingsItem_Checkbox_CM_C::Description' has a wrong offset!");

}

