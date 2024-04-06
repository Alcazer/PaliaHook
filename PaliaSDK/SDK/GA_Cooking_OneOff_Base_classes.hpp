#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cooking_OneOff_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "GA_MontageEvent_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C
// 0x0028 (0x04E8 - 0x04C0)
class UGA_Cooking_OneOff_Base_C : public UGA_MontageEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Cooking_OneOff_Base_C;           // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                 CrafterInteractable;                               // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               CSM_Locked_State;                                  // 0x04D0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BB5[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCrafterComponent*                      CrafterComponent;                                  // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldEnforcePosition;                             // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldEnforceFacingTowardsInteractableOnly;        // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldEngageCrafterComponent;                      // 0x04E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CanUnlockCharacterDuringAnimation(bool* CanUnlock);
	void ExecuteUbergraph_GA_Cooking_OneOff_Base(int32 EntryPoint, struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UCrafterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams, bool CallFunc_Not_PreBool_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue, bool CallFunc_Client_TryInteractableLockSetup_ReturnValue, bool CallFunc_CanPlayerChangeLockWith_ReturnValue);
	void GetLockParams(struct FVAL_InteractorLockParams* VAL_InteractorLockParams, class UObject* CallFunc_SelectObject_ReturnValue, const struct FVAL_InteractorLockParams& K2Node_MakeStruct_VAL_InteractorLockParams);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void SetMovementBlock(bool bLock, bool* Changed, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_SetMovementBlock_Changed_1, bool CallFunc_IsShuttingDown_NewParam, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue, bool CallFunc_LockPlayerToInteractable_ReturnValue, bool CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool CallFunc_BooleanOR_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue_1, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams_2, bool CallFunc_IsPlayerLockedToInteractable_ReturnValue, bool CallFunc_UnLockPlayerFromInteractable_ReturnValue, bool CallFunc_CanPlayerChangeLockWith_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Cooking_OneOff_Base_C">();
	}
	static class UGA_Cooking_OneOff_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Cooking_OneOff_Base_C>();
	}
};
static_assert(alignof(UGA_Cooking_OneOff_Base_C) == 0x000008, "Wrong alignment on UGA_Cooking_OneOff_Base_C");
static_assert(sizeof(UGA_Cooking_OneOff_Base_C) == 0x0004E8, "Wrong size on UGA_Cooking_OneOff_Base_C");
static_assert(offsetof(UGA_Cooking_OneOff_Base_C, UberGraphFrame_GA_Cooking_OneOff_Base_C) == 0x0004C0, "Member 'UGA_Cooking_OneOff_Base_C::UberGraphFrame_GA_Cooking_OneOff_Base_C' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_OneOff_Base_C, CrafterInteractable) == 0x0004C8, "Member 'UGA_Cooking_OneOff_Base_C::CrafterInteractable' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_OneOff_Base_C, CSM_Locked_State) == 0x0004D0, "Member 'UGA_Cooking_OneOff_Base_C::CSM_Locked_State' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_OneOff_Base_C, CrafterComponent) == 0x0004D8, "Member 'UGA_Cooking_OneOff_Base_C::CrafterComponent' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_OneOff_Base_C, ShouldEnforcePosition) == 0x0004E0, "Member 'UGA_Cooking_OneOff_Base_C::ShouldEnforcePosition' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_OneOff_Base_C, ShouldEnforceFacingTowardsInteractableOnly) == 0x0004E1, "Member 'UGA_Cooking_OneOff_Base_C::ShouldEnforceFacingTowardsInteractableOnly' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_OneOff_Base_C, ShouldEngageCrafterComponent) == 0x0004E2, "Member 'UGA_Cooking_OneOff_Base_C::ShouldEngageCrafterComponent' has a wrong offset!");

}

