#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Wardrobe_CancelModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Wardrobe_CancelModal.WBP_Wardrobe_CancelModal_C
// 0x0030 (0x0558 - 0x0528)
class UWBP_Wardrobe_CancelModal_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_PopupSecondary_02_CM_C*   WBP_Template_PopupSecondary_02_CM;                 // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnConfirm;                                         // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancel;                                          // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_CharacterRespecConfirmation_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature();
	void BndEvt__WBP_CharacterRespecConfirmation_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_1_Cancel__DelegateSignature();
	void CloseSelf(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void ExecuteUbergraph_WBP_Wardrobe_CancelModal(int32 EntryPoint);
	void OnCancel__DelegateSignature();
	void OnConfirm__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Wardrobe_CancelModal_C">();
	}
	static class UWBP_Wardrobe_CancelModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Wardrobe_CancelModal_C>();
	}
};
static_assert(alignof(UWBP_Wardrobe_CancelModal_C) == 0x000008, "Wrong alignment on UWBP_Wardrobe_CancelModal_C");
static_assert(sizeof(UWBP_Wardrobe_CancelModal_C) == 0x000558, "Wrong size on UWBP_Wardrobe_CancelModal_C");
static_assert(offsetof(UWBP_Wardrobe_CancelModal_C, UberGraphFrame) == 0x000528, "Member 'UWBP_Wardrobe_CancelModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Wardrobe_CancelModal_C, WBP_Template_PopupSecondary_02_CM) == 0x000530, "Member 'UWBP_Wardrobe_CancelModal_C::WBP_Template_PopupSecondary_02_CM' has a wrong offset!");
static_assert(offsetof(UWBP_Wardrobe_CancelModal_C, OnConfirm) == 0x000538, "Member 'UWBP_Wardrobe_CancelModal_C::OnConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_Wardrobe_CancelModal_C, OnCancel) == 0x000548, "Member 'UWBP_Wardrobe_CancelModal_C::OnCancel' has a wrong offset!");

}

