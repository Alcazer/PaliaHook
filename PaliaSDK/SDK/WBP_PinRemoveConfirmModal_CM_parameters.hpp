#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PinRemoveConfirmModal_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "EnhancedInput_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_PinRemoveConfirmModal_CM.WBP_PinRemoveConfirmModal_CM_C.BP_OnHandleBackAction
// 0x0001 (0x0001 - 0x0000)
struct WBP_PinRemoveConfirmModal_CM_C_BP_OnHandleBackAction final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PinRemoveConfirmModal_CM_C_BP_OnHandleBackAction) == 0x000001, "Wrong alignment on WBP_PinRemoveConfirmModal_CM_C_BP_OnHandleBackAction");
static_assert(sizeof(WBP_PinRemoveConfirmModal_CM_C_BP_OnHandleBackAction) == 0x000001, "Wrong size on WBP_PinRemoveConfirmModal_CM_C_BP_OnHandleBackAction");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_BP_OnHandleBackAction, ReturnValue) == 0x000000, "Member 'WBP_PinRemoveConfirmModal_CM_C_BP_OnHandleBackAction::ReturnValue' has a wrong offset!");

// Function WBP_PinRemoveConfirmModal_CM.WBP_PinRemoveConfirmModal_CM_C.ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM
// 0x10D8 (0x10D8 - 0x0000)
struct WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4669[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue;       // 0x0008(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           K2Node_EnhancedInputActionEvent_SourceAction;      // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_466A[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_0;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1_0;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_466B[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FValeriaItem                           CallFunc_GetGearBySlotType_ReturnValue;            // 0x0080(0x0068)()
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_ItemTypeDefinitionAsset*           K2Node_DynamicCast_AsItem_Type_Definition;         // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetVillagerCoreDataTableRow_OutResult;    // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_466C[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVillagerCoreConfig                    CallFunc_GetVillagerCoreDataTableRow_ReturnValue;  // 0x0100(0x0F58)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x1058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_466D[0x7];                                     // 0x1059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x1060(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x10B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x10C0(0x0018)()
};
static_assert(alignof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM) == 0x000008, "Wrong alignment on WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM");
static_assert(sizeof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM) == 0x0010D8, "Wrong size on WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, EntryPoint) == 0x000000, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_EnhancedInputActionEvent_ActionValue) == 0x000008, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x000028, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x00002C, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000030, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, Temp_object_Variable) == 0x000038, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, Temp_real_Variable) == 0x000048, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, Temp_real_Variable_1) == 0x000050, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, Temp_real_Variable_0) == 0x000058, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, Temp_real_Variable_1_0) == 0x000060, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, Temp_bool_Variable) == 0x000068, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, CallFunc_GetOwningPlayer_ReturnValue) == 0x000070, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000078, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, CallFunc_GetGearBySlotType_ReturnValue) == 0x000080, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::CallFunc_GetGearBySlotType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x0000E8, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_DynamicCast_AsItem_Type_Definition) == 0x0000F0, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_DynamicCast_AsItem_Type_Definition' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, CallFunc_GetVillagerCoreDataTableRow_OutResult) == 0x0000F9, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::CallFunc_GetVillagerCoreDataTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, CallFunc_GetVillagerCoreDataTableRow_ReturnValue) == 0x000100, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::CallFunc_GetVillagerCoreDataTableRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_SwitchEnum_CmpSuccess) == 0x001058, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_MakeStruct_FormatArgumentData) == 0x001060, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, K2Node_MakeArray_Array) == 0x0010B0, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM, CallFunc_Format_ReturnValue) == 0x0010C0, "Member 'WBP_PinRemoveConfirmModal_CM_C_ExecuteUbergraph_WBP_PinRemoveConfirmModal_CM::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_PinRemoveConfirmModal_CM.WBP_PinRemoveConfirmModal_CM_C.InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0 final 
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WBP_PinRemoveConfirmModal_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

// Function WBP_PinRemoveConfirmModal_CM.WBP_PinRemoveConfirmModal_CM_C.OnFocusReceived
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0048(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0100(0x00B8)()
};
static_assert(alignof(WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived) == 0x0001B8, "Wrong size on WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived, InFocusEvent) == 0x000040, "Member 'WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived, ReturnValue) == 0x000048, "Member 'WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x000100, "Member 'WBP_PinRemoveConfirmModal_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_PinRemoveConfirmModal_CM.WBP_PinRemoveConfirmModal_CM_C.OnSlotFocused__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PinRemoveConfirmModal_CM_C_OnSlotFocused__DelegateSignature final 
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PinRemoveConfirmModal_CM_C_OnSlotFocused__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PinRemoveConfirmModal_CM_C_OnSlotFocused__DelegateSignature");
static_assert(sizeof(WBP_PinRemoveConfirmModal_CM_C_OnSlotFocused__DelegateSignature) == 0x000008, "Wrong size on WBP_PinRemoveConfirmModal_CM_C_OnSlotFocused__DelegateSignature");
static_assert(offsetof(WBP_PinRemoveConfirmModal_CM_C_OnSlotFocused__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PinRemoveConfirmModal_CM_C_OnSlotFocused__DelegateSignature::Widget' has a wrong offset!");

}

