#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterPlateWidgetComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlateWidgetComponent_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterPlateWidgetComponent.BP_CharacterPlateWidgetComponent_C
// 0x0010 (0x09B0 - 0x09A0)
class UBP_CharacterPlateWidgetComponent_C final  : public UBP_PlateWidgetComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CharacterPlateWidgetComponent_C; // 0x0998(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AValeriaCharacter*                      CurrentCharacter;                                  // 0x09A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CharacterPlateWidgetComponent(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWBP_PlayerNamePlate_C* K2Node_DynamicCast_AsWBP_Player_Name_Plate, bool K2Node_DynamicCast_bSuccess, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void On_Widget_Created();
	bool ShouldPlateBeVisible(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, bool Temp_bool_Variable_23, bool Temp_bool_Variable_24, bool Temp_bool_Variable_25, bool Temp_bool_Variable_26, bool Temp_bool_Variable_27, bool Temp_bool_Variable_28, bool CallFunc_ShouldPlateBeVisible_ReturnValue, ECharacterState Temp_byte_Variable, class AValeriaCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, ECharacterState CallFunc_GetCurrentStateType_ReturnValue, bool K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterPlateWidgetComponent_C">();
	}
	static class UBP_CharacterPlateWidgetComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharacterPlateWidgetComponent_C>();
	}
};
static_assert(alignof(UBP_CharacterPlateWidgetComponent_C) == 0x000010, "Wrong alignment on UBP_CharacterPlateWidgetComponent_C");
static_assert(sizeof(UBP_CharacterPlateWidgetComponent_C) == 0x0009B0, "Wrong size on UBP_CharacterPlateWidgetComponent_C");
static_assert(offsetof(UBP_CharacterPlateWidgetComponent_C, UberGraphFrame_BP_CharacterPlateWidgetComponent_C) == 0x000998, "Member 'UBP_CharacterPlateWidgetComponent_C::UberGraphFrame_BP_CharacterPlateWidgetComponent_C' has a wrong offset!");
static_assert(offsetof(UBP_CharacterPlateWidgetComponent_C, CurrentCharacter) == 0x0009A0, "Member 'UBP_CharacterPlateWidgetComponent_C::CurrentCharacter' has a wrong offset!");

}

