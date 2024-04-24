#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BoundInputActionStateIndicator

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "EnhancedInput_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_BoundInputActionStateIndicator.WBP_BoundInputActionStateIndicator_C.ExecuteUbergraph_WBP_BoundInputActionStateIndicator
// 0x0040 (0x0040 - 0x0000)
struct WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Event_Key;                                  // 0x0008(0x0018)(ConstParm, HasGetValueTypeHash)
	ETriggerEvent                                 K2Node_Event_LatestTriggerEvent;                   // 0x0020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA1[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_OngoingDuration;                      // 0x0024(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_HoldTimeThreshold;                    // 0x0028(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA2[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateState_OngoingDuration_ImplicitCast; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateState_HoldTimeThreshold_ImplicitCast; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator) == 0x000008, "Wrong alignment on WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator");
static_assert(sizeof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator) == 0x000040, "Wrong size on WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator, EntryPoint) == 0x000000, "Member 'WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator, K2Node_Event_Key) == 0x000008, "Member 'WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator::K2Node_Event_Key' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator, K2Node_Event_LatestTriggerEvent) == 0x000020, "Member 'WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator::K2Node_Event_LatestTriggerEvent' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator, K2Node_Event_OngoingDuration) == 0x000024, "Member 'WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator::K2Node_Event_OngoingDuration' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator, K2Node_Event_HoldTimeThreshold) == 0x000028, "Member 'WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator::K2Node_Event_HoldTimeThreshold' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator, K2Node_Event_IsDesignTime) == 0x00002C, "Member 'WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator, CallFunc_UpdateState_OngoingDuration_ImplicitCast) == 0x000030, "Member 'WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator::CallFunc_UpdateState_OngoingDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator, CallFunc_UpdateState_HoldTimeThreshold_ImplicitCast) == 0x000038, "Member 'WBP_BoundInputActionStateIndicator_C_ExecuteUbergraph_WBP_BoundInputActionStateIndicator::CallFunc_UpdateState_HoldTimeThreshold_ImplicitCast' has a wrong offset!");

// Function WBP_BoundInputActionStateIndicator.WBP_BoundInputActionStateIndicator_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_BoundInputActionStateIndicator_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BoundInputActionStateIndicator_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_BoundInputActionStateIndicator_C_PreConstruct");
static_assert(sizeof(WBP_BoundInputActionStateIndicator_C_PreConstruct) == 0x000001, "Wrong size on WBP_BoundInputActionStateIndicator_C_PreConstruct");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_BoundInputActionStateIndicator_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_BoundInputActionStateIndicator.WBP_BoundInputActionStateIndicator_C.UpdateInputActionState_Implementation
// 0x0028 (0x0028 - 0x0000)
struct WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation final 
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	ETriggerEvent                                 LatestTriggerEvent;                                // 0x0018(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA3[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OngoingDuration;                                   // 0x001C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HoldTimeThreshold;                                 // 0x0020(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation) == 0x000008, "Wrong alignment on WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation");
static_assert(sizeof(WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation) == 0x000028, "Wrong size on WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation, Key) == 0x000000, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation::Key' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation, LatestTriggerEvent) == 0x000018, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation::LatestTriggerEvent' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation, OngoingDuration) == 0x00001C, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation::OngoingDuration' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation, HoldTimeThreshold) == 0x000020, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateInputActionState_Implementation::HoldTimeThreshold' has a wrong offset!");

// Function WBP_BoundInputActionStateIndicator.WBP_BoundInputActionStateIndicator_C.UpdateState
// 0x0128 (0x0128 - 0x0000)
struct WBP_BoundInputActionStateIndicator_C_UpdateState final 
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	ETriggerEvent                                 TriggerEvent;                                      // 0x0018(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OngoingDuration;                                   // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HoldTimeThreshold;                                 // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA5[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETriggerEvent                                 Temp_byte_Variable;                                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA6[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_2;                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_3;                              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETriggerEvent                                 Temp_byte_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA7[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x008C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x009C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x00AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsValid_ReturnValue;                  // 0x00BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA8[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00C4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x00D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CA9[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Select_Default_2;                           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Key_GetDisplayName_ReturnValue;           // 0x0100(0x0018)()
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CAA[0x2];                                     // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BoundInputActionStateIndicator_C_UpdateState) == 0x000008, "Wrong alignment on WBP_BoundInputActionStateIndicator_C_UpdateState");
static_assert(sizeof(WBP_BoundInputActionStateIndicator_C_UpdateState) == 0x000128, "Wrong size on WBP_BoundInputActionStateIndicator_C_UpdateState");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Key) == 0x000000, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Key' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, TriggerEvent) == 0x000018, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::TriggerEvent' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, OngoingDuration) == 0x000020, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::OngoingDuration' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, HoldTimeThreshold) == 0x000028, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::HoldTimeThreshold' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_bool_Variable) == 0x000030, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_struct_Variable) == 0x000034, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_struct_Variable_1) == 0x000044, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_byte_Variable) == 0x000054, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_real_Variable) == 0x000058, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_real_Variable_1) == 0x000060, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_real_Variable_2) == 0x000068, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_real_Variable_3) == 0x000070, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_byte_Variable_1) == 0x000078, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_struct_Variable_2) == 0x00007C, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_struct_Variable_3) == 0x00008C, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_struct_Variable_4) == 0x00009C, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_struct_Variable_5) == 0x0000AC, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_bool_Variable_1) == 0x0000BC, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_byte_Variable_2) == 0x0000BD, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_byte_Variable_3) == 0x0000BE, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, CallFunc_Key_IsValid_ReturnValue) == 0x0000BF, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::CallFunc_Key_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, K2Node_Select_Default) == 0x0000C4, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, K2Node_Select_Default_1) == 0x0000D4, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, CallFunc_FClamp_ReturnValue) == 0x0000F0, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, K2Node_Select_Default_2) == 0x0000F8, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, CallFunc_Key_GetDisplayName_ReturnValue) == 0x000100, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::CallFunc_Key_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000118, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000119, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, K2Node_Select_Default_3) == 0x00011A, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_byte_Variable_4) == 0x00011B, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, Temp_bool_Variable_2) == 0x00011C, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, K2Node_Select_Default_4) == 0x00011D, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_BoundInputActionStateIndicator_C_UpdateState, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000120, "Member 'WBP_BoundInputActionStateIndicator_C_UpdateState::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}

