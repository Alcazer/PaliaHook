#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GraphicsSettings_UnappliedChangesWindow_CM

#include "Basic.hpp"

#include "S6UICore_structs.hpp"
#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_GraphicsSettings_UnappliedChangesWindow_CM.WBP_GraphicsSettings_UnappliedChangesWindow_CM_C.CanClose
// 0x0003 (0x0003 - 0x0000)
struct WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ES6UI_ModalWidgetState                        CallFunc_GetModalWidgetState_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose");
static_assert(sizeof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose) == 0x000003, "Wrong size on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose, ReturnValue) == 0x000000, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose, CallFunc_GetModalWidgetState_ReturnValue) == 0x000001, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose::CallFunc_GetModalWidgetState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_CanClose::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_GraphicsSettings_UnappliedChangesWindow_CM.WBP_GraphicsSettings_UnappliedChangesWindow_CM_C.ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM
// 0x0090 (0x0090 - 0x0000)
struct WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32EF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue;       // 0x0008(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           K2Node_EnhancedInputActionEvent_SourceAction;      // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32F0[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_0;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1_0;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32F1[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue_1;         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM) == 0x000008, "Wrong alignment on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM");
static_assert(sizeof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM) == 0x000090, "Wrong size on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, EntryPoint) == 0x000000, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, K2Node_EnhancedInputActionEvent_ActionValue) == 0x000008, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x000028, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x00002C, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000030, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, Temp_object_Variable) == 0x000038, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, Temp_real_Variable) == 0x000048, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, Temp_real_Variable_1) == 0x000050, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, Temp_real_Variable_0) == 0x000058, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, Temp_real_Variable_1_0) == 0x000060, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, Temp_bool_Variable) == 0x000068, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, CallFunc_GetOwningPlayer_ReturnValue) == 0x000070, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000078, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000080, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM, CallFunc_GetUIManagerWidget_ReturnValue_1) == 0x000088, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_UnappliedChangesWindow_CM::CallFunc_GetUIManagerWidget_ReturnValue_1' has a wrong offset!");

// Function WBP_GraphicsSettings_UnappliedChangesWindow_CM.WBP_GraphicsSettings_UnappliedChangesWindow_CM_C.HandleStartClosing_BP
// 0x0002 (0x0002 - 0x0000)
struct WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP final 
{
public:
	bool                                          bPermitLatentClosing;                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOutHasLatentClosingLogic;                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP");
static_assert(sizeof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP) == 0x000002, "Wrong size on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP, bPermitLatentClosing) == 0x000000, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP::bPermitLatentClosing' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP, bOutHasLatentClosingLogic) == 0x000001, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartClosing_BP::bOutHasLatentClosingLogic' has a wrong offset!");

// Function WBP_GraphicsSettings_UnappliedChangesWindow_CM.WBP_GraphicsSettings_UnappliedChangesWindow_CM_C.HandleStartOpening_BP
// 0x0001 (0x0001 - 0x0000)
struct WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartOpening_BP final 
{
public:
	bool                                          bOutHasLatentOpeningLogic;                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartOpening_BP) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartOpening_BP");
static_assert(sizeof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartOpening_BP) == 0x000001, "Wrong size on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartOpening_BP");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartOpening_BP, bOutHasLatentOpeningLogic) == 0x000000, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_HandleStartOpening_BP::bOutHasLatentOpeningLogic' has a wrong offset!");

// Function WBP_GraphicsSettings_UnappliedChangesWindow_CM.WBP_GraphicsSettings_UnappliedChangesWindow_CM_C.InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0 final 
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WBP_GraphicsSettings_UnappliedChangesWindow_CM_C_InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

}

