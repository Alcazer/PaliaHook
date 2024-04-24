#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cinematic_Overlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cinematic_Overlay.WBP_Cinematic_Overlay_C
// 0x0038 (0x0590 - 0x0558)
class UWBP_Cinematic_Overlay_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                TextBlock_Subtitles;                               // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* WBP_Template_Button_Secondary_01_CM;               // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCV_Cinematic_C*                        Cinematic;                                         // 0x0570(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Skip_UI_Visibility_Time;                           // 0x0578(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Skip_UI_Remaining_Visibility_Time;                 // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSkip;                                           // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Cinematic_Overlay(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_2_0, double Temp_real_Variable_3, bool Temp_bool_Variable_1, double Temp_real_Variable_3_0, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FInputActionValue& K2Node_CustomEvent_ActionValue, float K2Node_CustomEvent_ElapsedTime, float K2Node_CustomEvent_TriggeredTime, class UInputAction* K2Node_CustomEvent_InputAction, bool CallFunc_AreCheatsEnabled_Result, double CallFunc_Update_Skip_UI_Visibility_Delta_Time_ImplicitCast);
	void Handle_Input_Action_Cinematic_Skip_Triggered(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* InputAction, bool CallFunc_Is_Skip_UI_Visible_Is_Visible);
	void Hide_Skip_UI();
	void InpActEvt_IA_CinematicSkip_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_CinematicSkipUI_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void Is_Skip_UI_Visible(bool* Is_Visible, bool CallFunc_IsVisible_ReturnValue);
	void OpenSkipGate();
	void Show_Skip_UI();
	void Skip_UI_Triggered(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* InputAction);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Skip_UI_Visibility(double Delta_Time, bool CallFunc_Is_Skip_UI_Visible_Is_Visible, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cinematic_Overlay_C">();
	}
	static class UWBP_Cinematic_Overlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cinematic_Overlay_C>();
	}
};
static_assert(alignof(UWBP_Cinematic_Overlay_C) == 0x000008, "Wrong alignment on UWBP_Cinematic_Overlay_C");
static_assert(sizeof(UWBP_Cinematic_Overlay_C) == 0x000590, "Wrong size on UWBP_Cinematic_Overlay_C");
static_assert(offsetof(UWBP_Cinematic_Overlay_C, UberGraphFrame) == 0x000558, "Member 'UWBP_Cinematic_Overlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Cinematic_Overlay_C, TextBlock_Subtitles) == 0x000560, "Member 'UWBP_Cinematic_Overlay_C::TextBlock_Subtitles' has a wrong offset!");
static_assert(offsetof(UWBP_Cinematic_Overlay_C, WBP_Template_Button_Secondary_01_CM) == 0x000568, "Member 'UWBP_Cinematic_Overlay_C::WBP_Template_Button_Secondary_01_CM' has a wrong offset!");
static_assert(offsetof(UWBP_Cinematic_Overlay_C, Cinematic) == 0x000570, "Member 'UWBP_Cinematic_Overlay_C::Cinematic' has a wrong offset!");
static_assert(offsetof(UWBP_Cinematic_Overlay_C, Skip_UI_Visibility_Time) == 0x000578, "Member 'UWBP_Cinematic_Overlay_C::Skip_UI_Visibility_Time' has a wrong offset!");
static_assert(offsetof(UWBP_Cinematic_Overlay_C, Skip_UI_Remaining_Visibility_Time) == 0x000580, "Member 'UWBP_Cinematic_Overlay_C::Skip_UI_Remaining_Visibility_Time' has a wrong offset!");
static_assert(offsetof(UWBP_Cinematic_Overlay_C, CanSkip) == 0x000588, "Member 'UWBP_Cinematic_Overlay_C::CanSkip' has a wrong offset!");

}

