#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VillagerPlateWidgetComponent

#include "Basic.hpp"

#include "BP_PlateWidgetComponent_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VillagerPlateWidgetComponent.BP_VillagerPlateWidgetComponent_C
// 0x0000 (0x09A0 - 0x09A0)
class UBP_VillagerPlateWidgetComponent_C final  : public UBP_PlateWidgetComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_VillagerPlateWidgetComponent_C;  // 0x0998(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_VillagerPlateWidgetComponent(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, const struct FVillagerActionInfo& K2Node_CustomEvent_actionInfo, class UWBP_VillagerPlate_C* K2Node_DynamicCast_AsWBP_Villager_Plate, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void On_Widget_Created();
	void SetCurrentActionForWidgetComp(const struct FVillagerActionInfo& ActionInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VillagerPlateWidgetComponent_C">();
	}
	static class UBP_VillagerPlateWidgetComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VillagerPlateWidgetComponent_C>();
	}
};
static_assert(alignof(UBP_VillagerPlateWidgetComponent_C) == 0x000010, "Wrong alignment on UBP_VillagerPlateWidgetComponent_C");
static_assert(sizeof(UBP_VillagerPlateWidgetComponent_C) == 0x0009A0, "Wrong size on UBP_VillagerPlateWidgetComponent_C");
static_assert(offsetof(UBP_VillagerPlateWidgetComponent_C, UberGraphFrame_BP_VillagerPlateWidgetComponent_C) == 0x000998, "Member 'UBP_VillagerPlateWidgetComponent_C::UberGraphFrame_BP_VillagerPlateWidgetComponent_C' has a wrong offset!");

}

