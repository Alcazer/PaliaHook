#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigame_Chopping

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_MinigameQTE_Base_classes.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Minigame_Chopping.WBP_Cooking_Minigame_Chopping_C
// 0x0160 (0x04A8 - 0x0348)
class UWBP_Cooking_Minigame_Chopping_C final  : public UWBP_MinigameQTE_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Cooking_Minigame_Chopping_C;    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowSuccess;                                       // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Countdown;                                         // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CrossFadeText;                                     // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ButtonPromptVisibility;                            // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SuccessfulHit_KnifeAnim;                           // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SuccessfulHit;                                     // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MistakeMade;                                       // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               BackgroundRoot;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BorderStyled;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BorderStyledMistake;                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ButtonPrompt;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CountdownImage_1;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CountdownImage_2;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CountdownImage_3;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CountdownPrompt;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   FailPrompt;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               GameRoot;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_238;                                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_KnifeBackground;                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IndicatorParent;                                   // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Input_StateSwitcher;                               // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InputRoot;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KnifeVisual;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly;                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_1;                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_2;                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_3;                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_4;                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* ProgressMarker_PreviewOnly_5;                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ProgressTicks;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   SuccessBorder;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessProgress;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessText1;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessText1_1;                                    // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SuccessText2;                                      // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TapTarget;                                         // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Cooking_Minigame_Chopping_Marker_C*> Indicators;                                        // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        IndicatorTravelTime;                               // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Text1Active;                                       // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopIntroTempo;                                    // 0x0491(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DD0[0x6];                                     // 0x0492(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LastTimerKickTime;                                 // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MetronomeID;                                       // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void _Internal_KickMarkerConsiderAddingTicks(double* NextTimerDelay, int32 MaxCanBeDisplayed, double UpdateDeltaTimeConstrained, int32 NewMarkerCount, float ActiveConfigInputPeriodTime, double TimeFromFirstNewMarker, double UpdateDeltaTime, double OldLastTimerKickTime, class UWBP_Cooking_Minigame_Chopping_Marker_C* IndicatorToUse, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Min_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_SafeDivide_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Percent_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Get_Next_Inactive_Indicator_Indicator, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_GetTimeElapsed_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_GetCenterPositionOfSuccessMarker_X_Position, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast_1, double CallFunc_Percent_FloatFloat_B_ImplicitCast, double K2Node_VariableSet_LastTimerKickTime_ImplicitCast);
	void AudioCountdownOne();
	void AudioCountdownStart();
	void AudioCountdownThree();
	void AudioCountdownTwo();
	void CheckForCollidingMarkers(class UWidget* Widget, int32 Temp_int_Array_Index_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ExecuteUbergraph_WBP_Cooking_Minigame_Chopping(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsPaused_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_2, int32 CallFunc_AkEventGlobal_ReturnValue_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsPaused_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_AkEventGlobal_ReturnValue_4, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_IsPaused_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc__Internal_KickMarkerConsiderAddingTicks_NextTimerDelay, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsPlaying_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_AkEventGlobal_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_FMod_Divisor_ImplicitCast, double CallFunc_AkSetRTPC_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_FMod_Dividend_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
	void ExpectedInputMissed(class UMinigameComponentMasterQTE* Comp);
	void Finished_10C494C54F447E9F5CF338A310EA28AB();
	void Get_Next_Inactive_Indicator(class UWBP_Cooking_Minigame_Chopping_Marker_C** Indicator, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Create_ReturnValue, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetCenterPositionOfSuccessMarker(double* X_Position, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void GetNearbyWinningTick(class UWBP_Cooking_Minigame_Chopping_Marker_C** Marker, double LocationOfInterest, double ClosestDistance, class UWBP_Cooking_Minigame_Chopping_Marker_C* ClosestMarker, double CallFunc_GetCenterPositionOfSuccessMarker_X_Position, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, bool CallFunc_IsVisible_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void KickIndicator();
	void MinigameOnStateChanged(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void MistimedInputReceived(class UMinigameComponentMasterQTE* Comp, int32 CallFunc_AkEventGlobal_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void OnMinigameLinked(class UCrafterComponent* Crafter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* K2Node_DynamicCast_AsWBP_Cooking_Minigame_Chopping_Progress_Marker, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWBP_Cooking_Minigame_Chopping_Marker_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OnMinigameLinkedAndUIFocus(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPaused_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnStartMinigame();
	void PlayCountdown();
	void PrintState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void SequenceEvent__ENTRYPOINTWBP_Cooking_Minigame_Chopping();
	void SequenceEvent__ENTRYPOINTWBP_Cooking_Minigame_Chopping_0();
	void SequenceEvent__ENTRYPOINTWBP_Cooking_Minigame_Chopping_1();
	void SequenceEvent__ENTRYPOINTWBP_Cooking_Minigame_Chopping_2();
	void StartChopIntroTempo();
	void StopTempo();
	void SuccessfulInputReceived(class UMinigameComponentMasterQTE* Comp, EUMGSequencePlayMode Temp_byte_Variable, EUMGSequencePlayMode Temp_byte_Variable_1, int32 CallFunc_PostGlobalEvent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool Temp_bool_Variable, double CallFunc_MapRangeClamped_ReturnValue_1, EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_GetNearbyWinningTick_Marker, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, float CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateMarkers(double MinigameTimeElapsedSec, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetTimeElapsed_ReturnValue, class UWBP_Cooking_Minigame_Chopping_Marker_C* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double K2Node_VariableSet_minigameTimeElapsedSec_ImplicitCast);
	void UpdateSuccessCount(bool UpdateRightNow, bool CachedFinished, int32 CachedSuccess, double Alpha, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* K2Node_DynamicCast_AsWBP_Cooking_Minigame_Chopping_Progress_Marker, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTextBlock* K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Minigame_Chopping_C">();
	}
	static class UWBP_Cooking_Minigame_Chopping_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Minigame_Chopping_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Minigame_Chopping_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Minigame_Chopping_C");
static_assert(sizeof(UWBP_Cooking_Minigame_Chopping_C) == 0x0004A8, "Wrong size on UWBP_Cooking_Minigame_Chopping_C");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, UberGraphFrame_WBP_Cooking_Minigame_Chopping_C) == 0x000348, "Member 'UWBP_Cooking_Minigame_Chopping_C::UberGraphFrame_WBP_Cooking_Minigame_Chopping_C' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ShowSuccess) == 0x000350, "Member 'UWBP_Cooking_Minigame_Chopping_C::ShowSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, Countdown) == 0x000358, "Member 'UWBP_Cooking_Minigame_Chopping_C::Countdown' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, CrossFadeText) == 0x000360, "Member 'UWBP_Cooking_Minigame_Chopping_C::CrossFadeText' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ButtonPromptVisibility) == 0x000368, "Member 'UWBP_Cooking_Minigame_Chopping_C::ButtonPromptVisibility' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, SuccessfulHit_KnifeAnim) == 0x000370, "Member 'UWBP_Cooking_Minigame_Chopping_C::SuccessfulHit_KnifeAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, SuccessfulHit) == 0x000378, "Member 'UWBP_Cooking_Minigame_Chopping_C::SuccessfulHit' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, MistakeMade) == 0x000380, "Member 'UWBP_Cooking_Minigame_Chopping_C::MistakeMade' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, BackgroundRoot) == 0x000388, "Member 'UWBP_Cooking_Minigame_Chopping_C::BackgroundRoot' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, BorderStyled) == 0x000390, "Member 'UWBP_Cooking_Minigame_Chopping_C::BorderStyled' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, BorderStyledMistake) == 0x000398, "Member 'UWBP_Cooking_Minigame_Chopping_C::BorderStyledMistake' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ButtonPrompt) == 0x0003A0, "Member 'UWBP_Cooking_Minigame_Chopping_C::ButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, CountdownImage_1) == 0x0003A8, "Member 'UWBP_Cooking_Minigame_Chopping_C::CountdownImage_1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, CountdownImage_2) == 0x0003B0, "Member 'UWBP_Cooking_Minigame_Chopping_C::CountdownImage_2' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, CountdownImage_3) == 0x0003B8, "Member 'UWBP_Cooking_Minigame_Chopping_C::CountdownImage_3' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, CountdownPrompt) == 0x0003C0, "Member 'UWBP_Cooking_Minigame_Chopping_C::CountdownPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, FailPrompt) == 0x0003C8, "Member 'UWBP_Cooking_Minigame_Chopping_C::FailPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, GameRoot) == 0x0003D0, "Member 'UWBP_Cooking_Minigame_Chopping_C::GameRoot' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, Image) == 0x0003D8, "Member 'UWBP_Cooking_Minigame_Chopping_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, Image_238) == 0x0003E0, "Member 'UWBP_Cooking_Minigame_Chopping_C::Image_238' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, Image_KnifeBackground) == 0x0003E8, "Member 'UWBP_Cooking_Minigame_Chopping_C::Image_KnifeBackground' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, IndicatorParent) == 0x0003F0, "Member 'UWBP_Cooking_Minigame_Chopping_C::IndicatorParent' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, Input_StateSwitcher) == 0x0003F8, "Member 'UWBP_Cooking_Minigame_Chopping_C::Input_StateSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, InputRoot) == 0x000400, "Member 'UWBP_Cooking_Minigame_Chopping_C::InputRoot' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, KnifeVisual) == 0x000408, "Member 'UWBP_Cooking_Minigame_Chopping_C::KnifeVisual' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ProgressMarker_PreviewOnly) == 0x000410, "Member 'UWBP_Cooking_Minigame_Chopping_C::ProgressMarker_PreviewOnly' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ProgressMarker_PreviewOnly_1) == 0x000418, "Member 'UWBP_Cooking_Minigame_Chopping_C::ProgressMarker_PreviewOnly_1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ProgressMarker_PreviewOnly_2) == 0x000420, "Member 'UWBP_Cooking_Minigame_Chopping_C::ProgressMarker_PreviewOnly_2' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ProgressMarker_PreviewOnly_3) == 0x000428, "Member 'UWBP_Cooking_Minigame_Chopping_C::ProgressMarker_PreviewOnly_3' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ProgressMarker_PreviewOnly_4) == 0x000430, "Member 'UWBP_Cooking_Minigame_Chopping_C::ProgressMarker_PreviewOnly_4' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ProgressMarker_PreviewOnly_5) == 0x000438, "Member 'UWBP_Cooking_Minigame_Chopping_C::ProgressMarker_PreviewOnly_5' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, ProgressTicks) == 0x000440, "Member 'UWBP_Cooking_Minigame_Chopping_C::ProgressTicks' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, SuccessBorder) == 0x000448, "Member 'UWBP_Cooking_Minigame_Chopping_C::SuccessBorder' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, SuccessProgress) == 0x000450, "Member 'UWBP_Cooking_Minigame_Chopping_C::SuccessProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, SuccessText1) == 0x000458, "Member 'UWBP_Cooking_Minigame_Chopping_C::SuccessText1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, SuccessText1_1) == 0x000460, "Member 'UWBP_Cooking_Minigame_Chopping_C::SuccessText1_1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, SuccessText2) == 0x000468, "Member 'UWBP_Cooking_Minigame_Chopping_C::SuccessText2' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, TapTarget) == 0x000470, "Member 'UWBP_Cooking_Minigame_Chopping_C::TapTarget' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, Indicators) == 0x000478, "Member 'UWBP_Cooking_Minigame_Chopping_C::Indicators' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, IndicatorTravelTime) == 0x000488, "Member 'UWBP_Cooking_Minigame_Chopping_C::IndicatorTravelTime' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, Text1Active) == 0x000490, "Member 'UWBP_Cooking_Minigame_Chopping_C::Text1Active' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, StopIntroTempo) == 0x000491, "Member 'UWBP_Cooking_Minigame_Chopping_C::StopIntroTempo' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, LastTimerKickTime) == 0x000498, "Member 'UWBP_Cooking_Minigame_Chopping_C::LastTimerKickTime' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_C, MetronomeID) == 0x0004A0, "Member 'UWBP_Cooking_Minigame_Chopping_C::MetronomeID' has a wrong offset!");

}

