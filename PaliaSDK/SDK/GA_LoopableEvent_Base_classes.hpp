#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LoopableEvent_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "Palia_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LoopableEvent_Base.GA_LoopableEvent_Base_C
// 0x0118 (0x0550 - 0x0438)
class UGA_LoopableEvent_Base_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   InAnimationName;                                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InAnimationSection;                                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LoopAnimationName;                                 // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LoopAnimationSection;                              // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OutroAnimName;                                     // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OutroAnimSection;                                  // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TargetType;                                        // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVitalAmount>                   VitalCost;                                         // 0x0478(0x0010)(Edit, BlueprintVisible)
	bool                                          MovementBlocked;                                   // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockMovementOnOutro;                              // 0x0489(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanLoop;                                           // 0x048A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoopStartsInIntro;                                 // 0x048B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45DD[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GatherGameplayEffect;                              // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CameraShakeAmount;                                 // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraShakeShouldTrigger;                          // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ButtonPressed;                                     // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45DE[0x2];                                     // 0x04A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DamageOnHit;                                       // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimationName;                                     // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MontageSection;                                    // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 StaminaEffect;                                     // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                       ProbeSphere;                                       // 0x04C0(0x0038)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnforceYaw;                                        // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45DF[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EnforcedYaw;                                       // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GameplayEffect_AbilityLockedIn;                    // 0x0508(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GameplayEffect_MovementBlocker;                    // 0x0510(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URPGAbilityTask_PlayMontageAndWaitForEvent* MontageTask;                                       // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int64                                         InputPressedTime;                                  // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetriggerAbilityFromOutroOnInputPress;             // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFinishing;                                       // 0x0529(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReLoopIfInputWithinTimeWindow;                     // 0x052A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45E0[0x5];                                     // 0x052B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_TaskProxy_PlayMontageAndWaitForEvent* Async_Task;                                        // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          LockedIn;                                          // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ButtonPressToTriggerNextLoop;                      // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowTriggeringNextLoop;                           // 0x053A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldAllowMovement;                               // 0x053B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45E1[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 SecondaryTargetType;                               // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          SecondaryIsNonliving;                              // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Callback_InputPressed(bool CallFunc_BooleanAND_ReturnValue, int64 CallFunc_GetValeriaTimestampMs64_ReturnValue);
	void Callback_InputReleased();
	void ClearSetMontage();
	void ConsiderCancellingLoop(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsButtonPressed_ButtonPressed, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue);
	void Do_Intro();
	void DoGatherSFX(bool CanDamage, class AActor* Object, class AActor* Instigator, int32 NewLocalVar_0, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, const struct FValeriaItem& CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Select_Default);
	void DoLoop();
	void DoLoopWithMontage(class FName Param_AnimationName, class FName Param_MontageSection);
	void DoOutro();
	void EndTaskAndClearReference(bool CallFunc_IsValid_ReturnValue);
	void Event_OnActivateAbility();
	void EventReceived_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_LoopableEvent_Base(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag_10, const struct FGameplayEventData& K2Node_CustomEvent_EventData_10, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_9, const struct FGameplayEventData& K2Node_CustomEvent_EventData_9, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_8, const struct FGameplayEventData& K2Node_CustomEvent_EventData_8, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag_7, const struct FGameplayEventData& K2Node_CustomEvent_EventData_7, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_6, const struct FGameplayEventData& K2Node_CustomEvent_EventData_6, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayTag& K2Node_CustomEvent_EventTag_5, const struct FGameplayEventData& K2Node_CustomEvent_EventData_5, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayEventData& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_10, const struct FGameplayEventData& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, bool CallFunc_FNameIsNone_ReturnValue, TDelegate<void(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)> K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldLoop_ShouldLoop, const struct FGameplayTag& K2Node_CustomEvent_EventTag_11, const struct FGameplayEventData& K2Node_CustomEvent_EventData_11, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_12, const struct FGameplayTag& K2Node_CustomEvent_EventTag_12, const struct FGameplayEventData& K2Node_CustomEvent_EventData_12, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_13, const struct FGameplayTag& K2Node_CustomEvent_EventTag_13, const struct FGameplayEventData& K2Node_CustomEvent_EventData_13, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_14, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_FNameIsNone_ReturnValue_1, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_FNameIsNone_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_FNameIsNone_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, class FName K2Node_CustomEvent_AnimationName, class FName K2Node_CustomEvent_MontageSection, bool CallFunc_FNameIsNone_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_EventTag_14, const struct FGameplayEventData& K2Node_CustomEvent_EventData_14, float K2Node_CustomEvent_DeltaSeconds, const struct FVector& K2Node_CustomEvent_OldLocation, const struct FVector& K2Node_CustomEvent_OldVelocity, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_1, bool K2Node_DynamicCast_bSuccess_1, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_15);
	void FilterActor(class AActor* Actor, bool* IncludeActor, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
	void GetGASComponentForTargetActor(class AActor* Actor, class UValeriaGASComponent** GasComponent, class UValeriaGASComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetProbeSphere(struct FBoxSphereBounds* NewParam);
	void GetTargetActor(class AActor** Actor, const TArray<class AActor*>& TmpResultingActors);
	void GetTriggerAlpha(bool AbilityIntroTrigger, double* Alpha);
	void GetTriggerTimeFromMontage(class UAnimMontage* NewParam, double Alpha, double* TimeSeconds, float CallFunc_GetPlayLength_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void GetVitalsComponentForTargetActor(class AActor* Actor, class UVitalsComponent** VitalsComponent, class UVitalsComponent* CallFunc_GetComponentByClass_ReturnValue);
	void HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool CallFunc_ShouldLoop_ShouldLoop, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue, int64 CallFunc_GetValeriaTimestampMs64_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue, class AActor* CallFunc_TriggerGather_TargetActor);
	bool IsAbilityLockedIn(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsAbilityMarkedLockedIn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void IsButtonPressed(bool* Param_ButtonPressed);
	void K2_OnEndAbility(bool bWasCancelled);
	void LoadAbilityAssets(class AValeriaCharacter* ValeriaCharacter);
	void OnAbilityActivated(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_MakeRotator_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void OnAbilityEnded(bool CallFunc_FNameIsNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1);
	void OnBlendOut_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCharacterMoved(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OnCompleted_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnGather(class AActor* Actor, bool* DidProgressGather, class UVitalsComponent* VitalsComponent, bool WasDamageDealt, class UVitalsComponent* CallFunc_GetVitalsComponentForTargetActor_VitalsComponent, TSubclassOf<class UGameplayEffect> Temp_class_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetVital_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsGodModeEnabled_ReturnValue, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class UValeriaGASComponent* CallFunc_GetGASComponentForTargetActor_GASComponent, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, const struct FVitalsChangeContext& K2Node_MakeStruct_VitalsChangeContext, TSubclassOf<class UGameplayEffect> K2Node_Select_Default, const struct FVitalsChange& K2Node_MakeStruct_VitalsChange, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_FilterChange_ReturnValue);
	void OnGatherClient(class AActor* Actor);
	void OnGatherServer(class AActor* Actor);
	void OnInterrupted_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnLoopBegin(class FName Param_AnimationName, bool IsAbilityIntroTrigger);
	void OnLoopEndSuccess();
	void OnOutroBegin(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue);
	void SetAbilityLockedIn(bool Param_LockedIn);
	void SetMovementBlock(bool bLock, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void ShakeCamera(class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast);
	void ShouldLoop(bool* Param_ShouldLoop, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void TriggerGather(class AActor** TargetActor, class AActor* LocalTargetActor, bool CallFunc_K2_HasAuthority_ReturnValue, class AActor* CallFunc_GetTargetActor_Actor, bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LoopableEvent_Base_C">();
	}
	static class UGA_LoopableEvent_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LoopableEvent_Base_C>();
	}
};
static_assert(alignof(UGA_LoopableEvent_Base_C) == 0x000008, "Wrong alignment on UGA_LoopableEvent_Base_C");
static_assert(sizeof(UGA_LoopableEvent_Base_C) == 0x000550, "Wrong size on UGA_LoopableEvent_Base_C");
static_assert(offsetof(UGA_LoopableEvent_Base_C, UberGraphFrame) == 0x000438, "Member 'UGA_LoopableEvent_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, InAnimationName) == 0x000440, "Member 'UGA_LoopableEvent_Base_C::InAnimationName' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, InAnimationSection) == 0x000448, "Member 'UGA_LoopableEvent_Base_C::InAnimationSection' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, LoopAnimationName) == 0x000450, "Member 'UGA_LoopableEvent_Base_C::LoopAnimationName' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, LoopAnimationSection) == 0x000458, "Member 'UGA_LoopableEvent_Base_C::LoopAnimationSection' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, OutroAnimName) == 0x000460, "Member 'UGA_LoopableEvent_Base_C::OutroAnimName' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, OutroAnimSection) == 0x000468, "Member 'UGA_LoopableEvent_Base_C::OutroAnimSection' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, TargetType) == 0x000470, "Member 'UGA_LoopableEvent_Base_C::TargetType' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, VitalCost) == 0x000478, "Member 'UGA_LoopableEvent_Base_C::VitalCost' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, MovementBlocked) == 0x000488, "Member 'UGA_LoopableEvent_Base_C::MovementBlocked' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, BlockMovementOnOutro) == 0x000489, "Member 'UGA_LoopableEvent_Base_C::BlockMovementOnOutro' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, CanLoop) == 0x00048A, "Member 'UGA_LoopableEvent_Base_C::CanLoop' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, LoopStartsInIntro) == 0x00048B, "Member 'UGA_LoopableEvent_Base_C::LoopStartsInIntro' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, GatherGameplayEffect) == 0x000490, "Member 'UGA_LoopableEvent_Base_C::GatherGameplayEffect' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, CameraShakeAmount) == 0x000498, "Member 'UGA_LoopableEvent_Base_C::CameraShakeAmount' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, CameraShakeShouldTrigger) == 0x0004A0, "Member 'UGA_LoopableEvent_Base_C::CameraShakeShouldTrigger' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, ButtonPressed) == 0x0004A1, "Member 'UGA_LoopableEvent_Base_C::ButtonPressed' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, DamageOnHit) == 0x0004A4, "Member 'UGA_LoopableEvent_Base_C::DamageOnHit' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, AnimationName) == 0x0004A8, "Member 'UGA_LoopableEvent_Base_C::AnimationName' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, MontageSection) == 0x0004B0, "Member 'UGA_LoopableEvent_Base_C::MontageSection' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, StaminaEffect) == 0x0004B8, "Member 'UGA_LoopableEvent_Base_C::StaminaEffect' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, ProbeSphere) == 0x0004C0, "Member 'UGA_LoopableEvent_Base_C::ProbeSphere' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, EnforceYaw) == 0x0004F8, "Member 'UGA_LoopableEvent_Base_C::EnforceYaw' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, EnforcedYaw) == 0x000500, "Member 'UGA_LoopableEvent_Base_C::EnforcedYaw' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, GameplayEffect_AbilityLockedIn) == 0x000508, "Member 'UGA_LoopableEvent_Base_C::GameplayEffect_AbilityLockedIn' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, GameplayEffect_MovementBlocker) == 0x000510, "Member 'UGA_LoopableEvent_Base_C::GameplayEffect_MovementBlocker' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, MontageTask) == 0x000518, "Member 'UGA_LoopableEvent_Base_C::MontageTask' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, InputPressedTime) == 0x000520, "Member 'UGA_LoopableEvent_Base_C::InputPressedTime' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, RetriggerAbilityFromOutroOnInputPress) == 0x000528, "Member 'UGA_LoopableEvent_Base_C::RetriggerAbilityFromOutroOnInputPress' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, IsFinishing) == 0x000529, "Member 'UGA_LoopableEvent_Base_C::IsFinishing' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, ReLoopIfInputWithinTimeWindow) == 0x00052A, "Member 'UGA_LoopableEvent_Base_C::ReLoopIfInputWithinTimeWindow' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, Async_Task) == 0x000530, "Member 'UGA_LoopableEvent_Base_C::Async_Task' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, LockedIn) == 0x000538, "Member 'UGA_LoopableEvent_Base_C::LockedIn' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, ButtonPressToTriggerNextLoop) == 0x000539, "Member 'UGA_LoopableEvent_Base_C::ButtonPressToTriggerNextLoop' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, AllowTriggeringNextLoop) == 0x00053A, "Member 'UGA_LoopableEvent_Base_C::AllowTriggeringNextLoop' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, ShouldAllowMovement) == 0x00053B, "Member 'UGA_LoopableEvent_Base_C::ShouldAllowMovement' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, SecondaryTargetType) == 0x000540, "Member 'UGA_LoopableEvent_Base_C::SecondaryTargetType' has a wrong offset!");
static_assert(offsetof(UGA_LoopableEvent_Base_C, SecondaryIsNonliving) == 0x000548, "Member 'UGA_LoopableEvent_Base_C::SecondaryIsNonliving' has a wrong offset!");

}

