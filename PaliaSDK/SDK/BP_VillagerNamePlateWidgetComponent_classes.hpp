#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VillagerNamePlateWidgetComponent

#include "Basic.hpp"

#include "BP_PlateWidgetComponent_classes.hpp"
#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VillagerNamePlateWidgetComponent.BP_VillagerNamePlateWidgetComponent_C
// 0x0010 (0x09B0 - 0x09A0)
class UBP_VillagerNamePlateWidgetComponent_C final  : public UBP_PlateWidgetComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_VillagerNamePlateWidgetComponent_C; // 0x0998(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        DistanceToShowName;                                // 0x09A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ShouldPlateBeVisible(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, bool Temp_bool_Variable_23, bool Temp_bool_Variable_24, bool Temp_bool_Variable_25, bool Temp_bool_Variable_26, bool Temp_bool_Variable_27, bool Temp_bool_Variable_28, bool CallFunc_ShouldPlateBeVisible_ReturnValue, ECharacterState Temp_byte_Variable, class AValeriaCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, ECharacterState CallFunc_GetCurrentStateType_ReturnValue, bool K2Node_Select_Default);
	void ReceiveTick(float DeltaSeconds);
	void On_Widget_Created();
	void ExecuteUbergraph_BP_VillagerNamePlateWidgetComponent(int32 EntryPoint, bool CallFunc_GetIsVisibleToPlayer_IsVisible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaVillagerCharacter* K2Node_DynamicCast_AsValeria_Villager_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, double CallFunc_GetLastDistance_Distance, class UWBP_VillagerNamePlate_C* K2Node_DynamicCast_AsWBP_Villager_Name_Plate, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VillagerNamePlateWidgetComponent_C">();
	}
	static class UBP_VillagerNamePlateWidgetComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VillagerNamePlateWidgetComponent_C>();
	}
};
static_assert(alignof(UBP_VillagerNamePlateWidgetComponent_C) == 0x000010, "Wrong alignment on UBP_VillagerNamePlateWidgetComponent_C");
static_assert(sizeof(UBP_VillagerNamePlateWidgetComponent_C) == 0x0009B0, "Wrong size on UBP_VillagerNamePlateWidgetComponent_C");
static_assert(offsetof(UBP_VillagerNamePlateWidgetComponent_C, UberGraphFrame_BP_VillagerNamePlateWidgetComponent_C) == 0x000998, "Member 'UBP_VillagerNamePlateWidgetComponent_C::UberGraphFrame_BP_VillagerNamePlateWidgetComponent_C' has a wrong offset!");
static_assert(offsetof(UBP_VillagerNamePlateWidgetComponent_C, DistanceToShowName) == 0x0009A0, "Member 'UBP_VillagerNamePlateWidgetComponent_C::DistanceToShowName' has a wrong offset!");

}

