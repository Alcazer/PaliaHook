#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KeyRebindValidator_FilterSpecialKeys

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "KeyRebinding_structs.hpp"
#include "Struct_FilterSpecialKeyData_structs.hpp"


namespace SDK::Params
{

// Function BP_KeyRebindValidator_FilterSpecialKeys.BP_KeyRebindValidator_FilterSpecialKeys_C.TestReBindingValidation
// 0x00A8 (0x00A8 - 0x0000)
struct BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation final 
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B08[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           InputAction;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EKeyRebind_KeySlot                            Slot;                                              // 0x0010(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B09[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyRebind_InputKey                    Keys;                                              // 0x0018(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                           OutErrorMessages;                                  // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EKeyRebindValidationResult                    ReturnValue;                                       // 0x0058(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B0A[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_FilterSpecialKeyData           CallFunc_Array_Get_Item;                           // 0x0068(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsValid_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B0B[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B0C[0x1];                                     // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation) == 0x000008, "Wrong alignment on BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation");
static_assert(sizeof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation) == 0x0000A8, "Wrong size on BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, InputType) == 0x000000, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::InputType' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, InputAction) == 0x000008, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::InputAction' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, Slot) == 0x000010, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::Slot' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, Keys) == 0x000018, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::Keys' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, OutErrorMessages) == 0x000048, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::OutErrorMessages' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, ReturnValue) == 0x000058, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, Temp_int_Array_Index_Variable) == 0x00005C, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, CallFunc_Key_IsValid_ReturnValue) == 0x000098, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::CallFunc_Key_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, CallFunc_Array_Length_ReturnValue) == 0x00009C, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0000A0, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, CallFunc_Less_IntInt_ReturnValue) == 0x0000A1, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, CallFunc_BooleanAND_ReturnValue) == 0x0000A2, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation, CallFunc_Array_Add_ReturnValue) == 0x0000A4, "Member 'BP_KeyRebindValidator_FilterSpecialKeys_C_TestReBindingValidation::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

