#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIStateInterface_HousingMenu

#include "Basic.hpp"

#include "BP_UIStateInterface_HousingMenu_classes.hpp"
#include "BP_UIStateInterface_HousingMenu_parameters.hpp"


namespace SDK
{

// Function BP_UIStateInterface_HousingMenu.BP_UIStateInterface_HousingMenu_C.InitPreOpenStateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHousingPlotActor*                HousingPlotActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_UIStateInterface_HousingMenu_C::InitPreOpenStateWidget(class AHousingPlotActor* HousingPlotActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIStateInterface_HousingMenu_C", "InitPreOpenStateWidget");

	Params::BP_UIStateInterface_HousingMenu_C_InitPreOpenStateWidget Parms{};

	Parms.HousingPlotActor = HousingPlotActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

