#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NameValidator_TooShort_FullName

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NameValidator_TooShort_FullName.BP_NameValidator_TooShort_FullName_C.IsNameValid
// 0x0020 (0x0020 - 0x0000)
struct BP_NameValidator_TooShort_FullName_C_IsNameValid final 
{
public:
	class FString                                 InCharacterName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DB6[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NameValidator_TooShort_FullName_C_IsNameValid) == 0x000008, "Wrong alignment on BP_NameValidator_TooShort_FullName_C_IsNameValid");
static_assert(sizeof(BP_NameValidator_TooShort_FullName_C_IsNameValid) == 0x000020, "Wrong size on BP_NameValidator_TooShort_FullName_C_IsNameValid");
static_assert(offsetof(BP_NameValidator_TooShort_FullName_C_IsNameValid, InCharacterName) == 0x000000, "Member 'BP_NameValidator_TooShort_FullName_C_IsNameValid::InCharacterName' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_TooShort_FullName_C_IsNameValid, ReturnValue) == 0x000010, "Member 'BP_NameValidator_TooShort_FullName_C_IsNameValid::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_TooShort_FullName_C_IsNameValid, CallFunc_Len_ReturnValue) == 0x000014, "Member 'BP_NameValidator_TooShort_FullName_C_IsNameValid::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_TooShort_FullName_C_IsNameValid, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'BP_NameValidator_TooShort_FullName_C_IsNameValid::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

