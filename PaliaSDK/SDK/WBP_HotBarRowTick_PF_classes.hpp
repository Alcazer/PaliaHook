#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HotBarRowTick_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HotBarRowTick_PF.WBP_HotBarRowTick_PF_C
// 0x0048 (0x0330 - 0x02E8)
class UWBP_HotBarRowTick_PF_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CarouselDot_Large;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              CarouselDot_SmallButton;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_31;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_187;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          PreventSpamBeginPlay;                              // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4711[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRowTickTouched;                                  // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         RowTickNumber;                                     // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__WBP_HotBarRowTick_PF_CarouselDot_SmallButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_HotBarRowTick_PF(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnRowTickTouched__DelegateSignature(int32 Param_RowTickNumber, class UWBP_HotBarRowTick_PF_C* RowTick);
	void SetRowTickNumber(int32 SlotNumber);
	void Toggle(bool IsOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HotBarRowTick_PF_C">();
	}
	static class UWBP_HotBarRowTick_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HotBarRowTick_PF_C>();
	}
};
static_assert(alignof(UWBP_HotBarRowTick_PF_C) == 0x000008, "Wrong alignment on UWBP_HotBarRowTick_PF_C");
static_assert(sizeof(UWBP_HotBarRowTick_PF_C) == 0x000330, "Wrong size on UWBP_HotBarRowTick_PF_C");
static_assert(offsetof(UWBP_HotBarRowTick_PF_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_HotBarRowTick_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HotBarRowTick_PF_C, CarouselDot_Large) == 0x0002F0, "Member 'UWBP_HotBarRowTick_PF_C::CarouselDot_Large' has a wrong offset!");
static_assert(offsetof(UWBP_HotBarRowTick_PF_C, CarouselDot_SmallButton) == 0x0002F8, "Member 'UWBP_HotBarRowTick_PF_C::CarouselDot_SmallButton' has a wrong offset!");
static_assert(offsetof(UWBP_HotBarRowTick_PF_C, Image_31) == 0x000300, "Member 'UWBP_HotBarRowTick_PF_C::Image_31' has a wrong offset!");
static_assert(offsetof(UWBP_HotBarRowTick_PF_C, WidgetSwitcher_187) == 0x000308, "Member 'UWBP_HotBarRowTick_PF_C::WidgetSwitcher_187' has a wrong offset!");
static_assert(offsetof(UWBP_HotBarRowTick_PF_C, PreventSpamBeginPlay) == 0x000310, "Member 'UWBP_HotBarRowTick_PF_C::PreventSpamBeginPlay' has a wrong offset!");
static_assert(offsetof(UWBP_HotBarRowTick_PF_C, OnRowTickTouched) == 0x000318, "Member 'UWBP_HotBarRowTick_PF_C::OnRowTickTouched' has a wrong offset!");
static_assert(offsetof(UWBP_HotBarRowTick_PF_C, RowTickNumber) == 0x000328, "Member 'UWBP_HotBarRowTick_PF_C::RowTickNumber' has a wrong offset!");

}

