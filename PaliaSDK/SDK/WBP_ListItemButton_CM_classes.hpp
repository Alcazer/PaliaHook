#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListItemButton_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ListItemButton_CM.WBP_ListItemButton_CM_C
// 0x00B0 (0x0398 - 0x02E8)
class UWBP_ListItemButton_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_CM_C*              Button_Root;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_Contents;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 ButtonStyle_Unselected;                            // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 ButtonStyle_Selected;                              // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsSelected;                                       // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5318[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDoubleClicked;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleased;                                        // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFocused;                                         // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnButtonFocusLost;                                 // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ListItemButton_CM_Button_Root_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ListItemButton_CM_Button_Root_K2Node_ComponentBoundEvent_1_OnFocused__DelegateSignature();
	void BndEvt__WBP_ListItemButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ListItemButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ListItemButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ListItemButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_ListItemButton_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_AkEventGlobal_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void OnButtonFocusLost__DelegateSignature();
	void OnClicked__DelegateSignature(class UWBP_ListItemButton_CM_C* ListItemButton);
	void OnDoubleClicked__DelegateSignature();
	void OnFocused__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnHovered__DelegateSignature(class UWBP_ListItemButton_CM_C* ListItemButton);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnPressed__DelegateSignature(class UWBP_ListItemButton_CM_C* ListItemButton);
	void OnReleased__DelegateSignature();
	void OnUnhovered__DelegateSignature(class UWBP_ListItemButton_CM_C* ListItemButton);
	void PreConstruct(bool IsDesignTime);
	void Set_Button_Enabled(bool IsEnabled);
	void SetIsSelected(bool Param_bIsSelected);
	void UpdateSelectonStyle(bool Temp_bool_Variable, class UClass* K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ListItemButton_CM_C">();
	}
	static class UWBP_ListItemButton_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ListItemButton_CM_C>();
	}
};
static_assert(alignof(UWBP_ListItemButton_CM_C) == 0x000008, "Wrong alignment on UWBP_ListItemButton_CM_C");
static_assert(sizeof(UWBP_ListItemButton_CM_C) == 0x000398, "Wrong size on UWBP_ListItemButton_CM_C");
static_assert(offsetof(UWBP_ListItemButton_CM_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ListItemButton_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, Button_Root) == 0x0002F0, "Member 'UWBP_ListItemButton_CM_C::Button_Root' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, NamedSlot_Contents) == 0x0002F8, "Member 'UWBP_ListItemButton_CM_C::NamedSlot_Contents' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, ButtonStyle_Unselected) == 0x000300, "Member 'UWBP_ListItemButton_CM_C::ButtonStyle_Unselected' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, ButtonStyle_Selected) == 0x000308, "Member 'UWBP_ListItemButton_CM_C::ButtonStyle_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, OnHovered) == 0x000310, "Member 'UWBP_ListItemButton_CM_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, OnUnhovered) == 0x000320, "Member 'UWBP_ListItemButton_CM_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, OnClicked) == 0x000330, "Member 'UWBP_ListItemButton_CM_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, bIsSelected) == 0x000340, "Member 'UWBP_ListItemButton_CM_C::bIsSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, OnDoubleClicked) == 0x000348, "Member 'UWBP_ListItemButton_CM_C::OnDoubleClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, OnPressed) == 0x000358, "Member 'UWBP_ListItemButton_CM_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, OnReleased) == 0x000368, "Member 'UWBP_ListItemButton_CM_C::OnReleased' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, OnFocused) == 0x000378, "Member 'UWBP_ListItemButton_CM_C::OnFocused' has a wrong offset!");
static_assert(offsetof(UWBP_ListItemButton_CM_C, OnButtonFocusLost) == 0x000388, "Member 'UWBP_ListItemButton_CM_C::OnButtonFocusLost' has a wrong offset!");

}

