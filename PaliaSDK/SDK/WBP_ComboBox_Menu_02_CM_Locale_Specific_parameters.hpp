#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComboBox_Menu_02_CM_Locale_Specific

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final 
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_BndEvt__WBP_ComboBox_Menu_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           K2Node_Event_Options;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USizeBoxSlot*                           CallFunc_SlotAsSizeBoxSlot_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_UseScrollbar;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520D[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   K2Node_Event_InText;                               // 0x0050(0x0018)()
	ETextJustify                                  K2Node_Event_InJustification;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520E[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Index;                                // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_Text;                                 // 0x0070(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520F[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index, class FText Text)> K2Node_CreateDelegate_OutputDelegate;              // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5210[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ComboBox_Menu_Option_02_CM_C*      CallFunc_BP_CreateEntryOfClass_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x00A8(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5211[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_SelectedSlot;                         // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific) == 0x0000D0, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, EntryPoint) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_Event_Options) == 0x000008, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_Event_Options' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_AkEventGlobal_ReturnValue) == 0x000020, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_ComponentBoundEvent_Button) == 0x000028, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_SlotAsSizeBoxSlot_ReturnValue) == 0x000030, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_SlotAsSizeBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_Event_UseScrollbar) == 0x000038, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_Event_UseScrollbar' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_MakeStruct_Margin) == 0x000040, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_Event_InText) == 0x000050, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_Event_InJustification) == 0x000068, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_Event_InJustification' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_Event_Index) == 0x00006C, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_Event_Index' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_Event_Text) == 0x000070, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_Event_Text' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000088, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_CreateDelegate_OutputDelegate) == 0x00008C, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_BP_CreateEntryOfClass_ReturnValue) == 0x0000A0, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_BP_CreateEntryOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_Array_Add_ReturnValue) == 0x0000C0, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_Array_Length_ReturnValue) == 0x0000C4, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific, K2Node_Event_SelectedSlot) == 0x0000CC, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_ExecuteUbergraph_WBP_ComboBox_Menu_02_CM_Locale_Specific::K2Node_Event_SelectedSlot' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.GetButtonSelection
// 0x0008 (0x0008 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetButtonSelection final 
{
public:
	class UWBP_Template_Button_CM_C*              Param_Button_Selection;                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetButtonSelection) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetButtonSelection");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetButtonSelection) == 0x000008, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetButtonSelection");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetButtonSelection, Param_Button_Selection) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetButtonSelection::Param_Button_Selection' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.GetOptionWidgets
// 0x0010 (0x0010 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetOptionWidgets final 
{
public:
	TArray<class UWBP_ComboBox_Menu_Option_02_CM_C*> OptionWidgets;                                     // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetOptionWidgets) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetOptionWidgets");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetOptionWidgets) == 0x000010, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetOptionWidgets");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetOptionWidgets, OptionWidgets) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetOptionWidgets::OptionWidgets' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.GetSelfMenu
// 0x0008 (0x0008 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetSelfMenu final 
{
public:
	class UUserWidget*                            SelfMenu;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetSelfMenu) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetSelfMenu");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetSelfMenu) == 0x000008, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetSelfMenu");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetSelfMenu, SelfMenu) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_GetSelfMenu::SelfMenu' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.HandleOnOptionSelected
// 0x0020 (0x0020 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected final 
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5212[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected) == 0x000020, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected, Param_Index) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected, Text) == 0x000008, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_HandleOnOptionSelected::Text' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.OnOptionSelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature final 
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5213[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature) == 0x000020, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature, Param_Index) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature, Text) == 0x000008, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_OnOptionSelected__DelegateSignature::Text' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.SetActiveSelectedAppearance
// 0x0020 (0x0020 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance final 
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ETextJustify                                  InJustification;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance) == 0x000020, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance, InText) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance::InText' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance, InJustification) == 0x000018, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetActiveSelectedAppearance::InJustification' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.SetOptions
// 0x0010 (0x0010 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetOptions final 
{
public:
	TArray<class FText>                           Param_Options;                                     // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetOptions) == 0x000008, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetOptions");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetOptions) == 0x000010, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetOptions");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetOptions, Param_Options) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetOptions::Param_Options' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.SetSelectedSlot
// 0x0004 (0x0004 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetSelectedSlot final 
{
public:
	int32                                         Param_SelectedSlot;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetSelectedSlot) == 0x000004, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetSelectedSlot");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetSelectedSlot) == 0x000004, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetSelectedSlot");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetSelectedSlot, Param_SelectedSlot) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetSelectedSlot::Param_SelectedSlot' has a wrong offset!");

// Function WBP_ComboBox_Menu_02_CM_Locale_Specific.WBP_ComboBox_Menu_02_CM_Locale_Specific_C.SetUseScrollbar
// 0x0001 (0x0001 - 0x0000)
struct WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetUseScrollbar final 
{
public:
	bool                                          Param_UseScrollbar;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetUseScrollbar) == 0x000001, "Wrong alignment on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetUseScrollbar");
static_assert(sizeof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetUseScrollbar) == 0x000001, "Wrong size on WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetUseScrollbar");
static_assert(offsetof(WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetUseScrollbar, Param_UseScrollbar) == 0x000000, "Member 'WBP_ComboBox_Menu_02_CM_Locale_Specific_C_SetUseScrollbar::Param_UseScrollbar' has a wrong offset!");

}

