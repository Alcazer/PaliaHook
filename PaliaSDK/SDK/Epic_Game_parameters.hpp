#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Epic_Game

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Epic_Game.AbilityTask_AnimInstancePlayMontageAndWait.AnimInstancePlayMontageAndWaitForEvent
// 0x0058 (0x0058 - 0x0000)
struct AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent final 
{
public:
	class UGameplayAbility*                       OwningAbility;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TaskInstanceName;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimInstance*                          InAnimInstance;                                    // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                           Param_MontageToPlay;                               // 0x0018(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  Param_EventTags;                                   // 0x0020(0x0020)(Parm, NativeAccessSpecifierPublic)
	float                                         Param_Rate;                                        // 0x0040(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Param_StartSection;                                // 0x0044(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Param_bStopWhenAbilityEnds;                        // 0x004C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A0B[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_AnimInstancePlayMontageAndWait* ReturnValue;                                       // 0x0050(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent) == 0x000008, "Wrong alignment on AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent");
static_assert(sizeof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent) == 0x000058, "Wrong size on AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, OwningAbility) == 0x000000, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::OwningAbility' has a wrong offset!");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, TaskInstanceName) == 0x000008, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::TaskInstanceName' has a wrong offset!");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, InAnimInstance) == 0x000010, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::InAnimInstance' has a wrong offset!");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, Param_MontageToPlay) == 0x000018, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::Param_MontageToPlay' has a wrong offset!");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, Param_EventTags) == 0x000020, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::Param_EventTags' has a wrong offset!");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, Param_Rate) == 0x000040, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::Param_Rate' has a wrong offset!");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, Param_StartSection) == 0x000044, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::Param_StartSection' has a wrong offset!");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, Param_bStopWhenAbilityEnds) == 0x00004C, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::Param_bStopWhenAbilityEnds' has a wrong offset!");
static_assert(offsetof(AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent, ReturnValue) == 0x000050, "Member 'AbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent::ReturnValue' has a wrong offset!");

// Function Epic_Game.RPGAbilityTask_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
// 0x0058 (0x0058 - 0x0000)
struct RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent final 
{
public:
	class UGameplayAbility*                       OwningAbility;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TaskInstanceName;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                           Param_MontageToPlay;                               // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  Param_EventTags;                                   // 0x0018(0x0020)(Parm, NativeAccessSpecifierPublic)
	float                                         Param_Rate;                                        // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Param_StartSection;                                // 0x003C(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Param_bStopWhenAbilityEnds;                        // 0x0044(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A0D[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Param_AnimRootMotionTranslationScale;              // 0x0048(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A0E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URPGAbilityTask_PlayMontageAndWaitForEvent* ReturnValue;                                       // 0x0050(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent) == 0x000008, "Wrong alignment on RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent");
static_assert(sizeof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent) == 0x000058, "Wrong size on RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, OwningAbility) == 0x000000, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::OwningAbility' has a wrong offset!");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, TaskInstanceName) == 0x000008, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::TaskInstanceName' has a wrong offset!");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, Param_MontageToPlay) == 0x000010, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::Param_MontageToPlay' has a wrong offset!");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, Param_EventTags) == 0x000018, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::Param_EventTags' has a wrong offset!");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, Param_Rate) == 0x000038, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::Param_Rate' has a wrong offset!");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, Param_StartSection) == 0x00003C, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::Param_StartSection' has a wrong offset!");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, Param_bStopWhenAbilityEnds) == 0x000044, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::Param_bStopWhenAbilityEnds' has a wrong offset!");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, Param_AnimRootMotionTranslationScale) == 0x000048, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::Param_AnimRootMotionTranslationScale' has a wrong offset!");
static_assert(offsetof(RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, ReturnValue) == 0x000050, "Member 'RPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent::ReturnValue' has a wrong offset!");

}

