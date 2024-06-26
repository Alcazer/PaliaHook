#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Popup_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Popup_CM.WBP_Popup_CM_C
// 0x00F0 (0x0500 - 0x0410)
class UWBP_Popup_CM_C final  : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_BG;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* ButtonCancel_CM;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   ButtonConfirm_CM;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Buttons;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ButtonsOverlay;                                    // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Content;                                           // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TopBacker_02_C*                    Header;                                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Cancel;                                            // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Confirm;                                           // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          NoButtons;                                         // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyConfirm;                                       // 0x0471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowBorder;                                        // 0x0472(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431B[0x1];                                     // 0x0473(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                ContentPadding;                                    // 0x0474(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_431C[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   HeaderText;                                        // 0x0488(0x0018)(Edit, BlueprintVisible)
	class FText                                   ContentText;                                       // 0x04A0(0x0018)(Edit, BlueprintVisible)
	class FText                                   PrimaryButtonText;                                 // 0x04B8(0x0018)(Edit, BlueprintVisible)
	class FText                                   SecendaryButtonText;                               // 0x04D0(0x0018)(Edit, BlueprintVisible)
	class UInputAction*                           SecondaryIAOverride;                               // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ButtonStyleOverride;                               // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  PrimaryButtonTextStyle;                            // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Popup_CM(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility K2Node_Select_Default_1);
	void Confirm__DelegateSignature();
	void Cancel__DelegateSignature();
	bool BP_OnHandleBackAction();
	void BP_OnDeactivated();
	void BP_OnActivated();
	void BndEvt__WBP_Popup_CM_ButtonConfirm_CM_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_Popup_CM_ButtonCancel_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Popup_CM_C">();
	}
	static class UWBP_Popup_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Popup_CM_C>();
	}
};
static_assert(alignof(UWBP_Popup_CM_C) == 0x000008, "Wrong alignment on UWBP_Popup_CM_C");
static_assert(sizeof(UWBP_Popup_CM_C) == 0x000500, "Wrong size on UWBP_Popup_CM_C");
static_assert(offsetof(UWBP_Popup_CM_C, UberGraphFrame) == 0x000410, "Member 'UWBP_Popup_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, Border_BG) == 0x000418, "Member 'UWBP_Popup_CM_C::Border_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, ButtonCancel_CM) == 0x000420, "Member 'UWBP_Popup_CM_C::ButtonCancel_CM' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, ButtonConfirm_CM) == 0x000428, "Member 'UWBP_Popup_CM_C::ButtonConfirm_CM' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, Buttons) == 0x000430, "Member 'UWBP_Popup_CM_C::Buttons' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, ButtonsOverlay) == 0x000438, "Member 'UWBP_Popup_CM_C::ButtonsOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, Content) == 0x000440, "Member 'UWBP_Popup_CM_C::Content' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, Header) == 0x000448, "Member 'UWBP_Popup_CM_C::Header' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, Cancel) == 0x000450, "Member 'UWBP_Popup_CM_C::Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, Confirm) == 0x000460, "Member 'UWBP_Popup_CM_C::Confirm' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, NoButtons) == 0x000470, "Member 'UWBP_Popup_CM_C::NoButtons' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, OnlyConfirm) == 0x000471, "Member 'UWBP_Popup_CM_C::OnlyConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, ShowBorder) == 0x000472, "Member 'UWBP_Popup_CM_C::ShowBorder' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, ContentPadding) == 0x000474, "Member 'UWBP_Popup_CM_C::ContentPadding' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, HeaderText) == 0x000488, "Member 'UWBP_Popup_CM_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, ContentText) == 0x0004A0, "Member 'UWBP_Popup_CM_C::ContentText' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, PrimaryButtonText) == 0x0004B8, "Member 'UWBP_Popup_CM_C::PrimaryButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, SecendaryButtonText) == 0x0004D0, "Member 'UWBP_Popup_CM_C::SecendaryButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, SecondaryIAOverride) == 0x0004E8, "Member 'UWBP_Popup_CM_C::SecondaryIAOverride' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, ButtonStyleOverride) == 0x0004F0, "Member 'UWBP_Popup_CM_C::ButtonStyleOverride' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_CM_C, PrimaryButtonTextStyle) == 0x0004F8, "Member 'UWBP_Popup_CM_C::PrimaryButtonTextStyle' has a wrong offset!");

}

