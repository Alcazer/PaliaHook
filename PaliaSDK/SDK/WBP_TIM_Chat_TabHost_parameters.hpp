#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_Chat_TabHost

#include "Basic.hpp"

#include "ValeriaUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C.AddTabButton
// 0x0070 (0x0070 - 0x0000)
struct WBP_TIM_Chat_TabHost_C_AddTabButton final 
{
public:
	class FName                                   TabName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       Info;                                              // 0x0008(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_TIM_Chat_TabHost_C_AddTabButton) == 0x000008, "Wrong alignment on WBP_TIM_Chat_TabHost_C_AddTabButton");
static_assert(sizeof(WBP_TIM_Chat_TabHost_C_AddTabButton) == 0x000070, "Wrong size on WBP_TIM_Chat_TabHost_C_AddTabButton");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButton, TabName) == 0x000000, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButton::TabName' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButton, Info) == 0x000008, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButton::Info' has a wrong offset!");

// Function WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C.AddTabButtonImpl
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_TIM_Chat_TabHost_C_AddTabButtonImpl final 
{
public:
	struct FVALUI_InstantiatedTabButtonInfo       InstantiatedTabButtonInfo;                         // 0x0000(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class FName                                   TabName;                                           // 0x0068(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x0070(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ButtonCreated;                                     // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetActiveTabName_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetTabNames_ReturnValue;                  // 0x0088(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3294[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetTabNames_ReturnValue_1;                // 0x00A0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3295[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl) == 0x000008, "Wrong alignment on WBP_TIM_Chat_TabHost_C_AddTabButtonImpl");
static_assert(sizeof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl) == 0x0000C0, "Wrong size on WBP_TIM_Chat_TabHost_C_AddTabButtonImpl");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, InstantiatedTabButtonInfo) == 0x000000, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::InstantiatedTabButtonInfo' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, TabName) == 0x000068, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::TabName' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, Button) == 0x000070, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::Button' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, ButtonCreated) == 0x000078, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::ButtonCreated' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, CallFunc_GetActiveTabName_ReturnValue) == 0x000080, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::CallFunc_GetActiveTabName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, CallFunc_GetTabNames_ReturnValue) == 0x000088, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::CallFunc_GetTabNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, CallFunc_Array_Find_ReturnValue) == 0x000098, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, CallFunc_GetTabNames_ReturnValue_1) == 0x0000A0, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::CallFunc_GetTabNames_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, CallFunc_Array_Find_ReturnValue_1) == 0x0000B0, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AddTabButtonImpl, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000B8, "Member 'WBP_TIM_Chat_TabHost_C_AddTabButtonImpl::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C.AdjustButton
// 0x0038 (0x0038 - 0x0000)
struct WBP_TIM_Chat_TabHost_C_AdjustButton final 
{
public:
	class UButton*                                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         TabButtonIndex;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActiveTabIndex;                                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReceivesShadowBottom;                             // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReceivesShadowRight;                              // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReceivesShadowLeft;                               // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3296[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3297[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_Select_Default;                             // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_TIM_Chat_TabHost_C_AdjustButton) == 0x000008, "Wrong alignment on WBP_TIM_Chat_TabHost_C_AdjustButton");
static_assert(sizeof(WBP_TIM_Chat_TabHost_C_AdjustButton) == 0x000038, "Wrong size on WBP_TIM_Chat_TabHost_C_AdjustButton");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, Button) == 0x000000, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::Button' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, TabButtonIndex) == 0x000008, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::TabButtonIndex' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, ActiveTabIndex) == 0x00000C, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::ActiveTabIndex' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, bReceivesShadowBottom) == 0x000010, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::bReceivesShadowBottom' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, bReceivesShadowRight) == 0x000011, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::bReceivesShadowRight' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, bReceivesShadowLeft) == 0x000012, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::bReceivesShadowLeft' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000013, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000014, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, CallFunc_Less_IntInt_ReturnValue) == 0x000015, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000016, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000018, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, Temp_bool_Variable) == 0x000020, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_AdjustButton, K2Node_Select_Default) == 0x000024, "Member 'WBP_TIM_Chat_TabHost_C_AdjustButton::K2Node_Select_Default' has a wrong offset!");

// Function WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C.BindAudio
// 0x0008 (0x0008 - 0x0000)
struct WBP_TIM_Chat_TabHost_C_BindAudio final 
{
public:
	class UButton*                                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_Chat_TabHost_C_BindAudio) == 0x000008, "Wrong alignment on WBP_TIM_Chat_TabHost_C_BindAudio");
static_assert(sizeof(WBP_TIM_Chat_TabHost_C_BindAudio) == 0x000008, "Wrong size on WBP_TIM_Chat_TabHost_C_BindAudio");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_BindAudio, Button) == 0x000000, "Member 'WBP_TIM_Chat_TabHost_C_BindAudio::Button' has a wrong offset!");

// Function WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C.ExecuteUbergraph_WBP_TIM_Chat_TabHost
// 0x0208 (0x0208 - 0x0000)
struct WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_TabName_2;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       K2Node_Event_Info_1;                               // 0x0018(0x0068)(ConstParm, ContainsInstancedReference)
	class FName                                   K2Node_Event_TabName_1;                            // 0x0080(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       K2Node_Event_Info;                                 // 0x0088(0x0068)(ConstParm, ContainsInstancedReference)
	class UButton*                                CallFunc_AddTabButtonImpl_Button;                  // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_TabName;                              // 0x00F8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3298[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetTabNames_ReturnValue;                  // 0x0108(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x011C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3299[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetTabNames_ReturnValue_1;                // 0x0130(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       CallFunc_TryGetTabInfo_OutInfo;                    // 0x0158(0x0068)(ContainsInstancedReference)
	bool                                          CallFunc_TryGetTabInfo_ReturnValue;                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329A[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329B[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetTabNames_ReturnValue_2;                // 0x01D0(0x0010)(ReferenceParm)
	class FName                                   CallFunc_GetActiveTabName_ReturnValue;             // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_CustomEvent_Button_1;                       // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329C[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_CustomEvent_Button;                         // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue_1;              // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost) == 0x000008, "Wrong alignment on WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost");
static_assert(sizeof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost) == 0x000208, "Wrong size on WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, EntryPoint) == 0x000000, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_Event_TabName_2) == 0x000010, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_Event_TabName_2' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_Event_Info_1) == 0x000018, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_Event_Info_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_Event_TabName_1) == 0x000080, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_Event_TabName_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_Event_Info) == 0x000088, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_Event_Info' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_AddTabButtonImpl_Button) == 0x0000F0, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_AddTabButtonImpl_Button' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_Event_TabName) == 0x0000F8, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_Event_TabName' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_RemoveChild_ReturnValue) == 0x000100, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_GetTabNames_ReturnValue) == 0x000108, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_GetTabNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_Array_Find_ReturnValue) == 0x000118, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_CreateDelegate_OutputDelegate) == 0x00011C, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_GetTabNames_ReturnValue_1) == 0x000130, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_GetTabNames_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_Array_Get_Item) == 0x000140, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_CreateDelegate_OutputDelegate_1) == 0x000148, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_TryGetTabInfo_OutInfo) == 0x000158, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_TryGetTabInfo_OutInfo' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_TryGetTabInfo_ReturnValue) == 0x0001C0, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_TryGetTabInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_Array_Length_ReturnValue) == 0x0001C4, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_Less_IntInt_ReturnValue) == 0x0001C8, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_GetTabNames_ReturnValue_2) == 0x0001D0, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_GetTabNames_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_GetActiveTabName_ReturnValue) == 0x0001E0, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_GetActiveTabName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_CustomEvent_Button_1) == 0x0001E8, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_CustomEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_Array_Find_ReturnValue_1) == 0x0001F0, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, K2Node_CustomEvent_Button) == 0x0001F8, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_AkEventGlobal_ReturnValue) == 0x000200, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost, CallFunc_AkEventGlobal_ReturnValue_1) == 0x000204, "Member 'WBP_TIM_Chat_TabHost_C_ExecuteUbergraph_WBP_TIM_Chat_TabHost::CallFunc_AkEventGlobal_ReturnValue_1' has a wrong offset!");

// Function WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C.HandleDifferentActiveTabSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_TIM_Chat_TabHost_C_HandleDifferentActiveTabSet final 
{
public:
	class FName                                   TabName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_Chat_TabHost_C_HandleDifferentActiveTabSet) == 0x000004, "Wrong alignment on WBP_TIM_Chat_TabHost_C_HandleDifferentActiveTabSet");
static_assert(sizeof(WBP_TIM_Chat_TabHost_C_HandleDifferentActiveTabSet) == 0x000008, "Wrong size on WBP_TIM_Chat_TabHost_C_HandleDifferentActiveTabSet");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_HandleDifferentActiveTabSet, TabName) == 0x000000, "Member 'WBP_TIM_Chat_TabHost_C_HandleDifferentActiveTabSet::TabName' has a wrong offset!");

// Function WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C.RemoveTabButton
// 0x0070 (0x0070 - 0x0000)
struct WBP_TIM_Chat_TabHost_C_RemoveTabButton final 
{
public:
	class FName                                   TabName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       Info;                                              // 0x0008(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_TIM_Chat_TabHost_C_RemoveTabButton) == 0x000008, "Wrong alignment on WBP_TIM_Chat_TabHost_C_RemoveTabButton");
static_assert(sizeof(WBP_TIM_Chat_TabHost_C_RemoveTabButton) == 0x000070, "Wrong size on WBP_TIM_Chat_TabHost_C_RemoveTabButton");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_RemoveTabButton, TabName) == 0x000000, "Member 'WBP_TIM_Chat_TabHost_C_RemoveTabButton::TabName' has a wrong offset!");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_RemoveTabButton, Info) == 0x000008, "Member 'WBP_TIM_Chat_TabHost_C_RemoveTabButton::Info' has a wrong offset!");

// Function WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C.UnbindAudio
// 0x0008 (0x0008 - 0x0000)
struct WBP_TIM_Chat_TabHost_C_UnbindAudio final 
{
public:
	class UButton*                                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_Chat_TabHost_C_UnbindAudio) == 0x000008, "Wrong alignment on WBP_TIM_Chat_TabHost_C_UnbindAudio");
static_assert(sizeof(WBP_TIM_Chat_TabHost_C_UnbindAudio) == 0x000008, "Wrong size on WBP_TIM_Chat_TabHost_C_UnbindAudio");
static_assert(offsetof(WBP_TIM_Chat_TabHost_C_UnbindAudio, Button) == 0x000000, "Member 'WBP_TIM_Chat_TabHost_C_UnbindAudio::Button' has a wrong offset!");

}

