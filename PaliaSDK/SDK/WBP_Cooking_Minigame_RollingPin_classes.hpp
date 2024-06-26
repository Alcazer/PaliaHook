#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigame_RollingPin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_MinigameQTE_Base_classes.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Minigame_RollingPin.WBP_Cooking_Minigame_RollingPin_C
// 0x0148 (0x0490 - 0x0348)
class UWBP_Cooking_Minigame_RollingPin_C final  : public UWBP_MinigameQTE_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Cooking_Minigame_RollingPin_C;  // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Countdown;                                         // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowSuccess;                                       // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CrossFadeText;                                     // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ButtonPromptVisibility;                            // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SuccessfulHit_RollingAnim;                         // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MistakeMade;                                       // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               BackgroundRoot;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BorderStyled;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BorderStyledMistake;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ButtonPrompt;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CountdownImage_1;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CountdownImage_2;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CountdownImage_3;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CountdownPrompt;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   FailPrompt;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_RollingPin_Marker_C* FTUE_Marker;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               GameRoot;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_238;                                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_KnifeBackground;                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InputRoot;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_RollingPin_Marker_C* Moving_Marker;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Moving;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly;                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_1;                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_2;                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_3;                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_4;                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_5;                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ProgressTicks;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RollingPinVisual;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Marker;                                   // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   SuccessBorder;                                     // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessProgress;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessText1;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessText1_1;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessText2;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_RollingPin_GoalPost_C* Target_Bottom;                                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_RollingPin_GoalPost_C* Target_Top;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Text1Active;                                       // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AudioCountdownOne();
	void AudioCountdownStart();
	void AudioCountdownThree();
	void AudioCountdownTwo();
	void ExecuteUbergraph_WBP_Cooking_Minigame_RollingPin(int32 EntryPoint, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPaused_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_2, int32 CallFunc_AkEventGlobal_ReturnValue_3, int32 CallFunc_AkEventGlobal_ReturnValue_4, bool CallFunc_IsPaused_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2);
	void ExpectedInputMissed(class UMinigameComponentMasterQTE* Comp);
	void Finished_B712F27846FAAEC4729CC9B822E91BCA();
	void GetClosestGoalPost(class UWBP_Cooking_Minigame_RollingPin_GoalPost_C** Marker, bool Temp_bool_Variable, double CallFunc_GetMarkerTravelRange_Range, double CallFunc_GetMarkerPosition_Position, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UWBP_Cooking_Minigame_RollingPin_GoalPost_C* K2Node_Select_Default);
	void GetMarkerPosition(double* Position, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, double K2Node_FunctionResult_Position_ImplicitCast);
	void GetMarkerTravelRange(double* Range, struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y);
	void GetMarkerWidth(double* Width, struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y);
	void MinigameOnStateChanged(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void MistimedInputReceived(class UMinigameComponentMasterQTE* Comp, class UWBP_Cooking_Minigame_RollingPin_GoalPost_C* CallFunc_GetClosestGoalPost_Marker, int32 CallFunc_AkEventGlobal_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void OnMinigameLinked(class UCrafterComponent* Crafter, bool CallFunc_IsFTUEOpen_IsOpen, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsFTUEOpen_IsOpen_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* K2Node_DynamicCast_AsWBP_Cooking_Minigame_Chopping_Progress_Marker, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void OnMinigameLinkedAndUIFocus(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPaused_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnStartMinigame();
	void PlayCountdown();
	void SequenceEvent__ENTRYPOINTWBP_Cooking_Minigame_RollingPin();
	void SequenceEvent__ENTRYPOINTWBP_Cooking_Minigame_RollingPin_0();
	void SequenceEvent__ENTRYPOINTWBP_Cooking_Minigame_RollingPin_1();
	void SequenceEvent__ENTRYPOINTWBP_Cooking_Minigame_RollingPin_2();
	void SetMarkerPosition(double CallFunc_GetMarkerWidth_Width, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FMargin& K2Node_Copy_ReturnValue, double CallFunc_GetMarkerTravelRange_Range, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetCursorPosition_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FMargin& K2Node_SetFieldsInStruct_StructOut, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float K2Node_SetFieldsInStruct_Right_ImplicitCast);
	void SuccessfulInputReceived(class UMinigameComponentMasterQTE* Comp, bool Temp_bool_Variable, EUMGSequencePlayMode Temp_byte_Variable, EUMGSequencePlayMode Temp_byte_Variable_1, class UWBP_Cooking_Minigame_RollingPin_GoalPost_C* CallFunc_GetClosestGoalPost_Marker, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, float CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateSuccessCount(bool UpdateRightNow, bool CachedFinished, int32 CachedSuccess, double Alpha, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* K2Node_DynamicCast_AsWBP_Cooking_Minigame_Chopping_Progress_Marker, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTextBlock* K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Minigame_RollingPin_C">();
	}
	static class UWBP_Cooking_Minigame_RollingPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Minigame_RollingPin_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Minigame_RollingPin_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Minigame_RollingPin_C");
static_assert(sizeof(UWBP_Cooking_Minigame_RollingPin_C) == 0x000490, "Wrong size on UWBP_Cooking_Minigame_RollingPin_C");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, UberGraphFrame_WBP_Cooking_Minigame_RollingPin_C) == 0x000348, "Member 'UWBP_Cooking_Minigame_RollingPin_C::UberGraphFrame_WBP_Cooking_Minigame_RollingPin_C' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Countdown) == 0x000350, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Countdown' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ShowSuccess) == 0x000358, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ShowSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, CrossFadeText) == 0x000360, "Member 'UWBP_Cooking_Minigame_RollingPin_C::CrossFadeText' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ButtonPromptVisibility) == 0x000368, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ButtonPromptVisibility' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, SuccessfulHit_RollingAnim) == 0x000370, "Member 'UWBP_Cooking_Minigame_RollingPin_C::SuccessfulHit_RollingAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, MistakeMade) == 0x000378, "Member 'UWBP_Cooking_Minigame_RollingPin_C::MistakeMade' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, BackgroundRoot) == 0x000380, "Member 'UWBP_Cooking_Minigame_RollingPin_C::BackgroundRoot' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, BorderStyled) == 0x000388, "Member 'UWBP_Cooking_Minigame_RollingPin_C::BorderStyled' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, BorderStyledMistake) == 0x000390, "Member 'UWBP_Cooking_Minigame_RollingPin_C::BorderStyledMistake' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ButtonPrompt) == 0x000398, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, CountdownImage_1) == 0x0003A0, "Member 'UWBP_Cooking_Minigame_RollingPin_C::CountdownImage_1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, CountdownImage_2) == 0x0003A8, "Member 'UWBP_Cooking_Minigame_RollingPin_C::CountdownImage_2' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, CountdownImage_3) == 0x0003B0, "Member 'UWBP_Cooking_Minigame_RollingPin_C::CountdownImage_3' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, CountdownPrompt) == 0x0003B8, "Member 'UWBP_Cooking_Minigame_RollingPin_C::CountdownPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, FailPrompt) == 0x0003C0, "Member 'UWBP_Cooking_Minigame_RollingPin_C::FailPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, FTUE_Marker) == 0x0003C8, "Member 'UWBP_Cooking_Minigame_RollingPin_C::FTUE_Marker' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, GameRoot) == 0x0003D0, "Member 'UWBP_Cooking_Minigame_RollingPin_C::GameRoot' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Image) == 0x0003D8, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Image_238) == 0x0003E0, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Image_238' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Image_KnifeBackground) == 0x0003E8, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Image_KnifeBackground' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, InputRoot) == 0x0003F0, "Member 'UWBP_Cooking_Minigame_RollingPin_C::InputRoot' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Moving_Marker) == 0x0003F8, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Moving_Marker' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Overlay_Moving) == 0x000400, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Overlay_Moving' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ProgressMarker_PreviewOnly) == 0x000408, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ProgressMarker_PreviewOnly' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ProgressMarker_PreviewOnly_1) == 0x000410, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ProgressMarker_PreviewOnly_1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ProgressMarker_PreviewOnly_2) == 0x000418, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ProgressMarker_PreviewOnly_2' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ProgressMarker_PreviewOnly_3) == 0x000420, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ProgressMarker_PreviewOnly_3' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ProgressMarker_PreviewOnly_4) == 0x000428, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ProgressMarker_PreviewOnly_4' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ProgressMarker_PreviewOnly_5) == 0x000430, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ProgressMarker_PreviewOnly_5' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ProgressTicks) == 0x000438, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ProgressTicks' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, RollingPinVisual) == 0x000440, "Member 'UWBP_Cooking_Minigame_RollingPin_C::RollingPinVisual' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, ScaleBox_Marker) == 0x000448, "Member 'UWBP_Cooking_Minigame_RollingPin_C::ScaleBox_Marker' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, SuccessBorder) == 0x000450, "Member 'UWBP_Cooking_Minigame_RollingPin_C::SuccessBorder' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, SuccessProgress) == 0x000458, "Member 'UWBP_Cooking_Minigame_RollingPin_C::SuccessProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, SuccessText1) == 0x000460, "Member 'UWBP_Cooking_Minigame_RollingPin_C::SuccessText1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, SuccessText1_1) == 0x000468, "Member 'UWBP_Cooking_Minigame_RollingPin_C::SuccessText1_1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, SuccessText2) == 0x000470, "Member 'UWBP_Cooking_Minigame_RollingPin_C::SuccessText2' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Target_Bottom) == 0x000478, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Target_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Target_Top) == 0x000480, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Target_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_C, Text1Active) == 0x000488, "Member 'UWBP_Cooking_Minigame_RollingPin_C::Text1Active' has a wrong offset!");

}

