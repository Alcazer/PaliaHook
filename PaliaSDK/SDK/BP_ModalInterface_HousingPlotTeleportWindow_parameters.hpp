#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_HousingPlotTeleportWindow

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ModalInterface_HousingPlotTeleportWindow.BP_ModalInterface_HousingPlotTeleportWindow_C.HasHousingPlotsDisplayed
// 0x0001 (0x0001 - 0x0000)
struct BP_ModalInterface_HousingPlotTeleportWindow_C_HasHousingPlotsDisplayed final 
{
public:
	bool                                          HasPlotsDisplayed;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ModalInterface_HousingPlotTeleportWindow_C_HasHousingPlotsDisplayed) == 0x000001, "Wrong alignment on BP_ModalInterface_HousingPlotTeleportWindow_C_HasHousingPlotsDisplayed");
static_assert(sizeof(BP_ModalInterface_HousingPlotTeleportWindow_C_HasHousingPlotsDisplayed) == 0x000001, "Wrong size on BP_ModalInterface_HousingPlotTeleportWindow_C_HasHousingPlotsDisplayed");
static_assert(offsetof(BP_ModalInterface_HousingPlotTeleportWindow_C_HasHousingPlotsDisplayed, HasPlotsDisplayed) == 0x000000, "Member 'BP_ModalInterface_HousingPlotTeleportWindow_C_HasHousingPlotsDisplayed::HasPlotsDisplayed' has a wrong offset!");

// Function BP_ModalInterface_HousingPlotTeleportWindow.BP_ModalInterface_HousingPlotTeleportWindow_C.InitPreOpenModalWidget
// 0x0008 (0x0008 - 0x0000)
struct BP_ModalInterface_HousingPlotTeleportWindow_C_InitPreOpenModalWidget final 
{
public:
	class UObject*                                Teleporter;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ModalInterface_HousingPlotTeleportWindow_C_InitPreOpenModalWidget) == 0x000008, "Wrong alignment on BP_ModalInterface_HousingPlotTeleportWindow_C_InitPreOpenModalWidget");
static_assert(sizeof(BP_ModalInterface_HousingPlotTeleportWindow_C_InitPreOpenModalWidget) == 0x000008, "Wrong size on BP_ModalInterface_HousingPlotTeleportWindow_C_InitPreOpenModalWidget");
static_assert(offsetof(BP_ModalInterface_HousingPlotTeleportWindow_C_InitPreOpenModalWidget, Teleporter) == 0x000000, "Member 'BP_ModalInterface_HousingPlotTeleportWindow_C_InitPreOpenModalWidget::Teleporter' has a wrong offset!");

}

