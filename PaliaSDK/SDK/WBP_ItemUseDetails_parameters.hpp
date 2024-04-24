#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemUseDetails

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemUseDetails.WBP_ItemUseDetails_C.Update
// 0x0128 (0x0128 - 0x0000)
struct WBP_ItemUseDetails_C_Update final 
{
public:
	struct FValeriaItem                           Item;                                              // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVAL_ItemTypeDefinitionAsset*           K2Node_DynamicCast_AsItem_Type_Definition;         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C87[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C88[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C89[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C8A[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C8B[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C8C[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C8D[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_1;                  // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_2;                  // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeColor_G_ImplicitCast;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeColor_R_ImplicitCast;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemUseDetails_C_Update) == 0x000008, "Wrong alignment on WBP_ItemUseDetails_C_Update");
static_assert(sizeof(WBP_ItemUseDetails_C_Update) == 0x000128, "Wrong size on WBP_ItemUseDetails_C_Update");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, Item) == 0x000000, "Member 'WBP_ItemUseDetails_C_Update::Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000060, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000068, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, K2Node_DynamicCast_AsItem_Type_Definition) == 0x000070, "Member 'WBP_ItemUseDetails_C_Update::K2Node_DynamicCast_AsItem_Type_Definition' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'WBP_ItemUseDetails_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Greater_IntInt_ReturnValue) == 0x000079, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_IsValid_ReturnValue) == 0x00007A, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000080, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000088, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000090, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000098, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_BooleanAND_ReturnValue) == 0x0000A8, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_BooleanAND_ReturnValue_1) == 0x0000B8, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000C0, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_MakeColor_ReturnValue) == 0x0000C8, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x0000E0, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000E8, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000F0, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_MakeColor_ReturnValue_1) == 0x0000F8, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_MakeColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_MakeColor_ReturnValue_2) == 0x000108, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_MakeColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000118, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_MakeColor_G_ImplicitCast) == 0x00011C, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_MakeColor_G_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ItemUseDetails_C_Update, CallFunc_MakeColor_R_ImplicitCast) == 0x000120, "Member 'WBP_ItemUseDetails_C_Update::CallFunc_MakeColor_R_ImplicitCast' has a wrong offset!");

}

