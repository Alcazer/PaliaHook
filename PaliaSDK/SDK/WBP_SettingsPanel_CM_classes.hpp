#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SettingsPanel_CM

#include "Basic.hpp"

#include "E_CloseKeyRebindMenuType_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SettingsPanel_CM.WBP_SettingsPanel_CM_C
// 0x0088 (0x0598 - 0x0510)
class UWBP_SettingsPanel_CM_C final  : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                    CommonActionWidget_LB;                             // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_RB;                             // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       SwitcherSettings;                                  // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TabHost_Template_Large_CM_C*       TabHost;                                           // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Audio_Settings_CM_C*               WBP_Audio_Settings_CM;                             // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadSettings_CM_C*              WBP_GamepadSettings_CM;                            // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameplaySettings_CM_C*             WBP_GameplaySettings_CM;                           // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Graphics_Settings_CM_C*            WBP_Graphics_Settings_CM;                          // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyboardSettings_CM_C*             WBP_KeyboardSettings_CM;                           // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_PopupMain_02_C*           WBP_Template_PopupMain_02;                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnExitButtonClicked;                               // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPopupOpen;                                       // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPopupClose;                                      // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_SettingsPanel_CM_WBP_Template_PopupMain_02_K2Node_ComponentBoundEvent_1_CloseButton_OnClicked__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_TabHost_K2Node_ComponentBoundEvent_2_OnDifferentActiveTabSet__DelegateSignature(class UVALUI_TabButtonHostBase* TabButtonHost);
	bool BP_OnHandleBackAction();
	void Construct();
	void Deactivate_Self();
	void ExecutePrePopupAction(E_CloseKeyRebindMenuType PrePopupAction);
	void ExecuteUbergraph_WBP_SettingsPanel_CM(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, class UWBP_GraphicsSettings_UnappliedChangesWindow_CM_C* CallFunc_Create_ReturnValue, class UWBP_GraphicsSettings_RestartWindow_CM_C* CallFunc_Create_ReturnValue_1, class UVALUI_TabButtonHostBase* K2Node_ComponentBoundEvent_TabButtonHost, int32 CallFunc_AkEventGlobal_ReturnValue, class FName CallFunc_GetActiveTabName_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FVALUI_InstantiatedTabButtonInfo& CallFunc_TryGetTabInfo_OutInfo, bool CallFunc_TryGetTabInfo_ReturnValue, class FName CallFunc_GetActiveTabName_ReturnValue_1, const struct FVALUI_InstantiatedTabButtonInfo& CallFunc_TryGetTabInfo_OutInfo_1, bool CallFunc_TryGetTabInfo_ReturnValue_1, class UCommonActivatableWidgetInputExtended* K2Node_DynamicCast_AsCommon_Activatable_Widget_Input_Extended, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_KeyRebindInterface_C> K2Node_Event_OwnerWidget, E_CloseKeyRebindMenuType K2Node_Event_PrePopupAction_1, const struct FKeyRebind_DisplayResult& K2Node_Event_KeyRebindResultInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_HasUnappliedWindowChanges_Value, double Temp_real_Variable_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_IsRestartSuggested_Value, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, double Temp_real_Variable_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, class UInputAction* Temp_object_Variable_1, bool CallFunc_GetNextTabName_ReturnValue, class FName CallFunc_GetNextTabName_Output, bool CallFunc_GetNextTabName_ReturnValue_1, class FName CallFunc_GetNextTabName_Output_1, E_CloseKeyRebindMenuType K2Node_Event_PrePopupAction, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double Temp_real_Variable_3_0, double Temp_real_Variable_2_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6);
	bool GetNextTabName(bool Condition, class FName* Output, int32 NextIndex, TArray<class FName>& CallFunc_GetTabNames_ReturnValue, class FName CallFunc_Array_Get_Item, class FName CallFunc_GetActiveTabName_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Handing_Input_Action_Switch_Tab(bool bLeftSwitch, bool CallFunc_GetNextTabName_ReturnValue, class FName CallFunc_GetNextTabName_Output, bool CallFunc_TrySetActiveTabName_ReturnValue);
	void HasUnappliedWindowChanges(bool* Value, bool CallFunc_HasUnappliedWindowChanges_Value);
	void InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void IsRestartSuggested(bool* Value, bool CallFunc_IsRestartSuggested_Value);
	void OnCancel();
	void OnConfirm__WBP_Graphic_Settings_Restart_();
	void OnConfirm__WBP_Graphic_Settings_Unapplied_();
	void OnExitButtonClicked__DelegateSignature();
	void OnPopupClose__DelegateSignature();
	void OnPopupClose_Event();
	void OnPopupOpen__DelegateSignature();
	void OnPopupOpen_Event();
	void PreConstruct(bool IsDesignTime);
	void PreswitchCheckforKeyRebindMenu(E_CloseKeyRebindMenuType ExcuteStatus, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_KeyRebindInterface_C> K2Node_DynamicCast_AsBPI_Key_Rebind_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_KeyRebindInterface_C> CallFunc_ToggleButtonCheckPopup_OwnerWidget_CastInput);
	void RefreshKeyRebindTips(const struct FKeyRebind_DisplayResult& KeyRebindResultInfo);
	void ResetRestartSuggestion();
	void ToggleButtonCheckPopup(TScriptInterface<class IBPI_KeyRebindInterface_C> OwnerWidget, E_CloseKeyRebindMenuType PrePopupAction);

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SettingsPanel_CM_C">();
	}
	static class UWBP_SettingsPanel_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SettingsPanel_CM_C>();
	}
};
static_assert(alignof(UWBP_SettingsPanel_CM_C) == 0x000008, "Wrong alignment on UWBP_SettingsPanel_CM_C");
static_assert(sizeof(UWBP_SettingsPanel_CM_C) == 0x000598, "Wrong size on UWBP_SettingsPanel_CM_C");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_SettingsPanel_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, CommonActionWidget_LB) == 0x000518, "Member 'UWBP_SettingsPanel_CM_C::CommonActionWidget_LB' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, CommonActionWidget_RB) == 0x000520, "Member 'UWBP_SettingsPanel_CM_C::CommonActionWidget_RB' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, SwitcherSettings) == 0x000528, "Member 'UWBP_SettingsPanel_CM_C::SwitcherSettings' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, TabHost) == 0x000530, "Member 'UWBP_SettingsPanel_CM_C::TabHost' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, WBP_Audio_Settings_CM) == 0x000538, "Member 'UWBP_SettingsPanel_CM_C::WBP_Audio_Settings_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, WBP_GamepadSettings_CM) == 0x000540, "Member 'UWBP_SettingsPanel_CM_C::WBP_GamepadSettings_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, WBP_GameplaySettings_CM) == 0x000548, "Member 'UWBP_SettingsPanel_CM_C::WBP_GameplaySettings_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, WBP_Graphics_Settings_CM) == 0x000550, "Member 'UWBP_SettingsPanel_CM_C::WBP_Graphics_Settings_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, WBP_KeyboardSettings_CM) == 0x000558, "Member 'UWBP_SettingsPanel_CM_C::WBP_KeyboardSettings_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, WBP_Template_PopupMain_02) == 0x000560, "Member 'UWBP_SettingsPanel_CM_C::WBP_Template_PopupMain_02' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, OnExitButtonClicked) == 0x000568, "Member 'UWBP_SettingsPanel_CM_C::OnExitButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, OnPopupOpen) == 0x000578, "Member 'UWBP_SettingsPanel_CM_C::OnPopupOpen' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_CM_C, OnPopupClose) == 0x000588, "Member 'UWBP_SettingsPanel_CM_C::OnPopupClose' has a wrong offset!");

}

