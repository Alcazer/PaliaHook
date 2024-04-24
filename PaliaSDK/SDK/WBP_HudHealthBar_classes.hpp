#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HudHealthBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HudHealthBar.WBP_HudHealthBar_C
// 0x0030 (0x02F0 - 0x02C0)
class UWBP_HudHealthBar_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HealthSlots;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HealthSlot_C*                      WBP_HealthSlot;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HealthSlot_C*                      WBP_HealthSlot_C_0;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HealthSlot_C*                      WBP_HealthSlot_C_1;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_HudHealthBar(int32 EntryPoint, class UVitalsComponent* K2Node_CustomEvent_Vitals, TDelegate<void(class UVitalsComponent* Vitals)> K2Node_CreateDelegate_OutputDelegate, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UVitalsComponent* CallFunc_GetVitals_ReturnValue);
	void OnChanged(class UVitalsComponent* Vitals);
	void SetCharacter(EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UVitalsComponent* CallFunc_GetVitals_ReturnValue);
	void Update(class UVitalsComponent* Vitals, int32 ChildCount, int32 FloorValue, double FloatValue, int32 CallFunc_GetVital_ReturnValue, int32 CallFunc_GetVitalMax_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, int32 Temp_int_Variable, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_HealthSlot_C* K2Node_DynamicCast_AsWBP_Health_Slot, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_HealthSlot_C* K2Node_DynamicCast_AsWBP_Health_Slot_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, double CallFunc_Multiply_IntFloat_ReturnValue, class UWBP_HealthSlot_C* K2Node_DynamicCast_AsWBP_Health_Slot_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HudHealthBar_C">();
	}
	static class UWBP_HudHealthBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HudHealthBar_C>();
	}
};
static_assert(alignof(UWBP_HudHealthBar_C) == 0x000008, "Wrong alignment on UWBP_HudHealthBar_C");
static_assert(sizeof(UWBP_HudHealthBar_C) == 0x0002F0, "Wrong size on UWBP_HudHealthBar_C");
static_assert(offsetof(UWBP_HudHealthBar_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_HudHealthBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HudHealthBar_C, HealthSlots) == 0x0002C8, "Member 'UWBP_HudHealthBar_C::HealthSlots' has a wrong offset!");
static_assert(offsetof(UWBP_HudHealthBar_C, SizeBox_1) == 0x0002D0, "Member 'UWBP_HudHealthBar_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_HudHealthBar_C, WBP_HealthSlot) == 0x0002D8, "Member 'UWBP_HudHealthBar_C::WBP_HealthSlot' has a wrong offset!");
static_assert(offsetof(UWBP_HudHealthBar_C, WBP_HealthSlot_C_0) == 0x0002E0, "Member 'UWBP_HudHealthBar_C::WBP_HealthSlot_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_HudHealthBar_C, WBP_HealthSlot_C_1) == 0x0002E8, "Member 'UWBP_HudHealthBar_C::WBP_HealthSlot_C_1' has a wrong offset!");

}
