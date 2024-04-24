#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BodyTypeSelectScreen_CM

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.EnableContinueButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton final 
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConsolePlatform_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5510[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonUIButtonPromptItem_C*        CallFunc_GetPromptItemByIA_PromptItem;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton) == 0x000008, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton) == 0x000010, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton, Enable) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton::Enable' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton, CallFunc_IsConsolePlatform_ReturnValue) == 0x000001, "Member 'WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton::CallFunc_IsConsolePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton, CallFunc_GetPromptItemByIA_PromptItem) == 0x000008, "Member 'WBP_BodyTypeSelectScreen_CM_C_EnableContinueButton::CallFunc_GetPromptItemByIA_PromptItem' has a wrong offset!");

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM
// 0x0148 (0x0148 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue_2;     // 0x0008(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime_2;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime_2;   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           K2Node_EnhancedInputActionEvent_SourceAction_2;    // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5511[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_0;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1_0;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5512[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue_1;     // 0x0070(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime_1;     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime_1;   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           K2Node_EnhancedInputActionEvent_SourceAction_1;    // 0x0098(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue_1; // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5513[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           Temp_object_Variable_1;                            // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_2;                              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_2_0;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_3;                              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5514[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable_3_0;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue;       // 0x00D8(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           K2Node_EnhancedInputActionEvent_SourceAction;      // 0x0100(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Temp_object_Variable_2;                            // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue_2; // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5515[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable_4;                              // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_5;                              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_4_0;                            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_5_0;                            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue_1;               // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivated_ReturnValue;                  // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivated_ReturnValue_1;                // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue_2;               // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5516[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue_1;              // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue_2;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM) == 0x000008, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM) == 0x000148, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, EntryPoint) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_AkEventGlobal_ReturnValue) == 0x000004, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_ActionValue_2) == 0x000008, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_ActionValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_ElapsedTime_2) == 0x000028, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_ElapsedTime_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_TriggeredTime_2) == 0x00002C, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_TriggeredTime_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_SourceAction_2) == 0x000030, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_SourceAction_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_object_Variable) == 0x000038, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable) == 0x000048, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_1) == 0x000050, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_0) == 0x000058, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_1_0) == 0x000060, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_bool_Variable) == 0x000068, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_ActionValue_1) == 0x000070, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_ActionValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_ElapsedTime_1) == 0x000090, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_ElapsedTime_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_TriggeredTime_1) == 0x000094, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_TriggeredTime_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_SourceAction_1) == 0x000098, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_SourceAction_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_Conv_InputActionValueToBool_ReturnValue_1) == 0x0000A0, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_Conv_InputActionValueToBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_object_Variable_1) == 0x0000A8, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_2) == 0x0000B0, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_2_0) == 0x0000B8, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_2_0' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_3) == 0x0000C0, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_bool_Variable_1) == 0x0000C8, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_3_0) == 0x0000D0, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_3_0' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_ActionValue) == 0x0000D8, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x0000F8, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x0000FC, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000100, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_object_Variable_2) == 0x000108, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_Conv_InputActionValueToBool_ReturnValue_2) == 0x000110, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_Conv_InputActionValueToBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_4) == 0x000118, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_5) == 0x000120, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_4_0) == 0x000128, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_4_0' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_real_Variable_5_0) == 0x000130, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_real_Variable_5_0' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, Temp_bool_Variable_2) == 0x000138, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_GetIsEnabled_ReturnValue) == 0x000139, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_GetIsEnabled_ReturnValue_1) == 0x00013A, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_GetIsEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_IsActivated_ReturnValue) == 0x00013B, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_IsActivated_ReturnValue_1) == 0x00013C, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_IsActivated_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_GetIsEnabled_ReturnValue_2) == 0x00013D, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_GetIsEnabled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_AkEventGlobal_ReturnValue_1) == 0x000140, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_AkEventGlobal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM, CallFunc_AkEventGlobal_ReturnValue_2) == 0x000144, "Member 'WBP_BodyTypeSelectScreen_CM_C_ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM::CallFunc_AkEventGlobal_ReturnValue_2' has a wrong offset!");

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0 final 
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2
// 0x0030 (0x0030 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2 final 
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2) == 0x000008, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2) == 0x000030, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2, ActionValue) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2, ElapsedTime) == 0x000020, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2, TriggeredTime) == 0x000024, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2, SourceAction) == 0x000028, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2::SourceAction' has a wrong offset!");

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1
// 0x0030 (0x0030 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1 final 
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1) == 0x000008, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1) == 0x000030, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1, ActionValue) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1, ElapsedTime) == 0x000020, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1, TriggeredTime) == 0x000024, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1, SourceAction) == 0x000028, "Member 'WBP_BodyTypeSelectScreen_CM_C_InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1::SourceAction' has a wrong offset!");

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.OnBodyTypeButtonSelected__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature final 
{
public:
	EVAL_CharacterBodyType                        BodyTypeClicked;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstClick;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature) == 0x000001, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature) == 0x000002, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature, BodyTypeClicked) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature::BodyTypeClicked' has a wrong offset!");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature, FirstClick) == 0x000001, "Member 'WBP_BodyTypeSelectScreen_CM_C_OnBodyTypeButtonSelected__DelegateSignature::FirstClick' has a wrong offset!");

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.OnContinueClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_OnContinueClicked__DelegateSignature final 
{
public:
	EVAL_CharacterBodyType                        Selected_Body_Type;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_OnContinueClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_OnContinueClicked__DelegateSignature");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_OnContinueClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_OnContinueClicked__DelegateSignature");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_OnContinueClicked__DelegateSignature, Selected_Body_Type) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_OnContinueClicked__DelegateSignature::Selected_Body_Type' has a wrong offset!");

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.SetAllButtonsEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_SetAllButtonsEnabled final 
{
public:
	bool                                          Is_Enabled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_SetAllButtonsEnabled) == 0x000001, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_SetAllButtonsEnabled");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_SetAllButtonsEnabled) == 0x000001, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_SetAllButtonsEnabled");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_SetAllButtonsEnabled, Is_Enabled) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_SetAllButtonsEnabled::Is_Enabled' has a wrong offset!");

// Function WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C.SetAllowedContinueButton
// 0x0001 (0x0001 - 0x0000)
struct WBP_BodyTypeSelectScreen_CM_C_SetAllowedContinueButton final 
{
public:
	bool                                          Allowed;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BodyTypeSelectScreen_CM_C_SetAllowedContinueButton) == 0x000001, "Wrong alignment on WBP_BodyTypeSelectScreen_CM_C_SetAllowedContinueButton");
static_assert(sizeof(WBP_BodyTypeSelectScreen_CM_C_SetAllowedContinueButton) == 0x000001, "Wrong size on WBP_BodyTypeSelectScreen_CM_C_SetAllowedContinueButton");
static_assert(offsetof(WBP_BodyTypeSelectScreen_CM_C_SetAllowedContinueButton, Allowed) == 0x000000, "Member 'WBP_BodyTypeSelectScreen_CM_C_SetAllowedContinueButton::Allowed' has a wrong offset!");

}

