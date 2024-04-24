#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameplaySettings_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "UMG_structs.hpp"
#include "Palia_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameplaySettings_CM.WBP_GameplaySettings_CM_C
// 0x00E8 (0x05F8 - 0x0510)
class UWBP_GameplaySettings_CM_C final  : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Secondary_01_CM_C* Button_Secondary_ResetToDefault_CM;                // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_AllowCameraShake_CM;                      // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_EnableActionBarWrapping_CM;               // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_EnableCinematicCookingCamera_CM;          // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_EnableEatingWhenFull_CM;                  // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_EnableReticle_CM;                         // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_EnableWorldMapGrid_CM;                    // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_HideChatTimestamp_CM;                     // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_ShowServerPing_CM;                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_BagRows_CM;                               // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_Language_CM;                              // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_SprintSetting_CM;                         // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_StreamerMode_CM;                          // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       CommonActivatableWidgetSwitcher_29;                // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Gameplay;                                // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbar_Gameplay;                                // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_FishingCastSpeed;                           // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_Gamma_CM;                                   // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_ButtonTab_Secondary_02_CM_C* TabSelector_CM;                                    // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FTUESettings_CM_C*                 WBP_FTUESettings_CM;                               // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_DescriptionBox_C*         WBP_Settings_DescriptionBox;                       // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         LocaleComboBoxOptionsArray;                        // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsSynced;                                         // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5431[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ScrollMoveSpeed;                                   // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SettingsItem_Parent_DoNotEdit_C*   CurrentFocusWidget;                                // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CVar_CookingCameraEnabled;                         // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_GameplaySettings_CM_Button_Secondary_ResetToDefault_CM_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_GameplaySettings_CM_Checkbox_AllowCameraShake_CM_K2Node_ComponentBoundEvent_11_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GameplaySettings_CM_Checkbox_EnableActionBarWrapping_CM_K2Node_ComponentBoundEvent_18_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GameplaySettings_CM_Checkbox_EnableCinematicCookingCamera_CM_K2Node_ComponentBoundEvent_2_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GameplaySettings_CM_Checkbox_EnableEatingWhenFull_CM_K2Node_ComponentBoundEvent_17_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GameplaySettings_CM_Checkbox_EnableReticle_CM_K2Node_ComponentBoundEvent_13_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GameplaySettings_CM_Checkbox_EnableWorldMapGrid_CM_K2Node_ComponentBoundEvent_4_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GameplaySettings_CM_Checkbox_HideChatTimestamp_CM_K2Node_ComponentBoundEvent_14_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GameplaySettings_CM_Checkbox_ShowServerPing_CM_K2Node_ComponentBoundEvent_19_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_GameplaySettings_CM_ComboBox_BagRows_CM_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(int32 Param_Index, class FText Text);
	void BndEvt__WBP_GameplaySettings_CM_ComboBox_Language_CM_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature(int32 Param_Index, class FText Text);
	void BndEvt__WBP_GameplaySettings_CM_ComboBox_SprintSetting_CM_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature(int32 Param_Index, class FText Text);
	void BndEvt__WBP_GameplaySettings_CM_ComboBox_StreamerMode_CM_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature(int32 Param_Index, class FText Text);
	void BndEvt__WBP_GameplaySettings_CM_Slider_FishingCastSpeed_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_GameplaySettings_CM_Slider_Gamma_CM_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_GameplaySettings_CM_TabSelector_CM_K2Node_ComponentBoundEvent_9_On_Tab_Selection_Changed__DelegateSignature(int32 Tab_Selection);
	void BP_OnActivated();
	void Construct();
	void Display_GamePad_Icon(bool IsShowIcon);
	void ExecuteUbergraph_WBP_GameplaySettings_CM(int32 EntryPoint, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText K2Node_CustomEvent_Name, class FText K2Node_CustomEvent_Description, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, double Temp_real_Variable, double Temp_real_Variable_1, class UInputAction* Temp_object_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double Temp_real_Variable_1_0, double Temp_real_Variable_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_2, int32 K2Node_ComponentBoundEvent_Tab_Selection, bool K2Node_ComponentBoundEvent_Checked_7, int32 K2Node_ComponentBoundEvent_Index_3, class FText K2Node_ComponentBoundEvent_Text_3, bool K2Node_ComponentBoundEvent_Checked_6, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_ComponentBoundEvent_Checked_5, int32 K2Node_ComponentBoundEvent_Index_2, class FText K2Node_ComponentBoundEvent_Text_2, int32 K2Node_ComponentBoundEvent_Index_1, class FText K2Node_ComponentBoundEvent_Text_1, bool K2Node_ComponentBoundEvent_Checked_4, bool K2Node_ComponentBoundEvent_Checked_3, bool K2Node_ComponentBoundEvent_Checked_2, int32 K2Node_ComponentBoundEvent_Index, class FText K2Node_ComponentBoundEvent_Text, bool K2Node_SwitchInteger_CmpSuccess, class UWBP_SettingsItem_Parent_DoNotEdit_C* CallFunc_Get_Focus_Widget_SettingsItem, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWBP_SettingsItem_Parent_DoNotEdit_C* CallFunc_Get_Focus_Widget_SettingsItem_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_3, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_4, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_5, bool Temp_bool_Variable_2, double Temp_real_Variable_2, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_6, double Temp_real_Variable_3, class UInputAction* Temp_object_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate, double Temp_real_Variable_3_0, double Temp_real_Variable_2_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class FText Name, class FText Description)> K2Node_CreateDelegate_OutputDelegate_2, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_7, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ESprintType Temp_byte_Variable_2, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_8, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_9, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, class UWBP_SettingsItem_Parent_DoNotEdit_C* K2Node_DynamicCast_AsWBP_Settings_Item_Parent_Do_Not_Edit, bool K2Node_DynamicCast_bSuccess, bool K2Node_ComponentBoundEvent_Checked_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_10, ESprintType Temp_byte_Variable_3, double K2Node_ComponentBoundEvent_Value_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_11, ESprintType Temp_byte_Variable_4, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool K2Node_ComponentBoundEvent_Checked, ESlateVisibility K2Node_Select_Default, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_12, int32 Temp_int_Variable, double K2Node_ComponentBoundEvent_Value, double CallFunc_MapRangeClamped_ReturnValue, ESprintType K2Node_Select_Default_1, float CallFunc_SetFishingCastSpeed_InFishingCastSpeed_ImplicitCast, float CallFunc_SetGamma_value_ImplicitCast);
	void GamePlayResetForceClick();
	void Get_Focus_Widget(class UWBP_SettingsItem_Parent_DoNotEdit_C** SettingsItem, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_SettingsItem_Parent_DoNotEdit_C* K2Node_DynamicCast_AsWBP_Settings_Item_Parent_Do_Not_Edit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue);
	void HandleSettingsItemHovered(class FText Param_Name, class FText Description);
	void HandleSettingsItemUnhovered();
	void InpActEvt_IA_UI_SecondaryTab_Switch_L_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void PopulateLocaleComboBox(const TArray<class FText>& LocaleNames, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLocale_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetCultureDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FString>& CallFunc_GetLocalizedCultures_ReturnValue);
	void ResetSettings(int32 CallFunc_AkEventGlobal_ReturnValue, class FString& Temp_string_Variable, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue);
	void Save_Current_Focus_Widget(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_SettingsItem_Parent_DoNotEdit_C* K2Node_DynamicCast_AsWBP_Settings_Item_Parent_Do_Not_Edit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasKeyboardFocus_ReturnValue);
	void Set_Select_Item__Focus();
	void SynchronizeGameplaySettings(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GetShowCookingCamera_ReturnValue, double CallFunc_SetSliderValue_SliderValue_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast);
	void SynchronizeInputSettings();
	void SynchronizeState(const class FString& CallFunc_GetCurrentCulture_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void TryShowCheatSettings(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_AreCheatsEnabled_Result, ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameplaySettings_CM_C">();
	}
	static class UWBP_GameplaySettings_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameplaySettings_CM_C>();
	}
};
static_assert(alignof(UWBP_GameplaySettings_CM_C) == 0x000008, "Wrong alignment on UWBP_GameplaySettings_CM_C");
static_assert(sizeof(UWBP_GameplaySettings_CM_C) == 0x0005F8, "Wrong size on UWBP_GameplaySettings_CM_C");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_GameplaySettings_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Button_Secondary_ResetToDefault_CM) == 0x000518, "Member 'UWBP_GameplaySettings_CM_C::Button_Secondary_ResetToDefault_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Checkbox_AllowCameraShake_CM) == 0x000520, "Member 'UWBP_GameplaySettings_CM_C::Checkbox_AllowCameraShake_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Checkbox_EnableActionBarWrapping_CM) == 0x000528, "Member 'UWBP_GameplaySettings_CM_C::Checkbox_EnableActionBarWrapping_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Checkbox_EnableCinematicCookingCamera_CM) == 0x000530, "Member 'UWBP_GameplaySettings_CM_C::Checkbox_EnableCinematicCookingCamera_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Checkbox_EnableEatingWhenFull_CM) == 0x000538, "Member 'UWBP_GameplaySettings_CM_C::Checkbox_EnableEatingWhenFull_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Checkbox_EnableReticle_CM) == 0x000540, "Member 'UWBP_GameplaySettings_CM_C::Checkbox_EnableReticle_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Checkbox_EnableWorldMapGrid_CM) == 0x000548, "Member 'UWBP_GameplaySettings_CM_C::Checkbox_EnableWorldMapGrid_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Checkbox_HideChatTimestamp_CM) == 0x000550, "Member 'UWBP_GameplaySettings_CM_C::Checkbox_HideChatTimestamp_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Checkbox_ShowServerPing_CM) == 0x000558, "Member 'UWBP_GameplaySettings_CM_C::Checkbox_ShowServerPing_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, ComboBox_BagRows_CM) == 0x000560, "Member 'UWBP_GameplaySettings_CM_C::ComboBox_BagRows_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, ComboBox_Language_CM) == 0x000568, "Member 'UWBP_GameplaySettings_CM_C::ComboBox_Language_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, ComboBox_SprintSetting_CM) == 0x000570, "Member 'UWBP_GameplaySettings_CM_C::ComboBox_SprintSetting_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, ComboBox_StreamerMode_CM) == 0x000578, "Member 'UWBP_GameplaySettings_CM_C::ComboBox_StreamerMode_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, CommonActivatableWidgetSwitcher_29) == 0x000580, "Member 'UWBP_GameplaySettings_CM_C::CommonActivatableWidgetSwitcher_29' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, GridPanel_Gameplay) == 0x000588, "Member 'UWBP_GameplaySettings_CM_C::GridPanel_Gameplay' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Scrollbar_Gameplay) == 0x000590, "Member 'UWBP_GameplaySettings_CM_C::Scrollbar_Gameplay' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Slider_FishingCastSpeed) == 0x000598, "Member 'UWBP_GameplaySettings_CM_C::Slider_FishingCastSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, Slider_Gamma_CM) == 0x0005A0, "Member 'UWBP_GameplaySettings_CM_C::Slider_Gamma_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, TabSelector_CM) == 0x0005A8, "Member 'UWBP_GameplaySettings_CM_C::TabSelector_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, WBP_FTUESettings_CM) == 0x0005B0, "Member 'UWBP_GameplaySettings_CM_C::WBP_FTUESettings_CM' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, WBP_Settings_DescriptionBox) == 0x0005B8, "Member 'UWBP_GameplaySettings_CM_C::WBP_Settings_DescriptionBox' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, LocaleComboBoxOptionsArray) == 0x0005C0, "Member 'UWBP_GameplaySettings_CM_C::LocaleComboBoxOptionsArray' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, bIsSynced) == 0x0005D0, "Member 'UWBP_GameplaySettings_CM_C::bIsSynced' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, ScrollMoveSpeed) == 0x0005D8, "Member 'UWBP_GameplaySettings_CM_C::ScrollMoveSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, CurrentFocusWidget) == 0x0005E0, "Member 'UWBP_GameplaySettings_CM_C::CurrentFocusWidget' has a wrong offset!");
static_assert(offsetof(UWBP_GameplaySettings_CM_C, CVar_CookingCameraEnabled) == 0x0005E8, "Member 'UWBP_GameplaySettings_CM_C::CVar_CookingCameraEnabled' has a wrong offset!");

}

