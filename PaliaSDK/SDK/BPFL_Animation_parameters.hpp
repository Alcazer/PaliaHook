#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_Animation

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BPFL_Animation.BPFL_Animation_C.GetMappingNameByAbility
// 0x0048 (0x0048 - 0x0000)
struct BPFL_Animation_C_GetMappingNameByAbility final 
{
public:
	class AActor*                                 Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AnimTag;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Mapping_Name;                                      // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4128[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityAnimationComponent*             CallFunc_GetAbilityAnimation_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetMappingNameByTag_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_Animation_C_GetMappingNameByAbility) == 0x000008, "Wrong alignment on BPFL_Animation_C_GetMappingNameByAbility");
static_assert(sizeof(BPFL_Animation_C_GetMappingNameByAbility) == 0x000048, "Wrong size on BPFL_Animation_C_GetMappingNameByAbility");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, Owner) == 0x000000, "Member 'BPFL_Animation_C_GetMappingNameByAbility::Owner' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, AnimTag) == 0x000008, "Member 'BPFL_Animation_C_GetMappingNameByAbility::AnimTag' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, __WorldContext) == 0x000010, "Member 'BPFL_Animation_C_GetMappingNameByAbility::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, Mapping_Name) == 0x000018, "Member 'BPFL_Animation_C_GetMappingNameByAbility::Mapping_Name' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, Temp_name_Variable) == 0x000020, "Member 'BPFL_Animation_C_GetMappingNameByAbility::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, K2Node_DynamicCast_AsValeria_Character) == 0x000028, "Member 'BPFL_Animation_C_GetMappingNameByAbility::K2Node_DynamicCast_AsValeria_Character' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPFL_Animation_C_GetMappingNameByAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, CallFunc_GetAbilityAnimation_ReturnValue) == 0x000038, "Member 'BPFL_Animation_C_GetMappingNameByAbility::CallFunc_GetAbilityAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMappingNameByAbility, CallFunc_GetMappingNameByTag_ReturnValue) == 0x000040, "Member 'BPFL_Animation_C_GetMappingNameByAbility::CallFunc_GetMappingNameByTag_ReturnValue' has a wrong offset!");

// Function BPFL_Animation.BPFL_Animation_C.GetMontageByAbility
// 0x0048 (0x0048 - 0x0000)
struct BPFL_Animation_C_GetMontageByAbility final 
{
public:
	class AActor*                                 Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AnimTag;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Montage;                                           // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4129[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityAnimationComponent*             CallFunc_GetAbilityAnimation_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetMontage_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_Animation_C_GetMontageByAbility) == 0x000008, "Wrong alignment on BPFL_Animation_C_GetMontageByAbility");
static_assert(sizeof(BPFL_Animation_C_GetMontageByAbility) == 0x000048, "Wrong size on BPFL_Animation_C_GetMontageByAbility");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, Owner) == 0x000000, "Member 'BPFL_Animation_C_GetMontageByAbility::Owner' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, AnimTag) == 0x000008, "Member 'BPFL_Animation_C_GetMontageByAbility::AnimTag' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, __WorldContext) == 0x000010, "Member 'BPFL_Animation_C_GetMontageByAbility::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, Montage) == 0x000018, "Member 'BPFL_Animation_C_GetMontageByAbility::Montage' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, Temp_name_Variable) == 0x000020, "Member 'BPFL_Animation_C_GetMontageByAbility::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, K2Node_DynamicCast_AsValeria_Character) == 0x000028, "Member 'BPFL_Animation_C_GetMontageByAbility::K2Node_DynamicCast_AsValeria_Character' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPFL_Animation_C_GetMontageByAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, CallFunc_GetAbilityAnimation_ReturnValue) == 0x000038, "Member 'BPFL_Animation_C_GetMontageByAbility::CallFunc_GetAbilityAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Animation_C_GetMontageByAbility, CallFunc_GetMontage_ReturnValue) == 0x000040, "Member 'BPFL_Animation_C_GetMontageByAbility::CallFunc_GetMontage_ReturnValue' has a wrong offset!");

}

