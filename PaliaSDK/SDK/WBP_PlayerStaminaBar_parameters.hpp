#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerStaminaBar

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerStaminaBar.WBP_PlayerStaminaBar_C.CanShowStaminaBar
// 0x0048 (0x0048 - 0x0000)
struct WBP_PlayerStaminaBar_C_CanShowStaminaBar final 
{
public:
	bool                                          CanShow;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DDC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  OwningPawn;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DDD[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DDE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInCinematicMode_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DDF[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               CallFunc_GetCurrentStateType_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanNOR_ReturnValue;                   // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStaminaBar_C_CanShowStaminaBar) == 0x000008, "Wrong alignment on WBP_PlayerStaminaBar_C_CanShowStaminaBar");
static_assert(sizeof(WBP_PlayerStaminaBar_C_CanShowStaminaBar) == 0x000048, "Wrong size on WBP_PlayerStaminaBar_C_CanShowStaminaBar");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CanShow) == 0x000000, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CanShow' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, OwningPawn) == 0x000008, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::OwningPawn' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_IsLocallyControlled_ReturnValue) == 0x000011, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000018, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_GetValeriaPlayerController_OutResult) == 0x000020, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_GetValeriaPlayerController_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_GetValeriaPlayerController_ReturnValue) == 0x000028, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_GetValeriaPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_IsInCinematicMode_ReturnValue) == 0x000030, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_IsInCinematicMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, K2Node_SwitchEnum_CmpSuccess) == 0x000031, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_GetValeriaCharacter_OutResult) == 0x000032, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000038, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, K2Node_SwitchEnum_CmpSuccess_1) == 0x000040, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_GetCurrentStateType_ReturnValue) == 0x000041, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_GetCurrentStateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_Array_Contains_ReturnValue) == 0x000042, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_CanShowStaminaBar, CallFunc_BooleanNOR_ReturnValue) == 0x000043, "Member 'WBP_PlayerStaminaBar_C_CanShowStaminaBar::CallFunc_BooleanNOR_ReturnValue' has a wrong offset!");

// Function WBP_PlayerStaminaBar.WBP_PlayerStaminaBar_C.ExecuteUbergraph_WBP_PlayerStaminaBar
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar) == 0x000008, "Wrong alignment on WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar");
static_assert(sizeof(WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar) == 0x000010, "Wrong size on WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar");
static_assert(offsetof(WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar, EntryPoint) == 0x000000, "Member 'WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_PlayerStaminaBar_C_ExecuteUbergraph_WBP_PlayerStaminaBar::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WBP_PlayerStaminaBar.WBP_PlayerStaminaBar_C.HandleCharacterStateChanged
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_PlayerStaminaBar_C_HandleCharacterStateChanged final 
{
public:
	class UCharacterStateMachineComponent*        Csm;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FCharacterStateChangeParams            Params_0;                                          // 0x0008(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                          CallFunc_CanShowStaminaBar_CanShow;                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStaminaBar_C_HandleCharacterStateChanged) == 0x000008, "Wrong alignment on WBP_PlayerStaminaBar_C_HandleCharacterStateChanged");
static_assert(sizeof(WBP_PlayerStaminaBar_C_HandleCharacterStateChanged) == 0x0001B8, "Wrong size on WBP_PlayerStaminaBar_C_HandleCharacterStateChanged");
static_assert(offsetof(WBP_PlayerStaminaBar_C_HandleCharacterStateChanged, Csm) == 0x000000, "Member 'WBP_PlayerStaminaBar_C_HandleCharacterStateChanged::Csm' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_HandleCharacterStateChanged, Params_0) == 0x000008, "Member 'WBP_PlayerStaminaBar_C_HandleCharacterStateChanged::Params_0' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_HandleCharacterStateChanged, CallFunc_CanShowStaminaBar_CanShow) == 0x0001B0, "Member 'WBP_PlayerStaminaBar_C_HandleCharacterStateChanged::CallFunc_CanShowStaminaBar_CanShow' has a wrong offset!");

// Function WBP_PlayerStaminaBar.WBP_PlayerStaminaBar_C.OnVitalsChanged
// 0x0098 (0x0098 - 0x0000)
struct WBP_PlayerStaminaBar_C_OnVitalsChanged final 
{
public:
	class UVitalsComponent*                       Vitals;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  OwningPawn;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         StaminaMax;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OldPercent;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewPercent;                                        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE2[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetVitalMax_ReturnValue;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetVital_ReturnValue;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE3[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE4[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanShowStaminaBar_CanShow;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE5[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_UpdateStaminaBar_Value_ImplicitCast;      // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_OldPercent_ImplicitCast;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_UpdateStaminaBar_Value_ImplicitCast_1;    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE6[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStaminaBar_C_OnVitalsChanged) == 0x000008, "Wrong alignment on WBP_PlayerStaminaBar_C_OnVitalsChanged");
static_assert(sizeof(WBP_PlayerStaminaBar_C_OnVitalsChanged) == 0x000098, "Wrong size on WBP_PlayerStaminaBar_C_OnVitalsChanged");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, Vitals) == 0x000000, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::Vitals' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, OwningPawn) == 0x000008, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::OwningPawn' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, StaminaMax) == 0x000010, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::StaminaMax' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, OldPercent) == 0x000018, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::OldPercent' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, NewPercent) == 0x000020, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::NewPercent' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_K2_GetScalarParameterValue_ReturnValue) == 0x000028, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_K2_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x00002D, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Greater_IntInt_ReturnValue) == 0x00002E, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000030, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_GetVitalMax_ReturnValue) == 0x000034, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_GetVitalMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_IsVisible_ReturnValue) == 0x000038, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000039, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00003A, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00003B, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_GetVital_ReturnValue) == 0x00003C, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_GetVital_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000040, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000048, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_FClamp_ReturnValue) == 0x000050, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_K2_SetTimer_ReturnValue) == 0x000060, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_CanShowStaminaBar_CanShow) == 0x000068, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_CanShowStaminaBar_CanShow' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000069, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_BooleanAND_ReturnValue) == 0x00006A, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_UpdateStaminaBar_Value_ImplicitCast) == 0x00006C, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_UpdateStaminaBar_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, K2Node_VariableSet_OldPercent_ImplicitCast) == 0x000070, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::K2Node_VariableSet_OldPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_UpdateStaminaBar_Value_ImplicitCast_1) == 0x000078, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_UpdateStaminaBar_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000080, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_OnVitalsChanged, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000090, "Member 'WBP_PlayerStaminaBar_C_OnVitalsChanged::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerStaminaBar.WBP_PlayerStaminaBar_C.Setup
// 0x0088 (0x0088 - 0x0000)
struct WBP_PlayerStaminaBar_C_Setup final 
{
public:
	class UVitalsComponent*                       Vitals;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValeriaGASComponent*                   GAS;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      ValeriaCharacter;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE7[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE8[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE9[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UVitalsComponent* Vitals)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCharacterStateMachineComponent* Csm, const struct FCharacterStateChangeParams& Params)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UVitalsComponent* Vitals)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStaminaBar_C_Setup) == 0x000008, "Wrong alignment on WBP_PlayerStaminaBar_C_Setup");
static_assert(sizeof(WBP_PlayerStaminaBar_C_Setup) == 0x000088, "Wrong size on WBP_PlayerStaminaBar_C_Setup");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, Vitals) == 0x000000, "Member 'WBP_PlayerStaminaBar_C_Setup::Vitals' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, GAS) == 0x000008, "Member 'WBP_PlayerStaminaBar_C_Setup::GAS' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, ValeriaCharacter) == 0x000010, "Member 'WBP_PlayerStaminaBar_C_Setup::ValeriaCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_PlayerStaminaBar_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_PlayerStaminaBar_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'WBP_PlayerStaminaBar_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'WBP_PlayerStaminaBar_C_Setup::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, K2Node_DynamicCast_AsValeria_Character) == 0x000048, "Member 'WBP_PlayerStaminaBar_C_Setup::K2Node_DynamicCast_AsValeria_Character' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_PlayerStaminaBar_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, CallFunc_IsLocallyControlled_ReturnValue) == 0x000051, "Member 'WBP_PlayerStaminaBar_C_Setup::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, K2Node_CreateDelegate_OutputDelegate_2) == 0x000054, "Member 'WBP_PlayerStaminaBar_C_Setup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, K2Node_CreateDelegate_OutputDelegate_3) == 0x000064, "Member 'WBP_PlayerStaminaBar_C_Setup::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, K2Node_CreateDelegate_OutputDelegate_4) == 0x000074, "Member 'WBP_PlayerStaminaBar_C_Setup::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000084, "Member 'WBP_PlayerStaminaBar_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerStaminaBar.WBP_PlayerStaminaBar_C.UpdateStaminaBar
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerStaminaBar_C_UpdateStaminaBar final 
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStaminaBar_C_UpdateStaminaBar) == 0x000004, "Wrong alignment on WBP_PlayerStaminaBar_C_UpdateStaminaBar");
static_assert(sizeof(WBP_PlayerStaminaBar_C_UpdateStaminaBar) == 0x000008, "Wrong size on WBP_PlayerStaminaBar_C_UpdateStaminaBar");
static_assert(offsetof(WBP_PlayerStaminaBar_C_UpdateStaminaBar, Value) == 0x000000, "Member 'WBP_PlayerStaminaBar_C_UpdateStaminaBar::Value' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStaminaBar_C_UpdateStaminaBar, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_PlayerStaminaBar_C_UpdateStaminaBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

