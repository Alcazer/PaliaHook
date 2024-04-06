#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MontageEvent_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Palia_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MontageEvent_Base.GA_MontageEvent_Base_C
// 0x0088 (0x04C0 - 0x0438)
class UGA_MontageEvent_Base_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   InMontageName;                                     // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InMontageSection;                                  // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MovementBlocked;                                   // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EndAbilityAfterFirstAnimation;                     // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2674[0x2];                                     // 0x0452(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AnimationName;                                     // 0x0454(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MontageSection;                                    // 0x045C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GameplayEffect_AbilityLockedIn;                    // 0x0464(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GameplayEffect_MovementBlocker;                    // 0x046C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2675[0x4];                                     // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URPGAbilityTask_PlayMontageAndWaitForEvent* MontageTask;                                       // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVAL_TaskProxy_PlayMontageAndWaitForEvent* Async_Task;                                        // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          LockedIn;                                          // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2676[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMontageDone;                                     // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShuttingDown;                                      // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2677[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMovementBlockChanged;                            // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          WasCancelled;                                      // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TaskWasInterruptedOrCancelled;                     // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearSetMontage();
	bool DoesMontageSectionExist(class FName& MontageName, class FName& SectionName, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class FName Temp_name_Variable, class UAnimMontage* CallFunc_FindMontageByMapping_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MontageHasSection_ReturnValue);
	void EndTaskAndClearReference(bool CallFunc_IsValid_ReturnValue);
	void Event_OnActivateAbility();
	void EventReceived_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_MontageEvent_Base(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, class FName K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_MontageSection, bool K2Node_CustomEvent_EndAbilityWhenFinished, bool K2Node_CustomEvent_Force__Used_by_child_outro_, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, bool CallFunc_FNameIsNone_ReturnValue, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_DoesMontageSectionExist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetPlayingMontage(class FName* Param_AnimationName, class FName* Param_MontageSection);
	void GetWasCancelled(bool* Param_WasCancelled);
	void HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_SetMovementBlock_Changed_1);
	bool IsAbilityLockedIn();
	void IsShuttingDown(bool* NewParam);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnAbilityEnd(bool CallFunc_SetMovementBlock_Changed);
	void OnAbilityStart(bool CallFunc_SetMovementBlock_Changed);
	void OnBlendOut_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnMontageDone__DelegateSignature(EMontageEventResult Result);
	void OnMovementBlockChanged__DelegateSignature(bool Param_MovementBlocked);
	void PlayMontage(class FName Montage, class FName Param_MontageSection, bool EndAbilityWhenFinished, bool Force__Used_by_child_outro_);
	void SetAbilityLockedIn(bool Param_LockedIn);
	void SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MontageEvent_Base_C">();
	}
	static class UGA_MontageEvent_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MontageEvent_Base_C>();
	}
};
static_assert(alignof(UGA_MontageEvent_Base_C) == 0x000008, "Wrong alignment on UGA_MontageEvent_Base_C");
static_assert(sizeof(UGA_MontageEvent_Base_C) == 0x0004C0, "Wrong size on UGA_MontageEvent_Base_C");
static_assert(offsetof(UGA_MontageEvent_Base_C, UberGraphFrame) == 0x000438, "Member 'UGA_MontageEvent_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, InMontageName) == 0x000440, "Member 'UGA_MontageEvent_Base_C::InMontageName' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, InMontageSection) == 0x000448, "Member 'UGA_MontageEvent_Base_C::InMontageSection' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, MovementBlocked) == 0x000450, "Member 'UGA_MontageEvent_Base_C::MovementBlocked' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, EndAbilityAfterFirstAnimation) == 0x000451, "Member 'UGA_MontageEvent_Base_C::EndAbilityAfterFirstAnimation' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, AnimationName) == 0x000454, "Member 'UGA_MontageEvent_Base_C::AnimationName' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, MontageSection) == 0x00045C, "Member 'UGA_MontageEvent_Base_C::MontageSection' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, GameplayEffect_AbilityLockedIn) == 0x000464, "Member 'UGA_MontageEvent_Base_C::GameplayEffect_AbilityLockedIn' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, GameplayEffect_MovementBlocker) == 0x00046C, "Member 'UGA_MontageEvent_Base_C::GameplayEffect_MovementBlocker' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, MontageTask) == 0x000478, "Member 'UGA_MontageEvent_Base_C::MontageTask' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, Async_Task) == 0x000480, "Member 'UGA_MontageEvent_Base_C::Async_Task' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, LockedIn) == 0x000488, "Member 'UGA_MontageEvent_Base_C::LockedIn' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, OnMontageDone) == 0x000490, "Member 'UGA_MontageEvent_Base_C::OnMontageDone' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, ShuttingDown) == 0x0004A0, "Member 'UGA_MontageEvent_Base_C::ShuttingDown' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, OnMovementBlockChanged) == 0x0004A8, "Member 'UGA_MontageEvent_Base_C::OnMovementBlockChanged' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, WasCancelled) == 0x0004B8, "Member 'UGA_MontageEvent_Base_C::WasCancelled' has a wrong offset!");
static_assert(offsetof(UGA_MontageEvent_Base_C, TaskWasInterruptedOrCancelled) == 0x0004B9, "Member 'UGA_MontageEvent_Base_C::TaskWasInterruptedOrCancelled' has a wrong offset!");

}

