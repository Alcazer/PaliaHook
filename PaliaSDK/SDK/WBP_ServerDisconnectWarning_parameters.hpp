#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerDisconnectWarning

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_ServerDisconnectWarning.WBP_ServerDisconnectWarning_C.ExecuteUbergraph_WBP_ServerDisconnectWarning
// 0x0160 (0x0160 - 0x0000)
struct WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               K2Node_DynamicCast_AsValeria_Player_Controller;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0020(0x0018)()
	double                                        CallFunc_GetNetLastReceivedDeltaSeconds_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D2[0x1];                                     // 0x00D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00D4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D3[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BuildIsShipping_ReturnValue;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BuildIsShipping_ReturnValue_1;            // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D4[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               K2Node_DynamicCast_AsValeria_Player_Controller_1;  // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D5[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetNetLastReceivedDeltaSeconds_ReturnValue_1; // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D6[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning) == 0x000008, "Wrong alignment on WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning");
static_assert(sizeof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning) == 0x000160, "Wrong size on WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, EntryPoint) == 0x000000, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, K2Node_DynamicCast_AsValeria_Player_Controller) == 0x000010, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::K2Node_DynamicCast_AsValeria_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_GetText_ReturnValue) == 0x000020, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_GetNetLastReceivedDeltaSeconds_ReturnValue) == 0x000038, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_GetNetLastReceivedDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000040, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, K2Node_MakeArray_Array) == 0x0000A8, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000D1, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_IsVisible_ReturnValue) == 0x0000D2, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, K2Node_CreateDelegate_OutputDelegate) == 0x0000D4, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000E8, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_BuildIsShipping_ReturnValue) == 0x0000F0, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_BuildIsShipping_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_BuildIsShipping_ReturnValue_1) == 0x0000F1, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_BuildIsShipping_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000F8, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, K2Node_DynamicCast_AsValeria_Player_Controller_1) == 0x000100, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::K2Node_DynamicCast_AsValeria_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, K2Node_DynamicCast_bSuccess_1) == 0x000108, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_GetNetLastReceivedDeltaSeconds_ReturnValue_1) == 0x000110, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_GetNetLastReceivedDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000118, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000120, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_Concat_StrStr_ReturnValue) == 0x000130, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, K2Node_CreateDelegate_OutputDelegate_1) == 0x000140, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000150, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000158, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x00015C, "Member 'WBP_ServerDisconnectWarning_C_ExecuteUbergraph_WBP_ServerDisconnectWarning::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

}

