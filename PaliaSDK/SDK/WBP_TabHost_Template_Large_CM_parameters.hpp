#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TabHost_Template_Large_CM

#include "Basic.hpp"

#include "ValeriaUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_TabHost_Template_Large_CM.WBP_TabHost_Template_Large_CM_C.AddTabButton
// 0x0070 (0x0070 - 0x0000)
struct WBP_TabHost_Template_Large_CM_C_AddTabButton final 
{
public:
	class FName                                   TabName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       Info;                                              // 0x0008(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_TabHost_Template_Large_CM_C_AddTabButton) == 0x000008, "Wrong alignment on WBP_TabHost_Template_Large_CM_C_AddTabButton");
static_assert(sizeof(WBP_TabHost_Template_Large_CM_C_AddTabButton) == 0x000070, "Wrong size on WBP_TabHost_Template_Large_CM_C_AddTabButton");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButton, TabName) == 0x000000, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButton::TabName' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButton, Info) == 0x000008, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButton::Info' has a wrong offset!");

// Function WBP_TabHost_Template_Large_CM.WBP_TabHost_Template_Large_CM_C.AddTabButtonImpl
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl final 
{
public:
	struct FVALUI_InstantiatedTabButtonInfo       InstantiatedTabButtonInfo;                         // 0x0000(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class FName                                   TabName;                                           // 0x0068(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x0070(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ButtonCreated;                                     // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_TabWrapper_Large_CM_C*             CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B3D[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl) == 0x000008, "Wrong alignment on WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl");
static_assert(sizeof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl) == 0x0000B0, "Wrong size on WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, InstantiatedTabButtonInfo) == 0x000000, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::InstantiatedTabButtonInfo' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, TabName) == 0x000068, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::TabName' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, Button) == 0x000070, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::Button' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, ButtonCreated) == 0x000078, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::ButtonCreated' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, CallFunc_GetOwningPlayer_ReturnValue) == 0x000080, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, CallFunc_Create_ReturnValue) == 0x000088, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000090, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, K2Node_DynamicCast_AsTexture_2D) == 0x000098, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000A8, "Member 'WBP_TabHost_Template_Large_CM_C_AddTabButtonImpl::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function WBP_TabHost_Template_Large_CM.WBP_TabHost_Template_Large_CM_C.ExecuteUbergraph_WBP_TabHost_Template_Large_CM
// 0x0170 (0x0170 - 0x0000)
struct WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_TabName_2;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       K2Node_Event_Info_1;                               // 0x0010(0x0068)(ConstParm, ContainsInstancedReference)
	class FName                                   K2Node_Event_TabName_1;                            // 0x0078(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       K2Node_Event_Info;                                 // 0x0080(0x0068)(ConstParm, ContainsInstancedReference)
	class UButton*                                CallFunc_AddTabButtonImpl_Button;                  // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_TabName;                              // 0x00F0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B3E[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetTabNames_ReturnValue;                  // 0x0100(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B3F[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetTabNames_ReturnValue_1;                // 0x0118(0x0010)(ReferenceParm)
	class FName                                   CallFunc_GetActiveTabName_ReturnValue;             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B40[0x2];                                     // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0140(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B41[0x2];                                     // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TabWrapper_Large_CM_C*             K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM;     // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM) == 0x000008, "Wrong alignment on WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM");
static_assert(sizeof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM) == 0x000170, "Wrong size on WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, EntryPoint) == 0x000000, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, K2Node_Event_TabName_2) == 0x000008, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::K2Node_Event_TabName_2' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, K2Node_Event_Info_1) == 0x000010, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::K2Node_Event_Info_1' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, K2Node_Event_TabName_1) == 0x000078, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::K2Node_Event_TabName_1' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, K2Node_Event_Info) == 0x000080, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::K2Node_Event_Info' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_AddTabButtonImpl_Button) == 0x0000E8, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_AddTabButtonImpl_Button' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, K2Node_Event_TabName) == 0x0000F0, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::K2Node_Event_TabName' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_GetTabNames_ReturnValue) == 0x000100, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_GetTabNames_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_Array_Find_ReturnValue) == 0x000110, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_GetTabNames_ReturnValue_1) == 0x000118, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_GetTabNames_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_GetActiveTabName_ReturnValue) == 0x000128, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_GetActiveTabName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_Array_Find_ReturnValue_1) == 0x000130, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, Temp_int_Loop_Counter_Variable) == 0x000134, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, Temp_bool_True_if_break_was_hit_Variable) == 0x000138, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_Not_PreBool_ReturnValue) == 0x000139, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_Add_IntInt_ReturnValue) == 0x00013C, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_GetAllChildren_ReturnValue) == 0x000140, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_Array_Get_Item) == 0x000150, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_Array_Length_ReturnValue) == 0x000158, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_RemoveChild_ReturnValue) == 0x00015C, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_Less_IntInt_ReturnValue) == 0x00015D, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM) == 0x000160, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_BooleanAND_ReturnValue) == 0x000169, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00016A, "Member 'WBP_TabHost_Template_Large_CM_C_ExecuteUbergraph_WBP_TabHost_Template_Large_CM::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_TabHost_Template_Large_CM.WBP_TabHost_Template_Large_CM_C.GetWrapperFromTabName
// 0x0050 (0x0050 - 0x0000)
struct WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName final 
{
public:
	class FName                                   TabName;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_TabWrapper_Large_CM_C*             Tab_Wrapper;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B42[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B43[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B44[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TabWrapper_Large_CM_C*             K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM;     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName) == 0x000008, "Wrong alignment on WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName");
static_assert(sizeof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName) == 0x000050, "Wrong size on WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, TabName) == 0x000000, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::TabName' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, Tab_Wrapper) == 0x000008, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::Tab_Wrapper' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, Temp_bool_True_if_break_was_hit_Variable) == 0x000010, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM) == 0x000040, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, CallFunc_BooleanAND_ReturnValue) == 0x00004A, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00004B, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_TabHost_Template_Large_CM_C_GetWrapperFromTabName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_TabHost_Template_Large_CM.WBP_TabHost_Template_Large_CM_C.HandleDifferentActiveTabSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_TabHost_Template_Large_CM_C_HandleDifferentActiveTabSet final 
{
public:
	class FName                                   TabName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TabHost_Template_Large_CM_C_HandleDifferentActiveTabSet) == 0x000004, "Wrong alignment on WBP_TabHost_Template_Large_CM_C_HandleDifferentActiveTabSet");
static_assert(sizeof(WBP_TabHost_Template_Large_CM_C_HandleDifferentActiveTabSet) == 0x000008, "Wrong size on WBP_TabHost_Template_Large_CM_C_HandleDifferentActiveTabSet");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_HandleDifferentActiveTabSet, TabName) == 0x000000, "Member 'WBP_TabHost_Template_Large_CM_C_HandleDifferentActiveTabSet::TabName' has a wrong offset!");

// Function WBP_TabHost_Template_Large_CM.WBP_TabHost_Template_Large_CM_C.RemoveTabButton
// 0x0070 (0x0070 - 0x0000)
struct WBP_TabHost_Template_Large_CM_C_RemoveTabButton final 
{
public:
	class FName                                   TabName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_InstantiatedTabButtonInfo       Info;                                              // 0x0008(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_TabHost_Template_Large_CM_C_RemoveTabButton) == 0x000008, "Wrong alignment on WBP_TabHost_Template_Large_CM_C_RemoveTabButton");
static_assert(sizeof(WBP_TabHost_Template_Large_CM_C_RemoveTabButton) == 0x000070, "Wrong size on WBP_TabHost_Template_Large_CM_C_RemoveTabButton");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_RemoveTabButton, TabName) == 0x000000, "Member 'WBP_TabHost_Template_Large_CM_C_RemoveTabButton::TabName' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_RemoveTabButton, Info) == 0x000008, "Member 'WBP_TabHost_Template_Large_CM_C_RemoveTabButton::Info' has a wrong offset!");

// Function WBP_TabHost_Template_Large_CM.WBP_TabHost_Template_Large_CM_C.UpdateButtonHoverAnimPermissions
// 0x0050 (0x0050 - 0x0000)
struct WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions final 
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetActiveTabName_ReturnValue;             // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B45[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B46[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B47[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TabWrapper_Large_CM_C*             K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM;     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions) == 0x000008, "Wrong alignment on WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions");
static_assert(sizeof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions) == 0x000050, "Wrong size on WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_GetActiveTabName_ReturnValue) == 0x00000C, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_GetActiveTabName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_GetAllChildren_ReturnValue) == 0x000018, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM) == 0x000040, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::K2Node_DynamicCast_AsWBP_Tab_Wrapper_Large_CM' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000049, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_Not_PreBool_ReturnValue) == 0x00004A, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions, CallFunc_BooleanAND_ReturnValue) == 0x00004B, "Member 'WBP_TabHost_Template_Large_CM_C_UpdateButtonHoverAnimPermissions::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

