#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PopupConfirmSkipLink_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PopupConfirmSkipLink_PF.WBP_PopupConfirmSkipLink_PF_C
// 0x0030 (0x0588 - 0x0558)
class UWBP_PopupConfirmSkipLink_PF_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Popup_CM_C*                        WBP_Popup_CM;                                      // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnConfirm;                                         // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancel;                                          // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_PopupConfirmSkipLink_PF_WBP_Popup_CM_K2Node_ComponentBoundEvent_0_Cancel__DelegateSignature();
	void BndEvt__WBP_PopupLinkSuccess_PF_WBP_Popup_CM_K2Node_ComponentBoundEvent_1_Confirm__DelegateSignature();
	void BP_OnActivated();
	void ExecuteUbergraph_WBP_PopupConfirmSkipLink_PF(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void OnCancel__DelegateSignature();
	void OnConfirm__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PopupConfirmSkipLink_PF_C">();
	}
	static class UWBP_PopupConfirmSkipLink_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PopupConfirmSkipLink_PF_C>();
	}
};
static_assert(alignof(UWBP_PopupConfirmSkipLink_PF_C) == 0x000008, "Wrong alignment on UWBP_PopupConfirmSkipLink_PF_C");
static_assert(sizeof(UWBP_PopupConfirmSkipLink_PF_C) == 0x000588, "Wrong size on UWBP_PopupConfirmSkipLink_PF_C");
static_assert(offsetof(UWBP_PopupConfirmSkipLink_PF_C, UberGraphFrame) == 0x000558, "Member 'UWBP_PopupConfirmSkipLink_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PopupConfirmSkipLink_PF_C, WBP_Popup_CM) == 0x000560, "Member 'UWBP_PopupConfirmSkipLink_PF_C::WBP_Popup_CM' has a wrong offset!");
static_assert(offsetof(UWBP_PopupConfirmSkipLink_PF_C, OnConfirm) == 0x000568, "Member 'UWBP_PopupConfirmSkipLink_PF_C::OnConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_PopupConfirmSkipLink_PF_C, OnCancel) == 0x000578, "Member 'UWBP_PopupConfirmSkipLink_PF_C::OnCancel' has a wrong offset!");

}

