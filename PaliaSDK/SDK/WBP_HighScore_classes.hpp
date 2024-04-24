#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HighScore

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HighScore.WBP_HighScore_C
// 0x0020 (0x02E0 - 0x02C0)
class UWBP_HighScore_C final  : public UUserWidget
{
public:
	class UVALUI_TextBlock_Styled*                HighScoreLabel;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                ScoreText;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVAL_ScoreComponent*                    ScoreComponent;                                    // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVAL_ScoreDefinition*                   ScoreToDisplay;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void HandleScoreChanged(class UVAL_ScoreDefinition* ScoreDefinition, int32 ScoreValue, bool CallFunc_IsValid_ReturnValue, class UVAL_ScoreDefinition* CallFunc_GetScoreToDisplay_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Update_Score_to_Display(class UVAL_ScoreComponent* Param_ScoreComponent, class UVAL_ScoreDefinition* ScoreDefinition, int64 Hours, int64 Minutes, int64 Seconds, TDelegate<void(class UVAL_ScoreDefinition* ScoreDefinition, int32 ScoreValue)> K2Node_CreateDelegate_OutputDelegate);
	void UpdateText(bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetScore_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_FormatTime_HHMMSS_FormattedTime, class FText K2Node_Select_Default);
	void UpdateVisibility(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_HasScore_ReturnValue, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HighScore_C">();
	}
	static class UWBP_HighScore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HighScore_C>();
	}
};
static_assert(alignof(UWBP_HighScore_C) == 0x000008, "Wrong alignment on UWBP_HighScore_C");
static_assert(sizeof(UWBP_HighScore_C) == 0x0002E0, "Wrong size on UWBP_HighScore_C");
static_assert(offsetof(UWBP_HighScore_C, HighScoreLabel) == 0x0002C0, "Member 'UWBP_HighScore_C::HighScoreLabel' has a wrong offset!");
static_assert(offsetof(UWBP_HighScore_C, ScoreText) == 0x0002C8, "Member 'UWBP_HighScore_C::ScoreText' has a wrong offset!");
static_assert(offsetof(UWBP_HighScore_C, ScoreComponent) == 0x0002D0, "Member 'UWBP_HighScore_C::ScoreComponent' has a wrong offset!");
static_assert(offsetof(UWBP_HighScore_C, ScoreToDisplay) == 0x0002D8, "Member 'UWBP_HighScore_C::ScoreToDisplay' has a wrong offset!");

}

