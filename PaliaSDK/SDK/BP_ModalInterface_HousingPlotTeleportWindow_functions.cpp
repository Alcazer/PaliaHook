#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_HousingPlotTeleportWindow

#include "Basic.hpp"

#include "BP_ModalInterface_HousingPlotTeleportWindow_classes.hpp"
#include "BP_ModalInterface_HousingPlotTeleportWindow_parameters.hpp"


namespace SDK
{

// Function BP_ModalInterface_HousingPlotTeleportWindow.BP_ModalInterface_HousingPlotTeleportWindow_C.HasHousingPlotsDisplayed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasPlotsDisplayed                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ModalInterface_HousingPlotTeleportWindow_C::HasHousingPlotsDisplayed(bool* HasPlotsDisplayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ModalInterface_HousingPlotTeleportWindow_C", "HasHousingPlotsDisplayed");

	Params::BP_ModalInterface_HousingPlotTeleportWindow_C_HasHousingPlotsDisplayed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasPlotsDisplayed != nullptr)
		*HasPlotsDisplayed = Parms.HasPlotsDisplayed;
}


// Function BP_ModalInterface_HousingPlotTeleportWindow.BP_ModalInterface_HousingPlotTeleportWindow_C.InitPreOpenModalWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Teleporter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_ModalInterface_HousingPlotTeleportWindow_C::InitPreOpenModalWidget(class UObject* Teleporter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ModalInterface_HousingPlotTeleportWindow_C", "InitPreOpenModalWidget");

	Params::BP_ModalInterface_HousingPlotTeleportWindow_C_InitPreOpenModalWidget Parms{};

	Parms.Teleporter = Teleporter;

	UObject::ProcessEvent(Func, &Parms);
}

}
