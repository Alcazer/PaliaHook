#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IADescription

#include "Basic.hpp"

#include "WBP_IADescription_classes.hpp"
#include "WBP_IADescription_parameters.hpp"


namespace SDK
{

// Function WBP_IADescription.WBP_IADescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IADescription_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IADescription_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IADescription.WBP_IADescription_C.ExecuteUbergraph_WBP_IADescription
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IADescription_C::ExecuteUbergraph_WBP_IADescription(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IADescription_C", "ExecuteUbergraph_WBP_IADescription");

	Params::WBP_IADescription_C_ExecuteUbergraph_WBP_IADescription Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IADescription.WBP_IADescription_C.Setup Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     In_InputAction                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputMappingContext*             In_DefaultIMC                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IADescription_C::Setup_Input_Action(class UInputAction* In_InputAction, class UInputMappingContext* In_DefaultIMC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IADescription_C", "Setup Input Action");

	Params::WBP_IADescription_C_Setup_Input_Action Parms{};

	Parms.In_InputAction = In_InputAction;
	Parms.In_DefaultIMC = In_DefaultIMC;

	UObject::ProcessEvent(Func, &Parms);
}

}

