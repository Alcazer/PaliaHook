#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PopupHasButtonNotBound_KeyRebind

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6UICore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PopupHasButtonNotBound_KeyRebind.WBP_PopupHasButtonNotBound_KeyRebind_C
// 0x0040 (0x0598 - 0x0558)
class UWBP_PopupHasButtonNotBound_KeyRebind_C final  : public US6UI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_PopupSecondary_02_CM_C*   WBP_Template_PopupSecondary_02_CM;                 // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnConfirm;                                         // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancel;                                          // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnConfirm__DelegateSignature();
	void OnClose__DelegateSignature();
	void OnCancel__DelegateSignature();
	class US6UI_InputActionHandlingWidgetComponent* GetInputActionHandlingComponent();
	void ExecuteUbergraph_WBP_PopupHasButtonNotBound_KeyRebind(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void Destruct();
	void Close();
	void BndEvt__WBP_PopupResetDefault_KeyRebind_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_3_Cancel__DelegateSignature();
	void BndEvt__WBP_PopupResetDefault_KeyRebind_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_2_Confirm__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PopupHasButtonNotBound_KeyRebind_C">();
	}
	static class UWBP_PopupHasButtonNotBound_KeyRebind_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PopupHasButtonNotBound_KeyRebind_C>();
	}
};
static_assert(alignof(UWBP_PopupHasButtonNotBound_KeyRebind_C) == 0x000008, "Wrong alignment on UWBP_PopupHasButtonNotBound_KeyRebind_C");
static_assert(sizeof(UWBP_PopupHasButtonNotBound_KeyRebind_C) == 0x000598, "Wrong size on UWBP_PopupHasButtonNotBound_KeyRebind_C");
static_assert(offsetof(UWBP_PopupHasButtonNotBound_KeyRebind_C, UberGraphFrame) == 0x000558, "Member 'UWBP_PopupHasButtonNotBound_KeyRebind_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PopupHasButtonNotBound_KeyRebind_C, WBP_Template_PopupSecondary_02_CM) == 0x000560, "Member 'UWBP_PopupHasButtonNotBound_KeyRebind_C::WBP_Template_PopupSecondary_02_CM' has a wrong offset!");
static_assert(offsetof(UWBP_PopupHasButtonNotBound_KeyRebind_C, OnConfirm) == 0x000568, "Member 'UWBP_PopupHasButtonNotBound_KeyRebind_C::OnConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_PopupHasButtonNotBound_KeyRebind_C, OnCancel) == 0x000578, "Member 'UWBP_PopupHasButtonNotBound_KeyRebind_C::OnCancel' has a wrong offset!");
static_assert(offsetof(UWBP_PopupHasButtonNotBound_KeyRebind_C, OnClose) == 0x000588, "Member 'UWBP_PopupHasButtonNotBound_KeyRebind_C::OnClose' has a wrong offset!");

}

