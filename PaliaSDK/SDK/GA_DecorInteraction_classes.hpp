#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DecorInteraction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DecorInteraction.GA_DecorInteraction_C
// 0x00F8 (0x0530 - 0x0438)
class UGA_DecorInteraction_C final  : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                             DecorTransform;                                    // 0x0440(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InputCancelDelay;                                  // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_412A[0x8];                                     // 0x04A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Character_Transform;                               // 0x04B0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Mapping_Name;                                      // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DecorInteractSpeed;                                // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PlayerSpeedModifierTag;                            // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WaitForServerConfirmation;                         // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EndedByTeleport;                                   // 0x0529(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindEnforcedRules(class UValeriaCharacterMoveComponent* Move, TDelegate<void(const struct FVector& Location, const struct FRotator& Rotation)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const struct FVector& Location, const struct FRotator& Rotation)> K2Node_CreateDelegate_OutputDelegate_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement);
	void EnforcedEnded(const struct FVector& Location, const struct FRotator& Rotation);
	void EnforcedStarted(const struct FVector& Location, const struct FRotator& Rotation);
	void ExecuteUbergraph_GA_DecorInteraction(int32 EntryPoint, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaCharacterTeleportComponent* CallFunc_GetTeleportComponent_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bWasCancelled, struct FGameplayEventData& K2Node_Event_EventData, const struct FTransform& CallFunc_GetTargetDataEndPointTransform_ReturnValue, bool CallFunc_TargetDataHasEndPoint_ReturnValue, const struct FTransform& CallFunc_GetTargetDataOrigin_ReturnValue, bool CallFunc_TargetDataHasOrigin_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, bool CallFunc_Client_TryUnequip_ReturnValue, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_9, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_10, class FName CallFunc_GetMappingNameByAbility_Mapping_Name, bool CallFunc_FNameIsNone_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWait* CallFunc_PlayMontageByMappingAndWait_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, const struct FVector& K2Node_CustomEvent_Location_1, const struct FRotator& K2Node_CustomEvent_Rotation_1, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Rotation, class UVAL_TaskProxy_PlayMontageAndWait* CallFunc_PlayMontageByMappingAndWait_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_K2_HasAuthority_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, class UValeriaCharacterTeleportComponent* CallFunc_GetTeleportComponent_ReturnValue_1, TDelegate<void(bool bTeleportResult)> K2Node_CreateDelegate_OutputDelegate_12, TDelegate<void(bool bTeleportResult)> K2Node_CreateDelegate_OutputDelegate_13, bool K2Node_CustomEvent_bTeleportResult, double K2Node_VariableSet_DecorInteractSpeed_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
	void GetMovement(class UValeriaCharacterMoveComponent** Movement, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void MoveIntoPosition(class UValeriaCharacterMoveComponent* MoveComp, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Server_AddSpeedScalarModifier_inSpeedScalarModifier_ImplicitCast);
	void MovementInputTriggered();
	void MoveOutOfPosition(class UValeriaCharacterMoveComponent* MoveComp, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue);
	void OnBlendOut_C69B5BA140BAB0CA85D5798BE1C3B007();
	void OnBlendOut_E44A1AA9495B352538FA178DBDCF7CC8();
	void OnCancelled_C69B5BA140BAB0CA85D5798BE1C3B007();
	void OnCancelled_E44A1AA9495B352538FA178DBDCF7CC8();
	void OnCompleted_C69B5BA140BAB0CA85D5798BE1C3B007();
	void OnCompleted_E44A1AA9495B352538FA178DBDCF7CC8();
	void OnInterrupted_C69B5BA140BAB0CA85D5798BE1C3B007();
	void OnInterrupted_E44A1AA9495B352538FA178DBDCF7CC8();
	void PrepCancelInputs();
	void PrimaryInteractPressed();
	void ReopenTimeoutGate();
	void StopPositionEnforcement(class UValeriaCharacterMoveComponent* MoveComp, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement);
	void TeleportResult(bool bTeleportResult);
	void UnbindEnforcedRules(class UValeriaCharacterMoveComponent* Move, TDelegate<void(const struct FVector& Location, const struct FRotator& Rotation)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const struct FVector& Location, const struct FRotator& Rotation)> K2Node_CreateDelegate_OutputDelegate_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DecorInteraction_C">();
	}
	static class UGA_DecorInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DecorInteraction_C>();
	}
};
static_assert(alignof(UGA_DecorInteraction_C) == 0x000010, "Wrong alignment on UGA_DecorInteraction_C");
static_assert(sizeof(UGA_DecorInteraction_C) == 0x000530, "Wrong size on UGA_DecorInteraction_C");
static_assert(offsetof(UGA_DecorInteraction_C, UberGraphFrame) == 0x000438, "Member 'UGA_DecorInteraction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_DecorInteraction_C, DecorTransform) == 0x000440, "Member 'UGA_DecorInteraction_C::DecorTransform' has a wrong offset!");
static_assert(offsetof(UGA_DecorInteraction_C, InputCancelDelay) == 0x0004A0, "Member 'UGA_DecorInteraction_C::InputCancelDelay' has a wrong offset!");
static_assert(offsetof(UGA_DecorInteraction_C, Character_Transform) == 0x0004B0, "Member 'UGA_DecorInteraction_C::Character_Transform' has a wrong offset!");
static_assert(offsetof(UGA_DecorInteraction_C, Mapping_Name) == 0x000510, "Member 'UGA_DecorInteraction_C::Mapping_Name' has a wrong offset!");
static_assert(offsetof(UGA_DecorInteraction_C, DecorInteractSpeed) == 0x000518, "Member 'UGA_DecorInteraction_C::DecorInteractSpeed' has a wrong offset!");
static_assert(offsetof(UGA_DecorInteraction_C, PlayerSpeedModifierTag) == 0x000520, "Member 'UGA_DecorInteraction_C::PlayerSpeedModifierTag' has a wrong offset!");
static_assert(offsetof(UGA_DecorInteraction_C, WaitForServerConfirmation) == 0x000528, "Member 'UGA_DecorInteraction_C::WaitForServerConfirmation' has a wrong offset!");
static_assert(offsetof(UGA_DecorInteraction_C, EndedByTeleport) == 0x000529, "Member 'UGA_DecorInteraction_C::EndedByTeleport' has a wrong offset!");

}

