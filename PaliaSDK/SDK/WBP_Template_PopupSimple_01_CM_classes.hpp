#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_PopupSimple_01_CM

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "F_PopupSimple_Content_Settings_structs.hpp"
#include "Engine_structs.hpp"
#include "F_PopupSimple_Buttons_Settings_structs.hpp"
#include "F_Button_Primary_Settings_CM_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Template_PopupSimple_01_CM.WBP_Template_PopupSimple_01_CM_C
// 0x0138 (0x03D8 - 0x02A0)
class UWBP_Template_PopupSimple_01_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_Primary;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* Button_Secondary;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Buttons;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_Content;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ButtonPrimary;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ButtonSecondary;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Buttons;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FF_PopupSimple_Buttons_Settings        ButtonsLayoutSettings;                             // 0x02E0(0x0020)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_PopupSimple_Content_Settings        ContentLayoutSettings;                             // 0x0300(0x0014)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_448F[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_Button_Primary_Settings_CM          PrimaryButtonSettings;                             // 0x0318(0x0050)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                   SecondaryButtonText;                               // 0x0368(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             PrimaryButtonClicked;                              // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PrimaryButtonHovered;                              // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PrimaryButtonUnhovered;                            // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SecondaryButtonClicked;                            // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          SFX_OverridePrimaryInChild_Continue;               // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFX_OverridePrimaryInChild_Hover;                  // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFX_OverridePrimaryInChild_Unhover;                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Template_PopupSimple_01_CM_Button_Primary_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_Template_PopupSimple_01_CM_Button_Primary_K2Node_ComponentBoundEvent_2_ButtonHovered__DelegateSignature();
	void BndEvt__WBP_Template_PopupSimple_01_CM_Button_Primary_K2Node_ComponentBoundEvent_7_ButtonUnhovered__DelegateSignature();
	void BndEvt__WBP_Template_PopupSimple_01_CM_Button_Secondary_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Template_PopupSimple_01_CM(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_2);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void PrimaryButtonClicked__DelegateSignature();
	void PrimaryButtonHovered__DelegateSignature();
	void PrimaryButtonUnhovered__DelegateSignature();
	void SecondaryButtonClicked__DelegateSignature();
	void SetButtonsLayout(const struct FF_PopupSimple_Buttons_Settings& InButtonsLayoutSettings, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetContentLayout(const struct FF_PopupSimple_Content_Settings& InContentLayoutSettings, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetPrimaryButtonSettings(const struct FF_Button_Primary_Settings_CM& InButtonSettings);
	void SetSecondaryButtonSettings(class FText InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Template_PopupSimple_01_CM_C">();
	}
	static class UWBP_Template_PopupSimple_01_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Template_PopupSimple_01_CM_C>();
	}
};
static_assert(alignof(UWBP_Template_PopupSimple_01_CM_C) == 0x000008, "Wrong alignment on UWBP_Template_PopupSimple_01_CM_C");
static_assert(sizeof(UWBP_Template_PopupSimple_01_CM_C) == 0x0003D8, "Wrong size on UWBP_Template_PopupSimple_01_CM_C");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, UberGraphFrame) == 0x0002A0, "Member 'UWBP_Template_PopupSimple_01_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, Button_Primary) == 0x0002A8, "Member 'UWBP_Template_PopupSimple_01_CM_C::Button_Primary' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, Button_Secondary) == 0x0002B0, "Member 'UWBP_Template_PopupSimple_01_CM_C::Button_Secondary' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, HorizontalBox_Buttons) == 0x0002B8, "Member 'UWBP_Template_PopupSimple_01_CM_C::HorizontalBox_Buttons' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, NamedSlot_Content) == 0x0002C0, "Member 'UWBP_Template_PopupSimple_01_CM_C::NamedSlot_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, Overlay_ButtonPrimary) == 0x0002C8, "Member 'UWBP_Template_PopupSimple_01_CM_C::Overlay_ButtonPrimary' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, Overlay_ButtonSecondary) == 0x0002D0, "Member 'UWBP_Template_PopupSimple_01_CM_C::Overlay_ButtonSecondary' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, Spacer_Buttons) == 0x0002D8, "Member 'UWBP_Template_PopupSimple_01_CM_C::Spacer_Buttons' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, ButtonsLayoutSettings) == 0x0002E0, "Member 'UWBP_Template_PopupSimple_01_CM_C::ButtonsLayoutSettings' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, ContentLayoutSettings) == 0x000300, "Member 'UWBP_Template_PopupSimple_01_CM_C::ContentLayoutSettings' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, PrimaryButtonSettings) == 0x000318, "Member 'UWBP_Template_PopupSimple_01_CM_C::PrimaryButtonSettings' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, SecondaryButtonText) == 0x000368, "Member 'UWBP_Template_PopupSimple_01_CM_C::SecondaryButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, PrimaryButtonClicked) == 0x000380, "Member 'UWBP_Template_PopupSimple_01_CM_C::PrimaryButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, PrimaryButtonHovered) == 0x000390, "Member 'UWBP_Template_PopupSimple_01_CM_C::PrimaryButtonHovered' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, PrimaryButtonUnhovered) == 0x0003A0, "Member 'UWBP_Template_PopupSimple_01_CM_C::PrimaryButtonUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, SecondaryButtonClicked) == 0x0003B0, "Member 'UWBP_Template_PopupSimple_01_CM_C::SecondaryButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, SFX_OverridePrimaryInChild_Continue) == 0x0003C0, "Member 'UWBP_Template_PopupSimple_01_CM_C::SFX_OverridePrimaryInChild_Continue' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, SFX_OverridePrimaryInChild_Hover) == 0x0003C8, "Member 'UWBP_Template_PopupSimple_01_CM_C::SFX_OverridePrimaryInChild_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupSimple_01_CM_C, SFX_OverridePrimaryInChild_Unhover) == 0x0003D0, "Member 'UWBP_Template_PopupSimple_01_CM_C::SFX_OverridePrimaryInChild_Unhover' has a wrong offset!");

}

