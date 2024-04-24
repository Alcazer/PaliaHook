#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysmatEffect

#include "Basic.hpp"

#include "PhysmatEffect_classes.hpp"
#include "PhysmatEffect_parameters.hpp"


namespace SDK
{

// Function PhysmatEffect.PhysmatEffect_C.GetSurfaceEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*                PhysMat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Physmat                  Value                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        Temp_byte_Variable                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Physmat                  CallFunc_Map_Find_Value                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Physmat                  CallFunc_Map_Find_Value_1                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPhysmatEffect_C::GetSurfaceEffect(class UPhysicalMaterial* PhysMat, struct FStruct_Physmat* Value, EPhysicalSurface Temp_byte_Variable, const struct FStruct_Physmat& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FStruct_Physmat& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysmatEffect_C", "GetSurfaceEffect");

	Params::PhysmatEffect_C_GetSurfaceEffect Parms{};

	Parms.PhysMat = PhysMat;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = std::move(CallFunc_Map_Find_Value);
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = std::move(CallFunc_Map_Find_Value_1);
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;
}

}

