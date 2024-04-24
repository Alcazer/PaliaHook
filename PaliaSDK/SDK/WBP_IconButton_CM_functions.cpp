#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IconButton_CM

#include "Basic.hpp"

#include "WBP_IconButton_CM_classes.hpp"
#include "WBP_IconButton_CM_parameters.hpp"


namespace SDK
{

// Function WBP_IconButton_CM.WBP_IconButton_CM_C.ExecuteUbergraph_WBP_IconButton_CM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IconButton_CM_C::ExecuteUbergraph_WBP_IconButton_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconButton_CM_C", "ExecuteUbergraph_WBP_IconButton_CM");

	Params::WBP_IconButton_CM_C_ExecuteUbergraph_WBP_IconButton_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IconButton_CM.WBP_IconButton_CM_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IconButton_CM_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconButton_CM_C", "PreConstruct");

	Params::WBP_IconButton_CM_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

