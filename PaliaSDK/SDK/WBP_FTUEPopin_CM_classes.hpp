#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FTUEPopin_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_SpecificFTUEPopin_CM_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C
// 0x0088 (0x0300 - 0x0278)
class UWBP_FTUEPopin_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Size;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_Styled;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              VALUI_Button_Styled_83;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_RichTextBlock_Styled*            VALUI_RichTextBlock_Styled;                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_RichTextBlock_Styled*            VALUI_RichTextBlock_Styled_1;                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_TextBlock_Styled_Content;                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_TextBlock_Styled_Content_1;                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_TextBlock_Styled_Title;                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_TextBlock_Styled_Title_1;                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTutorialClose;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	Enum_SpecificFTUEPopin_CM                     SpecificFTUEPopinName;                             // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_477D[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           InputKeyReminderFTUEPopin;                         // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_FTUEPopin_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnTutorialClose__DelegateSignature();
	void SetRichTextVisibility(TArray<class FName>& Param_InputKeyReminderFTUEPopin, class FName& ItemToFind, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void SetSlotAlignment(class UWidget* Widget, const struct FVector2D& InAlignment, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void SetSlotOffset(class UWidget* Widget, const struct FMargin& InOffset, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void SetSlotPosition(class UWidget* Widget, const struct FVector2D& InPosition, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void SetSpecificFTUEPopinSlot(class USizeBox* FTUESizeBox, class UBorder* FTUE_BorderSize, class UImage* FTUE_Image, class UVALUI_Border_Styled* FTUE_BorderStyled, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_MakeStruct_Margin_3);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FTUEPopin_CM_C">();
	}
	static class UWBP_FTUEPopin_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FTUEPopin_CM_C>();
	}
};
static_assert(alignof(UWBP_FTUEPopin_CM_C) == 0x000008, "Wrong alignment on UWBP_FTUEPopin_CM_C");
static_assert(sizeof(UWBP_FTUEPopin_CM_C) == 0x000300, "Wrong size on UWBP_FTUEPopin_CM_C");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, UberGraphFrame) == 0x000278, "Member 'UWBP_FTUEPopin_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, Border_Size) == 0x000280, "Member 'UWBP_FTUEPopin_CM_C::Border_Size' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, Border_Styled) == 0x000288, "Member 'UWBP_FTUEPopin_CM_C::Border_Styled' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, Image) == 0x000290, "Member 'UWBP_FTUEPopin_CM_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, SizeBox) == 0x000298, "Member 'UWBP_FTUEPopin_CM_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, VALUI_Button_Styled_83) == 0x0002A0, "Member 'UWBP_FTUEPopin_CM_C::VALUI_Button_Styled_83' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, VALUI_RichTextBlock_Styled) == 0x0002A8, "Member 'UWBP_FTUEPopin_CM_C::VALUI_RichTextBlock_Styled' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, VALUI_RichTextBlock_Styled_1) == 0x0002B0, "Member 'UWBP_FTUEPopin_CM_C::VALUI_RichTextBlock_Styled_1' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, VALUI_TextBlock_Styled_Content) == 0x0002B8, "Member 'UWBP_FTUEPopin_CM_C::VALUI_TextBlock_Styled_Content' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, VALUI_TextBlock_Styled_Content_1) == 0x0002C0, "Member 'UWBP_FTUEPopin_CM_C::VALUI_TextBlock_Styled_Content_1' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, VALUI_TextBlock_Styled_Title) == 0x0002C8, "Member 'UWBP_FTUEPopin_CM_C::VALUI_TextBlock_Styled_Title' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, VALUI_TextBlock_Styled_Title_1) == 0x0002D0, "Member 'UWBP_FTUEPopin_CM_C::VALUI_TextBlock_Styled_Title_1' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, OnTutorialClose) == 0x0002D8, "Member 'UWBP_FTUEPopin_CM_C::OnTutorialClose' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, SpecificFTUEPopinName) == 0x0002E8, "Member 'UWBP_FTUEPopin_CM_C::SpecificFTUEPopinName' has a wrong offset!");
static_assert(offsetof(UWBP_FTUEPopin_CM_C, InputKeyReminderFTUEPopin) == 0x0002F0, "Member 'UWBP_FTUEPopin_CM_C::InputKeyReminderFTUEPopin' has a wrong offset!");

}

