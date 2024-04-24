#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GPPopup_QuickModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GPPopup_QuickModal.WBP_GPPopup_QuickModal_C
// 0x0058 (0x0590 - 0x0538)
class UWBP_GPPopup_QuickModal_C final  : public UVALUI_GpInteractivePopupBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0538(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_RichTextBlock_Styled*            Description;                                       // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        DismissTypeWidgetSwitcher;                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   GameActionToDismiss;                               // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PressButtonToDismiss;                              // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ProgressBar_Styled*              VALUI_ProgressBar_Styled_67;                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPromptItem_C*        WBP_CommonUIButtonPromptItem;                      // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GpPopup_PopupData_C*               WBP_GpPopup_PopupData;                             // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           DismissTimerHandle;                                // 0x0578(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DismissTimerDuration;                              // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowBackDismiss;                                  // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool BP_OnHandleBackAction();
	void Construct();
	void ExecuteUbergraph_WBP_GPPopup_QuickModal(int32 EntryPoint, class UVAL_AlignedPopupType* K2Node_DynamicCast_AsAligned_Modal_Type, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UVAL_DismissGameAction* K2Node_DynamicCast_AsGameplay_Action, bool K2Node_DynamicCast_bSuccess_1, class UVAL_KeypressTimeoutDismiss* K2Node_DynamicCast_AsTimeout_or_Keypress, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double K2Node_VariableSet_DismissTimerDuration_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void OnDismissTimerComplete();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GPPopup_QuickModal_C">();
	}
	static class UWBP_GPPopup_QuickModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GPPopup_QuickModal_C>();
	}
};
static_assert(alignof(UWBP_GPPopup_QuickModal_C) == 0x000008, "Wrong alignment on UWBP_GPPopup_QuickModal_C");
static_assert(sizeof(UWBP_GPPopup_QuickModal_C) == 0x000590, "Wrong size on UWBP_GPPopup_QuickModal_C");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, UberGraphFrame) == 0x000538, "Member 'UWBP_GPPopup_QuickModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, Description) == 0x000540, "Member 'UWBP_GPPopup_QuickModal_C::Description' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, DismissTypeWidgetSwitcher) == 0x000548, "Member 'UWBP_GPPopup_QuickModal_C::DismissTypeWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, GameActionToDismiss) == 0x000550, "Member 'UWBP_GPPopup_QuickModal_C::GameActionToDismiss' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, PressButtonToDismiss) == 0x000558, "Member 'UWBP_GPPopup_QuickModal_C::PressButtonToDismiss' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, VALUI_ProgressBar_Styled_67) == 0x000560, "Member 'UWBP_GPPopup_QuickModal_C::VALUI_ProgressBar_Styled_67' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, WBP_CommonUIButtonPromptItem) == 0x000568, "Member 'UWBP_GPPopup_QuickModal_C::WBP_CommonUIButtonPromptItem' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, WBP_GpPopup_PopupData) == 0x000570, "Member 'UWBP_GPPopup_QuickModal_C::WBP_GpPopup_PopupData' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, DismissTimerHandle) == 0x000578, "Member 'UWBP_GPPopup_QuickModal_C::DismissTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, DismissTimerDuration) == 0x000580, "Member 'UWBP_GPPopup_QuickModal_C::DismissTimerDuration' has a wrong offset!");
static_assert(offsetof(UWBP_GPPopup_QuickModal_C, AllowBackDismiss) == 0x000588, "Member 'UWBP_GPPopup_QuickModal_C::AllowBackDismiss' has a wrong offset!");

}

