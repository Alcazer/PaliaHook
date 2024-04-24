#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VillagerNamePlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_VillagerNamePlate.WBP_VillagerNamePlate_C
// 0x0018 (0x02D8 - 0x02C0)
class UWBP_VillagerNamePlate_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                Text_Name;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AValeriaVillagerCharacter*              Villager;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateName();
	void SetVillager(class AValeriaVillagerCharacter* Param_Villager);
	void ExecuteUbergraph_WBP_VillagerNamePlate(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AValeriaVillagerCharacter* K2Node_CustomEvent_Villager, EValeriaFuncResult CallFunc_FindVillagerConfigById_OutResult, const struct FVillagerConfig& CallFunc_FindVillagerConfigById_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_VillagerNamePlate_C">();
	}
	static class UWBP_VillagerNamePlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_VillagerNamePlate_C>();
	}
};
static_assert(alignof(UWBP_VillagerNamePlate_C) == 0x000008, "Wrong alignment on UWBP_VillagerNamePlate_C");
static_assert(sizeof(UWBP_VillagerNamePlate_C) == 0x0002D8, "Wrong size on UWBP_VillagerNamePlate_C");
static_assert(offsetof(UWBP_VillagerNamePlate_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_VillagerNamePlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerNamePlate_C, Text_Name) == 0x0002C8, "Member 'UWBP_VillagerNamePlate_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerNamePlate_C, Villager) == 0x0002D0, "Member 'UWBP_VillagerNamePlate_C::Villager' has a wrong offset!");

}
