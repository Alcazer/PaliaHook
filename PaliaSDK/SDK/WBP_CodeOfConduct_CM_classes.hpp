#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CodeOfConduct_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CodeOfConduct_CM.WBP_CodeOfConduct_CM_C
// 0x0060 (0x05B8 - 0x0558)
class UWBP_CodeOfConduct_CM_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_Primary_Agree_CM;                           // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_74;                                  // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_43;                                          // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_144;                                         // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InputAction;                                       // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class WBP_TextButton_CM_0::UWBP_TextButton_CM_C* TextButton_Palia;                                  // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TopBacker_02_C*                    TopBacker_VillageValues;                           // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAgreeButtonClicked;                              // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_CodeOfConduct_CM_Button_Primary_Agree_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_CodeOfConduct_CM_TextButton_Palia_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_CodeOfConduct_CM(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsDesktop_ReturnValue, bool CallFunc_IsDesktop_ReturnValue_1, bool CallFunc_IsConsole_ReturnValue);
	void InpActEvt_IA_UI_SecondaryAction_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnAgreeButtonClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CodeOfConduct_CM_C">();
	}
	static class UWBP_CodeOfConduct_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CodeOfConduct_CM_C>();
	}
};
static_assert(alignof(UWBP_CodeOfConduct_CM_C) == 0x000008, "Wrong alignment on UWBP_CodeOfConduct_CM_C");
static_assert(sizeof(UWBP_CodeOfConduct_CM_C) == 0x0005B8, "Wrong size on UWBP_CodeOfConduct_CM_C");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, UberGraphFrame) == 0x000558, "Member 'UWBP_CodeOfConduct_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, Button_Primary_Agree_CM) == 0x000560, "Member 'UWBP_CodeOfConduct_CM_C::Button_Primary_Agree_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, HorizontalBox_74) == 0x000568, "Member 'UWBP_CodeOfConduct_CM_C::HorizontalBox_74' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, Image) == 0x000570, "Member 'UWBP_CodeOfConduct_CM_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, Image_1) == 0x000578, "Member 'UWBP_CodeOfConduct_CM_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, Image_43) == 0x000580, "Member 'UWBP_CodeOfConduct_CM_C::Image_43' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, Image_144) == 0x000588, "Member 'UWBP_CodeOfConduct_CM_C::Image_144' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, InputAction) == 0x000590, "Member 'UWBP_CodeOfConduct_CM_C::InputAction' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, TextButton_Palia) == 0x000598, "Member 'UWBP_CodeOfConduct_CM_C::TextButton_Palia' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, TopBacker_VillageValues) == 0x0005A0, "Member 'UWBP_CodeOfConduct_CM_C::TopBacker_VillageValues' has a wrong offset!");
static_assert(offsetof(UWBP_CodeOfConduct_CM_C, OnAgreeButtonClicked) == 0x0005A8, "Member 'UWBP_CodeOfConduct_CM_C::OnAgreeButtonClicked' has a wrong offset!");

}

