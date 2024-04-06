#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NameValidator_MaxCharacters_Apostrophe

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NameValidator_MaxCharacters_Apostrophe.BP_NameValidator_MaxCharacters_Apostrophe_C.IsNameValid
// 0x00F8 (0x00F8 - 0x0000)
struct BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid final 
{
public:
	class FString                                 InCharacterName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4425[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNameValid_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4426[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4427[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
};
static_assert(alignof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid) == 0x000008, "Wrong alignment on BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid");
static_assert(sizeof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid) == 0x0000F8, "Wrong size on BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, InCharacterName) == 0x000000, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::InCharacterName' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, ReturnValue) == 0x000010, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_IsNameValid_ReturnValue) == 0x000028, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_IsNameValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000030, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000058, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000060, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000C0, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, K2Node_MakeArray_Array) == 0x0000D0, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_IsNameValid::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function BP_NameValidator_MaxCharacters_Apostrophe.BP_NameValidator_MaxCharacters_Apostrophe_C.RemoveCharactersFromString
// 0x0098 (0x0098 - 0x0000)
struct BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString final 
{
public:
	class FString                                 String;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Characters;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Result;                                            // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 AllowedCharacters;                                 // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x0040(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetCharacterArrayFromString_ReturnValue_1; // 0x0050(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4428[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4429[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString) == 0x000008, "Wrong alignment on BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString");
static_assert(sizeof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString) == 0x000098, "Wrong size on BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, String) == 0x000000, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::String' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, Characters) == 0x000010, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::Characters' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, Result) == 0x000020, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::Result' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, AllowedCharacters) == 0x000030, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::AllowedCharacters' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_GetCharacterArrayFromString_ReturnValue) == 0x000040, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_GetCharacterArrayFromString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_GetCharacterArrayFromString_ReturnValue_1) == 0x000050, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_GetCharacterArrayFromString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, Temp_int_Array_Index_Variable) == 0x000060, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_Array_Contains_ReturnValue) == 0x000078, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_Not_PreBool_ReturnValue) == 0x000080, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_Less_IntInt_ReturnValue) == 0x000081, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString, CallFunc_Concat_StrStr_ReturnValue) == 0x000088, "Member 'BP_NameValidator_MaxCharacters_Apostrophe_C_RemoveCharactersFromString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

}

