#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NotificationStack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_NotificationStack.WBP_NotificationStack_C.HandleNoficiationDismissed
// 0x0038 (0x0038 - 0x0000)
struct WBP_NotificationStack_C_HandleNoficiationDismissed final 
{
public:
	class UVALUI_NotificationQueue*               Param_NotificationQueue;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  AffectedNotificationId;                            // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                NotificationWidget;                                // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationStack_C_HandleNoficiationDismissed) == 0x000008, "Wrong alignment on WBP_NotificationStack_C_HandleNoficiationDismissed");
static_assert(sizeof(WBP_NotificationStack_C_HandleNoficiationDismissed) == 0x000038, "Wrong size on WBP_NotificationStack_C_HandleNoficiationDismissed");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationDismissed, Param_NotificationQueue) == 0x000000, "Member 'WBP_NotificationStack_C_HandleNoficiationDismissed::Param_NotificationQueue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationDismissed, AffectedNotificationId) == 0x000008, "Member 'WBP_NotificationStack_C_HandleNoficiationDismissed::AffectedNotificationId' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationDismissed, NotificationWidget) == 0x000018, "Member 'WBP_NotificationStack_C_HandleNoficiationDismissed::NotificationWidget' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationDismissed, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_NotificationStack_C_HandleNoficiationDismissed::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationDismissed, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WBP_NotificationStack_C_HandleNoficiationDismissed::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationDismissed, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'WBP_NotificationStack_C_HandleNoficiationDismissed::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationDismissed, CallFunc_Array_RemoveItem_ReturnValue) == 0x000035, "Member 'WBP_NotificationStack_C_HandleNoficiationDismissed::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function WBP_NotificationStack.WBP_NotificationStack_C.HandleNoficiationPushed
// 0x0028 (0x0028 - 0x0000)
struct WBP_NotificationStack_C_HandleNoficiationPushed final 
{
public:
	class UVALUI_NotificationQueue*               Param_NotificationQueue;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  AffectedNotificationId;                            // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationStack_C_HandleNoficiationPushed) == 0x000008, "Wrong alignment on WBP_NotificationStack_C_HandleNoficiationPushed");
static_assert(sizeof(WBP_NotificationStack_C_HandleNoficiationPushed) == 0x000028, "Wrong size on WBP_NotificationStack_C_HandleNoficiationPushed");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationPushed, Param_NotificationQueue) == 0x000000, "Member 'WBP_NotificationStack_C_HandleNoficiationPushed::Param_NotificationQueue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationPushed, AffectedNotificationId) == 0x000008, "Member 'WBP_NotificationStack_C_HandleNoficiationPushed::AffectedNotificationId' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationPushed, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'WBP_NotificationStack_C_HandleNoficiationPushed::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationPushed, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'WBP_NotificationStack_C_HandleNoficiationPushed::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_HandleNoficiationPushed, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'WBP_NotificationStack_C_HandleNoficiationPushed::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_NotificationStack.WBP_NotificationStack_C.SetNotificationQueue
// 0x0028 (0x0028 - 0x0000)
struct WBP_NotificationStack_C_SetNotificationQueue final 
{
public:
	class UVALUI_NotificationQueue*               Notification_Queue;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId, class UWidget* NotificationWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationStack_C_SetNotificationQueue) == 0x000008, "Wrong alignment on WBP_NotificationStack_C_SetNotificationQueue");
static_assert(sizeof(WBP_NotificationStack_C_SetNotificationQueue) == 0x000028, "Wrong size on WBP_NotificationStack_C_SetNotificationQueue");
static_assert(offsetof(WBP_NotificationStack_C_SetNotificationQueue, Notification_Queue) == 0x000000, "Member 'WBP_NotificationStack_C_SetNotificationQueue::Notification_Queue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_SetNotificationQueue, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_NotificationStack_C_SetNotificationQueue::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_SetNotificationQueue, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_NotificationStack_C_SetNotificationQueue::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function WBP_NotificationStack.WBP_NotificationStack_C.ShowNotification
// 0x0038 (0x0038 - 0x0000)
struct WBP_NotificationStack_C_ShowNotification final 
{
public:
	struct FGuid                                  NotificationId;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetNotificationById_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D49[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationStack_C_ShowNotification) == 0x000008, "Wrong alignment on WBP_NotificationStack_C_ShowNotification");
static_assert(sizeof(WBP_NotificationStack_C_ShowNotification) == 0x000038, "Wrong size on WBP_NotificationStack_C_ShowNotification");
static_assert(offsetof(WBP_NotificationStack_C_ShowNotification, NotificationId) == 0x000000, "Member 'WBP_NotificationStack_C_ShowNotification::NotificationId' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_ShowNotification, CallFunc_GetNotificationById_ReturnValue) == 0x000010, "Member 'WBP_NotificationStack_C_ShowNotification::CallFunc_GetNotificationById_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_ShowNotification, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'WBP_NotificationStack_C_ShowNotification::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_ShowNotification, K2Node_MakeStruct_Margin) == 0x00001C, "Member 'WBP_NotificationStack_C_ShowNotification::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_ShowNotification, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000030, "Member 'WBP_NotificationStack_C_ShowNotification::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function WBP_NotificationStack.WBP_NotificationStack_C.UpdateInputRoutingForNotifications
// 0x0068 (0x0068 - 0x0000)
struct WBP_NotificationStack_C_UpdateInputRoutingForNotifications final 
{
public:
	bool                                          bHasFoundAnInputRoutingNotification;               // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4B[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4C[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IS6UI_InputActionHandlingWidgetInterface> K2Node_DynamicCast_AsS6UI_Input_Action_Handling_Widget_Interface; // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class US6UI_InputActionHandlingWidgetComponent* CallFunc_GetInputActionHandlingComponent_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications) == 0x000008, "Wrong alignment on WBP_NotificationStack_C_UpdateInputRoutingForNotifications");
static_assert(sizeof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications) == 0x000068, "Wrong size on WBP_NotificationStack_C_UpdateInputRoutingForNotifications");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, bHasFoundAnInputRoutingNotification) == 0x000000, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::bHasFoundAnInputRoutingNotification' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, CallFunc_GetAllChildren_ReturnValue) == 0x000018, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, K2Node_DynamicCast_AsS6UI_Input_Action_Handling_Widget_Interface) == 0x000040, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::K2Node_DynamicCast_AsS6UI_Input_Action_Handling_Widget_Interface' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, CallFunc_GetInputActionHandlingComponent_ReturnValue) == 0x000058, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::CallFunc_GetInputActionHandlingComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationStack_C_UpdateInputRoutingForNotifications, CallFunc_DoesImplementInterface_ReturnValue) == 0x000060, "Member 'WBP_NotificationStack_C_UpdateInputRoutingForNotifications::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");

}

