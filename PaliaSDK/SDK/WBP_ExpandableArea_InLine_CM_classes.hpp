#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ExpandableArea_InLine_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ExpandableArea_InLine_CM.WBP_ExpandableArea_InLine_CM_C
// 0x00A8 (0x0320 - 0x0278)
class UWBP_ExpandableArea_InLine_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ExpandContents;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FlipArrowUp;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   BorderStyleHeader;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Expand_CM;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DropdownArrow;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_Content;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_Text;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HeaderText;                                        // 0x02B8(0x0018)(Edit, BlueprintVisible)
	bool                                          Expanded;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartExpanded;                                     // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485E[0x6];                                     // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ButtonStyle_Expanded;                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ButtonStyle_Collapsed;                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAreaExpanded;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidgetAnimation*                       ExpandContentAnim;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_BorderStyle*                     HeaderStyle_Collapsed;                             // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_BorderStyle*                     HeaderStyle_Expanded;                              // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFocused;                                         // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature();
	void BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void DisplayExpandedContent(bool Param_Expanded, bool Param_PlayAnimation, class UClass* HeaderButtonStyleCM, ESlateVisibility BodyVisibility, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
	void ExecuteUbergraph_WBP_ExpandableArea_InLine_CM(int32 EntryPoint, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, double K2Node_Select_Default, int32 CallFunc_AkEventGlobal_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void On_Expandable_Area_Close_Animation_End();
	void OnAreaExpanded__DelegateSignature(class UWBP_ExpandableArea_InLine_CM_C* ExpandableAreaWidget, bool Param_Expanded);
	void OnFocused__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ToggleExpand(bool CallFunc_Not_PreBool_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ExpandableArea_InLine_CM_C">();
	}
	static class UWBP_ExpandableArea_InLine_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ExpandableArea_InLine_CM_C>();
	}
};
static_assert(alignof(UWBP_ExpandableArea_InLine_CM_C) == 0x000008, "Wrong alignment on UWBP_ExpandableArea_InLine_CM_C");
static_assert(sizeof(UWBP_ExpandableArea_InLine_CM_C) == 0x000320, "Wrong size on UWBP_ExpandableArea_InLine_CM_C");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ExpandableArea_InLine_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, ExpandContents) == 0x000280, "Member 'UWBP_ExpandableArea_InLine_CM_C::ExpandContents' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, FlipArrowUp) == 0x000288, "Member 'UWBP_ExpandableArea_InLine_CM_C::FlipArrowUp' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, BorderStyleHeader) == 0x000290, "Member 'UWBP_ExpandableArea_InLine_CM_C::BorderStyleHeader' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, Button_Expand_CM) == 0x000298, "Member 'UWBP_ExpandableArea_InLine_CM_C::Button_Expand_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, Image_DropdownArrow) == 0x0002A0, "Member 'UWBP_ExpandableArea_InLine_CM_C::Image_DropdownArrow' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, NamedSlot_Content) == 0x0002A8, "Member 'UWBP_ExpandableArea_InLine_CM_C::NamedSlot_Content' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, NamedSlot_Text) == 0x0002B0, "Member 'UWBP_ExpandableArea_InLine_CM_C::NamedSlot_Text' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, HeaderText) == 0x0002B8, "Member 'UWBP_ExpandableArea_InLine_CM_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, Expanded) == 0x0002D0, "Member 'UWBP_ExpandableArea_InLine_CM_C::Expanded' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, StartExpanded) == 0x0002D1, "Member 'UWBP_ExpandableArea_InLine_CM_C::StartExpanded' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, ButtonStyle_Expanded) == 0x0002D8, "Member 'UWBP_ExpandableArea_InLine_CM_C::ButtonStyle_Expanded' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, ButtonStyle_Collapsed) == 0x0002E0, "Member 'UWBP_ExpandableArea_InLine_CM_C::ButtonStyle_Collapsed' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, OnAreaExpanded) == 0x0002E8, "Member 'UWBP_ExpandableArea_InLine_CM_C::OnAreaExpanded' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, ExpandContentAnim) == 0x0002F8, "Member 'UWBP_ExpandableArea_InLine_CM_C::ExpandContentAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, HeaderStyle_Collapsed) == 0x000300, "Member 'UWBP_ExpandableArea_InLine_CM_C::HeaderStyle_Collapsed' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, HeaderStyle_Expanded) == 0x000308, "Member 'UWBP_ExpandableArea_InLine_CM_C::HeaderStyle_Expanded' has a wrong offset!");
static_assert(offsetof(UWBP_ExpandableArea_InLine_CM_C, OnFocused) == 0x000310, "Member 'UWBP_ExpandableArea_InLine_CM_C::OnFocused' has a wrong offset!");

}

