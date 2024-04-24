#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_Button_IconTertiary_01_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6UICommonWidgets_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Template_Button_IconTertiary_01_CM.WBP_Template_Button_IconTertiary_01_CM_C
// 0x0040 (0x15B0 - 0x1570)
class UWBP_Template_Button_IconTertiary_01_CM_C final  : public US6UI_CommonButton_Styled
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             Icon;                                              // 0x1578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x1580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          ClickSound;                                        // 0x1590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoverSound;                                        // 0x1598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFocused;                                         // 0x15A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void ExecuteUbergraph_WBP_Template_Button_IconTertiary_01_CM(int32 EntryPoint, bool K2Node_Event_bIsShow, int32 CallFunc_PostGlobalEvent_ReturnValue, int32 CallFunc_PostGlobalEvent_ReturnValue_1);
	void HandleAccept();
	void OnClicked__DelegateSignature();
	void OnFocused__DelegateSignature(class UWidget* FocusWidget);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ShowFocusTip(bool bIsShow);

	void IsEmpty(bool* bIsEmpty) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Template_Button_IconTertiary_01_CM_C">();
	}
	static class UWBP_Template_Button_IconTertiary_01_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Template_Button_IconTertiary_01_CM_C>();
	}
};
static_assert(alignof(UWBP_Template_Button_IconTertiary_01_CM_C) == 0x000010, "Wrong alignment on UWBP_Template_Button_IconTertiary_01_CM_C");
static_assert(sizeof(UWBP_Template_Button_IconTertiary_01_CM_C) == 0x0015B0, "Wrong size on UWBP_Template_Button_IconTertiary_01_CM_C");
static_assert(offsetof(UWBP_Template_Button_IconTertiary_01_CM_C, UberGraphFrame) == 0x001570, "Member 'UWBP_Template_Button_IconTertiary_01_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Button_IconTertiary_01_CM_C, Icon) == 0x001578, "Member 'UWBP_Template_Button_IconTertiary_01_CM_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Button_IconTertiary_01_CM_C, OnClicked) == 0x001580, "Member 'UWBP_Template_Button_IconTertiary_01_CM_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Button_IconTertiary_01_CM_C, ClickSound) == 0x001590, "Member 'UWBP_Template_Button_IconTertiary_01_CM_C::ClickSound' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Button_IconTertiary_01_CM_C, HoverSound) == 0x001598, "Member 'UWBP_Template_Button_IconTertiary_01_CM_C::HoverSound' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Button_IconTertiary_01_CM_C, OnFocused) == 0x0015A0, "Member 'UWBP_Template_Button_IconTertiary_01_CM_C::OnFocused' has a wrong offset!");

}
