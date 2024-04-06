#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MinigameQTE

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "WBP_MinigameQTE_Base_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MinigameQTE.WBP_MinigameQTE_C
// 0x00C0 (0x03D0 - 0x0310)
class UWBP_MinigameQTE_C final  : public UWBP_MinigameQTE_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_MinigameQTE_C;                  // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowSuccess;                                       // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MistakeMade;                                       // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AfterPop;                                          // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AfterImage;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   BorderStyledMistake;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionWidget_C*         CommonInputActionWidget_PromptImage;               // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IndicatorParent;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           InputRoot;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Prompts;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   SuccessBorder;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SuccessPredictor;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SuccessProgress;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TapTarget;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TapTargetMoving;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_MinigameQTEInput2_C*>       Indicators;                                        // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        HoldPredictorColorTimeRemaining;                   // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HoldPredictorColorDuration;                        // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IndicatorTravelTime;                               // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurTime;                                           // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InputWindowSize;                                   // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BeatCount;                                         // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B10[0x4];                                     // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        VisibleScaleFromToleranceSize;                     // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_MinigameQTE(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPaused_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPaused_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UWBP_MinigameQTEInput2_C* CallFunc_Get_Next_Inactive_Indicator_Indicator, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, float CallFunc_GetTimeElapsed_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_GetCompletion_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWBP_MinigameQTEInput2_C* Temp_object_Variable, float CallFunc_GetTargetPosition_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_GetTargetPosition_ReturnValue_1, class UWBP_MinigameQTEInput2_C* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_1, class UWBP_MinigameQTEInput2_C* CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_1, class UWBP_MinigameQTEInput2_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_2, class UWBP_MinigameQTEInput2_C* CallFunc_Array_Get_Item_3, double CallFunc_UpdatePredictorColor_ElapsedTime_ImplicitCast, double K2Node_VariableSet_CurTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Start_TargetTime_ImplicitCast, double CallFunc_Start_EndTime_ImplicitCast, double CallFunc_ForcePosition_NormalizedTime_ImplicitCast, double CallFunc_ForcePosition_NormalizedTime_ImplicitCast_1, double CallFunc_ForcePosition_NormalizedTime_ImplicitCast_2);
	void ExpectedInputMissed(class UMinigameComponentMasterQTE* Comp);
	void Get_Next_Inactive_Indicator(class UWBP_MinigameQTEInput2_C** Indicator, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_MinigameQTEInput2_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_MinigameQTEInput2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void KickIndicator();
	void MinigameOnStateChanged(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void MistakeAnimationFinished();
	void MistimedInputReceived(class UMinigameComponentMasterQTE* Comp, int32 CallFunc_AkEventGlobal_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnInitialized();
	void OnMinigameLinked(class UCrafterComponent* Crafter, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, EMinigameQTEStyle Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, EMinigameQTEStyle Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_16, EMinigameQTEStyle Temp_byte_Variable_17, ESlateVisibility K2Node_Select_Default_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void OnStartMinigame();
	void SetCursorPosition(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_GetCursorPosition_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, ESlateVisibility K2Node_Select_Default, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void SuccessfulInputReceived(class UMinigameComponentMasterQTE* Comp, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdatePredictorColor(double ElapsedTime, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_WouldInputNowBeSuccess_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void UpdateSuccessCount(bool CachedFinished, int32 CachedSuccess, double Alpha, bool Temp_bool_Variable, EUMGSequencePlayMode Temp_byte_Variable, EUMGSequencePlayMode Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, EUMGSequencePlayMode K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UWBP_MinigameQTEInput2_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MinigameQTE_C">();
	}
	static class UWBP_MinigameQTE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MinigameQTE_C>();
	}
};
static_assert(alignof(UWBP_MinigameQTE_C) == 0x000008, "Wrong alignment on UWBP_MinigameQTE_C");
static_assert(sizeof(UWBP_MinigameQTE_C) == 0x0003D0, "Wrong size on UWBP_MinigameQTE_C");
static_assert(offsetof(UWBP_MinigameQTE_C, UberGraphFrame_WBP_MinigameQTE_C) == 0x000310, "Member 'UWBP_MinigameQTE_C::UberGraphFrame_WBP_MinigameQTE_C' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, ShowSuccess) == 0x000318, "Member 'UWBP_MinigameQTE_C::ShowSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, MistakeMade) == 0x000320, "Member 'UWBP_MinigameQTE_C::MistakeMade' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, AfterPop) == 0x000328, "Member 'UWBP_MinigameQTE_C::AfterPop' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, AfterImage) == 0x000330, "Member 'UWBP_MinigameQTE_C::AfterImage' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, BorderStyledMistake) == 0x000338, "Member 'UWBP_MinigameQTE_C::BorderStyledMistake' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, CommonInputActionWidget_PromptImage) == 0x000340, "Member 'UWBP_MinigameQTE_C::CommonInputActionWidget_PromptImage' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, IndicatorParent) == 0x000348, "Member 'UWBP_MinigameQTE_C::IndicatorParent' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, InputRoot) == 0x000350, "Member 'UWBP_MinigameQTE_C::InputRoot' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, Prompts) == 0x000358, "Member 'UWBP_MinigameQTE_C::Prompts' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, SuccessBorder) == 0x000360, "Member 'UWBP_MinigameQTE_C::SuccessBorder' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, SuccessPredictor) == 0x000368, "Member 'UWBP_MinigameQTE_C::SuccessPredictor' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, SuccessProgress) == 0x000370, "Member 'UWBP_MinigameQTE_C::SuccessProgress' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, TapTarget) == 0x000378, "Member 'UWBP_MinigameQTE_C::TapTarget' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, TapTargetMoving) == 0x000380, "Member 'UWBP_MinigameQTE_C::TapTargetMoving' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, Indicators) == 0x000388, "Member 'UWBP_MinigameQTE_C::Indicators' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, HoldPredictorColorTimeRemaining) == 0x000398, "Member 'UWBP_MinigameQTE_C::HoldPredictorColorTimeRemaining' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, HoldPredictorColorDuration) == 0x0003A0, "Member 'UWBP_MinigameQTE_C::HoldPredictorColorDuration' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, IndicatorTravelTime) == 0x0003A8, "Member 'UWBP_MinigameQTE_C::IndicatorTravelTime' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, CurTime) == 0x0003B0, "Member 'UWBP_MinigameQTE_C::CurTime' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, InputWindowSize) == 0x0003B8, "Member 'UWBP_MinigameQTE_C::InputWindowSize' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, BeatCount) == 0x0003C0, "Member 'UWBP_MinigameQTE_C::BeatCount' has a wrong offset!");
static_assert(offsetof(UWBP_MinigameQTE_C, VisibleScaleFromToleranceSize) == 0x0003C8, "Member 'UWBP_MinigameQTE_C::VisibleScaleFromToleranceSize' has a wrong offset!");

}

