#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterCustomization_BodyPanel_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterCustomization_BodyPanel_CM.WBP_CharacterCustomization_BodyPanel_CM_C
// 0x0070 (0x02E8 - 0x0278)
class UWBP_CharacterCustomization_BodyPanel_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Checkmark_CM_C*                    Checkmark_SnapToBinary_CM;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RadioSlider_Template_01_CM_C*      RadioSlider_Gender_CM;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USynth2DSlider*                         Slider_BodyExpression;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Slider_CM_C*                       Slider_Gender_CM;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Gender;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnThicknessChanged;                                // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMuscularExpressionChanged;                       // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnGenderExpressionChanged;                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBodyExpressionChanged;                           // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_CharacterCustomization_BodyPanel_CM_Checkmark_SnapToBinary_CM_K2Node_ComponentBoundEvent_5_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_CharacterCustomization_BodyPanel_CM_RadioSlider_Gender_CM_K2Node_ComponentBoundEvent_7_OnSliderMoved__DelegateSignature(class UUserWidget* ElementWidget, const struct FBP_RadioSliderPregisteredElement& ElementData);
	void BndEvt__WBP_CharacterCustomization_BodyPanel_CM_Slider_Gender_CM_K2Node_ComponentBoundEvent_6_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_CharacterCustomization_BodyPanel_Slider_ThicknessGenderExpression_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__WBP_CharacterCustomization_BodyPanel_Slider_ThicknessGenderExpression_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void ExecuteUbergraph_WBP_CharacterCustomization_BodyPanel_CM(int32 EntryPoint, class UUserWidget* K2Node_ComponentBoundEvent_ElementWidget, const struct FBP_RadioSliderPregisteredElement& K2Node_ComponentBoundEvent_ElementData, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_GetValue_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, bool K2Node_ComponentBoundEvent_Checked, double K2Node_ComponentBoundEvent_Value, class UWidget* K2Node_Select_Default);
	void OnBodyExpressionChanged__DelegateSignature(const struct FVector2D& BodyExpression);
	void OnGenderExpressionChanged__DelegateSignature(double Value);
	void OnMuscularExpressionChanged__DelegateSignature(double Value);
	void OnThicknessChanged__DelegateSignature(double Value);
	void PreConstruct(bool IsDesignTime);
	void SetBodyExpression(const struct FVector2D& BodyExpression);
	void SetGenderExpression(double Scalar);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterCustomization_BodyPanel_CM_C">();
	}
	static class UWBP_CharacterCustomization_BodyPanel_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterCustomization_BodyPanel_CM_C>();
	}
};
static_assert(alignof(UWBP_CharacterCustomization_BodyPanel_CM_C) == 0x000008, "Wrong alignment on UWBP_CharacterCustomization_BodyPanel_CM_C");
static_assert(sizeof(UWBP_CharacterCustomization_BodyPanel_CM_C) == 0x0002E8, "Wrong size on UWBP_CharacterCustomization_BodyPanel_CM_C");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, Checkmark_SnapToBinary_CM) == 0x000280, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::Checkmark_SnapToBinary_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, RadioSlider_Gender_CM) == 0x000288, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::RadioSlider_Gender_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, Slider_BodyExpression) == 0x000290, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::Slider_BodyExpression' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, Slider_Gender_CM) == 0x000298, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::Slider_Gender_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, WidgetSwitcher_Gender) == 0x0002A0, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::WidgetSwitcher_Gender' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, OnThicknessChanged) == 0x0002A8, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::OnThicknessChanged' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, OnMuscularExpressionChanged) == 0x0002B8, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::OnMuscularExpressionChanged' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, OnGenderExpressionChanged) == 0x0002C8, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::OnGenderExpressionChanged' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_BodyPanel_CM_C, OnBodyExpressionChanged) == 0x0002D8, "Member 'UWBP_CharacterCustomization_BodyPanel_CM_C::OnBodyExpressionChanged' has a wrong offset!");

}

