#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GamepadSettings_CM

#include "Basic.hpp"

#include "E_CloseKeyRebindMenuType_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "S6Core_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GamepadSettings_CM.WBP_GamepadSettings_CM_C
// 0x00D8 (0x05E8 - 0x0510)
class UWBP_GamepadSettings_CM_C final  : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Secondary_01_CM_C* Button_Secondary_ResetToDefault_CM;                // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_CameraAssist;                             // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_InvertControllerStick;                    // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_InvertControllerXAxis;                    // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_InvertControllerYAxis;                    // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Gamepad;                                 // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                ScrollBox_GamepadSettings;                         // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_AimSensitivity;                             // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_ControllerXSensitivity;                     // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_ControllerYSensitivity;                     // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_VibrationIntensity;                         // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_ButtonTab_Secondary_02_CM_C* TabSelector;                                       // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyRebindingMenu_Gamepad_C*        WBP_KeyRebindingMenu_Gamepad;                      // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_DescriptionBox_C*         WBP_Settings_DescriptionBox;                       // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       WidgetSwitcher;                                    // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         LocaleComboBoxOptionsArray;                        // 0x0598(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsSynced;                                         // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A8A[0x7];                                     // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ScrollMoveSpeed;                                   // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SettingsItem_Parent_DoNotEdit_C*   CurrentFocusWidget;                                // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        ControllerAxisSensitivityModifier;                 // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPopupOpen;                                       // 0x05C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPopupClose;                                      // 0x05D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ActiveFocusAndPrompt(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void BndEvt__WBP_GamepadSettings_CM_Button_Secondary_ResetToDefault_CM_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_GamepadSettings_CM_Checkbox_CameraAssist_K2Node_ComponentBoundEvent_7_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GamepadSettings_CM_Checkbox_ThumbstickScheme_K2Node_ComponentBoundEvent_8_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GamepadSettings_CM_Slider_AimSensitivity_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_GamepadSettings_CM_Slider_ControllerYSensitivity_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_GamepadSettings_CM_Slider_RumbleIntensity_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_GamepadSettings_CM_TabSelector_K2Node_ComponentBoundEvent_6_On_Tab_Selection_Changed__DelegateSignature(int32 Tab_Selection);
	void BndEvt__WBP_GamepadSettings_CM_WBP_KeyRebindingMenu_Gamepad_K2Node_ComponentBoundEvent_11_OnPopupClose__DelegateSignature();
	void BndEvt__WBP_GamepadSettings_CM_WBP_KeyRebindingMenu_Gamepad_K2Node_ComponentBoundEvent_9_OnPopupOpen__DelegateSignature();
	void BndEvt__WBP_KeyRebindingSettings_CM_WBP_SettingsItem_Checkbox_CM_K2Node_ComponentBoundEvent_2_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_KeyRebindingSettings_CM_WBP_SettingsItem_Checkbox_CM_K2Node_ComponentBoundEvent_4_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_KeyRebindingSettings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature(double Value);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void CheckandCloseKeyRebindMenu(TScriptInterface<class IBPI_KeyRebindInterface_C> OwnerWidget, E_CloseKeyRebindMenuType ExcuteStatus, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_KeyRebindInterface_C> K2Node_DynamicCast_AsBPI_Key_Rebind_Interface, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void Destruct();
	void ExecutePrePopupAction(E_CloseKeyRebindMenuType PrePopupAction);
	void ExecuteUbergraph_WBP_GamepadSettings_CM(int32 EntryPoint, class UKeyRebindingSubsystem* CallFunc_GetKeyRebindingSystem_ReturnValue, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable_1, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_2_0, double Temp_real_Variable_3_0, bool Temp_bool_Variable_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, double Temp_real_Variable_4, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, double Temp_real_Variable_5, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UInputAction* Temp_object_Variable_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FKeyRebind_DisplayResult& K2Node_Event_KeyRebindResultInfo, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, class FText K2Node_CustomEvent_Name, class FText K2Node_CustomEvent_Description, double Temp_real_Variable_5_0, double Temp_real_Variable_4_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_SettingsItem_Parent_DoNotEdit_C* K2Node_DynamicCast_AsWBP_Settings_Item_Parent_Do_Not_Edit, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_3, double Temp_real_Variable_6, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_2, double Temp_real_Variable_7, class UInputAction* Temp_object_Variable_3, bool K2Node_ComponentBoundEvent_Checked_3, bool K2Node_ComponentBoundEvent_Checked_2, double K2Node_ComponentBoundEvent_Value_3, double K2Node_ComponentBoundEvent_Value_2, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_4, double Temp_real_Variable_7_0, double Temp_real_Variable_6_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_3, double K2Node_ComponentBoundEvent_Value_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_5, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_6, bool K2Node_ComponentBoundEvent_Checked_1, double K2Node_ComponentBoundEvent_Value, bool Temp_bool_Variable_4, double Temp_real_Variable_8, double Temp_real_Variable_9, int32 K2Node_ComponentBoundEvent_Tab_Selection, class UInputAction* Temp_object_Variable_4, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1, double Temp_real_Variable_9_0, double Temp_real_Variable_8_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_4, ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_ComponentBoundEvent_Checked, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_7, TDelegate<void(class FText Name, class FText Description)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, E_CloseKeyRebindMenuType K2Node_Event_PrePopupAction_1, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class IBPI_KeyRebindInterface_C> K2Node_Event_OwnerWidget, E_CloseKeyRebindMenuType K2Node_Event_PrePopupAction, TScriptInterface<class IBPI_KeyRebindInterface_C> CallFunc_CheckandCloseKeyRebindMenu_OwnerWidget_CastInput, TScriptInterface<class IBPI_KeyRebindInterface_C> CallFunc_CheckandCloseKeyRebindMenu_OwnerWidget_CastInput_1, bool CallFunc_IsKeyRebindEmpty_IsEmpty, bool CallFunc_RemoveChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetControllerAimSensitivityMultiplier_SensitivityMultiplier_ImplicitCast, float CallFunc_SetControllerForceFeedbackScale_Scale_ImplicitCast, float CallFunc_SetControllerXAxisSensitivity_sensitivity_ImplicitCast, float CallFunc_SetControllerYAxisSensitivity_sensitivity_ImplicitCast);
	void HandleSettingsItemHovered(class FText Param_Name, class FText Description);
	void HandleSettingsItemUnhovered();
	void InpActEvt_IA_UI_ResetToDefault_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_ScrollBar_Down_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_ScrollBar_Up_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryTab_Switch_L_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryTab_Switch_R_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void OnPopupClose__DelegateSignature();
	void OnPopupOpen__DelegateSignature();
	void OnResetPopupClose();
	void OnResetPopupConfirm();
	void RefreshKeyRebindTips(const struct FKeyRebind_DisplayResult& KeyRebindResultInfo);
	void ResetSettings(ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetScrollUp(bool bIsMoveUp, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double K2Node_Select_Default, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Max_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void SynchronizeInputSettings(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_GetEnableCameraAssist_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, double CallFunc_SetSliderValue_SliderValue_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast);
	void ToggleButtonCheckPopup(TScriptInterface<class IBPI_KeyRebindInterface_C> OwnerWidget, E_CloseKeyRebindMenuType PrePopupAction);
	void TryResetSettings(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsConsolePlatform_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UWBP_ResetToDefault_Confirmation_PF_C* CallFunc_Create_ReturnValue);

	class UWidget* BP_GetDesiredFocusTarget(int32 Temp_int_Variable, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* K2Node_Select_Default) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GamepadSettings_CM_C">();
	}
	static class UWBP_GamepadSettings_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GamepadSettings_CM_C>();
	}
};
static_assert(alignof(UWBP_GamepadSettings_CM_C) == 0x000008, "Wrong alignment on UWBP_GamepadSettings_CM_C");
static_assert(sizeof(UWBP_GamepadSettings_CM_C) == 0x0005E8, "Wrong size on UWBP_GamepadSettings_CM_C");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_GamepadSettings_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Button_Secondary_ResetToDefault_CM) == 0x000518, "Member 'UWBP_GamepadSettings_CM_C::Button_Secondary_ResetToDefault_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Checkbox_CameraAssist) == 0x000520, "Member 'UWBP_GamepadSettings_CM_C::Checkbox_CameraAssist' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Checkbox_InvertControllerStick) == 0x000528, "Member 'UWBP_GamepadSettings_CM_C::Checkbox_InvertControllerStick' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Checkbox_InvertControllerXAxis) == 0x000530, "Member 'UWBP_GamepadSettings_CM_C::Checkbox_InvertControllerXAxis' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Checkbox_InvertControllerYAxis) == 0x000538, "Member 'UWBP_GamepadSettings_CM_C::Checkbox_InvertControllerYAxis' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, GridPanel_Gamepad) == 0x000540, "Member 'UWBP_GamepadSettings_CM_C::GridPanel_Gamepad' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Overlay_0) == 0x000548, "Member 'UWBP_GamepadSettings_CM_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, ScrollBox_GamepadSettings) == 0x000550, "Member 'UWBP_GamepadSettings_CM_C::ScrollBox_GamepadSettings' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Slider_AimSensitivity) == 0x000558, "Member 'UWBP_GamepadSettings_CM_C::Slider_AimSensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Slider_ControllerXSensitivity) == 0x000560, "Member 'UWBP_GamepadSettings_CM_C::Slider_ControllerXSensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Slider_ControllerYSensitivity) == 0x000568, "Member 'UWBP_GamepadSettings_CM_C::Slider_ControllerYSensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, Slider_VibrationIntensity) == 0x000570, "Member 'UWBP_GamepadSettings_CM_C::Slider_VibrationIntensity' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, TabSelector) == 0x000578, "Member 'UWBP_GamepadSettings_CM_C::TabSelector' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, WBP_KeyRebindingMenu_Gamepad) == 0x000580, "Member 'UWBP_GamepadSettings_CM_C::WBP_KeyRebindingMenu_Gamepad' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, WBP_Settings_DescriptionBox) == 0x000588, "Member 'UWBP_GamepadSettings_CM_C::WBP_Settings_DescriptionBox' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, WidgetSwitcher) == 0x000590, "Member 'UWBP_GamepadSettings_CM_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, LocaleComboBoxOptionsArray) == 0x000598, "Member 'UWBP_GamepadSettings_CM_C::LocaleComboBoxOptionsArray' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, bIsSynced) == 0x0005A8, "Member 'UWBP_GamepadSettings_CM_C::bIsSynced' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, ScrollMoveSpeed) == 0x0005B0, "Member 'UWBP_GamepadSettings_CM_C::ScrollMoveSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, CurrentFocusWidget) == 0x0005B8, "Member 'UWBP_GamepadSettings_CM_C::CurrentFocusWidget' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, ControllerAxisSensitivityModifier) == 0x0005C0, "Member 'UWBP_GamepadSettings_CM_C::ControllerAxisSensitivityModifier' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, OnPopupOpen) == 0x0005C8, "Member 'UWBP_GamepadSettings_CM_C::OnPopupOpen' has a wrong offset!");
static_assert(offsetof(UWBP_GamepadSettings_CM_C, OnPopupClose) == 0x0005D8, "Member 'UWBP_GamepadSettings_CM_C::OnPopupClose' has a wrong offset!");

}

