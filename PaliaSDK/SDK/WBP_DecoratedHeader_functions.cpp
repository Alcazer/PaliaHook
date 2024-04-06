#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DecoratedHeader

#include "Basic.hpp"

#include "WBP_DecoratedHeader_classes.hpp"
#include "WBP_DecoratedHeader_parameters.hpp"


namespace SDK
{

// Function WBP_DecoratedHeader.WBP_DecoratedHeader_C.ExecuteUbergraph_WBP_DecoratedHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DecoratedHeader_C::ExecuteUbergraph_WBP_DecoratedHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DecoratedHeader_C", "ExecuteUbergraph_WBP_DecoratedHeader");

	Params::WBP_DecoratedHeader_C_ExecuteUbergraph_WBP_DecoratedHeader Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DecoratedHeader.WBP_DecoratedHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DecoratedHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DecoratedHeader_C", "PreConstruct");

	Params::WBP_DecoratedHeader_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DecoratedHeader.WBP_DecoratedHeader_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DecoratedHeader_C::UpdateText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DecoratedHeader_C", "UpdateText");

	Params::WBP_DecoratedHeader_C_UpdateText Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}

}

