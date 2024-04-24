#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_Button_Primary_Settings_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_Button_Primary_Settings_CM.F_Button_Primary_Settings_CM
// 0x0050 (0x0050 - 0x0000)
struct FF_Button_Primary_Settings_CM final 
{
public:
	class FText                                   ButtonText_18_B3AE7F5E41230861051B0A8B8C8F592A;    // 0x0000(0x0018)(Edit, BlueprintVisible)
	ESlateVisibility                              LeftSlotVisibility_19_34D9086E4F971C2661144596179F88B8; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              RightSlotVisibility_20_FE4CD6174404DA9E772E40AF8B8C6989; // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32B2[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_TextBlockStyle*                  TextStyle_Pressed_21_97389A0F4CDC262AE56C47A4F9FAF0A6; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  TextStyle_Normal_22_E70EEC6545B6E4690D4848B41537F9C5; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ButtonStyle_Override_27_FB713911401A8553E6EFA199CF3A33DC; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldOverrideButtonStyle_16_95ED882649C3D64FD1602081D436146E; // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32B3[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                TextPadding_23_D0F2CE684E502BE224FFAD9C1C49D805;   // 0x003C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FF_Button_Primary_Settings_CM) == 0x000008, "Wrong alignment on FF_Button_Primary_Settings_CM");
static_assert(sizeof(FF_Button_Primary_Settings_CM) == 0x000050, "Wrong size on FF_Button_Primary_Settings_CM");
static_assert(offsetof(FF_Button_Primary_Settings_CM, ButtonText_18_B3AE7F5E41230861051B0A8B8C8F592A) == 0x000000, "Member 'FF_Button_Primary_Settings_CM::ButtonText_18_B3AE7F5E41230861051B0A8B8C8F592A' has a wrong offset!");
static_assert(offsetof(FF_Button_Primary_Settings_CM, LeftSlotVisibility_19_34D9086E4F971C2661144596179F88B8) == 0x000018, "Member 'FF_Button_Primary_Settings_CM::LeftSlotVisibility_19_34D9086E4F971C2661144596179F88B8' has a wrong offset!");
static_assert(offsetof(FF_Button_Primary_Settings_CM, RightSlotVisibility_20_FE4CD6174404DA9E772E40AF8B8C6989) == 0x000019, "Member 'FF_Button_Primary_Settings_CM::RightSlotVisibility_20_FE4CD6174404DA9E772E40AF8B8C6989' has a wrong offset!");
static_assert(offsetof(FF_Button_Primary_Settings_CM, TextStyle_Pressed_21_97389A0F4CDC262AE56C47A4F9FAF0A6) == 0x000020, "Member 'FF_Button_Primary_Settings_CM::TextStyle_Pressed_21_97389A0F4CDC262AE56C47A4F9FAF0A6' has a wrong offset!");
static_assert(offsetof(FF_Button_Primary_Settings_CM, TextStyle_Normal_22_E70EEC6545B6E4690D4848B41537F9C5) == 0x000028, "Member 'FF_Button_Primary_Settings_CM::TextStyle_Normal_22_E70EEC6545B6E4690D4848B41537F9C5' has a wrong offset!");
static_assert(offsetof(FF_Button_Primary_Settings_CM, ButtonStyle_Override_27_FB713911401A8553E6EFA199CF3A33DC) == 0x000030, "Member 'FF_Button_Primary_Settings_CM::ButtonStyle_Override_27_FB713911401A8553E6EFA199CF3A33DC' has a wrong offset!");
static_assert(offsetof(FF_Button_Primary_Settings_CM, ShouldOverrideButtonStyle_16_95ED882649C3D64FD1602081D436146E) == 0x000038, "Member 'FF_Button_Primary_Settings_CM::ShouldOverrideButtonStyle_16_95ED882649C3D64FD1602081D436146E' has a wrong offset!");
static_assert(offsetof(FF_Button_Primary_Settings_CM, TextPadding_23_D0F2CE684E502BE224FFAD9C1C49D805) == 0x00003C, "Member 'FF_Button_Primary_Settings_CM::TextPadding_23_D0F2CE684E502BE224FFAD9C1C49D805' has a wrong offset!");

}

