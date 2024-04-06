#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MaintenanceMessage_CM

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_MaintenanceMessage_CM.WBP_MaintenanceMessage_CM_C.ExecuteUbergraph_WBP_MaintenanceMessage_CM
// 0x0038 (0x0038 - 0x0000)
struct WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50B4[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PregameUIManager_C*                K2Node_DynamicCast_AsWBP_Pregame_UIManager;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM) == 0x000008, "Wrong alignment on WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM");
static_assert(sizeof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM) == 0x000038, "Wrong size on WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM, EntryPoint) == 0x000000, "Member 'WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM, CallFunc_IsEmpty_ReturnValue) == 0x000014, "Member 'WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000020, "Member 'WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM, K2Node_DynamicCast_AsWBP_Pregame_UIManager) == 0x000028, "Member 'WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM::K2Node_DynamicCast_AsWBP_Pregame_UIManager' has a wrong offset!");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_MaintenanceMessage_CM_C_ExecuteUbergraph_WBP_MaintenanceMessage_CM::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_MaintenanceMessage_CM.WBP_MaintenanceMessage_CM_C.SetAndShowMessage
// 0x0028 (0x0028 - 0x0000)
struct WBP_MaintenanceMessage_CM_C_SetAndShowMessage final 
{
public:
	class FString                                 StatusText;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_MaintenanceMessage_CM_C_SetAndShowMessage) == 0x000008, "Wrong alignment on WBP_MaintenanceMessage_CM_C_SetAndShowMessage");
static_assert(sizeof(WBP_MaintenanceMessage_CM_C_SetAndShowMessage) == 0x000028, "Wrong size on WBP_MaintenanceMessage_CM_C_SetAndShowMessage");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_SetAndShowMessage, StatusText) == 0x000000, "Member 'WBP_MaintenanceMessage_CM_C_SetAndShowMessage::StatusText' has a wrong offset!");
static_assert(offsetof(WBP_MaintenanceMessage_CM_C_SetAndShowMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_MaintenanceMessage_CM_C_SetAndShowMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

