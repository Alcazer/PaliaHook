#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeyboardSettings_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_KeyboardSettings_CM.WBP_KeyboardSettings_CM_C
// 0x00D0 (0x05E0 - 0x0510)
class UWBP_KeyboardSettings_CM_C final  : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Secondary_01_CM_C* Button_Secondary_ResetToDefault_CM;                // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_InvertMouseXAxis;                         // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_InvertMouseYAxis;                         // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Gameplay;                                // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_2;                                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbox_ControlSettings;                         // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_AimSensitivity;                             // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_MouseSensitivity;                           // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_ButtonTab_Secondary_02_CM_C* TabSelector;                                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyRebindingMenu_C*                WBP_KeyRebindingMenu;                              // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_DescriptionBox_C*         WBP_Settings_DescriptionBox;                       // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       WidgetSwitcher;                                    // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RebindResultTips;                                  // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         CurrentSlotNum;                                    // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53A3[0x3];                                     // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CurrentSlot;                                       // 0x0584(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53A4[0x4];                                     // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                IADescWidget;                                      // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_KeyRebindResultTips_C*             WBP_KeyRebidingResult;                             // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           HideTipsTimerHandle;                               // 0x05A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         TipsDelayTime;                                     // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53A5[0x4];                                     // 0x05AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ScrollSpeed;                                       // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSynced;                                         // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53A6[0x7];                                     // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPopupOpen;                                       // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPopupClose;                                      // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_KeyboardSettings_CM_Button_Secondary_ResetToDefault_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_KeyboardSettings_CM_WBP_KeyRebindingMenu_K2Node_ComponentBoundEvent_3_OnPopupOpen__DelegateSignature();
	void BndEvt__WBP_KeyboardSettings_CM_WBP_KeyRebindingMenu_K2Node_ComponentBoundEvent_6_OnPopupClose__DelegateSignature();
	void BndEvt__WBP_KeyRebindingSettings_CM_Slider_AimSensitivity_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_KeyRebindingSettings_CM_WBP_SettingsItem_Checkbox_CM_K2Node_ComponentBoundEvent_2_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_KeyRebindingSettings_CM_WBP_SettingsItem_Checkbox_CM_K2Node_ComponentBoundEvent_4_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_KeyRebindingSettings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_KeyRebindingSettings_CM_WBP_Template_ButtonTab_Secondary_02_CM_K2Node_ComponentBoundEvent_7_On_Tab_Selection_Changed__DelegateSignature(int32 Tab_Selection);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_KeyboardSettings_CM(int32 EntryPoint, class UInputAction* Temp_object_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_2, bool Temp_bool_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, class FText K2Node_CustomEvent_Name, class FText K2Node_CustomEvent_Description, TDelegate<void(class FText Name, class FText Description)> K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool K2Node_ComponentBoundEvent_Checked_1, class UWidget* CallFunc_Array_Get_Item, class UWBP_SettingsItem_Parent_DoNotEdit_C* K2Node_DynamicCast_AsWBP_Settings_Item_Parent_Do_Not_Edit, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_ComponentBoundEvent_Checked, double K2Node_ComponentBoundEvent_Value_1, int32 K2Node_ComponentBoundEvent_Tab_Selection, class UInputAction* Temp_object_Variable_1, bool K2Node_SwitchInteger_CmpSuccess, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double Temp_real_Variable_3_0, double Temp_real_Variable_2_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1, ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess_1, double K2Node_ComponentBoundEvent_Value, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsKeyRebindEmpty_IsEmpty, bool CallFunc_RemoveChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetMouseSensitivity_sensitivity_ImplicitCast, float CallFunc_SetMouseAimSensitivityMultiplier_SensitivityMultiplier_ImplicitCast);
	void HandleSettingsItemHovered(class FText Param_Name, class FText Description);
	void HandleSettingsItemUnhovered();
	void InpActEvt_IA_UI_SecondaryTab_Switch_L_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryTab_Switch_R_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void OnPopupClose__DelegateSignature();
	void OnPopupOpen__DelegateSignature();
	void ResetSettings(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue);
	void SynchronizeInputSettings(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, double CallFunc_SetSliderValue_SliderValue_ImplicitCast, double CallFunc_SetSliderValue_SliderValue_ImplicitCast_1);

	class UWidget* BP_GetDesiredFocusTarget(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_KeyboardSettings_CM_C">();
	}
	static class UWBP_KeyboardSettings_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_KeyboardSettings_CM_C>();
	}
};
static_assert(alignof(UWBP_KeyboardSettings_CM_C) == 0x000008, "Wrong alignment on UWBP_KeyboardSettings_CM_C");
static_assert(sizeof(UWBP_KeyboardSettings_CM_C) == 0x0005E0, "Wrong size on UWBP_KeyboardSettings_CM_C");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_KeyboardSettings_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, Button_Secondary_ResetToDefault_CM) == 0x000518, "Member 'UWBP_KeyboardSettings_CM_C::Button_Secondary_ResetToDefault_CM' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, Checkbox_InvertMouseXAxis) == 0x000520, "Member 'UWBP_KeyboardSettings_CM_C::Checkbox_InvertMouseXAxis' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, Checkbox_InvertMouseYAxis) == 0x000528, "Member 'UWBP_KeyboardSettings_CM_C::Checkbox_InvertMouseYAxis' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, GridPanel_Gameplay) == 0x000530, "Member 'UWBP_KeyboardSettings_CM_C::GridPanel_Gameplay' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, Overlay_2) == 0x000538, "Member 'UWBP_KeyboardSettings_CM_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, Scrollbox_ControlSettings) == 0x000540, "Member 'UWBP_KeyboardSettings_CM_C::Scrollbox_ControlSettings' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, Slider_AimSensitivity) == 0x000548, "Member 'UWBP_KeyboardSettings_CM_C::Slider_AimSensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, Slider_MouseSensitivity) == 0x000550, "Member 'UWBP_KeyboardSettings_CM_C::Slider_MouseSensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, TabSelector) == 0x000558, "Member 'UWBP_KeyboardSettings_CM_C::TabSelector' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, WBP_KeyRebindingMenu) == 0x000560, "Member 'UWBP_KeyboardSettings_CM_C::WBP_KeyRebindingMenu' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, WBP_Settings_DescriptionBox) == 0x000568, "Member 'UWBP_KeyboardSettings_CM_C::WBP_Settings_DescriptionBox' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, WidgetSwitcher) == 0x000570, "Member 'UWBP_KeyboardSettings_CM_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, RebindResultTips) == 0x000578, "Member 'UWBP_KeyboardSettings_CM_C::RebindResultTips' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, CurrentSlotNum) == 0x000580, "Member 'UWBP_KeyboardSettings_CM_C::CurrentSlotNum' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, CurrentSlot) == 0x000584, "Member 'UWBP_KeyboardSettings_CM_C::CurrentSlot' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, IADescWidget) == 0x000590, "Member 'UWBP_KeyboardSettings_CM_C::IADescWidget' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, WBP_KeyRebidingResult) == 0x000598, "Member 'UWBP_KeyboardSettings_CM_C::WBP_KeyRebidingResult' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, HideTipsTimerHandle) == 0x0005A0, "Member 'UWBP_KeyboardSettings_CM_C::HideTipsTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, TipsDelayTime) == 0x0005A8, "Member 'UWBP_KeyboardSettings_CM_C::TipsDelayTime' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, ScrollSpeed) == 0x0005B0, "Member 'UWBP_KeyboardSettings_CM_C::ScrollSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, bIsSynced) == 0x0005B8, "Member 'UWBP_KeyboardSettings_CM_C::bIsSynced' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, OnPopupOpen) == 0x0005C0, "Member 'UWBP_KeyboardSettings_CM_C::OnPopupOpen' has a wrong offset!");
static_assert(offsetof(UWBP_KeyboardSettings_CM_C, OnPopupClose) == 0x0005D0, "Member 'UWBP_KeyboardSettings_CM_C::OnPopupClose' has a wrong offset!");

}
