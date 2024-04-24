#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_DescriptionBox

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Settings_DescriptionBox.WBP_Settings_DescriptionBox_C.ExecuteUbergraph_WBP_Settings_DescriptionBox
// 0x0038 (0x0038 - 0x0000)
struct WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D88[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_SetName;                        // 0x0008(0x0018)()
	class FText                                   K2Node_CustomEvent_SetDescription;                 // 0x0020(0x0018)()
};
static_assert(alignof(WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox) == 0x000008, "Wrong alignment on WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox");
static_assert(sizeof(WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox) == 0x000038, "Wrong size on WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox");
static_assert(offsetof(WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox, EntryPoint) == 0x000000, "Member 'WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox, K2Node_CustomEvent_SetName) == 0x000008, "Member 'WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox::K2Node_CustomEvent_SetName' has a wrong offset!");
static_assert(offsetof(WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox, K2Node_CustomEvent_SetDescription) == 0x000020, "Member 'WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox::K2Node_CustomEvent_SetDescription' has a wrong offset!");

// Function WBP_Settings_DescriptionBox.WBP_Settings_DescriptionBox_C.UpdateSettingsDescription
// 0x0030 (0x0030 - 0x0000)
struct WBP_Settings_DescriptionBox_C_UpdateSettingsDescription final 
{
public:
	class FText                                   SetName;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   SetDescription;                                    // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Settings_DescriptionBox_C_UpdateSettingsDescription) == 0x000008, "Wrong alignment on WBP_Settings_DescriptionBox_C_UpdateSettingsDescription");
static_assert(sizeof(WBP_Settings_DescriptionBox_C_UpdateSettingsDescription) == 0x000030, "Wrong size on WBP_Settings_DescriptionBox_C_UpdateSettingsDescription");
static_assert(offsetof(WBP_Settings_DescriptionBox_C_UpdateSettingsDescription, SetName) == 0x000000, "Member 'WBP_Settings_DescriptionBox_C_UpdateSettingsDescription::SetName' has a wrong offset!");
static_assert(offsetof(WBP_Settings_DescriptionBox_C_UpdateSettingsDescription, SetDescription) == 0x000018, "Member 'WBP_Settings_DescriptionBox_C_UpdateSettingsDescription::SetDescription' has a wrong offset!");

}

