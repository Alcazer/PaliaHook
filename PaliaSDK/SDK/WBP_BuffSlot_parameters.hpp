#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BuffSlot

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_BuffSlot.WBP_BuffSlot_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_BuffSlot_C_BP_OnItemExpansionChanged final 
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BuffSlot_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_BuffSlot_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_BuffSlot_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_BuffSlot_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_BuffSlot_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_BuffSlot_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_BuffSlot.WBP_BuffSlot_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_BuffSlot_C_BP_OnItemSelectionChanged final 
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BuffSlot_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_BuffSlot_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_BuffSlot_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_BuffSlot_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_BuffSlot_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_BuffSlot_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_BuffSlot.WBP_BuffSlot_C.ExecuteUbergraph_WBP_BuffSlot
// 0x0098 (0x0098 - 0x0000)
struct WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E79[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7B[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBuffComponent*                         CallFunc_GetBuffs_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7C[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPercentUsedFromActivation_ReturnValue; // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_BuffSlotTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_ListItem_Buff_C*                    K2Node_DynamicCast_AsBP_List_Item_Buff;            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot) == 0x000008, "Wrong alignment on WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot");
static_assert(sizeof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot) == 0x000098, "Wrong size on WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, EntryPoint) == 0x000000, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, K2Node_Event_bIsExpanded) == 0x000004, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, K2Node_Event_bIsSelected) == 0x000010, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, K2Node_Event_MyGeometry) == 0x000014, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, CallFunc_GetValeriaCharacter_OutResult) == 0x000050, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000058, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, CallFunc_GetBuffs_ReturnValue) == 0x000060, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::CallFunc_GetBuffs_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, CallFunc_GetPercentUsedFromActivation_ReturnValue) == 0x00006C, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::CallFunc_GetPercentUsedFromActivation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, CallFunc_GetOwningPlayer_ReturnValue) == 0x000070, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, K2Node_Event_ListItemObject) == 0x000078, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, CallFunc_Create_ReturnValue) == 0x000080, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, K2Node_DynamicCast_AsBP_List_Item_Buff) == 0x000088, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::K2Node_DynamicCast_AsBP_List_Item_Buff' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'WBP_BuffSlot_C_ExecuteUbergraph_WBP_BuffSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_BuffSlot.WBP_BuffSlot_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_BuffSlot_C_OnListItemObjectSet final 
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BuffSlot_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_BuffSlot_C_OnListItemObjectSet");
static_assert(sizeof(WBP_BuffSlot_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_BuffSlot_C_OnListItemObjectSet");
static_assert(offsetof(WBP_BuffSlot_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_BuffSlot_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_BuffSlot.WBP_BuffSlot_C.RemoveBuff
// 0x0030 (0x0030 - 0x0000)
struct WBP_BuffSlot_C_RemoveBuff final 
{
public:
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult;     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7E[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBuffComponent*                         CallFunc_GetBuffs_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BuffSlot_C_RemoveBuff) == 0x000008, "Wrong alignment on WBP_BuffSlot_C_RemoveBuff");
static_assert(sizeof(WBP_BuffSlot_C_RemoveBuff) == 0x000030, "Wrong size on WBP_BuffSlot_C_RemoveBuff");
static_assert(offsetof(WBP_BuffSlot_C_RemoveBuff, CallFunc_GetValeriaPlayerController_OutResult) == 0x000000, "Member 'WBP_BuffSlot_C_RemoveBuff::CallFunc_GetValeriaPlayerController_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_RemoveBuff, CallFunc_GetValeriaPlayerController_ReturnValue) == 0x000008, "Member 'WBP_BuffSlot_C_RemoveBuff::CallFunc_GetValeriaPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_RemoveBuff, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'WBP_BuffSlot_C_RemoveBuff::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_RemoveBuff, CallFunc_GetValeriaCharacter_OutResult) == 0x000011, "Member 'WBP_BuffSlot_C_RemoveBuff::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_RemoveBuff, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000018, "Member 'WBP_BuffSlot_C_RemoveBuff::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_RemoveBuff, K2Node_SwitchEnum_CmpSuccess_1) == 0x000020, "Member 'WBP_BuffSlot_C_RemoveBuff::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_RemoveBuff, CallFunc_GetBuffs_ReturnValue) == 0x000028, "Member 'WBP_BuffSlot_C_RemoveBuff::CallFunc_GetBuffs_ReturnValue' has a wrong offset!");

// Function WBP_BuffSlot.WBP_BuffSlot_C.SetBuffActivationForSlot
// 0x03F0 (0x03F0 - 0x0000)
struct WBP_BuffSlot_C_SetBuffActivationForSlot final 
{
public:
	struct FBuffActivation                        Param_BuffActivation;                              // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          NewLocalVar;                                       // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E80[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBuffConfig                            BuffConfig;                                        // 0x0050(0x0098)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E81[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBuffConfig                            CallFunc_GetBuffConfigById_ReturnValue;            // 0x00F0(0x0098)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E82[0x5];                                     // 0x018B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E83[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01A0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0200(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x021B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x021D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x021E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E84[0x1];                                     // 0x021F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBuffComponent*                         CallFunc_GetBuffs_ReturnValue;                     // 0x0228(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E85[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPercentUsedFromActivation_ReturnValue; // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E86[0x8];                                     // 0x0238(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0240(0x00D0)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0310(0x00D0)()
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BuffSlot_C_SetBuffActivationForSlot) == 0x000010, "Wrong alignment on WBP_BuffSlot_C_SetBuffActivationForSlot");
static_assert(sizeof(WBP_BuffSlot_C_SetBuffActivationForSlot) == 0x0003F0, "Wrong size on WBP_BuffSlot_C_SetBuffActivationForSlot");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, Param_BuffActivation) == 0x000000, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::Param_BuffActivation' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, NewLocalVar) == 0x000048, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, BuffConfig) == 0x000050, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::BuffConfig' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, Temp_byte_Variable) == 0x0000E8, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_GetBuffConfigById_ReturnValue) == 0x0000F0, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_GetBuffConfigById_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, K2Node_SwitchEnum_CmpSuccess) == 0x000188, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000189, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, Temp_byte_Variable_1) == 0x00018A, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000190, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_Greater_IntInt_ReturnValue) == 0x000198, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, K2Node_MakeStruct_FormatArgumentData) == 0x0001A0, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, K2Node_MakeArray_Array) == 0x0001F0, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_Format_ReturnValue) == 0x000200, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, Temp_bool_Variable) == 0x000218, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, K2Node_Select_Default) == 0x000219, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, Temp_byte_Variable_2) == 0x00021A, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, Temp_byte_Variable_3) == 0x00021B, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, Temp_bool_Variable_1) == 0x00021C, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, K2Node_Select_Default_1) == 0x00021D, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_GetValeriaCharacter_OutResult) == 0x00021E, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000220, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_GetBuffs_ReturnValue) == 0x000228, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_GetBuffs_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, K2Node_SwitchEnum_CmpSuccess_1) == 0x000230, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_GetPercentUsedFromActivation_ReturnValue) == 0x000234, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_GetPercentUsedFromActivation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, K2Node_MakeStruct_SlateBrush) == 0x000240, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, K2Node_MakeStruct_SlateBrush_1) == 0x000310, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0003E0, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_SetBuffActivationForSlot, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0003E8, "Member 'WBP_BuffSlot_C_SetBuffActivationForSlot::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_BuffSlot.WBP_BuffSlot_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_BuffSlot_C_Tick final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BuffSlot_C_Tick) == 0x000004, "Wrong alignment on WBP_BuffSlot_C_Tick");
static_assert(sizeof(WBP_BuffSlot_C_Tick) == 0x00003C, "Wrong size on WBP_BuffSlot_C_Tick");
static_assert(offsetof(WBP_BuffSlot_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_BuffSlot_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_BuffSlot_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_BuffSlot_C_Tick::InDeltaTime' has a wrong offset!");

}

