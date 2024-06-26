#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EmoteDrag

#include "Basic.hpp"

#include "WBP_EmoteDrag_classes.hpp"
#include "WBP_EmoteDrag_parameters.hpp"


namespace SDK
{

// Function WBP_EmoteDrag.WBP_EmoteDrag_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_EmoteDrag_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmoteDrag_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmoteDrag.WBP_EmoteDrag_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmoteDrag_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmoteDrag_C", "BP_OnItemExpansionChanged");

	Params::WBP_EmoteDrag_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmoteDrag.WBP_EmoteDrag_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmoteDrag_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmoteDrag_C", "BP_OnItemSelectionChanged");

	Params::WBP_EmoteDrag_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmoteDrag.WBP_EmoteDrag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EmoteDrag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmoteDrag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmoteDrag.WBP_EmoteDrag_C.ExecuteUbergraph_WBP_EmoteDrag
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bIsExpanded                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bIsSelected                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_Event_ListItemObject                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EmoteDrag_C::ExecuteUbergraph_WBP_EmoteDrag(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmoteDrag_C", "ExecuteUbergraph_WBP_EmoteDrag");

	Params::WBP_EmoteDrag_C_ExecuteUbergraph_WBP_EmoteDrag Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmoteDrag.WBP_EmoteDrag_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EmoteDrag_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmoteDrag_C", "OnListItemObjectSet");

	Params::WBP_EmoteDrag_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}

