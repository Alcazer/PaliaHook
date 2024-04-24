#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComboBox_Menu_CM

#include "Basic.hpp"

#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function WBP_ComboBox_Menu_CM.WBP_ComboBox_Menu_CM_C.BndEvt__WBP_ComboBox_Menu_CM_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ComboBox_Menu_CM_C_BndEvt__WBP_ComboBox_Menu_CM_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature final 
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_CM_C_BndEvt__WBP_ComboBox_Menu_CM_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_CM_C_BndEvt__WBP_ComboBox_Menu_CM_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature");
static_assert(sizeof(WBP_ComboBox_Menu_CM_C_BndEvt__WBP_ComboBox_Menu_CM_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature) == 0x000008, "Wrong size on WBP_ComboBox_Menu_CM_C_BndEvt__WBP_ComboBox_Menu_CM_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_BndEvt__WBP_ComboBox_Menu_CM_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature, Button) == 0x000000, "Member 'WBP_ComboBox_Menu_CM_C_BndEvt__WBP_ComboBox_Menu_CM_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature::Button' has a wrong offset!");

// Function WBP_ComboBox_Menu_CM.WBP_ComboBox_Menu_CM_C.CreateOptions
// 0x0050 (0x0050 - 0x0000)
struct WBP_ComboBox_Menu_CM_C_CreateOptions final 
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index, class FText Text)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5214[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ComboBox_Menu_Option_CM_C*         CallFunc_BP_CreateEntryOfClass_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0028(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_CM_C_CreateOptions) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_CM_C_CreateOptions");
static_assert(sizeof(WBP_ComboBox_Menu_CM_C_CreateOptions) == 0x000050, "Wrong size on WBP_ComboBox_Menu_CM_C_CreateOptions");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, CallFunc_BP_CreateEntryOfClass_ReturnValue) == 0x000020, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::CallFunc_BP_CreateEntryOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_CreateOptions, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'WBP_ComboBox_Menu_CM_C_CreateOptions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_ComboBox_Menu_CM.WBP_ComboBox_Menu_CM_C.ExecuteUbergraph_WBP_ComboBox_Menu_CM
// 0x0018 (0x0018 - 0x0000)
struct WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5215[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM");
static_assert(sizeof(WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM) == 0x000018, "Wrong size on WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM, EntryPoint) == 0x000000, "Member 'WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM, CallFunc_AkEventGlobal_ReturnValue) == 0x000010, "Member 'WBP_ComboBox_Menu_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_CM::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");

// Function WBP_ComboBox_Menu_CM.WBP_ComboBox_Menu_CM_C.GetDesiredFocusTarget
// 0x0018 (0x0018 - 0x0000)
struct WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget final 
{
public:
	class UWidget*                                Output;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ComboBox_Menu_Option_CM_C*         CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget");
static_assert(sizeof(WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget) == 0x000018, "Wrong size on WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget, Output) == 0x000000, "Member 'WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget::Output' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000010, "Member 'WBP_ComboBox_Menu_CM_C_GetDesiredFocusTarget::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");

// Function WBP_ComboBox_Menu_CM.WBP_ComboBox_Menu_CM_C.HandleOnOptionSelected
// 0x0020 (0x0020 - 0x0000)
struct WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected final 
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5216[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected");
static_assert(sizeof(WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected) == 0x000020, "Wrong size on WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected, Param_Index) == 0x000000, "Member 'WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected, Text) == 0x000008, "Member 'WBP_ComboBox_Menu_CM_C_HandleOnOptionSelected::Text' has a wrong offset!");

// Function WBP_ComboBox_Menu_CM.WBP_ComboBox_Menu_CM_C.OnOptionSelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature final 
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5217[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature");
static_assert(sizeof(WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature) == 0x000020, "Wrong size on WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature, Param_Index) == 0x000000, "Member 'WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature, Text) == 0x000008, "Member 'WBP_ComboBox_Menu_CM_C_OnOptionSelected__DelegateSignature::Text' has a wrong offset!");

// Function WBP_ComboBox_Menu_CM.WBP_ComboBox_Menu_CM_C.SetActiveSelectedAppearance
// 0x0020 (0x0020 - 0x0000)
struct WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance final 
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ETextJustify                                  InJustification;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance");
static_assert(sizeof(WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance) == 0x000020, "Wrong size on WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance, InText) == 0x000000, "Member 'WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance::InText' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance, InJustification) == 0x000018, "Member 'WBP_ComboBox_Menu_CM_C_SetActiveSelectedAppearance::InJustification' has a wrong offset!");

}

