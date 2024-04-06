#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SkillLevel_HUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillLevel_HUD.WBP_SkillLevel_HUD_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_SkillLevel_HUD_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_LevelFrameTrim;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Progress;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Skill;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Level;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESkillType                                    SkillType;                                         // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_48ED[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               ProgressMID;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_SkillLevel_HUD(int32 EntryPoint, TDelegate<void(class USkillLevelsComponent* SkillLevels)> K2Node_CreateDelegate_OutputDelegate, class USkillLevelsComponent* K2Node_CustomEvent_skillLevels, class USkillLevelsComponent* CallFunc_GetSkillLevels_SkillLevels, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void GetInventory(class UPlayerInventoryComponent** Inventory, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue);
	void GetProgress(struct FSkillPersist& SkillLevel, double* Progress, const struct FSkillLevelConfig& CallFunc_GetSkillConfig_SkillConfig, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_FMax_A_ImplicitCast);
	void GetSkillConfig(struct FSkillLevelConfig* SkillConfig, EValeriaFuncResult CallFunc_FindSkillLevelConfigByType_OutResult, const struct FSkillLevelConfig& CallFunc_FindSkillLevelConfigByType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetSkillLevels(class USkillLevelsComponent** SkillLevels, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USkillLevelsComponent* CallFunc_GetSkillLevels_ReturnValue);
	void HandleSkillsChanged(class USkillLevelsComponent* SkillLevels);
	void SetupConfig(const struct FSkillLevelConfig& CallFunc_GetSkillConfig_SkillConfig);
	void UpdateProgress(class USkillLevelsComponent* CallFunc_GetSkillLevels_SkillLevels, const struct FSkillPersist& CallFunc_GetSkillLevel_ReturnValue, double CallFunc_GetProgress_Progress, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillLevel_HUD_C">();
	}
	static class UWBP_SkillLevel_HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillLevel_HUD_C>();
	}
};
static_assert(alignof(UWBP_SkillLevel_HUD_C) == 0x000008, "Wrong alignment on UWBP_SkillLevel_HUD_C");
static_assert(sizeof(UWBP_SkillLevel_HUD_C) == 0x0002B0, "Wrong size on UWBP_SkillLevel_HUD_C");
static_assert(offsetof(UWBP_SkillLevel_HUD_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillLevel_HUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillLevel_HUD_C, Image_LevelFrameTrim) == 0x000280, "Member 'UWBP_SkillLevel_HUD_C::Image_LevelFrameTrim' has a wrong offset!");
static_assert(offsetof(UWBP_SkillLevel_HUD_C, Image_Progress) == 0x000288, "Member 'UWBP_SkillLevel_HUD_C::Image_Progress' has a wrong offset!");
static_assert(offsetof(UWBP_SkillLevel_HUD_C, Image_Skill) == 0x000290, "Member 'UWBP_SkillLevel_HUD_C::Image_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_SkillLevel_HUD_C, Text_Level) == 0x000298, "Member 'UWBP_SkillLevel_HUD_C::Text_Level' has a wrong offset!");
static_assert(offsetof(UWBP_SkillLevel_HUD_C, SkillType) == 0x0002A0, "Member 'UWBP_SkillLevel_HUD_C::SkillType' has a wrong offset!");
static_assert(offsetof(UWBP_SkillLevel_HUD_C, ProgressMID) == 0x0002A8, "Member 'UWBP_SkillLevel_HUD_C::ProgressMID' has a wrong offset!");

}

