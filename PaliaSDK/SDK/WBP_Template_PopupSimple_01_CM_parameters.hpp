#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_PopupSimple_01_CM

#include "Basic.hpp"

#include "F_PopupSimple_Content_Settings_structs.hpp"
#include "F_PopupSimple_Buttons_Settings_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "F_Button_Primary_Settings_CM_structs.hpp"


namespace SDK::Params
{

// Function WBP_Template_PopupSimple_01_CM.WBP_Template_PopupSimple_01_CM_C.ExecuteUbergraph_WBP_Template_PopupSimple_01_CM
// 0x0008 (0x0008 - 0x0000)
struct WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM) == 0x000004, "Wrong alignment on WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM");
static_assert(sizeof(WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM) == 0x000008, "Wrong size on WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM, EntryPoint) == 0x000000, "Member 'WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM, K2Node_Event_IsDesignTime) == 0x000006, "Member 'WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM, CallFunc_IsValid_ReturnValue_2) == 0x000007, "Member 'WBP_Template_PopupSimple_01_CM_C_ExecuteUbergraph_WBP_Template_PopupSimple_01_CM::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_Template_PopupSimple_01_CM.WBP_Template_PopupSimple_01_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_PopupSimple_01_CM_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_PopupSimple_01_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Template_PopupSimple_01_CM_C_PreConstruct");
static_assert(sizeof(WBP_Template_PopupSimple_01_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_Template_PopupSimple_01_CM_C_PreConstruct");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Template_PopupSimple_01_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Template_PopupSimple_01_CM.WBP_Template_PopupSimple_01_CM_C.SetButtonsLayout
// 0x0058 (0x0058 - 0x0000)
struct WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout final 
{
public:
	struct FF_PopupSimple_Buttons_Settings        InButtonsLayoutSettings;                           // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F1[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F2[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout) == 0x000008, "Wrong alignment on WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout");
static_assert(sizeof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout) == 0x000058, "Wrong size on WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, InButtonsLayoutSettings) == 0x000000, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::InButtonsLayoutSettings' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_byte_Variable) == 0x000020, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_bool_Variable) == 0x000021, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_byte_Variable_1) == 0x000022, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_byte_Variable_2) == 0x000023, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_bool_Variable_1) == 0x000024, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_byte_Variable_3) == 0x000025, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_byte_Variable_4) == 0x000026, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_byte_Variable_5) == 0x000027, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, Temp_bool_Variable_2) == 0x000028, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, CallFunc_MakeVector2D_ReturnValue) == 0x000030, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, K2Node_Select_Default) == 0x000041, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, K2Node_Select_Default_1) == 0x000042, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, K2Node_Select_Default_2) == 0x000043, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000048, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_Template_PopupSimple_01_CM_C_SetButtonsLayout::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Template_PopupSimple_01_CM.WBP_Template_PopupSimple_01_CM_C.SetContentLayout
// 0x0028 (0x0028 - 0x0000)
struct WBP_Template_PopupSimple_01_CM_C_SetContentLayout final 
{
public:
	struct FF_PopupSimple_Content_Settings        InContentLayoutSettings;                           // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_PopupSimple_01_CM_C_SetContentLayout) == 0x000008, "Wrong alignment on WBP_Template_PopupSimple_01_CM_C_SetContentLayout");
static_assert(sizeof(WBP_Template_PopupSimple_01_CM_C_SetContentLayout) == 0x000028, "Wrong size on WBP_Template_PopupSimple_01_CM_C_SetContentLayout");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetContentLayout, InContentLayoutSettings) == 0x000000, "Member 'WBP_Template_PopupSimple_01_CM_C_SetContentLayout::InContentLayoutSettings' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetContentLayout, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000018, "Member 'WBP_Template_PopupSimple_01_CM_C_SetContentLayout::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetContentLayout, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_Template_PopupSimple_01_CM_C_SetContentLayout::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Template_PopupSimple_01_CM.WBP_Template_PopupSimple_01_CM_C.SetPrimaryButtonSettings
// 0x0050 (0x0050 - 0x0000)
struct WBP_Template_PopupSimple_01_CM_C_SetPrimaryButtonSettings final 
{
public:
	struct FF_Button_Primary_Settings_CM          InButtonSettings;                                  // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_PopupSimple_01_CM_C_SetPrimaryButtonSettings) == 0x000008, "Wrong alignment on WBP_Template_PopupSimple_01_CM_C_SetPrimaryButtonSettings");
static_assert(sizeof(WBP_Template_PopupSimple_01_CM_C_SetPrimaryButtonSettings) == 0x000050, "Wrong size on WBP_Template_PopupSimple_01_CM_C_SetPrimaryButtonSettings");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetPrimaryButtonSettings, InButtonSettings) == 0x000000, "Member 'WBP_Template_PopupSimple_01_CM_C_SetPrimaryButtonSettings::InButtonSettings' has a wrong offset!");

// Function WBP_Template_PopupSimple_01_CM.WBP_Template_PopupSimple_01_CM_C.SetSecondaryButtonSettings
// 0x0018 (0x0018 - 0x0000)
struct WBP_Template_PopupSimple_01_CM_C_SetSecondaryButtonSettings final 
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Template_PopupSimple_01_CM_C_SetSecondaryButtonSettings) == 0x000008, "Wrong alignment on WBP_Template_PopupSimple_01_CM_C_SetSecondaryButtonSettings");
static_assert(sizeof(WBP_Template_PopupSimple_01_CM_C_SetSecondaryButtonSettings) == 0x000018, "Wrong size on WBP_Template_PopupSimple_01_CM_C_SetSecondaryButtonSettings");
static_assert(offsetof(WBP_Template_PopupSimple_01_CM_C_SetSecondaryButtonSettings, InText) == 0x000000, "Member 'WBP_Template_PopupSimple_01_CM_C_SetSecondaryButtonSettings::InText' has a wrong offset!");

}

