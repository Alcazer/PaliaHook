#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HighScore

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_HighScore.WBP_HighScore_C.HandleScoreChanged
// 0x0020 (0x0020 - 0x0000)
struct WBP_HighScore_C_HandleScoreChanged final 
{
public:
	class UVAL_ScoreDefinition*                   ScoreDefinition;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ScoreValue;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50D3[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_ScoreDefinition*                   CallFunc_GetScoreToDisplay_ReturnValue;            // 0x0010(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HighScore_C_HandleScoreChanged) == 0x000008, "Wrong alignment on WBP_HighScore_C_HandleScoreChanged");
static_assert(sizeof(WBP_HighScore_C_HandleScoreChanged) == 0x000020, "Wrong size on WBP_HighScore_C_HandleScoreChanged");
static_assert(offsetof(WBP_HighScore_C_HandleScoreChanged, ScoreDefinition) == 0x000000, "Member 'WBP_HighScore_C_HandleScoreChanged::ScoreDefinition' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_HandleScoreChanged, ScoreValue) == 0x000008, "Member 'WBP_HighScore_C_HandleScoreChanged::ScoreValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_HandleScoreChanged, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'WBP_HighScore_C_HandleScoreChanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_HandleScoreChanged, CallFunc_GetScoreToDisplay_ReturnValue) == 0x000010, "Member 'WBP_HighScore_C_HandleScoreChanged::CallFunc_GetScoreToDisplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_HandleScoreChanged, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_HighScore_C_HandleScoreChanged::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_HandleScoreChanged, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000019, "Member 'WBP_HighScore_C_HandleScoreChanged::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_HighScore.WBP_HighScore_C.Update Score to Display
// 0x0038 (0x0038 - 0x0000)
struct WBP_HighScore_C_Update_Score_to_Display final 
{
public:
	class UVAL_ScoreComponent*                    Param_ScoreComponent;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVAL_ScoreDefinition*                   ScoreDefinition;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         Hours;                                             // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         Minutes;                                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         Seconds;                                           // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UVAL_ScoreDefinition* ScoreDefinition, int32 ScoreValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HighScore_C_Update_Score_to_Display) == 0x000008, "Wrong alignment on WBP_HighScore_C_Update_Score_to_Display");
static_assert(sizeof(WBP_HighScore_C_Update_Score_to_Display) == 0x000038, "Wrong size on WBP_HighScore_C_Update_Score_to_Display");
static_assert(offsetof(WBP_HighScore_C_Update_Score_to_Display, Param_ScoreComponent) == 0x000000, "Member 'WBP_HighScore_C_Update_Score_to_Display::Param_ScoreComponent' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_Update_Score_to_Display, ScoreDefinition) == 0x000008, "Member 'WBP_HighScore_C_Update_Score_to_Display::ScoreDefinition' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_Update_Score_to_Display, Hours) == 0x000010, "Member 'WBP_HighScore_C_Update_Score_to_Display::Hours' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_Update_Score_to_Display, Minutes) == 0x000018, "Member 'WBP_HighScore_C_Update_Score_to_Display::Minutes' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_Update_Score_to_Display, Seconds) == 0x000020, "Member 'WBP_HighScore_C_Update_Score_to_Display::Seconds' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_Update_Score_to_Display, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'WBP_HighScore_C_Update_Score_to_Display::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_HighScore.WBP_HighScore_C.UpdateText
// 0x0058 (0x0058 - 0x0000)
struct WBP_HighScore_C_UpdateText final 
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50D4[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetScore_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_FormatTime_HHMMSS_FormattedTime;          // 0x0028(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0040(0x0018)()
};
static_assert(alignof(WBP_HighScore_C_UpdateText) == 0x000008, "Wrong alignment on WBP_HighScore_C_UpdateText");
static_assert(sizeof(WBP_HighScore_C_UpdateText) == 0x000058, "Wrong size on WBP_HighScore_C_UpdateText");
static_assert(offsetof(WBP_HighScore_C_UpdateText, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_HighScore_C_UpdateText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateText, Temp_bool_Variable) == 0x000001, "Member 'WBP_HighScore_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateText, CallFunc_IsValid_ReturnValue_1) == 0x000002, "Member 'WBP_HighScore_C_UpdateText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateText, CallFunc_GetScore_ReturnValue) == 0x000004, "Member 'WBP_HighScore_C_UpdateText::CallFunc_GetScore_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateText, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_HighScore_C_UpdateText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000020, "Member 'WBP_HighScore_C_UpdateText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateText, CallFunc_FormatTime_HHMMSS_FormattedTime) == 0x000028, "Member 'WBP_HighScore_C_UpdateText::CallFunc_FormatTime_HHMMSS_FormattedTime' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateText, K2Node_Select_Default) == 0x000040, "Member 'WBP_HighScore_C_UpdateText::K2Node_Select_Default' has a wrong offset!");

// Function WBP_HighScore.WBP_HighScore_C.UpdateVisibility
// 0x000C (0x000C - 0x0000)
struct WBP_HighScore_C_UpdateVisibility final 
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50D5[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasScore_ReturnValue;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HighScore_C_UpdateVisibility) == 0x000004, "Wrong alignment on WBP_HighScore_C_UpdateVisibility");
static_assert(sizeof(WBP_HighScore_C_UpdateVisibility) == 0x00000C, "Wrong size on WBP_HighScore_C_UpdateVisibility");
static_assert(offsetof(WBP_HighScore_C_UpdateVisibility, Temp_byte_Variable) == 0x000000, "Member 'WBP_HighScore_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateVisibility, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_HighScore_C_UpdateVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateVisibility, Temp_bool_Variable) == 0x000002, "Member 'WBP_HighScore_C_UpdateVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateVisibility, CallFunc_AkEventGlobal_ReturnValue) == 0x000004, "Member 'WBP_HighScore_C_UpdateVisibility::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateVisibility, CallFunc_HasScore_ReturnValue) == 0x000008, "Member 'WBP_HighScore_C_UpdateVisibility::CallFunc_HasScore_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateVisibility, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_HighScore_C_UpdateVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateVisibility, K2Node_Select_Default) == 0x00000A, "Member 'WBP_HighScore_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HighScore_C_UpdateVisibility, CallFunc_IsValid_ReturnValue_1) == 0x00000B, "Member 'WBP_HighScore_C_UpdateVisibility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

