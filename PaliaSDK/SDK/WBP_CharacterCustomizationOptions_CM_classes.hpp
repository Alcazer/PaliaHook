#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterCustomizationOptions_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterCustomizationOptions_CM.WBP_CharacterCustomizationOptions_CM_C
// 0x0058 (0x0538 - 0x04E0)
class UWBP_CharacterCustomizationOptions_CM_C final  : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_PrImary_ContinueCustomization;              // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Icon_CM_C*                  Button_Randomize;                                  // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteBar_CM_C*                     EmoteBar;                                          // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Randomize;                                 // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEmoteBarClicked;                                 // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRandomizeButtonClicked;                          // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnContinueButtonClicked;                           // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_CharacterCreationPanel_CM_Button_PrImary_ContinueCustomization_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_CharacterCreationPanel_CM_Button_Randomize_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CharacterCreationPanel_CM_EmoteBar_K2Node_ComponentBoundEvent_3_OnEmoteContainerButtonClicked__DelegateSignature(class UVALUI_EmoteButtonContainer* Container, class UVALUI_EmoteButton* ButtonClicked, class UEmoteDataAsset* EmoteDataAsset);
	void ExecuteUbergraph_WBP_CharacterCustomizationOptions_CM(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_2_0, double Temp_real_Variable_3, bool Temp_bool_Variable_1, double Temp_real_Variable_3_0, class UVALUI_EmoteButtonContainer* K2Node_ComponentBoundEvent_Container, class UVALUI_EmoteButton* K2Node_ComponentBoundEvent_ButtonClicked, class UEmoteDataAsset* K2Node_ComponentBoundEvent_EmoteDataAsset, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void InpActEvt_IA_UI_CharacterCreation_Continue_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_RandomCharacter_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnContinueButtonClicked__DelegateSignature();
	void OnEmoteBarClicked__DelegateSignature(class UVALUI_EmoteButtonContainer* Container, class UVALUI_EmoteButton* ButtonClicked, class UEmoteDataAsset* EmoteDataAsset);
	void OnRandomizeButtonClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterCustomizationOptions_CM_C">();
	}
	static class UWBP_CharacterCustomizationOptions_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterCustomizationOptions_CM_C>();
	}
};
static_assert(alignof(UWBP_CharacterCustomizationOptions_CM_C) == 0x000008, "Wrong alignment on UWBP_CharacterCustomizationOptions_CM_C");
static_assert(sizeof(UWBP_CharacterCustomizationOptions_CM_C) == 0x000538, "Wrong size on UWBP_CharacterCustomizationOptions_CM_C");
static_assert(offsetof(UWBP_CharacterCustomizationOptions_CM_C, UberGraphFrame) == 0x0004E0, "Member 'UWBP_CharacterCustomizationOptions_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomizationOptions_CM_C, Button_PrImary_ContinueCustomization) == 0x0004E8, "Member 'UWBP_CharacterCustomizationOptions_CM_C::Button_PrImary_ContinueCustomization' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomizationOptions_CM_C, Button_Randomize) == 0x0004F0, "Member 'UWBP_CharacterCustomizationOptions_CM_C::Button_Randomize' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomizationOptions_CM_C, EmoteBar) == 0x0004F8, "Member 'UWBP_CharacterCustomizationOptions_CM_C::EmoteBar' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomizationOptions_CM_C, Overlay_Randomize) == 0x000500, "Member 'UWBP_CharacterCustomizationOptions_CM_C::Overlay_Randomize' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomizationOptions_CM_C, OnEmoteBarClicked) == 0x000508, "Member 'UWBP_CharacterCustomizationOptions_CM_C::OnEmoteBarClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomizationOptions_CM_C, OnRandomizeButtonClicked) == 0x000518, "Member 'UWBP_CharacterCustomizationOptions_CM_C::OnRandomizeButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomizationOptions_CM_C, OnContinueButtonClicked) == 0x000528, "Member 'UWBP_CharacterCustomizationOptions_CM_C::OnContinueButtonClicked' has a wrong offset!");

}

