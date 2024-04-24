#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PhotosensitivityWarning_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PhotosensitivityWarning_CM.WBP_PhotosensitivityWarning_CM_C
// 0x0020 (0x0578 - 0x0558)
class UWBP_PhotosensitivityWarning_CM_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_PopupSimple_01_CM_C*      ConfirmButton;                                     // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnContinueClicked;                                 // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_PhotosensitivityWarning_CM_WBP_Template_PopupSimple_01_CM_37_K2Node_ComponentBoundEvent_1_PrimaryButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_PhotosensitivityWarning_CM(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void OnContinueClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PhotosensitivityWarning_CM_C">();
	}
	static class UWBP_PhotosensitivityWarning_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PhotosensitivityWarning_CM_C>();
	}
};
static_assert(alignof(UWBP_PhotosensitivityWarning_CM_C) == 0x000008, "Wrong alignment on UWBP_PhotosensitivityWarning_CM_C");
static_assert(sizeof(UWBP_PhotosensitivityWarning_CM_C) == 0x000578, "Wrong size on UWBP_PhotosensitivityWarning_CM_C");
static_assert(offsetof(UWBP_PhotosensitivityWarning_CM_C, UberGraphFrame) == 0x000558, "Member 'UWBP_PhotosensitivityWarning_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PhotosensitivityWarning_CM_C, ConfirmButton) == 0x000560, "Member 'UWBP_PhotosensitivityWarning_CM_C::ConfirmButton' has a wrong offset!");
static_assert(offsetof(UWBP_PhotosensitivityWarning_CM_C, OnContinueClicked) == 0x000568, "Member 'UWBP_PhotosensitivityWarning_CM_C::OnContinueClicked' has a wrong offset!");

}
