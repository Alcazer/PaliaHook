#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NameValidator_AllowList_1Alphabetical_PreferredName

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NameValidator_AllowList_1Alphabetical_PreferredName.BP_NameValidator_AllowList_1Alphabetical_PreferredName_C.IsNameValid
// 0x00C8 (0x00C8 - 0x0000)
struct BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid final 
{
public:
	class FString                                 InCharacterName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45A7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AllowedCharacters;                                 // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45A8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x0030(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45A9[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45AA[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45AB[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45AC[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetCharacterArrayFromString_ReturnValue_1; // 0x0080(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45AD[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45AE[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid) == 0x000008, "Wrong alignment on BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid");
static_assert(sizeof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid) == 0x0000C8, "Wrong size on BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, InCharacterName) == 0x000000, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::InCharacterName' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, ReturnValue) == 0x000010, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, AllowedCharacters) == 0x000018, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::AllowedCharacters' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, Valid) == 0x000028, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::Valid' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_GetCharacterArrayFromString_ReturnValue) == 0x000030, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_GetCharacterArrayFromString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, Temp_bool_True_if_break_was_hit_Variable) == 0x00004D, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, Temp_int_Array_Index_Variable) == 0x000050, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Not_PreBool_ReturnValue) == 0x000068, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_BooleanAND_ReturnValue) == 0x000069, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, Temp_int_Array_Index_Variable_1) == 0x00006C, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, Temp_int_Loop_Counter_Variable_1) == 0x000070, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Add_IntInt_ReturnValue_1) == 0x000074, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Contains_ReturnValue) == 0x000078, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_GetCharacterArrayFromString_ReturnValue_1) == 0x000080, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_GetCharacterArrayFromString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A8, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A9, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0000AA, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x0000AB, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_EqualEqual_StrStr_ReturnValue_3) == 0x0000AC, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_EqualEqual_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B0, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_BooleanOR_ReturnValue) == 0x0000C0, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_BooleanOR_ReturnValue_1) == 0x0000C1, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_BooleanOR_ReturnValue_2) == 0x0000C2, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000C3, "Member 'BP_NameValidator_AllowList_1Alphabetical_PreferredName_C_IsNameValid::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

}

