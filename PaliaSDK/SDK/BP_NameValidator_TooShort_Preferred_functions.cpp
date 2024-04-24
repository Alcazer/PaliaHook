#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NameValidator_TooShort_Preferred

#include "Basic.hpp"

#include "BP_NameValidator_TooShort_Preferred_classes.hpp"
#include "BP_NameValidator_TooShort_Preferred_parameters.hpp"


namespace SDK
{

// Function BP_NameValidator_TooShort_Preferred.BP_NameValidator_TooShort_Preferred_C.IsNameValid
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCharacterName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Len_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_NameValidator_TooShort_Preferred_C::IsNameValid(const class FString& InCharacterName, int32 CallFunc_Len_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NameValidator_TooShort_Preferred_C", "IsNameValid");

	Params::BP_NameValidator_TooShort_Preferred_C_IsNameValid Parms{};

	Parms.InCharacterName = std::move(InCharacterName);
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
