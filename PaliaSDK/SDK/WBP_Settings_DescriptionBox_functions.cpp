#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_DescriptionBox

#include "Basic.hpp"

#include "WBP_Settings_DescriptionBox_classes.hpp"
#include "WBP_Settings_DescriptionBox_parameters.hpp"


namespace SDK
{

// Function WBP_Settings_DescriptionBox.WBP_Settings_DescriptionBox_C.ClearSettingsDescription
// (BlueprintCallable, BlueprintEvent)

void UWBP_Settings_DescriptionBox_C::ClearSettingsDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_DescriptionBox_C", "ClearSettingsDescription");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_DescriptionBox.WBP_Settings_DescriptionBox_C.ExecuteUbergraph_WBP_Settings_DescriptionBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_CustomEvent_SetName                             ()
// class FText                             K2Node_CustomEvent_SetDescription                      ()

void UWBP_Settings_DescriptionBox_C::ExecuteUbergraph_WBP_Settings_DescriptionBox(int32 EntryPoint, class FText K2Node_CustomEvent_SetName, class FText K2Node_CustomEvent_SetDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_DescriptionBox_C", "ExecuteUbergraph_WBP_Settings_DescriptionBox");

	Params::WBP_Settings_DescriptionBox_C_ExecuteUbergraph_WBP_Settings_DescriptionBox Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SetName = K2Node_CustomEvent_SetName;
	Parms.K2Node_CustomEvent_SetDescription = K2Node_CustomEvent_SetDescription;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_DescriptionBox.WBP_Settings_DescriptionBox_C.UpdateSettingsDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SetName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             SetDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Settings_DescriptionBox_C::UpdateSettingsDescription(class FText SetName, class FText SetDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_DescriptionBox_C", "UpdateSettingsDescription");

	Params::WBP_Settings_DescriptionBox_C_UpdateSettingsDescription Parms{};

	Parms.SetName = SetName;
	Parms.SetDescription = SetDescription;

	UObject::ProcessEvent(Func, &Parms);
}

}

