#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NameValidator_RequireAlphabetics_FullName

#include "Basic.hpp"

#include "ValeriaUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NameValidator_RequireAlphabetics_FullName.BP_NameValidator_RequireAlphabetics_FullName_C
// 0x0008 (0x00A8 - 0x00A0)
class UBP_NameValidator_RequireAlphabetics_FullName_C final  : public UVALUI_NameValidator_Regex
{
public:
	bool                                          Values_Built;                                      // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BAE[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumRequired;                                       // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool IsNameValid(const class FString& InCharacterName, bool CallFunc_IsNameValid_ReturnValue, const class FString& CallFunc_RemoveCharactersFromString_Result, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_Conv_IntToString_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void RemoveCharactersFromString(const class FString& String, const class FString& Characters, class FString* Result, const class FString& AllowedCharacters, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NameValidator_RequireAlphabetics_FullName_C">();
	}
	static class UBP_NameValidator_RequireAlphabetics_FullName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NameValidator_RequireAlphabetics_FullName_C>();
	}
};
static_assert(alignof(UBP_NameValidator_RequireAlphabetics_FullName_C) == 0x000008, "Wrong alignment on UBP_NameValidator_RequireAlphabetics_FullName_C");
static_assert(sizeof(UBP_NameValidator_RequireAlphabetics_FullName_C) == 0x0000A8, "Wrong size on UBP_NameValidator_RequireAlphabetics_FullName_C");
static_assert(offsetof(UBP_NameValidator_RequireAlphabetics_FullName_C, Values_Built) == 0x0000A0, "Member 'UBP_NameValidator_RequireAlphabetics_FullName_C::Values_Built' has a wrong offset!");
static_assert(offsetof(UBP_NameValidator_RequireAlphabetics_FullName_C, NumRequired) == 0x0000A4, "Member 'UBP_NameValidator_RequireAlphabetics_FullName_C::NumRequired' has a wrong offset!");

}

