#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PopupResetDefault_KeyRebind_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6UICore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PopupResetDefault_KeyRebind_PF.WBP_PopupResetDefault_KeyRebind_PF_C
// 0x0020 (0x0548 - 0x0528)
class UWBP_PopupResetDefault_KeyRebind_PF_C final  : public US6UI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_PopupSecondary_02_PF_C*   DefaultSettings;                                   // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnConfirm;                                         // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_PopupResetDefault_KeyRebind_PF_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_2_Cancel__DelegateSignature();
	void BndEvt__WBP_PopupResetDefault_KeyRebind_PF_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_3_Confirm__DelegateSignature();
	void Close();
	void Destruct();
	void ExecuteUbergraph_WBP_PopupResetDefault_KeyRebind_PF(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	class US6UI_InputActionHandlingWidgetComponent* GetInputActionHandlingComponent();
	void OnConfirm__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PopupResetDefault_KeyRebind_PF_C">();
	}
	static class UWBP_PopupResetDefault_KeyRebind_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PopupResetDefault_KeyRebind_PF_C>();
	}
};
static_assert(alignof(UWBP_PopupResetDefault_KeyRebind_PF_C) == 0x000008, "Wrong alignment on UWBP_PopupResetDefault_KeyRebind_PF_C");
static_assert(sizeof(UWBP_PopupResetDefault_KeyRebind_PF_C) == 0x000548, "Wrong size on UWBP_PopupResetDefault_KeyRebind_PF_C");
static_assert(offsetof(UWBP_PopupResetDefault_KeyRebind_PF_C, UberGraphFrame) == 0x000528, "Member 'UWBP_PopupResetDefault_KeyRebind_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PopupResetDefault_KeyRebind_PF_C, DefaultSettings) == 0x000530, "Member 'UWBP_PopupResetDefault_KeyRebind_PF_C::DefaultSettings' has a wrong offset!");
static_assert(offsetof(UWBP_PopupResetDefault_KeyRebind_PF_C, OnConfirm) == 0x000538, "Member 'UWBP_PopupResetDefault_KeyRebind_PF_C::OnConfirm' has a wrong offset!");

}

