#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SelectableButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SelectableButton.WBP_SelectableButton_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_SelectableButton_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             NamedSlot_0;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Button_Styled*                   VALUI_Button_Styled_34;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ButtonStyle*                     UnselectedStyle;                                   // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ButtonStyle*                     SelectedStyle;                                     // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Selected;                                       // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2597[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          ClickSound;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoverSound;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_SelectableButton_VALUI_Button_Styled_34_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_SelectableButton_VALUI_Button_Styled_34_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_SelectableButton(int32 EntryPoint, int32 CallFunc_AkEventGlobal_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_AkEventGlobal_ReturnValue_1);
	void OnClick__DelegateSignature();
	void OnSelectionChanged__DelegateSignature(bool Selected);
	void PreConstruct(bool IsDesignTime);
	void SetSelected(bool New_Selection);
	void UpdateStyle(bool Param_Is_Selected, bool Temp_bool_Variable, class UVALUI_ButtonStyle* K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SelectableButton_C">();
	}
	static class UWBP_SelectableButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SelectableButton_C>();
	}
};
static_assert(alignof(UWBP_SelectableButton_C) == 0x000008, "Wrong alignment on UWBP_SelectableButton_C");
static_assert(sizeof(UWBP_SelectableButton_C) == 0x0002D8, "Wrong size on UWBP_SelectableButton_C");
static_assert(offsetof(UWBP_SelectableButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SelectableButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, NamedSlot_0) == 0x000280, "Member 'UWBP_SelectableButton_C::NamedSlot_0' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, VALUI_Button_Styled_34) == 0x000288, "Member 'UWBP_SelectableButton_C::VALUI_Button_Styled_34' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, UnselectedStyle) == 0x000290, "Member 'UWBP_SelectableButton_C::UnselectedStyle' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, SelectedStyle) == 0x000298, "Member 'UWBP_SelectableButton_C::SelectedStyle' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, Is_Selected) == 0x0002A0, "Member 'UWBP_SelectableButton_C::Is_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, OnClick) == 0x0002A8, "Member 'UWBP_SelectableButton_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, OnSelectionChanged) == 0x0002B8, "Member 'UWBP_SelectableButton_C::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, ClickSound) == 0x0002C8, "Member 'UWBP_SelectableButton_C::ClickSound' has a wrong offset!");
static_assert(offsetof(UWBP_SelectableButton_C, HoverSound) == 0x0002D0, "Member 'UWBP_SelectableButton_C::HoverSound' has a wrong offset!");

}

