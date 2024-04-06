#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigame_Sauteing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_MinigameQTE_Base_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Minigame_Sauteing.WBP_Cooking_Minigame_Sauteing_C
// 0x00C8 (0x03D8 - 0x0310)
class UWBP_Cooking_Minigame_Sauteing_C final  : public UWBP_MinigameQTE_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Cooking_Minigame_Sauteing_C;    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowSuccess;                                       // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowPrompts;                                       // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ButtonReleasedSuccess;                             // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ButtonPressed;                                     // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ButtonReleasedPenalty;                             // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   FailPrompt;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_238;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Marker;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Pan;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SuccessBackground;                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Target;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Target_2;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Marker;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Target;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayState_Active;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayState_Error;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayState_Normal;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   SuccessBorder;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessProgress;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessText1;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_PlayState;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BeatCount;                                         // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WasButtonHeld;                                     // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsPaused_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsButtonHeld_ReturnValue, class UWidget* K2Node_Select_Default, float CallFunc_GetTargetPosition_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_NormalizeDegrees_ReturnValue, bool CallFunc_IsButtonHeld_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_NormalizeDegrees_degrees_ImplicitCast);
	void ExpectedInputMissed(class UMinigameComponentMasterQTE* Comp);
	void MinigameOnStateChanged(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState, int32 CallFunc_AkEventGlobal_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void MistimedInputReceived(class UMinigameComponentMasterQTE* Comp, int32 CallFunc_AkEventGlobal_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void OnMinigameLinked();
	void OnStartMinigame();
	void SetCursorPosition(float CallFunc_GetTargetPosition_ReturnValue, float CallFunc_GetCursorPosition_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, float CallFunc_GetCursorPosition_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_NormalizeDegrees_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_NormalizeDegrees_degrees_ImplicitCast);
	void SuccessfulInputReceived(class UMinigameComponentMasterQTE* Comp, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Minigame_Sauteing_C">();
	}
	static class UWBP_Cooking_Minigame_Sauteing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Minigame_Sauteing_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Minigame_Sauteing_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Minigame_Sauteing_C");
static_assert(sizeof(UWBP_Cooking_Minigame_Sauteing_C) == 0x0003D8, "Wrong size on UWBP_Cooking_Minigame_Sauteing_C");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, UberGraphFrame_WBP_Cooking_Minigame_Sauteing_C) == 0x000310, "Member 'UWBP_Cooking_Minigame_Sauteing_C::UberGraphFrame_WBP_Cooking_Minigame_Sauteing_C' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, ShowSuccess) == 0x000318, "Member 'UWBP_Cooking_Minigame_Sauteing_C::ShowSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, ShowPrompts) == 0x000320, "Member 'UWBP_Cooking_Minigame_Sauteing_C::ShowPrompts' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, ButtonReleasedSuccess) == 0x000328, "Member 'UWBP_Cooking_Minigame_Sauteing_C::ButtonReleasedSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, ButtonPressed) == 0x000330, "Member 'UWBP_Cooking_Minigame_Sauteing_C::ButtonPressed' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, ButtonReleasedPenalty) == 0x000338, "Member 'UWBP_Cooking_Minigame_Sauteing_C::ButtonReleasedPenalty' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, FailPrompt) == 0x000340, "Member 'UWBP_Cooking_Minigame_Sauteing_C::FailPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Image) == 0x000348, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Image_238) == 0x000350, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Image_238' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Image_Background) == 0x000358, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Image_Marker) == 0x000360, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Image_Marker' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Image_Pan) == 0x000368, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Image_Pan' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Image_SuccessBackground) == 0x000370, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Image_SuccessBackground' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Image_Target) == 0x000378, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Image_Target' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Image_Target_2) == 0x000380, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Image_Target_2' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Overlay_Marker) == 0x000388, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Overlay_Marker' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, Overlay_Target) == 0x000390, "Member 'UWBP_Cooking_Minigame_Sauteing_C::Overlay_Target' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, PlayState_Active) == 0x000398, "Member 'UWBP_Cooking_Minigame_Sauteing_C::PlayState_Active' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, PlayState_Error) == 0x0003A0, "Member 'UWBP_Cooking_Minigame_Sauteing_C::PlayState_Error' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, PlayState_Normal) == 0x0003A8, "Member 'UWBP_Cooking_Minigame_Sauteing_C::PlayState_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, SuccessBorder) == 0x0003B0, "Member 'UWBP_Cooking_Minigame_Sauteing_C::SuccessBorder' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, SuccessProgress) == 0x0003B8, "Member 'UWBP_Cooking_Minigame_Sauteing_C::SuccessProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, SuccessText1) == 0x0003C0, "Member 'UWBP_Cooking_Minigame_Sauteing_C::SuccessText1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, WidgetSwitcher_PlayState) == 0x0003C8, "Member 'UWBP_Cooking_Minigame_Sauteing_C::WidgetSwitcher_PlayState' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, BeatCount) == 0x0003D0, "Member 'UWBP_Cooking_Minigame_Sauteing_C::BeatCount' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Sauteing_C, WasButtonHeld) == 0x0003D4, "Member 'UWBP_Cooking_Minigame_Sauteing_C::WasButtonHeld' has a wrong offset!");

}

